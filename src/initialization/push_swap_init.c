/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolanwagner13 <jolanwagner13@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 15:29:13 by jowagner          #+#    #+#             */
/*   Updated: 2025/05/06 02:20:53 by jolanwagner      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_swap_init(int argc, char **argv, t_stack *stack)
{
	bool	is_valid;
	int		value;
	int		i;

	stack->stack_a = malloc(sizeof(int) * (argc - 1));
	stack->stack_b = malloc(sizeof(int) * (argc - 1));
	if (!stack->stack_a || !stack->stack_b)
		free_exit(stack, "Error.\nStack allocation failed.\n", EXIT_FAILURE);
	i = 0;
	while (i < argc - 1)
		stack->stack_b[i++] = -1;
	stack->size = argc - 1;
	i = 1;
	while (i < argc)
	{
		is_valid = is_valid_argument(argv[i], stack->stack_a, i - 1, &value);
		if (!is_valid)
			free_exit(stack, NULL, EXIT_FAILURE);
		stack->stack_a[i - 1] = value;
		i++;
	}
	stack_indexing(stack, stack->size);
	return (0);
}
