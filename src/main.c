/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:24:32 by jowagner          #+#    #+#             */
/*   Updated: 2025/04/27 20:15:28 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;

	if (argc <= 1)
	{
		ft_putstr_fd("Error.\nNo arguments provided.", 2);
		return (1);
	}
	stack = ft_calloc(1, sizeof(t_stack));
	if (stack == NULL)
	{
		ft_putstr_fd("Error.\nMemory allocation failed.\n", 2);
		return (1);
	}
	stack->size = 0;
	stack->stack_a = NULL;
	stack->stack_b = NULL;
	if (push_swap_init(argc, argv, stack) != 0)
	{
		ft_putstr_fd("\nError in push_swap init.\n", 2);
		free(stack);
		return (1);
	}
	int	i;
	i = 0;
	ft_printf("Contenu de la pile après parsing :\n");
	while (i < stack->size)
	{
		ft_printf("[%d] : %d\n", i, stack->stack_a[i]);
		i++;
	}
	free_stack(stack);
	return (0);
}

// void	print_prog(t_stack *stack)
// {
// 	int	i;

// 	i = 0;
// 	ft_printf("A : ");
// 	while (i < stack->size)
// 		ft_printf("%d ", stack->stack_a[i++]);
// 	ft_printf("| ");
// 	i = 0;
// 	ft_printf("B : ");
// 	while (i < stack->size)
// 		ft_printf("%d ", stack->stack_b[i++]);
// 	ft_printf("\n");
// }

// int main(void)
// {
// 	t_stack *stack;
// 	int	tab[5] = {10, 20, 30, 40, 50};
// 	int i = 0;

// 	stack = ft_calloc(1, sizeof(t_stack));
// 	stack->stack_a = malloc(sizeof(int) * 5);
//     stack->stack_b = malloc(sizeof(int) * 5);
//     stack->size = 5;
//     while (i < 5)
//     {
//         stack->stack_a[i] = tab[i];
//         stack->stack_b[i] = tab[i];
//         i++;
//     }
//     print_prog(stack);
//     sa(stack);
//     print_prog(stack);
//     free(stack->stack_a);
//     free(stack->stack_b);
//     return (0);
// }