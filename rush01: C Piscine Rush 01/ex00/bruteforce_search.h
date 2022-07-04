/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bruteforce_search.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afiras <afiras@student.42heilbronn.de>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 19:30:20 by afiras          #+#    #+#             */
/*   Updated: 2022/08/10 19:30:23 by afiras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRUTEFORCE_SEARCH_H
# define BRUTEFORCE_SEARCH_H

# include "boolean.h"
# include "constraint.h"

t_bool	search_solution(int **grid, int size, t_constr cnstr[4]);

#endif
