/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet4.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jda-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 16:45:49 by jda-mota          #+#    #+#             */
/*   Updated: 2025/09/17 16:52:41 by jda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	i;
	
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
