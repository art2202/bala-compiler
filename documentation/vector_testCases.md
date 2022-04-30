# Bala Compiler Language Documentation 

## Glossary

| Reserved Word | Common Use | Obs |
|--- |--- |--- |
| inteirinho | int | --- |


### Examples of Vectors

```cpp
// Errpr
// Message: "The vector size must be an integer type."

inteirinho vector[3.5];

vector[1] = 8;
```

```cpp
// Correct

inteirinho size;
size = 2.80;
inteirinho vector[2];

vector[1] = 8;
```

```cpp
// Correct

inteirinho vector[2.8 como inteirinho];

vector[1] = 8;
```

```cpp
// Correct

inteirinho vector[11];
inteirinho somador;
inteirinho i;

forzinho (i; i < 10; i++)
{
  somador = somador + 1;
  vector[i] = somador;
}

i = 0;

forzinho (i; i < 10; i++)
{
  inteirinho result;
  result = vector[i];
  mostrar(result);
}
```

```cpp
// Correct

inteirinho vector[11];
inteirinho somador;

forzinho (var i = 0; i < 10; i++)
{
  somador = somador + 1;
  vector[i] = somador;
}

forzinho (inteirinho i = 0; i < 10; i++)
{
  inteirinho result;
  result = vector[i];
  mostrar(result);
}
```
