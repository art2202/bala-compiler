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


### if and if/else (por acaso and por acaso/esquece) exemples

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