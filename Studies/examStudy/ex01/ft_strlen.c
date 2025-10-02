/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jda-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 14:02:45 by jda-mota          #+#    #+#             */
/*   Updated: 2025/09/18 19:33:39 by jda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	int i;
	while (str[i])
	i++;
	
	return (i);
}

int	main(void)
{
	char *str = "Hello World!";
	int lenght;

	lenght = ft_strlen(str);
	printf("string:%s\nlenght:%d\n", str, lenght);
}
