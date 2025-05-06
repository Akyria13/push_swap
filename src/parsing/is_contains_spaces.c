/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_contains_spaces.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolanwagner13 <jolanwagner13@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 02:23:04 by jolanwagner       #+#    #+#             */
/*   Updated: 2025/05/06 02:23:06 by jolanwagner      ###   ########.fr       */
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
