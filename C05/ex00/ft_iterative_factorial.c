/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jda-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 08:38:58 by jda-mota          #+#    #+#             */
/*   Updated: 2025/09/28 09:58:08 by jda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 1;
	while (nb > 1)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(5));
	printf("%d\n", ft_iterative_factorial(1));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(-1));
}*/
