#include <stdio.h>
/**
 * main- c program that prints the size of some computer types
 * Return: 0
 */
int main(void)
{
printf("Size of a char: %ld byte(s)\n", sizeof(char));
printf("Size of an int: %ld byte(s)\n", sizeof(int));
printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
printf("Size of a float: %ld byte(s)\n", sizeof(float));

return (0);
}

7

#!/bin/bash                                          
gcc -S -masm=intel $CFILE -o "${CFILE%.*}.s"

8
#include <unistd.h>
/**                                                   
* main - prints a string and standard error
 * Return: 1                                          
*/
int main(void)                                       {
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
