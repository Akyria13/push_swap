/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_indexing.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:23:34 by jowagner          #+#    #+#             */
/*   Updated: 2025/04/30 18:23:40 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*copy_value(t_stack *stack, int size)
{
	int	*value;
	int	i;

	value = malloc(sizeof(int) * (size));
	if (!value)
		free_exit(stack, "Error.\nIndexing alocation error.", EXIT_FAILURE);
	i = 0;
	while (i < size)
	{
		value[i] = stack->stack_a[i];
		i++;
	}
	return (value);
}

static int	get_position(int values, int *value, int size)
{
	int	position;
	int j;

	position = 0;
	j = 0;
	while (j < size)
	{
		if (values > value[j])
			position++;
		j++;
	}
	return (position);
}

void	stack_indexing(t_stack *stack_a, int size)
{
	int *original_stack;
	int	position;
	int	i;

	original_stack = copy_value(stack_a, size);
	if (!original_stack)
		return ;
	i = 0;
	while (i < size)
	{
		position = get_position(original_stack[i], original_stack, size);
		stack_a->stack_a[i] = position;
		i++;
	}
	free(original_stack);
}
