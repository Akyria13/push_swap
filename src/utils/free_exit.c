/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_exit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolanwagner13 <jolanwagner13@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 19:00:55 by jowagner          #+#    #+#             */
/*   Updated: 2025/05/07 16:26:12 by jolanwagner      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_stack(t_stack *stack);

void	free_exit(t_stack *stack, char *str, int ret)
{
	if (stack)
		free_stack(stack);
	if (str != NULL)
		ft_putstr_fd(str, 2);
	exit(ret);
}

static void	free_stack(t_stack *stack)
{
	if (!stack)
		return ;
	if (stack->stack_a != NULL && stack)
	{
		free(stack->stack_a);
		stack->stack_a = NULL;
	}
	if (stack->stack_b != NULL && stack)
	{
		free(stack->stack_b);
		stack->stack_b = NULL;
	}
	free(stack);
}
