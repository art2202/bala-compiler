# Bala Compiler Language Documentation 

## Glossary

| Reserved Word | Common Use | Obs |
|--- |--- |--- |
| inteirinho | int | --- |


### Scope exemples

// Error
// Message: "Error! TK_ID 'i' declared twice."
inteirinho i;
i = 1;

inteirinho i;

// Correct
inteirinho i;
i = 1;

{
  inteirinho i;
  i = 2;
}

// Correct
// Error
// Message: "Error! TK_ID 'i' declared twice."
inteirinho i;
i = 1;

inteirinho i;

// Correct
inteirinho i;
i = 1;

{
  i = 2;
}