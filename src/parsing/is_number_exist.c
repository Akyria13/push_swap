/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_number_exist.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:01:42 by jowagner          #+#    #+#             */
/*   Updated: 2025/04/27 17:27:45 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	is_number_exist(int nb, int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (tab[i] == nb)
			return (true);
		i++;
	}
	return (false);
}
