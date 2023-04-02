/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:40:51 by yyagmur           #+#    #+#             */
/*   Updated: 2022/10/20 14:42:32 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	first_index;
	int	last_index;
	int	swap;

	first_index = 0;
	last_index = size - 1;
	while (first_index < last_index)
	{
		if (tab[first_index] > tab[first_index + 1])
		{
			swap = tab[first_index +1];
			tab[first_index + 1] = tab[first_index];
			tab[first_index] = swap;
			first_index = 0;
		}
		else
		{
			first_index++;
		}
	}
}
