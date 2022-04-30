# Bala Compiler Language Documentation 

## Glossary

| Reserved Word | Common Use | Obs |
|--- |--- |--- |
| inteirinho | int | --- |


### Examples of Matrices

```cpp
// Error
// Message: "The matrix column size must be an integer type."

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

inteirinho size = 2.80;
inteirinho matrix[size][2];

matrix[1][1] = 8;
```


```cpp
// Correct

inteirinho matrix[3.5 como inteirinho][2];

matrix[1][1] = 8;
```


```cpp
// Correct

inteirinho matrix[5][5];
inteirinho somador;
inteirinho result;

forzinho (var i = 0; i < 5; i++)
{
    forzinho (var j = 0; j < 5; j++)
    {
        somador++;
        matrix[i][j] = somador;
    }
}

forzinho (var i = 0; i < 5; i++)
{
    forzinho (var j = 0; j < 5; j++)
    {
        result = matrix[i][j];
        mostrar(result);
    }
}
```

```cpp
// Correct

inteirinho matrix[5][5];
matrix[2][4] = 8;
inteirinho result;
mostrar(matrix[2][4]);
```