# Bala Compiler Language Documentation 

## Glossary

| Reserved Word | Common Use | Obs |
|--- |--- |--- |
| inteirinho | int | --- |
| flutuante | float | --- |
| como | as | --- |


### Examples of Implicit Convercion

```cpp
// Correct

flutuante valor;
valor = 10.50;

{
	inteirinho var;
	var = valor como inteirinho - 20;
}

```