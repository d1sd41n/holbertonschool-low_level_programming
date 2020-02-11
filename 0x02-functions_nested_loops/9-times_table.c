#include "holberton.h"
/**
 * times_table - fisadsdsadasdf
 * 
 * Return: none
 */
void times_table(void)
{
	int r, c, aux;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c<= 9; c++)
		{
			aux = r * c;
			if (c == 0)
			{
				_putchar(aux + '0');	
			}
			else if (aux < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(aux + '0');
			}
			else
			{
			_putchar(' ');
			_putchar(aux / 10 + '0');
			_putchar(aux % 10 + '0');
			}
			if (c == 9)
				break;
			_putchar(',');
		}
		_putchar('\n');
	}
}
