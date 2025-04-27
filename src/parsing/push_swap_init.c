/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 15:29:13 by jowagner          #+#    #+#             */
/*   Updated: 2025/04/27 19:52:30 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	init_stack(t_stack *stack, int size)
{
	stack->stack_a = malloc(sizeof(int) * (size));
	if (!stack->stack_a)
	{
	    ft_putstr_fd("Error.\nStack A allocation failed.", 2);
	    return (1);
	}
	stack->size = size;
	ft_printf("Allocation de stack_a à l'adresse %p\n", stack->stack_a);
	return (0);
}

int	push_swap_init(int argc, char **argv, t_stack *stack)
{
	int		i;
	int		check;
	if (argc <= 1)
	{
		ft_putstr_fd("Error.\nNo arguments provided.", 2);
		return (1);
	}
	if (!init_stack(stack, argc - 1))
        return (1);
	i = 1;
	while (i < argc)
	{
		check = valid_argument(argv[i], stack->stack_a, i - 1);
		if (check == 0)
		{
        	free(stack->stack_a);
        	return (1);
		}
		stack->stack_a[i - 1] = check;
		i++;
	}
	ft_printf("Fin de push_swap_init: stack_a à l'adresse %p\n", stack->stack_a);
	return (0);
}
