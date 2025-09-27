/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jda-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 08:39:26 by jda-mota          #+#    #+#             */
/*   Updated: 2025/09/14 10:39:04 by jda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int a = 15;
	int b = 2;
	int div;
	int mod;

	ft_div_mod (a, b, &div, &mod);

	printf("%d\n", div);
	printf("%d\n", mod);

	return (0);
}*/
