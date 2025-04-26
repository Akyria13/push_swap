/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:01:48 by jowagner          #+#    #+#             */
/*   Updated: 2025/04/26 17:06:30 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack == NULL)
		return ;
	tmp = 0;
	i = stack->size - 1;
	while (i > 0 && stack->stack_a[i] != 0)
	{
		if (stack->stack_a[i] != 0 && tmp == 0)
			tmp = stack->stack_a[i];
		if (stack->stack_a[i] != 0)
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

	if (stack == NULL)
		return ;
	tmp = 0;
	i = stack->size - 1;
	while (i > 0 && stack->stack_b[i] != 0)
	{
		if (stack->stack_b[i] != 0 && tmp == 0)
			tmp = stack->stack_b[i];
		if (stack->stack_b[i] != 0)
			stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
	stack->stack_b[0] = tmp;
	ft_printf("rrb\n");
}

// void	rrr(t_stack *stack)
// {
// 	int	tmp;
// 	int	i;
// 	if (stack == NULL)
// 		return ;
// 	tmp = 0;
// 	i = stack->size - 1;
// 	while (i > 0 && stack->stack_a[i] != 0)
// 	{
// 		if (stack->stack_a[i] != 0 && tmp == 0)
// 			tmp = stack->stack_a[i];
// 		if (stack->stack_a[i] != 0)
// 			stack->stack_a[i] = stack->stack_a[i - 1];
// 		i--;
// 	}
// 	stack->stack_a[0] = tmp;
// 	tmp = 0;
// 	i = stack->size - 1;
// 	while (i > 0 && stack->stack_b[i] != 0)
// 	{
// 		if (stack->stack_b[i] != 0 && tmp == 0)
// 			tmp = stack->stack_b[i];
// 		if (stack->stack_b[i] != 0)
// 			stack->stack_b[i] = stack->stack_b[i - 1];
// 		i--;
// 	}
// 	stack->stack_b[0] = tmp;
// 	ft_printf("rrr\n");
// }

void	rrr(t_stack *stack)
{
	int	tmp_a;
	int	tmp_b;
	int	i;

	if (stack == NULL)
		return ;
	tmp_a = 0;
	tmp_b = 0;
	i = stack->size - 1;
	while (i > 0 && stack->stack_a[i] != 0 && stack->stack_b[i] != 0)
	{
		if (stack->stack_a[i] != 0 && stack->stack_b[i] != 0
			&& tmp_a == 0 && tmp_b == 0)
		{
			tmp_a = stack->stack_a[i];
			tmp_b = stack->stack_b[i];
		}
		if (stack->stack_a[i] != 0 && stack->stack_b[i] != 0)
		{
			stack->stack_a[i] = stack->stack_a[i - 1];
			stack->stack_b[i] = stack->stack_b[i - 1];
		}
		i--;
	}
	stack->stack_a[0] = tmp_a;
	stack->stack_b[0] = tmp_b;
	ft_printf("rrr\n");
}
