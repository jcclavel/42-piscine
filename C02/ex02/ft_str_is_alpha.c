/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jda-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 20:55:04 by jda-mota          #+#    #+#             */
/*   Updated: 2025/09/21 16:12:44 by jda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
/* 
int	main(void)

{
	char	*str1 = "Te5ti g";
	char	*str2 = "TestiNG";
	char    *str3 = "";


	printf("%s is alpha? %d\n", str1, ft_str_is_alpha(str1));
	printf("%s is alpha? %d\n", str2, ft_str_is_alpha(str2));
	printf("%s is alpha? %d\n", str3, ft_str_is_alpha(str3));
}*/
