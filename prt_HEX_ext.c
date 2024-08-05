#include "main.h"

/**
 * prt_HEX_ext - prints an hexacimal integer
 * @num: number to be printed
 * Return: counter
 */
int prt_HEX_ext(unsigned int num)
{
	int r;
	int *array;
	int counter = 0;
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (r = 0; r < counter; r++)
	{
		array[r] = tem % 16;
		tem /= 16;
	}
	for (r = counter - 1; r >= 0; r--)
	{
		if (array[r] > 9)
			array[i] = array[r] + 7;
		_putchar(array[r] + '0');
	}
	free(array);
	return (counter);
}
