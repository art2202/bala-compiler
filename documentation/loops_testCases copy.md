# Bala Compiler Language Documentation 

## Glossary

| Reserved Word | Common Use | Obs |
|--- |--- |--- |
| inteirinho | int | --- |
| forzinho | for | --- |
| enquanto | while | --- |

### Examples of Loops

#### Forzinho (For)

```cpp
// Error
// Message: ""

```

```cpp
// Correct

inteirinho i;
inteirinho somador;

forzinho (i; i < 10; i = i + 1)
{
  somador = somador + 1;
}
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

#### Forzinho Foreach (For)
```cpp
// Correct

inteirinho vector[5];
inteirinho somador;
inteirinho result;

forzinho (inteirinho i : vector)
{
    somador++;
    vector[i] = somador;
    mostrar(vector[i]);
}

```


#### Enquanto (While)

```cpp
// Error
// Message: ""

```

```cpp
// Correct

inteirinho i;
inteirinho k;
k = 10;
inteirinho somador;

enquanto (i <= k)
{
  somador = i + 2;
  i = i + 1;
}

k = 0;
```


#### Fazer Enquanto (Do While)

```cpp
// Error
// Message: ""

```

```cpp
// Correct 

inteirinho i;
inteirinho k;
k = 10;

inteirinho somador;

fazer 
{
  i = i + 1;
}
enquanto(i <= k)
```
