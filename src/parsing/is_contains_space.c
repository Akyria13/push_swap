/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_contains_space.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 15:46:00 by jowagner          #+#    #+#             */
/*   Updated: 2025/04/27 15:48:11 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	is_contains_space(char *str)
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
