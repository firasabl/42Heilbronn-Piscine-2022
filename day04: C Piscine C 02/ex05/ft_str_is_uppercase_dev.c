/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase_dev.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afiras  <afiras@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 20:34:30 by afiras            #+#    #+#             */
/*   Updated: 2022/07/04 13:54:37 by afiras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>

int		ft_str_is_uppercase(char *str)
{
	int		index;
	bool	valid;
	char	curr;

	index = 0;
	valid = true;
	while (true)
	{
		curr = str[index];
		if (curr == '\0')
		{
			break ;
		}
		if (!(curr >= 'A' && curr <= 'Z'))
		{
			valid = false;
			break ;
		}
		index++;
	}
	return (valid);
}

int		main(void)
{
	char *str_valid;
	char *str_invalid;

	str_valid = "HELLO";
	str_invalid = "HELLo";
	printf("should be 1: %d\n", ft_str_is_uppercase(str_valid));
	printf("should be 0: %d\n", ft_str_is_uppercase(str_invalid));
}
