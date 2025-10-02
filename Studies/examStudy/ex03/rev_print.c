/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jda-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 16:28:13 by jda-mota          #+#    #+#             */
/*   Updated: 2025/09/18 16:57:10 by jda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_rev_print (char *str)
{
	int i = 0;
	int last;
	char temp;

	while (str[i])
		i++;

	last= i -1;
	while (last >= 0)
	{
		write (1, &str[last], 1);
		last--;
	}
	write(1, "\n", 1);
	return (str);
}

int main(int argc, char **argv)
{
	if (argc ==2)
	ft_rev_print(argv[1]);
}
