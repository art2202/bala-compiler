# Bala Compiler Language Documentation 

## Glossary

| Reserved Word | Common Use | Obs |
|--- |--- |--- |
| inteirinho | int | --- |
| flutuante | float | --- |
| caracter | char | --- |
| boleano | bool | --- |
| texto | string | --- |
| var | var | inference type |


### Examples of Primitive Types

```cpp
// Error
// Message: TK_ID 'f' is not declared. Please defines a type to 'f'.

inteirinho a;
a = 1;

flutuante b;
b = 3.5;

boleano c;
c = verdadeiro;

caracter d;
f = 'G';
```

```cpp
// Correct

inteirinho a;
a = 1;

flutuante b;
b = 3.5;

boleano c;
c = verdadeiro;

caracter d;
d = 'G';
```

```cpp
// Error
// Message: The operation is not set to string and int

texto aa;
aa = "gabi";

texto bb;
bb = aa;

inteirinho cc;
cc = 1;

aa = cc;
```

```cpp
// Correct

texto aa;
aa = "gabi";

texto bb;
bb = aa;
```

### Example of Type Inference

```cpp
// Correct

var i = 40.7;
var num = 50;
var valor = 60 + 4 - 90;

```