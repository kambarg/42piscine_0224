// Compile main.c and ft.h and all ft_*.c functions togather
// $ cc main.c ft.h ./ft_*.c

#include "ft.h"
#include <stdio.h>
#include <string.h>

int main()
{
    printf("Testing ft_putchar\n");
    char	chs2w;
	chs2w = 'j';
	ft_putchar(chs2w);
	putchar(chs2w);
    
    printf("\n");
	printf("\nTesting ft_swap\n");
	int a = 5;
	int b = 6;
	printf("%d %d\n", a, b);
	ft_swap(&a, &b);
	printf("%d %d\n", a, b);
   
    printf("\n");
    printf("\nTesting ft_putstr\n");
    char mystring[] = "My output string";
	ft_putstr(mystring);
    
	printf("\n");
    printf("\nTesting ft_strlen\n");
    int		string_length;
	char	string[] = "Gaukhar";
	string_length = ft_strlen(string);
	printf("My string: %s\n", string);
	printf("My string length: %d\n", string_length);
	
	printf("\n");
    printf("\nTesting ft_strcmp\n");
    char	string1[] = "yh";
	char	string2[] = "gahyyy";
	int		rez;

	rez = ft_strcmp(string1, string2);
	printf("s1: %s\n", string1);
	printf("s2: %s\n", string2);
	printf("ft_strcmp: %d\n", rez);
	printf("strcmp: %d\n", strcmp(string1, string2));
}
