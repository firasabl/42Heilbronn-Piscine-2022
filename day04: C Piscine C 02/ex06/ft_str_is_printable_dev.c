/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable_dev.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afiras  <afiras@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 20:40:24 by afiras            #+#    #+#             */
/*   Updated: 2022/07/04 13:55:06 by afiras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>

int		ft_str_is_printable(char *str)
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
		if (!(curr >= ' ') || curr == 127)
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

	str_valid = "Hell0";
	str_invalid = "hello\7F";
	printf("should be 1: %d\n", ft_str_is_printable(str_valid));
	printf("should be 0: %d\n", ft_str_is_printable(str_invalid));
}
