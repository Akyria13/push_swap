/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 15:29:13 by jowagner          #+#    #+#             */
/*   Updated: 2025/04/27 16:04:56 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	parsing_init(int argc, char **argv, t_stack *stack)
{
	int		i;
	long	num;
	if (argc <= 1)
	{
		ft_putstr_fd("Error.\nNo arguments provided.", 2);
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		if (is_contains_space(argv[i]))
		{
			ft_putstr_fd("Error.\nIt contains space.", 2);
			return (1);
		}
		if (!is_valid_number(argv[i]))
		{
			ft_putstr_fd("Error.\nNumber is not valid.", 2);
			return (1);
		}
		num = ft_atol(argv[i]);
		if (num > INT_MAX || num < INT_MIN)
            return (1);
		if (!is_number_exist(argv[i]))
		{
			ft_putstr_fd("Error.\nOne or few numbers already exist.", 2);
			return (1);
		}
		i++;
	}
	return (0);
}
