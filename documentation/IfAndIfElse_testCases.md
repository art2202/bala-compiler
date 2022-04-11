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
// Message: "TK_ID 't' is not defined in this scope. Please defines a type to 't'."

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