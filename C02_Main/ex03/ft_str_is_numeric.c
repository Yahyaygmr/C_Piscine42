#include <stdio.h>

int	ft_str_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		else
			i++;
	}
	return (1);
}
int	main(void)
{
	char a[] = "";

	printf("%d", ft_str_numeric(a));
	return 0;
}
