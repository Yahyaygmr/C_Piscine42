/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:01:52 by yyagmur           #+#    #+#             */
/*   Updated: 2022/10/25 15:09:07 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
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
	unsigned int	i;

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
