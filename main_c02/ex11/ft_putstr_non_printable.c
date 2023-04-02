#include <stdio.h>
#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1 );
}

void	hexadecimal(unsigned char c)
{
	print("0123456789abcdef"[c / 16]);
	print("0123456789abcdef"[c % 16]);
}

int	is_printable(char c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_printable(str[i]) == 1)
		{
			print(str[i]);
		}
		else
		{
			print('\\');
			hexadecimal(str[i]);
		}
		i++;
	}
}
int main(void)
{
	char a[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(a);

	return 0;
}
