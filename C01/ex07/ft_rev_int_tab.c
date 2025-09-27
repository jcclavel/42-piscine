/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jda-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 18:07:35 by jda-mota          #+#    #+#             */
/*   Updated: 2025/09/18 10:48:15 by jda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

/*int	main(void)
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int size = 9;
	int i;

	ft_rev_int_tab(arr, size);

	i = 0;
	while  (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");

	return (0);
}*/
