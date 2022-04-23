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