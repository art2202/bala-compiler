# Bala Compiler Language Documentation 

## Glossary

| Reserved Word | Common Use | Obs |
|--- |--- |--- |
| inteirinho | int | --- |
| flutuante | float | --- |
| texto | string | --- |
| var | var | type inference |
| funcao | function | --- |


### Example of Functions

##### Accepts function overloading and nested functions.

- Simple function

```cpp
//Correct

funcao flutuante c (flutuante a, inteirinho b)
{
    var result = a + b;
    retorne result;
}
```

Access variable 'b' from outside scope.
```cpp
// Correct 

funcao flutuante c (flutuante b, inteirinho d, texto e)
{
    b = 3;
    retorne b;

    funcao flutuante c (flutuante k, inteirinho d)
    {
        b = 3;
        retorne b;
    }
}
```

Access variable 'b' from current scope.
```cpp
// Correct 

funcao flutuante c (flutuante b, inteirinho d, texto e)
{
    b = 3;
    retorne b;

    funcao flutuante c (flutuante k, inteirinho b)
    {
        b = 3;
        retorne b;
    }
}
```

- Function with the same name and the same parameters, but with parameters in different orders.

```cpp
// Correct

funcao flutuante c (flutuante b, inteirinho d, texto e)
{
    b = 3;
    retorne b;

    funcao flutuante c (flutuante b, texto e, inteirinho d)
    {
        b = 3;
        retorne b;
    }
}
```

### Example of Function Calls

##### You must first explicitly convert the argument to the type expected by the function, if necessary.

```cpp
// Error
// Message: "Function c (float, float); is not found."

funcao flutuante c (flutuante a, inteirinho b)
{
    var result = a + b;
    retorne result;
}

caracter a;
a = c (2.9, 5.8);
mostrar(a);

```

```cpp
// Correct

funcao flutuante c (flutuante a, inteirinho b)
{
    var result = a + b;
    retorne result;
}

inteirinho a;
a = c (2.9, 5);
mostrar(a); // 7

```

```cpp
// Error
// Message: "Cannot convert type char to type float."

funcao flutuante c (flutuante a, inteirinho b)
{
    var result = a + b;
    retorne result;
}

caracter a;
a = c (2.9, 5);
mostrar(a);

```
