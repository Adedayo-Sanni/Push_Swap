/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:50:49 by asanni            #+#    #+#             */
/*   Updated: 2024/03/09 14:24:08 by asanni           ###   ########.fr       */
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
	struct t_stack	*prev;
	struct t_stack	*node;
	struct t_stack	*next;
}t_stack;

//Functions 
void	error_check(char *str);
int		digit_check(char **str);
void	error_out(void);
void	make_stack(t_stack **a, char **argv);
int		stack_sorted(t_stack a);
int		duplicate_check(t_stack *node);
t_stack	*find_last(t_stack *stack);

#endif
