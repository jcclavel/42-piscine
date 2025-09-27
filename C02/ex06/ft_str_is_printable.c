/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jda-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 13:06:16 by jda-mota          #+#    #+#             */
/*   Updated: 2025/09/21 16:19:38 by jda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str1 = "abcABC123!@# ";
	char	*str2 = "42±";

	printf("%s is printable? %d\n", str1, ft_str_is_printable(str1));
	printf("%s is printable? %d\n", str2, ft_str_is_printable(str2));
}*/
