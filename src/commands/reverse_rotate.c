/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolanwagner13 <jolanwagner13@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:01:48 by jowagner          #+#    #+#             */
/*   Updated: 2025/05/05 20:03:34 by jolanwagner      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack == NULL || stack->size <= 1)
		return ;
	tmp = stack->stack_a[stack->size - 1];
	i = stack->size - 1;
	while (i > 0)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->stack_a[0] = tmp;
	ft_printf("rra\n");
}

void	rrb(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack == NULL || stack->size <= 1)
		return ;
	tmp = stack->stack_b[stack->size - 1];
	i = stack->size - 1;
	while (i > 0)
	{
		stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
	stack->stack_b[0] = tmp;
	ft_printf("rrb\n");
}

void	rrr(t_stack *stack)
{
	int	sa;
	int	sb;
	int	i;

	if (stack == NULL || stack->size <= 1)
		return ;
	sa = stack->stack_a[stack->size - 1];
	sb = stack->stack_b[stack->size - 1];
	i = stack->size - 1;
	while (i > 0)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
	stack->stack_a[0] = sa;
	stack->stack_b[0] = sb;
	ft_printf("rrr\n");
}
