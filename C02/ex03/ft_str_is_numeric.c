/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jda-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 08:26:38 by jda-mota          #+#    #+#             */
/*   Updated: 2025/09/21 16:16:16 by jda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)

{
	char	*str1 = "128573";
	char	*str2 = "128 73";
	char    *str3 = "";

	printf("%s is numeric? %d\n", str1, ft_str_is_numeric(str1));
	printf("%s is numeric? %d\n", str2, ft_str_is_numeric(str2));
	printf("%s is numeric? %d\n", str3, ft_str_is_numeric(str3));

}*/
