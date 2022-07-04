/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <afiras@student.42heilbronn.de>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:53:00 by exam              #+#    #+#             */
/*   Updated: 2022/08/09 18:53:01 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int	index;
	int	bound;
	int	*array;
	int	minus;

	minus = 1;
	if (end < start)
		minus *= -1;
	if (minus > 0)
		bound = end - start + 1;
	else
		bound = start - end + 1;
	array = (int *)malloc(bound * sizeof(int));
	index = 0;
	while (index < bound)
	{
		array[index] = start + index * minus;
		index++;
	}
	return (array);
}
