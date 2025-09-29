/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jda-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 18:20:43 by jda-mota          #+#    #+#             */
/*   Updated: 2025/09/28 19:39:18 by jda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power -1));
}
/*
int	main(void)
{
	printf("%d\n", ft_recursive_power(2, 2));
	printf("%d\n", ft_recursive_power(3, 3));
	printf("%d\n", ft_recursive_power(5, -4));
	printf("%d", ft_recursive_power(0, 0));
	return (0);
}*/
