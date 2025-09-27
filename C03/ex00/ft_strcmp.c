/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jda-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 08:05:11 by jda-mota          #+#    #+#             */
/*   Updated: 2025/09/22 12:26:03 by jda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	printf("%d\n", ft_strcmp("hello", "hello"));
	printf("%d\n", ft_strcmp("hello", "helLo"));
	printf("%d\n", ft_strcmp("abc", "acb"));
	printf("%d\n", ft_strcmp("1234", "1234"));
	printf("%d\n", ft_strcmp("1234", "5324"));
}*/
