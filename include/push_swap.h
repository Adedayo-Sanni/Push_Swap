/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:50:49 by asanni            #+#    #+#             */
/*   Updated: 2024/03/09 15:38:56 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "../libft/libft.h" /* mylibft */

//Stack Struct
typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*prev;
	struct s_stack	*next;
}t_stack;

//Functions 
int		digit_check(char **str);
int		duplicate_check(t_stack **stack, int value);
int		arg_to_int(char **argv);
int		is_sorted(t_stack *stack);
t_stack	*find_base(t_stack **stack);
t_stack	*find_top(t_stack **stack);
t_stack	*pop_node(t_stack **head);
t_stack	*create_node(int nbr);
void	error_out(void);
void	make_node(t_stack **stack, int nbr);
void	free_all(t_stack **head);
void	make_stack(t_stack **a, char **argv, int argc);
void	lstadd_front(t_stack **lst, t_stack *new);
void	*swap_a(t_stack **swap);
void	*swap_b(t_stack **swap);
void	swap_both(t_stack **swap_a, t_stack **swap_b);
void	push_a(t_stack **stack_a, t_stack **stack_b);
void	push_b(t_stack **stack_a, t_stack **stack_b);
void	rotate_a(t_stack **stack_a);
void	rotate_b(t_stack **stack_b);
void	rotate_rr(t_stack **stack_a, t_stack **stack_b);
void	rev_a(t_stack **stack_a);
void	rev_b(t_stack **stack_b);
void	set_index(t_stack **stack);
int		index_binary(int index);
void	radix_sort(t_stack **stack_a, t_stack **stack_b, int stack_len);

#endif
