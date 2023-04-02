#include <stdio.h>

char	*ft_strlowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}

int	main(void)
{
	char	a[] = "YAhYA";

	printf("fonksiyondan önce : %s\n", a);
	printf("fonksiyondan sonra: %s", ft_strlowercase(a));
	return 0;
}
