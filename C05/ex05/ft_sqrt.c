/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jda-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 09:32:15 by jda-mota          #+#    #+#             */
/*   Updated: 2025/09/29 09:48:17 by jda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*int	main(void)
{
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(2));
	printf("%d\n", ft_sqrt(-16));
	return (0);
}*/
