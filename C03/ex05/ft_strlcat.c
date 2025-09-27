/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jda-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 09:55:36 by jda-mota          #+#    #+#             */
/*   Updated: 2025/09/23 12:27:21 by jda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	i;

	dlen = 0;
	slen = 0;
	i = 0;
	while (src[slen] != '\0')
		slen++;
	while (dlen < size && dest[dlen] != '\0')
		dlen++;
	if (dlen >= size)
		return (size + slen);
	while (src[i] != '\0' && (dlen + i + 1) < size)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
}
/*
int	main(void)
{
	char text[20] = "Hello, ";
	char *add = "World is gorgeous!";
	unsigned int res;

	res = ft_strlcat(text, add, 13);

	printf("Result: %s\n", text);
	printf("size: %u\n", res);

	return 0;
}*/
