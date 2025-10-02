/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jda-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 11:02:40 by jda-mota          #+#    #+#             */
/*   Updated: 2025/09/30 11:43:01 by jda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new;

	i = 0;
	new = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (new && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			new = 0;
		}
		else
		{
			new = 1;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char s1[] = "ola tudo bem? 42palavras quarenta-e-duas; cinquanta+e+um";
	printf ("%s\n", ft_strcapitalize(s1));
	return (0);
}*/
