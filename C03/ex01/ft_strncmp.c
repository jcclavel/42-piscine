/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jda-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 10:24:04 by jda-mota          #+#    #+#             */
/*   Updated: 2025/09/22 12:22:32 by jda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	printf("%d\n", ft_strncmp("test", "test", 4));
	printf("%d\n", ft_strncmp("test", "testA", 3));
	printf("%d\n", ft_strncmp("abcde", "abcde", 5));
	printf("%d\n", ft_strncmp("abc", "abcde", 5));
	printf("%d\n", ft_strncmp("abcde", "abc", 5));
}*/
