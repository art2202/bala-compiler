# Bala Compiler Language Documentation 

## Glossary

| Reserved Word | Common Use | Obs |
|--- |--- |--- |
| texto | string | --- |
| ler | cout | --- |
| mostrar | cin.getline | --- |


### Examples of IO Commands

```cpp
// Correct

texto teste;
ler(teste);
```

```cpp
// Error
// Message: "This function with these parameters is only accepted for the string type."

inteirinho teste;
ler(teste, 60);
```

```cpp
// Error
// Message: "This function with these parameters not accepted bool type."

boleano teste;
ler(teste);
```


```cpp
// Error
// Message: "Variable not found."

ler(teste);
```

```cpp
// Correct

texto teste;
ler(teste, 60);

texto teste0;
ler(teste0);


caracter teste1;
ler(teste1);

inteirinho teste2;
ler(teste2);

flutuante teste3;
ler(teste3);
```

```cpp
// Correct

texto nome;
nome = "gabi";
mostrar(nome);
```
