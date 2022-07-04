/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afiras <afiras@student.42heilbronn.de>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 12:27:13 by afiras          #+#    #+#             */
/*   Updated: 2022/08/10 12:27:18 by afiras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		str_length(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

void	str_write(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	str_write_char(char c)
{
	write(1, &c, 1);
}
