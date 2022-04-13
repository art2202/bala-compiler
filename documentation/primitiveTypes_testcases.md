# Bala Compiler Language Documentation 

## Glossary

| Reserved Word | Common Use | Obs |
|--- |--- |--- |
| inteirinho | int | --- |
| flutuante | float | --- |
| caracter | char | --- |
| boleano | bool | --- |


### Examples of Primitive Types

```cpp
// TK_ID 'f' is not defined in this scope. Please defines a type to 'f'.

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