#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		else
			i++;
	}
	return (1);
}

int main(void)
{
	char	a[] = "";
	printf("%d", ft_str_is_lowercase(a));
	return (0);
}
