/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzimmer <fzimmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:28:02 by fzimmer           #+#    #+#             */
/*   Updated: 2024/09/17 12:54:25 by fzimmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "0123456789";
	char	str1[] = "test";
	int		i;

	printf("%s:\n",str);
	ft_putstr(str);
	printf("\n\n%s:\n", str1);
	ft_putstr(str1);
	printf("\n");
} 
*/
/* void	ft_putstr(char *str)
{
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
} */
