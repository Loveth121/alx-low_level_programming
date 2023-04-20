#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer it is compiled and run on
 * Return 0 (succes)
 */
int main(void)
{
        char
        int
        long int
        long long int
        float
	printf("size of a char is %ld bytes.\n", sizeof(char));
	printf("size of an int is %ld bytes.\n", sizeof(int));
	printf("size of a long  int is %ld bytes.\n", sizeof(long int));
	printf("size of a long long  int is %ld bytes.\n", sizeof(long long int));
	printf("size of a float is %ld bytes.\n", sizeof(float));
return (0);
