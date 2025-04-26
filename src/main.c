/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:24:32 by jowagner          #+#    #+#             */
/*   Updated: 2025/04/26 16:48:48 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	main(int argc, char **argv)
// {
// 	t_stack *stack;
// 	if (argc < 2)
// 		return (0); //Error argc function.
// 	stack = ft_calloc(1, sizeof(t_stack));
// 	if (stack == NULL)
// 		return (0); //Error malloc function.
// 	stack->max_size = argc - 1;
// }

void	print_prog(t_stack *stack)
{
	int	i;

	i = 0;
	ft_printf("A : ");
	while (i < stack->size)
		ft_printf("%d ", stack->stack_a[i++]);
	ft_printf("| ");
	i = 0;
	ft_printf("B : ");
	while (i < stack->size)
		ft_printf("%d ", stack->stack_b[i++]);
	ft_printf("\n");
}

int main(void)
{
	t_stack *stack;
	int	tab[5] = {10, 42, 13, 600, 1};
	int i = 0;

	stack = ft_calloc(1, sizeof(t_stack));
	stack->stack_a = malloc(sizeof(int) * 5);
    stack->stack_b = malloc(sizeof(int) * 5);
    stack->size = 5;
    while (i < 5)
    {
        stack->stack_a[i] = tab[i];
        stack->stack_b[i] = tab[i];
        i++;
    }
    print_prog(stack);
    rrr(stack);
    print_prog(stack);
    free(stack->stack_a);
    free(stack->stack_b);
    return (0);
}