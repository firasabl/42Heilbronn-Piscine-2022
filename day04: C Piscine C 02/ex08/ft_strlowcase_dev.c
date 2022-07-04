/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase_dev.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afiras  <afiras@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:21:52 by afiras            #+#    #+#             */
/*   Updated: 2022/07/04 13:55:55 by afiras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		index;
	char	curr;

	index = 0;
	while (true)
	{
		curr = str[index];
		if (curr == '\0')
		{
			break ;
		}
		if (curr >= 'A' && curr <= 'Z')
		{
			str[index] = curr + 32;
		}
		index++;
	}
	return (str);
}

int		main(void)
{
	char	*str_base;
	char	str_lower[6];
	int		index;

	str_base = "HELl0";
	index = 0;
	while (index < 6)
	{
		str_lower[index] = str_base[index] + 0;
		index++;
	}
	ft_strlowcase(&str_lower[0]);
	printf("should be normal    : %s\n", str_base);
	printf("should be lower case: %s\n", str_lower);
}
