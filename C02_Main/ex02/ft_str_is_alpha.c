#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while(str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
		{
			return (0);
		}
		else
			i++;
	}
	return (1);
}
int	main(void)
{
	char a[] = "nt ";
	printf("%d",ft_str_is_alpha(a));
	return 0;
}
