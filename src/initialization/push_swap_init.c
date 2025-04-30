/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 15:29:13 by jowagner          #+#    #+#             */
/*   Updated: 2025/04/30 18:56:56 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_swap_init(int argc, char **argv, t_stack *stack)
{
	int		i;
	int		check;

	stack->stack_a = malloc(sizeof(int) * (argc - 1));
	stack->stack_b = malloc(sizeof(int) * (argc - 1));
	if (!stack->stack_a || !stack->stack_b)
		free_exit(stack, "Error.\nStack allocation failed.\n", EXIT_FAILURE);
	stack->size = argc - 1;
	i = 1;
	while (i < argc)
	{
		check = is_valid_argument(argv[i], stack->stack_a, i - 1);
		if (check == 0)
		{
			free(stack->stack_a);
			return (1);
		}
		stack->stack_a[i - 1] = check;
		i++;
	}
	stack_indexing(stack, stack->size);
	return (0);
}
