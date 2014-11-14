### The lexical and syntactic analysers

The file `kiml.l` defines the lexer. The file `kiml.yy` defines the parser.

To translate these files into C++ files, use bison and Flex.

```
bison -l -okiml.parser.cpp kiml.yy
flex -L -okiml.lexer.cpp kiml.l
move *.cpp ..\src
move *.h ..\include\kiml
```

If you are using Linux, please replace `move` with `mv`.
