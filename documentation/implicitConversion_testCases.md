# Bala Compiler Language Documentation 

## Glossary

| Reserved Word | Common Use | Obs |
|--- |--- |--- |
| inteirinho | int | --- |
| flutuante | float | --- |
| caracter | char | --- |


### Implicit Convercion examples

// Error
// Message: "Cannot convert type float to type char.
caracter aaa;
aaa = 'g';
inteirinho bbb;
bbb = 10;

{
	flutuante i;
	i = 1.9;

	i = aaa;
}

// Correct
caracter aaa;
aaa = 'g';
inteirinho bbb;
bbb = 10;

{
	flutuante i;
	i = 1.9;

	i = bbb;
}