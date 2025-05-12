/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolanwagner13 <jolanwagner13@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:24:32 by jowagner          #+#    #+#             */
/*   Updated: 2025/05/07 17:57:44 by jolanwagner      ###   ########.fr       */
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
	// choose_sorting(stack);
	//-- Visual test
	ft_printf("Stack contents after parsing and before sorting :\n");
	int    i;
	i = 0;
	while (i < stack->size)
	{
		ft_printf("[%d] : %d\n", i, stack->stack_a[i]);
		i++;
	}
	choose_sorting(stack);
	i = 0;
	ft_printf("\nStack contents after sorting :\n");
	while (i < stack->size)
	{
		ft_printf("[%d] : %d\n", i, stack->stack_a[i]);
		i++;
	}
	ft_printf("__________________________\n");
	//--End test
	free_exit(stack, NULL, EXIT_SUCCESS);
	return (0);
}
