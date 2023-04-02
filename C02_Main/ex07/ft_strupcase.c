#include <stdio.h>

char	*ft_str_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' )
		{
			str[i] = str[i] - 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}

int main (void)
{
	char	a[] = "yaHya";

	printf("fonksiyondan once a: %s \n",a);
	printf("sonra a : %s\n", ft_str_strupcase(a));

	return 0;
}
