#ifndef __SIMPL_FUNCTIONS_H__
#define __SIMPL_FUNCTIONS_H__

#include <kiml/kiml.h>

#include <map>
#include <vector>
#include <string>
#include <string.h>
#include <stdarg.h>

#include "simpl.h"
#include "ast.h"

struct FunctionInfo
{
	KIMLCSTRING name;
	KIMLTYPES returnType;
	std::vector<std::pair<KIMLTYPES, KIMLCSTRING>> params;

	FunctionInfo(void) : name(nullptr) { }

	FunctionInfo(const FunctionInfo &src)
		: name(nullptr)
	{
		if (src.name)
			name = _strdup(src.name);

		returnType = src.returnType;

		for (auto it = src.params.begin(), itEnd = src.params.end(); it != itEnd; ++it)
		{
			std::pair<KIMLTYPES, KIMLCSTRING> param;
			param.first = it->first;
			if (it->second)
				param.second = _strdup(it->second);
			else
				param.second = nullptr;
			params.push_back(param);
		}
	}

	FunctionInfo(FunctionInfo &&src)
	{
		name = src.name; src.name = nullptr;
		returnType = src.returnType;
		params = std::move(src.params);
	}

	FunctionInfo(const AstFunc *ast)
	{
		name = _strdup(ast->getName());
		returnType = ast->getReturnType();
		
		auto &astParams = ast->getParams()->getParams();
		for (auto it = astParams.begin(), itEnd = astParams.end(); it != itEnd; ++it)
		{
			std::pair<KIMLTYPES, KIMLCSTRING> param;
			param.first = it->first;
			if (it->second)
				param.second = _strdup(it->second);
			else
				param.second = nullptr;
			params.push_back(param);
		}
	}

	~FunctionInfo(void)
	{
		clear();
	}

	FunctionInfo & operator=(const FunctionInfo &rhs)
	{
		if (this != &rhs)
		{
			clear();

			if (rhs.name)
				name = _strdup(rhs.name);

			returnType = rhs.returnType;

			for (auto it = rhs.params.begin(), itEnd = rhs.params.end(); it != itEnd; ++it)
			{
				std::pair<KIMLTYPES, KIMLCSTRING> param;
				param.first = it->first;
				param.second = _strdup(it->second);
				params.push_back(param);
			}
		}

		return *this;
	}

	FunctionInfo & operator=(FunctionInfo &&rhs)
	{
		if (this != &rhs)
		{
			clear();

			name = rhs.name; rhs.name = nullptr;
			returnType = rhs.returnType;
			params = std::move(rhs.params);
		}

		return *this;
	}

	FunctionInfo(KIMLCSTRING name, KIMLTYPES returnType, ...)
	{
		this->name = _strdup(name);
		this->returnType = returnType;

		std::vector<std::pair<KIMLTYPES, KIMLCSTRING>> params;

		va_list ap;
		va_start(ap, returnType);

		KIMLTYPES paramt = (KIMLTYPES)va_arg(ap, int);
		while (paramt != KIML_NOTYPE)
		{
			params.push_back(std::make_pair(paramt, nullptr));
			paramt = (KIMLTYPES)va_arg(ap, int);
		}

		va_end(ap);

		this->params = params;
	}

private:
	void clear(void)
	{
		if (name)
		{
			delete[]name;
			name = nullptr;
		}

		for (auto it = params.begin(), itEnd = params.end(); it != itEnd; ++it)
			if (it->second)
				delete[]it->second;

		params.clear();
	}
};

extern KIMLCSTRING builtinFunctionNames[];
extern FunctionInfo builtinFunctionInfos[];

class FunctionTable
{
private:
	typedef std::map<std::string, FunctionInfo> tabletype;

private:
	tabletype table;

public:
	SIMPLCOMPILEERRORCODES AddFunction(KIMLCSTRING name, const FunctionInfo &funcInfo);
	SIMPLCOMPILEERRORCODES GetFunction(KIMLCSTRING name, const FunctionInfo *&funcInfo);

	static const FunctionInfo * GetBuiltinFunctionInfo(KIMLCSTRING name, KIMLUINT &index);

	void CleanUp(void);
};

#endif//__SIMPL_FUNCTIONS_H__
