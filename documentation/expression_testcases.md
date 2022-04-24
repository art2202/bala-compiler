# Bala Compiler Language Documentation 

## Glossary

### Types
| Reserved Word | Common Use | Obs |
|--- |--- |--- |
| inteirinho | int | --- |
| flutuante | float | --- |
| caracter | char | --- |
| boleano | bool | --- |
| texto | string | --- |

### Logical operators
| Reserved Word | Name | Obs |
|--- |--- |--- |
| ! | not | --- |
| || | or | --- |
| && | and | --- |

### Relational operators
| Reserved Word | Name | Obs |
|--- |--- |--- |
| == | equal | --- |
| != | different | --- |
| > | bigger | --- |
| < | smaller | --- |
| >= | bigger or equal | --- |
| <= | less or equal | --- |

### Arithmetic operators
| Reserved Word | Name | Obs |
|--- |--- |--- |
| + | sum | --- |
| - | subtraction | --- |
| * | multiplication | --- |
| / | division | --- |
| % | module | --- |

### String operators
| Reserved Word | Name | Obs |
|--- |--- |--- |
| + | concatenation | --- |
| == | equal | It is case sensitive. |
| != | different | It is case sensitive. |
| > | bigger | --- |
| < | smaller | --- |
| >= | bigger or equal | --- |
| <= | less or equal | --- |


### Examples Expressions

#### Operador "!" - Not

```cpp
// Error
// Message:

```

```cpp
// Correct

inteirinho valor;
valor = 1;
inteirinho var;
var = !valor;

```

```cpp
// Correct

inteirinho valor;
valor = 1;
boleano var;
var = !valor;

```

```cpp
// Correct

boleano valor;
valor = 1;
inteirinho var;
var = !valor;

```

### String concatenation

texto a;
texto b;
texto c;
texto d;

a = "texto";
b = " da ";
c = "gabi.";
d = a + b + c;

### String operations

```cpp
// Correct

texto a;
texto b;
boleano c;

a = "texto.";
b = "texto";
c = a >= b;

// c = verdadeiro

```

```cpp
// Correct

texto a;
texto b;
boleano c;

a = "texto";
b = "texto";
c = a == b;

// c = verdadeiro

```


```cpp
// Correct

texto a;
texto b;
boleano c;

a = "texTo";
b = "texto";
c = a == b;

// c = falso

```
