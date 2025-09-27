/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jda-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 19:19:28 by jda-mota          #+#    #+#             */
/*   Updated: 2025/09/13 20:11:53 by jda-mota         ###   ########.fr       */
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
/*
int main() 
{
    int num1 = 22;
    int num2 = 8;

    printf("%d, %d\n", num1, num2);
    ft_swap(&num1, &num2); 
    printf("%d, %d\n", num1, num2);
    return 0;
}*/
