/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_dev.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afiras  <afiras@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 11:41:44 by afiras            #+#    #+#             */
/*   Updated: 2022/07/04 13:38:25 by afiras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

int		main(void)
{
	int a;
	int b;

	a = 1;
	b = 2;
	printf("before: %d %d\n", a, b);
	ft_swap(&a, &b);
	printf("before: %d %d\n", a, b);
}
