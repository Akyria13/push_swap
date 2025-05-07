/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_indexing.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolanwagner13 <jolanwagner13@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:23:34 by jowagner          #+#    #+#             */
/*   Updated: 2025/05/06 02:38:30 by jolanwagner      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*copy_value(t_stack *stack, int size);
static int	get_position(int values, int *value, int size);

void	stack_indexing(t_stack *stack_a, int size)
{
	int	*original_stack;
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
	int	j;

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
