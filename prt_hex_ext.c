#include "main.h"

/**
 * prt_hex_ext - prints an hexadecimal number
 * @num: arguments
 * Return: counter
 */
int prt_hex_ext(unsigned long int num)
{
	long int r;
	long int *array;
	long int counter = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));

	for (r = 0; r < counter; r++)
	{
		array[r] = temp % 16;
		temp = temp / 16;
	}
	for (r = counter - 1; r >= 0; r--)
	{
		if (array[r] > 9)
			array[r] = array[r] + 39;
		_putchar(array[r] + '0');
	}
	free(array);
	return (counter);
}
