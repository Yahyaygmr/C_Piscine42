#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' &&  i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
int main(void)
{
    char a[] = "Hello";
    char b[10];
    
    ft_strncpy(b,a,4);
    printf("b : %s, a: %s\n ", b,a);
}
