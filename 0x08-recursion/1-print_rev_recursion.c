#include<string.h>
#include<stdio.h>
/**
 * _print_rev_recursion-Major function in this program
 * @s: parameter string to be reversed
 * Description: prints an input string in reverse
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	puts(strrev(s));
}

int main(void)
{
	char tree[] = "Tree of life";
	_print_rev_recursion(tree);

	return(0);
}
