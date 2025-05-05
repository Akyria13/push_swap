/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolanwagner13 <jolanwagner13@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 14:50:21 by jolanwagner       #+#    #+#             */
/*   Updated: 2025/05/05 23:16:45 by jolanwagner      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_min_index(t_stack *stack);

void	sort_four_stack(t_stack *stack)
{
	int	min_index;

	min_index = find_min_index(stack);
	if (min_index == 1)
		sa(stack);
	else if (min_index == 2)
	{
		ra(stack);
		ra(stack);
	}
	else if (min_index == 3)
		rra(stack);
	pb(stack);
	sort_three_stack(stack);
	pa(stack);
}

static int	find_min_index(t_stack *stack)
{
	int	min_index;
	int	i;

	min_index = 0;
	i = 1;
	while (i < stack->size)
	{
		if (stack->stack_a[i] < stack->stack_a[min_index])
			min_index = i;
		i++;
	}
	return (min_index);
}
