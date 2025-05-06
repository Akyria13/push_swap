/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolanwagner13 <jolanwagner13@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:58:04 by jowagner          #+#    #+#             */
/*   Updated: 2025/05/06 02:24:29 by jolanwagner      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/inc/ft_printf.h"
# include "../libft/inc/libft.h"
# include <stdbool.h>
# include <limits.h>

typedef struct s_stack
{
	int					*stack_a;
	int					*stack_b;
	int					size;
}						t_stack;

//--- Utils functions ---//

//- Commands -//
//- Commands -> Push -//
void					pa(t_stack *stack);
void					pb(t_stack *stack);
//- Commands -> Reverse rotate -//
void					rra(t_stack *stack);
void					rrb(t_stack *stack);
void					rrr(t_stack *stack);
//- Commands -> Rotate -//
void					ra(t_stack *stack);
void					rb(t_stack *stack);
void					rr(t_stack *stack);
//- Commands -> Swap -//
void					sa(t_stack *stack);
void					sb(t_stack *stack);
void					ss(t_stack *stack);
//--- --- --- --- ---//

//- Initialization -//
int						push_swap_init(int argc, char **argv, t_stack *stack);
void					stack_indexing(t_stack *stack, int size);
//--- --- --- --- ---//

//- Parsing -//
bool					is_contains_spaces(char *str);
bool					is_number_exist(int nb, int *tab, int size);
bool					is_valid_number(char *str);
int						is_valid_argument(char *arg,
							int *stack, int index, int *result);
//--- --- --- --- ---//

//- Parsing -//
void					choose_sorting(t_stack *stack);
void					radix_sort(t_stack *stack);
void					sort_five_stack(t_stack *stack);
void					sort_four_stack(t_stack *stack);
void					sort_three_stack(t_stack *stack);
bool					stack_is_sorted(t_stack *stack);
//--- --- --- --- ---//

//- Utils -//
void					free_exit(t_stack *stack, char *str, int ret);
long					ft_atol(char *str);
//--- --- --- --- ---//

#endif
