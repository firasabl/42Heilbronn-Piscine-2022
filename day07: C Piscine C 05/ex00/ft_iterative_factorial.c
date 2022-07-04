/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afiras <afiras@student.42heilbronn.de>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 21:18:56 by afiras          #+#    #+#             */
/*   Updated: 2022/08/05 21:19:00 by afiras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	index;

	if (nb < 0)
		return (0);
	index = 1;
	factorial = 1;
	while (index < nb + 1)
		factorial = factorial * index++;
	return (factorial);
}
