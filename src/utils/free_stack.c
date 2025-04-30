/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 19:00:55 by jowagner          #+#    #+#             */
/*   Updated: 2025/04/30 18:35:16 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack *stack)
{
	if (!stack)
		return ;
	if (stack->stack_a != NULL && stack)
		free(stack->stack_a);
	if (stack->stack_b != NULL && stack)
		free(stack->stack_b);
	free(stack);
}

void	free_exit(t_stack *stack, char *str, int ret)
{
	if (stack)
		free_stack(stack);
	if (str != NULL)
		ft_putstr_fd(str, 2);
	exit(ret);
}
