# Bala Compiler Language Documentation 

## Glossary

| Reserved Word | Common Use | Obs |
|--- |--- |--- |
| inteirinho | int | --- |
| flutuante | float | --- |


### Examples of Vectors

```cpp
// Errpr
// Message: "The vector size must be an integer type."

inteirinho matrix[3.5;

matrix[1] = 8;
```

```cpp
// Correct

inteirinho size;
size = 2.80;
inteirinho matrix[2];

matrix[1] = 8;
```

```cpp
// Correct

inteirinho matrix[2.8 como inteirinho];

matrix[1] = 8;
```
