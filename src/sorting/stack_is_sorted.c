/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_is_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolanwagner13 <jolanwagner13@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 14:50:09 by jolanwagner       #+#    #+#             */
/*   Updated: 2025/05/05 21:34:56 by jolanwagner      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	stack_is_sorted(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack->size <= 1)
		return (true);
	while (i < stack->size - 1 && stack->stack_a[i + 1] != -1)
	{
		if (stack->stack_a[i] > stack->stack_a[i + 1])
			return (false);
		i++;
	}
	return (true);
}
