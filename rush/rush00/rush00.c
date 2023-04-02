#include <unistd.h>

void	ft_first_step(int letter_len, char first_c, char middle_c)
{
	int		letter_c;

	letter_c = 1;
	while (letter_c <= letter_len)
	{
		if (letter_c == 1 || letter_c == letter_len)
		{
			ft_putchar(first_c);
		}
		else
		{
			ft_putchar(middle_c);
		}
		letter_c++;
	}
	ft_putchar('\n');
}

void	rush(int x_ll, int y_rwl)
{
	int		row_c;

	row_c = 1;
	if (x_ll > 0 && y_rwl > 0)
	{
		while (row_c <= y_rwl)
		{
			if (row_c == 1 || row_c == y_rwl)
			{
				ft_first_step(x_ll, 'o', '-' );
			}
			else
			{
				ft_first_step(x_ll, '|', ' ');
			}
			row_c++;
		}
		else
		{
			write(1, "Girilen karakter sıfırdan büyük olmalı", 44);
		}
	}
}
