/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jda-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 11:58:06 by jda-mota          #+#    #+#             */
/*   Updated: 2025/09/21 16:18:56 by jda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*str1 = "ABCDEFGH";
	char	*str2 = "abCdeFGH";
	char	*str3 = "";

	printf("%s is uppercase? %d\n", str1, ft_str_is_uppercase(str1)); 
	printf("%s is uppercase? %d\n", str2, ft_str_is_uppercase(str2));
	printf("%s is uppercase? %d\n", str3, ft_str_is_uppercase(str3));
}*/
