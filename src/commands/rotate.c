/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolanwagner13 <jolanwagner13@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:01:50 by jowagner          #+#    #+#             */
/*   Updated: 2025/05/05 22:52:16 by jolanwagner      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack == NULL || stack->size <= 1)
		return ;
	tmp = stack->stack_a[0];
	i = 0;
	while (i < (stack->size - 1) && stack->stack_a[i] != -1)
	{
		stack->stack_a[i] = stack->stack_a[i + 1];
		i++;
	}
	if (stack->stack_a[i] == -1)
		stack->stack_a[i - 1] = tmp;
	else
		stack->stack_a[i] = tmp;
	ft_printf("ra\n");
}

void	rb(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack == NULL || stack->size <= 1)
		return ;
	tmp = stack->stack_b[0];
	i = 0;
	while (i < (stack->size - 1) && stack->stack_b[i] != -1)
	{
		stack->stack_b[i] = stack->stack_b[i + 1];
		i++;
	}
	if (stack->stack_b[i] == -1)
		stack->stack_b[i - 1] = tmp;
	else
		stack->stack_b[i] = tmp;
	ft_printf("rb\n");
}

void	ra_silent(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack == NULL || stack->size <= 1)
		return ;
	tmp = stack->stack_a[0];
	i = 0;
	while (i < (stack->size - 1) && stack->stack_a[i] != -1)
	{
		stack->stack_a[i] = stack->stack_a[i + 1];
		i++;
	}
	if (stack->stack_a[i] == -1)
		stack->stack_a[i - 1] = tmp;
	else
		stack->stack_a[i] = tmp;
}

void	rb_silent(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack == NULL || stack->size <= 1)
		return ;
	tmp = stack->stack_b[0];
	i = 0;
	while (i < (stack->size - 1) && stack->stack_b[i] != -1)
	{
		stack->stack_b[i] = stack->stack_b[i + 1];
		i++;
	}
	if (stack->stack_b[i] == -1)
		stack->stack_b[i - 1] = tmp;
	else
		stack->stack_b[i] = tmp;
}

void	rr(t_stack *stack)
{
	if (stack == NULL || stack->size <= 1)
		return ;
	ra_silent(stack);
	rb_silent(stack);
	ft_printf("rr\n");
}
