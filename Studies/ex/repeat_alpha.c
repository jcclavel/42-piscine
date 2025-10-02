/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jda-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:43:26 by jda-mota          #+#    #+#             */
/*   Updated: 2025/09/30 18:48:50 by jda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	l;
	int	r;

	if (argc == 2)
	{
		l = 0;
		while (argv[1][l])
		{
			r = 1;
			if (argv[1][l] >= 'a' && argv[1][l] <= 'z')
				r += argv[1][l] - 'a';
			else if (argv[1][l] >= 'A' && argv[1][l] <= 'Z')
				r += argv[1][l] - 'A';
			while (r)
			{
				write(1, &argv[1][l], 1);
				r--;
			}
			l++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
