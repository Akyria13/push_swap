/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_argument.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolanwagner13 <jolanwagner13@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:47:55 by jowagner          #+#    #+#             */
/*   Updated: 2025/05/05 21:28:28 by jolanwagner      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool	check_format(char *arg);
static bool	check_size(char *arg);

int	is_valid_argument(char *arg, int *stack, int index, int *result)
{
	long	num;

	if (!check_format(arg) || !check_size(arg))
	{
		return (false);
	}
	num = ft_atol(arg);
	if (num > INT_MAX || num < INT_MIN)
	{
		ft_putstr_fd("Error.\nNumber outside the bounds of an integer.", 2);
		return (false);
	}
	if (is_number_exist((int)num, stack, index))
	{
		ft_putstr_fd("Error.\nOne or few numbers already exist.", 2);
		return (false);
	}
	*result = (int)num;
	return (true);
}

static bool	check_format(char *arg)
{
	if (is_contains_spaces(arg))
	{
		ft_putstr_fd("Error.\nYour string contains spaces.", 2);
		return (false);
	}
	if (!is_valid_number(arg))
	{
		ft_putstr_fd("Error.\nNumber is not valid.", 2);
		return (false);
	}
	return (true);
}

static bool	check_size(char *arg)
{
	if (ft_strlen(arg) > 11 && (arg[0] != '-' || ft_strlen(arg) > 12))
	{
		ft_putstr_fd("Error.\nNumber too long for an int.", 2);
		return (false);
	}
	return (true);
}
