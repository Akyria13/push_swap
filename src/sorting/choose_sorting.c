/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_sorting.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolanwagner13 <jolanwagner13@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 15:26:40 by jolanwagner       #+#    #+#             */
/*   Updated: 2025/05/05 23:16:40 by jolanwagner      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	choose_sorting(t_stack *stack)
{
	if (stack_is_sorted(stack) || stack->size == 1)
		free_exit(stack, NULL, EXIT_SUCCESS);
	else if (stack->size == 2)
		sa(stack);
	else if (stack->size == 3)
		sort_three_stack(stack);
	else if (stack->size == 4)
		sort_four_stack(stack);
	else
		radix_sort(stack);
}
