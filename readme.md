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

> Algo
```
	1: initlize i = 0
	2: increment i until str[i] == '\0'
	3: return i
```

> Code in C
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

### String Comparison


-------------------------------------------

# Pattern Design

## Square pattern

### Simple square
```
	h = 3
	
	* * *
	* * *
	* * *
```

```
		0   1   2
	  -------------
	0 | * | * | * |
	  +---+---+---+
	1 | * | * | * |
	  +---+---+---+
	2 | * | * | * |
	  -------------
```

> code in c
```c
	#include <stdio.h>

	void print_square ( int height ) {
		int width = height;
		int i = 0, j = 0;

		for ( i = 0; i < height; i++ ) {
			for ( j = 0; j < width; j++ ) {
				printf ( "*" );
			}
			printf ( "\n" );
		}
	}
```

### defective square
```
	* * 
	* * *
	* * *
```

```
	    0   1   2
	  -------------
	0 | * | * |   |
	  +---+---+---+
	1 | * | * | * |
	  +---+---+---+
	2 | * | * | * |
	  -------------
```
> code in c
```c
	#include <stdio.h>

	void print_square ( int height ) {
		int width = height;
		int i = 0, j = 0;

		for ( i = 0; i < height; i++ ) {
			for ( j = 0; j < width; j++ ) {
				
				if ( i != 0 && j != 2 ) {
					printf ( "*" );
				}

			}
			printf ( "\n" );
		}
	}
```

### non diagnol square
```
	* * 
	*   *
	  * *
```

```
	    0   1   2
	  -------------
	0 | * | * |   |
	  +---+---+---+
	1 | * |   | * |
	  +---+---+---+
	2 |   | * | * |
	  -------------
```

```
	Empty on
	0 2
	1 1
	2 0
```

> code in c
```c
	#include <stdio.h>

	void print_square ( int height ) {
		int width = height;
		int i = 0, j = 0;

		for ( i = 0; i < height; i++ ) {
			for ( j = 0; j < width; j++ ) {
				
				if ((i != 0 && j != 2) || 
					(i != 1 && j != 1) || 
					(i != 2 && j != 0)) {
					printf ( "*" );
				}

			}
			printf ( "\n" );
		}
	}
```

```
	given:
	h = 3
	w = 3

	i j
	0 2
	1 1
	2 0

	j = (h - 1) - i;
```