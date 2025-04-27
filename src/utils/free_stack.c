/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 19:00:55 by jowagner          #+#    #+#             */
/*   Updated: 2025/04/27 19:48:58 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack *stack)
{
	if (!stack)
		return ;
	if (stack->stack_a != NULL)
		free(stack->stack_a);
	if (stack->stack_b != NULL)
		free(stack->stack_b);
	free(stack);
}
