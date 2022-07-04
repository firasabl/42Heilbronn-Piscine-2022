/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_dev.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afiras  <afiras@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:47:49 by afiras            #+#    #+#             */
/*   Updated: 2022/07/04 13:56:32 by afiras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	index;

	count = 0;
	index = 0;
	while (src[count] != '\0')
		count++;
	if (size != 0)
	{
		while (src[index] != '\0' && index < (size - 1))
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (count);
}

int				main(void)
{
	char	*string1;
	char	string2[2];

	string1 = "0";
	printf("base   : %s\n", string1);
	strlcpy(string2, string1, 1);
	printf("cpy c  : %s\n", string2);
	ft_strlcpy(string2, string1, 1);
	printf("cpy ft : %s\n", string2);
}
