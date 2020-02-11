#include "holberton.h"
/**
 * jack_bauer - hour
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	char ht, hu, md, mu;

	for (ht = '0'; ht <= '2'; ht++)
	{
		for (hu = '0'; hu <= '9'; hu++)
		{
			if (ht == '2' && hu == '4')
				break;
			for (md = '0'; md <= '5'; md++)
			{
				for (mu = '0'; mu <= '9'; mu++)
				{
					_putchar(ht);
					_putchar(hu);
					_putchar(':');
					_putchar(md);
					_putchar(mu);
					_putchar('\n');
				}
			}
		}
	}
}
