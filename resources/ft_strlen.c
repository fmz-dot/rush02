/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzimmer <fzimmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:15:56 by fzimmer           #+#    #+#             */
/*   Updated: 2024/09/17 12:45:06 by fzimmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/* 
#include <stdio.h>

int	main(void)
{
	int		resultado;
	char	str[] = "Hello!";
	int		len;

	resultado = ft_strlen(str);
	printf("%d\n", resultado);
} */
/* 
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_strlen(char *str)
{
	len = 0;
	while (*str++)
	{
		len++;
	}
	return (len);
}

int	ft_strlen(char *str)
{
	int		len;
	char	*start;

	len = 0;
	start = str;
	while (*str++)
	{
		;
	}
	return (str - start - 1);
}
int	ft_strlen(char *str)
{
	int len = 0;
	int found_null = 0;
	while (!found_null)
	{
		if (*str == '\0')
		{
			found_null = 1;
		}
		else
		{
			len++;
			str++;
		}
	}
	return (len);
} */