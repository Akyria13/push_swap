/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolanwagner13 <jolanwagner13@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:01:48 by jowagner          #+#    #+#             */
/*   Updated: 2025/05/06 02:18:12 by jolanwagner      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rra_silent(t_stack *stack);
static void	rrb_silent(t_stack *stack);

void	rra(t_stack *stack)
{
	int	tmp;
	int	i;
	int	last_valid;

	if (stack == NULL || stack->size <= 1)
		return ;
	last_valid = stack->size - 1;
	while (last_valid > 0 && stack->stack_a[last_valid] == -1)
		last_valid--;
	if (last_valid <= 0)
		return ;
	tmp = stack->stack_a[last_valid];
	i = last_valid;
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
	int	last_valid;

	if (stack == NULL || stack->size <= 1)
		return ;
	last_valid = stack->size - 1;
	while (last_valid > 0 && stack->stack_b[last_valid] == -1)
		last_valid--;
	if (last_valid <= 0)
		return ;
	tmp = stack->stack_b[last_valid];
	i = last_valid;
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
	if (stack == NULL || stack->size <= 1)
		return ;
	rra_silent(stack);
	rrb_silent(stack);
	ft_printf("rrr\n");
}

static void	rra_silent(t_stack *stack)
{
	int	tmp;
	int	i;
	int	last_valid;

	if (stack == NULL || stack->size <= 1)
		return ;
	last_valid = stack->size - 1;
	while (last_valid > 0 && stack->stack_a[last_valid] == -1)
		last_valid--;
	if (last_valid <= 0)
		return ;
	tmp = stack->stack_a[last_valid];
	i = last_valid;
	while (i > 0)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->stack_a[0] = tmp;
}

static void	rrb_silent(t_stack *stack)
{
	int	tmp;
	int	i;
	int	last_valid;

	if (stack == NULL || stack->size <= 1)
		return ;
	last_valid = stack->size - 1;
	while (last_valid > 0 && stack->stack_b[last_valid] == -1)
		last_valid--;
	if (last_valid <= 0)
		return ;
	tmp = stack->stack_b[last_valid];
	i = last_valid;
	while (i > 0)
	{
		stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
	stack->stack_b[0] = tmp;
}
