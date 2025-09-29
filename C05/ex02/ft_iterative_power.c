/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jda-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 17:54:10 by jda-mota          #+#    #+#             */
/*   Updated: 2025/09/28 18:18:29 by jda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_power(2, 2));
	printf("%d\n", ft_iterative_power(3, 3));
	printf("%d\n", ft_iterative_power(5, -4));
	printf("%d", ft_iterative_power(0, 0));
	return (0);
}*/
