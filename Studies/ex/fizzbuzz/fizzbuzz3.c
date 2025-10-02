/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jda-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 12:57:29 by jda-mota          #+#    #+#             */
/*   Updated: 2025/09/28 16:06:22 by jda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	if(n > 9)
		ft_putnbr(n /10);
	write(1, &"0123456789"[n % 10], 1);
}

void ft_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
		
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3  == 0 || i % 5 == 0)
		{
			if (i % 3 == 0) ft_putstr("Fizz");
			if (i % 5 == 0) ft_putstr("Buzz");
		}
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
	return(0);

}
