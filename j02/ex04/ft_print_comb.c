#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_comb(int a, int b, int c)
{
	if (a < b && b < c)
	{
		if (a == '7' && b == '8' && c == '9')
		{
			ft_putchar(a);
			ft_putchar(b);
			ft_putchar(c);
		}
		else 
		{
			ft_putchar(a);
			ft_putchar(b);
			ft_putchar(c);
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int 	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				ft_comb(a, b, c);
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
}

int	main(void)
{
	ft_print_comb();
	ft_putchar('\n');
	return (0);
}
