/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afiras <afiras@student.42heilbronn.de>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 12:48:16 by afiras          #+#    #+#             */
/*   Updated: 2022/08/06 12:48:19 by afiras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power_recursive(int number, int power, int result)
{
	if (power-- > 0)
		return (ft_recursive_power_recursive(number, power, result *= number));
	return (result);
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	return (ft_recursive_power_recursive(nb, power, 1));
}
