/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzimmer <fzimmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:04:34 by fzimmer           #+#    #+#             */
/*   Updated: 2024/09/20 09:53:40 by fzimmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 == *s2 && *s1)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return (*s1 - *s2);
}
/*
#include <stdio.h>

int	main(void)
{
	char *str1;
	char *str2;
	int n = 10;

	str1 = "Helofjskhdkjfhjklsda";
	str2 = "Helolfdasdaso";
	printf("ft : %d\n", ft_strncmp(str1, str2, n));
} */