# Bala Compiler Language Documentation 

## Glossary

| Reserved Word | Common Use | Obs |
|--- |--- |--- |
| inteirinho | int | --- |
| forzinho | for | --- |

### Examples of Loops

#### Forzinho

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