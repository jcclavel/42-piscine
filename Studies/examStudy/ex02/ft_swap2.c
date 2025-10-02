/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jda-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 12:25:46 by jda-mota          #+#    #+#             */
/*   Updated: 2025/09/19 12:45:07 by jda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int 	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int	 main(void)
{
	int	a = 50;
	int	b = 20;
	printf("before a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("after a = %d, b = %d\n", a, b);
}
