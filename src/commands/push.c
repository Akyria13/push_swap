/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolanwagner13 <jolanwagner13@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:01:47 by jowagner          #+#    #+#             */
/*   Updated: 2025/05/05 23:06:29 by jolanwagner      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *stack)
{
	int	i;

	if (stack == NULL || stack->stack_b[0] == -1)
		return ;
	i = stack->size - 1;
	while (i > 0)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->stack_a[0] = stack->stack_b[0];
	i = 0;
	while (i < stack->size - 1 && stack->stack_b[i] != -1)
	{
		stack->stack_b[i] = stack->stack_b[i + 1];
		i++;
	}
	stack->stack_b[stack->size - 1] = -1;
	ft_printf("pa\n");
}

void	pb(t_stack *stack)
{
	int	i;

	if (stack == NULL || stack->size <= 1)
		return ;
	i = stack->size - 1;
	while (i > 0)
	{
		stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
	stack->stack_b[0] = stack->stack_a[0];
	i = 0;
	while (i < stack->size - 1)
	{
		stack->stack_a[i] = stack->stack_a[i + 1];
		i++;
	}
	stack->stack_a[stack->size - 1] = -1;
	ft_printf("pb\n");
}
