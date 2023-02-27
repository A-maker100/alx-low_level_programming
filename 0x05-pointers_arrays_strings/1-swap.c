/**
 * swap_int - function in this program
 * @a : int pointer as first parameter
 * @b : int pointer as second parameter
 * Description : This function swaps the integers passed
 * Return : always return 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
