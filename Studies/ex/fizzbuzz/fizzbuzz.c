/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jda-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 12:57:29 by jda-mota          #+#    #+#             */
/*   Updated: 2025/09/28 14:22:32 by jda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char c;

	if(n > 9)
		ft_putnbr(n /10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
	if (i % 15 == 0)
		ft_putstr("FizzBuzz");
	else if (i % 3 == 0)
		ft_putstr("Fizz");
	else if (i % 5 == 0)
		ft_putstr("Buzz");
	else
		ft_putnbr(i);
	write(1, "\n", 1);
	i++;
	}
	return(0);

}
