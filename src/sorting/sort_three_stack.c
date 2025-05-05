/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolanwagner13 <jolanwagner13@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 14:49:58 by jolanwagner       #+#    #+#             */
/*   Updated: 2025/05/05 23:16:25 by jolanwagner      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three_stack(t_stack *stack)
{
	if (stack->stack_a[0] == 1 && stack->stack_a[1] == 0
		&& stack->stack_a[2] == 2)
		sa(stack);
	else if (stack->stack_a[0] == 0 && stack->stack_a[1] == 2
		&& stack->stack_a[2] == 1)
		{
			sa(stack);
			ra(stack);
		}
	else if (stack->stack_a[0] == 2 && stack->stack_a[1] == 1
		&& stack->stack_a[2] == 0)
		{
			sa(stack);
			rra(stack);
		}
	else if (stack->stack_a[0] == 2 && stack->stack_a[1] == 0
		&& stack->stack_a[2] == 1)
			ra(stack);
	else if (stack->stack_a[0] == 1 && stack->stack_a[1] == 2
		&& stack->stack_a[2] == 0)
			rra(stack);
}
