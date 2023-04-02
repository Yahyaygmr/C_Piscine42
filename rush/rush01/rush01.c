#include <unistd.h>

void	ft_first_step(int letter_len, char first_c, char middle_c, char last_c)
{
	int		letter_c;

	letter_c = 1;
	while (letter_c <= letter_len)
	{
		if (letter_c == 1)
		{
			ft_putchar(first_c);
		}
		else if (letter_c == letter_len)
		{
			ft_putchar(last_c);
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
			if (row_c == 1)
				ft_first_step(x_ll, 47, 42, 92);
			else if (row_c == y_rwl)
				ft_first_step(x_ll, 92, 42, 47);
			else
				ft_first_step(x_ll, 42, 32, 42);
			row_c++;
		}
	}
	else
		write(1, "Girilen karakter sıfırdan büyük olmalı", 44);
}
