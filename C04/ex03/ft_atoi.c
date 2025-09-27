/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jda-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 08:45:23 by jda-mota          #+#    #+#             */
/*   Updated: 2025/09/24 10:33:19 by jda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str [i] == '\t' || str [i] == '\n'
		|| str [i] == '\r' || str [i] == '\f' || str [i] == '\v')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
/*
int 	main(void)
{
	printf("Resultado: %d\n", ft_atoi("   ---+--+1234ab"));
	printf("Resultado: %d\n", ft_atoi("   ---+--+1234ab1123"));
	printf("Resultado: %d\n", ft_atoi("     1234b"));
	printf("Resultado: %d\n", ft_atoi("  +-+--abc123"));
	return (0);
}*/
