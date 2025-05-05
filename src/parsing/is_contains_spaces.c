/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_contains_spaces.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolanwagner13 <jolanwagner13@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 15:46:00 by jowagner          #+#    #+#             */
/*   Updated: 2025/05/05 18:04:58 by jolanwagner      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	is_contains_spaces(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			return (true);
		i++;
	}
	return (false);
}
