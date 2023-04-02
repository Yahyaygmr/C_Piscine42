#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	i=0;
	while(src[i] != '\0' && i < size -1)
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
int main(void)
{
	char dest[30];
	char a[] = "yahya";

	printf("f once dest : %s\n", dest);
	printf("f once  a   : %s\n\n\n", a);

	printf("dondurulen deger : %u \n\n",ft_strlcpy(dest, a, 30));

	printf("f sonra dest : %s\n", dest);
	printf("f sonra  a   : %s", a);

}
