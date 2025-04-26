/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:01:50 by jowagner          #+#    #+#             */
/*   Updated: 2025/04/26 17:04:04 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack == NULL)
		return ;
	tmp = stack->stack_a[0];
	i = 0;
	while (i < (stack->size - 1) && stack->stack_a[i] != 0)
	{
		stack->stack_a[i] = stack->stack_a[i + 1];
		i++;
	}
	// if (stack->stack_a[i] == 0)
	// 	stack->stack_a[stack->size - 1] = tmp;
	stack->stack_a[i] = tmp;
	ft_printf("ra\n");
}

void	rb(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack == NULL)
		return ;
	tmp = stack->stack_b[0];
	i = 0;
	while (i < (stack->size - 1) && stack->stack_b[i] != 0)
	{
		stack->stack_b[i] = stack->stack_b[i + 1];
		i++;
	}
	// if (stack->stack_b[i] == 0)
	// 	stack->stack_b[stack->size - 1] = tmp;
	stack->stack_b[i] = tmp;
	ft_printf("rb\n");
}

void	rr(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack == NULL)
		return ;
	tmp = stack->stack_a[0];
	i = 0;
	while (i < (stack->size - 1) && stack->stack_a[i] != 0)
	{
		stack->stack_a[i] = stack->stack_a[i + 1];
		i++;
	}
	// if (stack->stack_a[i] == 0)
	// 	stack->stack_a[stack->size - 1] = tmp;
	stack->stack_a[i] = tmp;
	tmp = stack->stack_b[0];
	i = 0;
	while (i < (stack->size - 1) && stack->stack_b[i] != 0)
	{
		stack->stack_b[i] = stack->stack_b[i + 1];
		i++;
	}
	// if (stack->stack_b[i] == 0)
	// 	stack->stack_b[stack->size - 1] = tmp;
	stack->stack_b[i] = tmp;
	ft_printf("rr\n");
}
