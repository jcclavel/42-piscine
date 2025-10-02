/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet5.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jda-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 17:33:48 by jda-mota          #+#    #+#             */
/*   Updated: 2025/09/17 17:42:06 by jda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_alphabet(void)

{
	char i;

	i = 'a';
	while (i <= 'z')
	{
	write (1, &i, 1);
	i++;
	}
}

int	main(void)
	{
	ft_print_alphabet();
	return (0);
	}
