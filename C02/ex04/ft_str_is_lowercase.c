/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jda-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 09:51:46 by jda-mota          #+#    #+#             */
/*   Updated: 2025/09/21 16:18:09 by jda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str1 = "abcdefgh";
	char	*str2 = "AbCdEfgh";
	char    *str3 = "";

	printf("%s is lowercase? %d\n", str1, ft_str_is_lowercase(str1));
	printf("%s is lowercase? %d\n", str2, ft_str_is_lowercase(str2));
	printf("%s is lowercase? %d\n", str3, ft_str_is_lowercase(str3));
}*/
