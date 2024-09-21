/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzimmer <fzimmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:00:53 by fzimmer           #+#    #+#             */
/*   Updated: 2024/09/16 16:56:05 by fzimmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	len = ft_strlen(src);
	if (size > 0)
	{
		i = 0;
		while (i < (size - 1) && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}
/* 
#include <stdio.h>

int	main(void)
{
	char src[] = "Hello, world!";
	char dest[10];
	unsigned int copied_len;

	copied_len = ft_strlcpy(dest, src, sizeof(dest));
	printf("Copied string: %s\n", dest);
	printf("Length of the original string: %u\n", copied_len);
	return (0);
} */