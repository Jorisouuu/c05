/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:22:48 by jporet            #+#    #+#             */
/*   Updated: 2022/06/27 17:43:50 by jporet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	i;

	if (nb < 0)
	{
		return (0);
	}
	i = 1;
	factorial = 1;
	while (i < nb + 1)
	{
		factorial = factorial * i++;
	}
	return (factorial);
}

