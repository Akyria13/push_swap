/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolanwagner13 <jolanwagner13@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 14:50:30 by jolanwagner       #+#    #+#             */
/*   Updated: 2025/05/05 17:10:48 by jolanwagner      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_stack *stack)
{
	int	i;
	int	j;
	int	bits;

	i = 0;
	bits = 0;
	while ((stack->size - 1) >> bits != 0)
		bits++;
	while (i < bits)
	{
		j = 0;
		while (j < stack->size)
		{
			if (((stack->stack_a[0] >> i) & 1) == 0)
				pb(stack);
			else
				ra(stack);
			j++;
		}
		while (stack->stack_b[0] != -1)
			pa(stack);
		i++;
	}
	return ;
}
