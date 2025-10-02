/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet3.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jda-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 14:28:53 by jda-mota          #+#    #+#             */
/*   Updated: 2025/09/17 14:58:14 by jda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_alphabet3(void)
{
	char	i;

	i = 'a';
	while (i <= 'z')
	{
	write (1, &i, 1);
	i = i +1;
	}
}

int	main(void)
{
	ft_print_alphabet3();
	return (0);
}
