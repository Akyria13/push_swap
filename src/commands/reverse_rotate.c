/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:01:48 by jowagner          #+#    #+#             */
/*   Updated: 2025/04/27 13:20:42 by jowagner         ###   ########.fr       */
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

void	rrr(t_stack *stack)
{
	int	sa;
	int	sb;
	int	i;

	if (stack == NULL)
		return ;
	sa = 0;
	sb = 0;
	i = stack->size;
	while (i-- > 0 && stack->stack_a[i] != 0 && stack->stack_b[i] != 0)
	{
		if (stack->stack_a[i] != 0 && stack->stack_b[i] != 0 && !sa && !sb)
		{
			sa = stack->stack_a[i];
			sb = stack->stack_b[i];
		}
		if (stack->stack_a[i] != 0 && stack->stack_b[i] != 0)
		{
			stack->stack_a[i] = stack->stack_a[i - 1];
			stack->stack_b[i] = stack->stack_b[i - 1];
		}
	}
	stack->stack_a[0] = sa;
	stack->stack_b[0] = sb;
	ft_printf("rrr\n");
}
