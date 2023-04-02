/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 09:43:51 by yyagmur           #+#    #+#             */
/*   Updated: 2022/11/01 09:48:36 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
    if (nb < 0)
		return (0);
    if (nb == 0 || nb == 1)
        return (1);
    
    return (nb * ft_recursive_factorial(nb -1));
}
