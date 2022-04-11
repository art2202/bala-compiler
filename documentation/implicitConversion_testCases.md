# Bala Compiler Language Documentation 

## Glossary

| Reserved Word | Common Use | Obs |
|--- |--- |--- |
| inteirinho | int | --- |
| flutuante | float | --- |
| caracter | char | --- |


### Examples of Implicit Convercion

```cpp
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
```

```cpp
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
```