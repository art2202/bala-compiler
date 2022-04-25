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

```cpp
// Correct

texto a;
texto b;
texto c;
texto d;

a = "texto";
b = " da ";
c = "gabi.";
d = a + b + c;

```

### String operations

```cpp
// Correct

texto a;
texto b;
boleano c;

a = "texto.";
b = "texto";
c = a >= b; // verdadeiro

```

```cpp
// Correct

texto a;
texto b;
boleano c;

a = "texto";
b = "texto";
c = a == b; // verdadeiro

```


```cpp
// Correct

texto a;
texto b;
boleano c;

a = "texTo";
b = "texto";
c = a == b; // falso

```

### Compoused operator

```cpp
// Error
// Message: syntax error 

inteirinho a;
inteirinho b;
b = 30;

a += b + 1;

```

```cpp
// Correct

inteirinho c;
inteirinho d;
c = 2;
d = 30;

c += d;

mostrar(c); // 32



inteirinho e;
inteirinho f;
e = 3;
f = 30;

e -= f;

mostrar(e); // -27



inteirinho g;
inteirinho h;
g = 4;
h = 30;

g *= h;

mostrar(g); // 120



inteirinho i;
inteirinho j;
i = 5;
j = 30;

i /= j;

mostrar(i); // 0

```

### Unary operator

```cpp
// Correct

inteirinho a;
a = 20;

a ++;
a --;

mostrar(a); // 20

flutuante b;
b = 10.5;

b--;

mostrar(b); // 9.5

caracter c;
c = 'G';

c--;

mostrar(c); // F

boleano d;
d = verdadeiro;

d--;
mostrar(d); // 0 == falso

```
