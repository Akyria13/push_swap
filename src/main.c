/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolanwagner13 <jolanwagner13@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:24:32 by jowagner          #+#    #+#             */
/*   Updated: 2025/05/07 16:29:58 by jolanwagner      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;

	if (argc <= 1)
		free_exit(NULL, "Error.\nNo arguments provided.", EXIT_FAILURE);
	stack = ft_calloc(1, sizeof(t_stack));
	if (stack == NULL)
		free_exit(NULL, "Error.\nMemory allocation failed.", EXIT_FAILURE);
	push_swap_init(argc, argv, stack);
	stack_indexing(stack, stack->size);
	choose_sorting(stack);
	free_exit(stack, NULL, EXIT_SUCCESS);
	return (0);
}
