# Bala Compiler Language Documentation 

## Glossary

| Reserved Word | Common Use | Obs |
|--- |--- |--- |
| inteirinho | int | --- |


### Examples of Scope exemples

```cpp
// Error
// Message: "Error! TK_ID 'i' declared twice."

inteirinho i;
i = 1;

inteirinho i;
```

```cpp
// Correct

inteirinho i;
i = 1;

{
  inteirinho i;
  i = 2;
}
```