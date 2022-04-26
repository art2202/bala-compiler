# Bala Compiler Language Documentation 

## Glossary

| Reserved Word | Common Use | Obs |
|--- |--- |--- |
| inteirinho | int | --- |
| flutuante | float | --- |
| caracter | char | --- |
| boleano | bool | --- |
| por acaso | if | --- |
| esquece | else | --- |


### Examples of if/else (por acaso/esquece)


```cpp
// Error
// Message: "TK_ID 't' is not declared. Please defines a type to 't'."

inteirinho i;
i = 1;
por acaso(i == 1)
{
  inteirinho valor;
  valor = 2;
}
esquece
{
  boleano t;
}
flutuante b;
b = 10.0;
t = verdadeiro;
```

```cpp
// Correct

inteirinho i;
i = 1;
por acaso(i == 1)
{
  inteirinho valor;
  valor = 2;
}
esquece
{
  boleano t;
  t = verdadeiro;
}
flutuante b;
b = 10.0;
```

### if/else (por acaso/esquece) using ternary operator 

```cpp
// Correct

flutuante valor;
inteirinho i;
i = 5;

valor = (i != 5) ? 2.7 : 3;

mostrar(valor); // 3

```

```cpp
// Correct

flutuante valor;
inteirinho i;
i = 5;

valor = (i == 5) ? 2.7 : 3;

mostrar(valor); // 2.7

```

```cpp
// Correct

flutuante valor;
flutuante a;
inteirinho b;
inteirinho i;

a = 2.7;
b = 3;
i = 5;

valor = (i == 5) ? a : b;

mostrar(valor); // 2.7
```