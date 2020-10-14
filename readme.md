# PROGRAMMING SESSION


```c
	#include <stdio.h>
	
	int main () {
		printf ("Hello Everyone");
		return 0;
	}
```



## Presenters
* Ritik Gupta
* Vaibhav Kumar



------------------------------------

# TODO LIST

## Concepts
- [ ] String
- [ ] Pattern Design
- [ ] Squence Making
- [ ] Palindrome
- [ ] Prime Numbers


## Programs
- [ ] Program for checking user and password
- [ ] Generating Prime Numbers : Default Method
- [ ] Generating Prime Numbers : Sieve of Eratosthenes
- [ ] Generating Sexey Primes : TCS Digital Question
- [ ] 


----------------------------------------------------------

# Concepts

## String
Array of characters

```c
	#include <stdio.h>
	int main () {
		char hello[] = "Hello World";
		printf ("%s\n", hello);
		return 0;
	}
```

## String Operations

### Legnth of string
In C string is ended by a `null terminator` character `\0`

```c
	#include <stdio.h>
	
	int str_len ( char str[] ) {
		int i = 0;
		while ( str[i] != '\0' ) {
			i++;
		}
		return i;
	}
```