/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:58:04 by jowagner          #+#    #+#             */
/*   Updated: 2025/04/25 22:12:18 by jowagner         ###   ########.fr       */
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
	// int					max_size;
}							t_stack;

// typedef	struct s_stack_node
// {
// 	int					value;
// 	int					index;
// 	int					push_cost;
// 	bool				above_median;
// 	bool				cheapest;
// 	struct s_stack_node	*target;
// 	struct s_stack_node	*next;
// 	struct s_stack_node	*prev;
// }						t_stack_node;

//--- Utils functions ---//
//- Initialization -//

//--- --- --- --- ---//

//- Commands -//
//- Commands -> Push -//
void					pa(t_stack *stack);
void					pb(t_stack *stack);
//- Commands -> Reverse rotate -//

//- Commands -> Rotate -//

//- Commands -> Swap -//
void					sa(t_stack *stack);
void					sb(t_stack *stack);
void					ss(t_stack *stack);
//--- --- --- --- ---//

//- Parsing -//

//--- --- --- --- ---//

#endif
