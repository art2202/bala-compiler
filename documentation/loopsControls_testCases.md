# Bala Compiler Language Documentation 

## Glossary

| Reserved Word | Common Use | Obs |
|--- |--- |--- |
| inteirinho | int | --- |
| flutuante | float | --- |
| forzinho | for | --- |
| enquanto | while | --- |

### Examples of Loops Control

#### Break

```cpp
// Correct

inteirinho i;
inteirinho somador;

forzinho (i; i < 10; i = i + 1)
{
  somador = somador + 1;
  break;
}
```

```cpp
// Correct

inteirinho i;
inteirinho k;
k = 10;
inteirinho somador;

enquanto (i >= k)
{
  somador = i + 2;
  break;
  i = i + 1;
}

k = 0;
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
  break;
}
enquanto(i <= k)
```


#### Continue


```cpp
// Correct

inteirinho i;
flutuante num;
inteirinho valor;

forzinho (i; i < 10; i = i + 1)
{  
  por acaso(num == 2.0)
  {
    valor = 20;
    break;
  }
  esquece
  {
    valor = 30;
  }
  num = 2.0;
  continue;
}
```

```cpp
// Correct


inteirinho i;
inteirinho k;
k = 50;
inteirinho somador;
inteirinho valor;

enquanto (i <= k)
{
  i = i + 1;
  por acaso (i == 5)
  {
    i = 50;
    continue;
  }
  valor = valor + 2;
}

k = 0;
```


```cpp
// Correct 

inteirinho i;
inteirinho k;
k = 10;

inteirinho somador;

fazer 
{
  continue;
  i = i + 1;
}
enquanto(i <= k)
```
