# Bala Compiler Language Documentation 

## Glossary

| Reserved Word | Common Use | Obs |
|--- |--- |--- |
| inteirinho | int | --- |
| flutuante | float | --- |
| caracter | char | --- |
| boleano | bool | --- |
| por acaso | if | --- |
| esquece | else | --- |


### Examples of switch/case


```cpp
// Correct

inteirinho x;
x = 20;
inteirinho z;

switch (x) 
{
  case 10 :
  { 
    z = 3; 
  }
  case 20 :
  { 
    z = 56; 
  }
  default :
  { 
    z = 0;
  }
}
```

```cpp
// Correct

inteirinho x;
x = 20;
inteirinho z;

switch (x) 
{
  case > 10 :
  { 
    z = 1; 
  }
  case < 20 :
  { 
    z = 2; 
  }
  case <= 30 :
  { 
    z = 3; 
  }
  case >= 40 :
  { 
    z = 4; 
  }
  case 50 :
  { 
    z = 5;
  }
  default :
  { 
    z = 0; 
  }
}
```