#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
			return (0);
		else
			i++;
	}
	return (1);
}

int main (void)
{
	char	a[] = "dfiygqwekjDFSDF";
	char	b[] = " erfgoper ,Ö";
	char	c[] = "";
	printf(" a dizisi: %d \n", ft_str_is_printable(a));
	printf("b dizisi: %d \n", ft_str_is_printable(b));
	printf("c dizisi: %d", ft_str_is_printable(c));
}
