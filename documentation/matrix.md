# Bala Compiler Language Documentation 

## Glossary

| Reserved Word | Common Use | Obs |
|--- |--- |--- |
| inteirinho | int | --- |


### Examples of Matrices

```cpp
// Errpr
// Message: "The matrix column size must be an integer type.."

inteirinho matrix[1][2.8];

matrix[1][1] = 8;
```

```cpp
// Correct

inteirinho matrix[1][2];

matrix[1][1] = 8;
```


```cpp
// Correct

inteirinho size;
size = 2.80;
inteirinho matrix[size][2];

matrix[1][1] = 8;
```


```cpp
// Correct

inteirinho matrix[3.5 como inteirinho][2];

matrix[1][1] = 8;
```
