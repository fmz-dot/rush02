/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzimmer <fzimmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:17:15 by fzimmer           #+#    #+#             */
/*   Updated: 2024/09/21 17:06:59 by fzimmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*main_str;
	char	*sep;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		main_str = str;
		sep = to_find;
		while (*main_str == *sep && *main_str && *sep)
		{
			main_str++;
			sep++;
		}
		if (*sep == '\0')
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}

#include <stdio.h>

int	main(void)
{
	char *main_string;
	char *separator;
	char *result_ft;

	main_string = "hello world 123";
	separator = " ";
	result_ft = ft_strstr(main_string, separator);

	printf("ft : %s$\n", result_ft);
} 