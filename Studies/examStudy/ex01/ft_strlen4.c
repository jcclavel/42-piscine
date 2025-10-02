/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jda-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 12:56:33 by jda-mota          #+#    #+#             */
/*   Updated: 2025/09/19 13:42:53 by jda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int	main(void)
{
	int	a = 20;
	int	b = 30;

	printf("before:a=%d, b=%d\n", a, b);
	ft_swap(&a, &b);
	printf("after:a=%d, b=%d\n", a, b);
	return (0);
}
