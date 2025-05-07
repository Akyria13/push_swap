/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolanwagner13 <jolanwagner13@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:27:33 by jolanwagner       #+#    #+#             */
/*   Updated: 2025/05/06 02:34:51 by jolanwagner      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five_stack(t_stack *stack)
{
	while (stack->stack_a[3] != -1)
	{
		if (stack->stack_a[0] != 0 && stack->stack_a[0] != 1)
			ra(stack);
		else
			pb(stack);
	}
	sort_three_stack(stack);
	if (stack->stack_b[0] < stack->stack_b[1])
		sb(stack);
	pa(stack);
	pa(stack);
	return ;
}
