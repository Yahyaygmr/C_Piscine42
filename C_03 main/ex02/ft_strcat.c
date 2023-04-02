/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:58:46 by yyagmur           #+#    #+#             */
/*   Updated: 2022/10/28 16:49:09 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest [i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main (void)
{
	char s[] = "yahya";
	char d[13] = "yagmur ";

	printf("%s", ft_strcat(d,s));
	return (0);
}
