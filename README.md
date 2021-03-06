# Compiler

### Part I
- Variable ✔️
- Assignment ✔️
- Expression ✔️
#### Types
- Int ✔️
- Boolean ✔️
- Float ✔️
- Char ✔️
#### Conversion
- Implicit ✔️
- Explicit ✔️
#### Operators
- Logical ✔️
- Arithmetic ✔️
- Relational ✔️


### Part II
- Block ✔️
- Context ✔️
- Global scope ✔️
- String ✔️
- String concatenation ✔️
- String relational commands ✔️
- Input and Output Commands ✔️
#### Commands
- if ✔️
- if/else ✔️
- while ✔️
- do/while ✔️
- for ✔️
- switch ✔️
#### Loop Controls
- break ✔️
- continue ✔️


### Part III
- Functions ✔️
- Vector initialization ✔️
- Vectors ✔️
- Compoused assignment Operators ✔️
- Unary Operators ✔️
- Initialization of variables ✔️
- Error detection ✔️

### Extras
- Line comment ✔️
- Multi-line comment ✔️
- Scan range ✔️
- If ternary ✔️
- Type Inference ✔️
- Switch with relational operator ✔️
- Function within function ✔️
- Foreach ✔️
- String relational commands ✔️
- New operations (exponentiation, ...)


#### Final date: 05/02/2022


## To Run
You will need to have make, Lex/Flex, Yacc and gcc/g++ installed.

#### Install packeges on Linux or WSL/WSL2
- $sudo apt-get update

- $sudo apt install make
- $sudo apt-get install bison flex

- $sudo apt-get install build-essential

#### Linux or WSL/WSL2
- $make
- $make lx

#### Mac
- $make
- $make mac

#### Generating executable file
To pass the intermediate code generated from the make lx command or by make mac to the test file, follow the steps:
- Delete the test.cpp file and the test executable if they exist.
- Run the command: $make test
The file teste.cpp and the executable test will be generated and will be recognizable by the C++ language;
