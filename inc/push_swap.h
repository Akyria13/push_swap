/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:58:04 by jowagner          #+#    #+#             */
/*   Updated: 2025/04/27 20:19:42 by jowagner         ###   ########.fr       */
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
}							t_stack;

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
//--- --- --- --- ---//

//- Parsing -//
bool					is_contains_space(char *str);
bool					is_number_exist(int nb, int *tab, int size);
bool					is_valid_number(char *str);
int						is_valid_argument(char *arg, int *stack, int index);
//--- --- --- --- ---//

//- Utils -//
void					free_stack(t_stack *stack);
long					ft_atol(char *str);
//--- --- --- --- ---//

#endif
