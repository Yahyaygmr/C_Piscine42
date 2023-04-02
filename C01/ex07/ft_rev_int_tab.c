/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:15:33 by yyagmur           #+#    #+#             */
/*   Updated: 2022/10/19 18:38:31 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	first_index;
	int	last_index;
	int	swap;

	first_index = 0;
	last_index = size - 1;
	while (first_index < last_index)
	{
		swap = tab[first_index];
		tab[first_index] = tab[last_index];
		tab[last_index] = swap;
		first_index++;
		last_index--;
	}
}
