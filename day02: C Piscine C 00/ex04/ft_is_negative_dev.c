/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative_dev.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afiras  <afiras@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:16:52 by afiras            #+#    #+#             */
/*   Updated: 2022/07/04 13:34:20 by afiras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}

int		main(void)
{
	ft_is_negative(1);
	ft_is_negative(0);
	ft_is_negative(-1);
}
