/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolanwagner13 <jolanwagner13@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:01:51 by jowagner          #+#    #+#             */
/*   Updated: 2025/05/05 19:46:07 by jolanwagner      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack)
{
	int	tmp;

	if (stack == NULL || stack->size < 2)
		return ;
	tmp = stack->stack_a[0];
	stack->stack_a[0] = stack->stack_a[1];
	stack->stack_a[1] = tmp;
	ft_printf("sa\n");
}

void	sb(t_stack *stack)
{
	int	tmp;

	if (stack == NULL || stack->size < 2 || stack->stack_b[1] == -1)
		return ;
	tmp = stack->stack_b[0];
	stack->stack_b[0] = stack->stack_b[1];
	stack->stack_b[1] = tmp;
	ft_printf("sb\n");
}

void	sa_silent(t_stack *stack)
{
	int	tmp;

	if (stack == NULL || stack->size < 2)
		return ;
	tmp = stack->stack_a[0];
	stack->stack_a[0] = stack->stack_a[1];
	stack->stack_a[1] = tmp;
}

void	sb_silent(t_stack *stack)
{
	int	tmp;

	if (stack == NULL || stack->size < 2 || stack->stack_b[1] == -1)
		return ;
	tmp = stack->stack_b[0];
	stack->stack_b[0] = stack->stack_b[1];
	stack->stack_b[1] = tmp;
}

void	ss(t_stack *stack)
{
	if (stack == NULL || stack->size < 2)
		return ;
	sa_silent(stack);
	sb_silent(stack);
	ft_printf("ss\n");
}
