/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jda-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 08:43:42 by jda-mota          #+#    #+#             */
/*   Updated: 2025/09/30 09:10:36 by jda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put2nbr(int n)
{
	char	d1;
	char	d2;

	d1 = (n / 10) + '0';
	d2 = (n % 10) + '0';
	write(1, &d1, 1);
	write(1, &d2, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_put2nbr(a);
			write(1, " ", 1);
			ft_put2nbr(b);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
