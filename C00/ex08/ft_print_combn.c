/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jda-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 09:24:27 by jda-mota          #+#    #+#             */
/*   Updated: 2025/09/30 09:41:15 by jda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_comb(int n, int start, char *comb, int index)
{
	if (index == n)
	{
		write(1, comb, n);
		if (comb[0] != '0' + (10 - n))
			write(1, ", ", 2);
		return ;
	}
	while (start <= 9)
	{
		comb[index] = start + '0';
		print_comb(n, start + 1, comb, index + 1);
		start++;
	}
}

void	ft_print_combn(int n)
{
	char	comb[10];

	if (n > 0 && n < 10)
		print_comb(n, 0, comb, 0);
}
/*int	main(void)
{
	ft_print_combn(2);
	write(1, "\n", 1);
	return (0);
}*/
