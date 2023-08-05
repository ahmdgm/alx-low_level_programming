#include "main.h" 
#include <stdio.h>
/**
* main - program to print number of arguments 
* @argc: number of the arguments
* @argv: array of pointer to char 
*/

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n",argc - 1);
	return (0);
}
