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
- [ ] The program will recieve 3 English words inputs from STDIN <br/>
		-> These three words will be read one at a time, in three separate line <br />
		-> The first word should be changed like all vowels should be replaced by % <br />
		-> The second word should be changed like all consonants should be replaced by # <br />
		-> The third word should be changed like all char should be converted to upper case <br />
		-> Then concatenate the three words and print them. <br />
- [ ] To check whether a year is leap or not
- [ ] Find the 15th term of the series?
	  0,0,7,6,14,12,21,18, 28


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

### Length of string
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

### String Comparison
Strings can be compared using in-built strcmp() function. <br />
It's available in `#include<string.h>`

`syntax`: strcmp(leftStr, rightStr)

it returns 3 values:
- `0`: A value equal to zero when both strings are found to be identical.
- `greater than zero`:  A value greater than zero is returned when the first not matching character in leftStr have the greater ASCII value than the corresponding character in rightStr
- `less than zero`: A value less than zero is returned when the first not matching character in leftStr have lesser ASCII value than the corresponding character in rightStr.