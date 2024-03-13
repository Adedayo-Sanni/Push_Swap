/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:24:23 by marvin            #+#    #+#             */
/*   Updated: 2024/03/12 17:24:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push_a(t_stack **stack_a, t_stack **stack_b)
{
	int	pop;

	pop = pop_node(stack_a);
	make_node(stack_b, pop);
	make_stack(stack_b, pop);
	ft_printf("pa\n");
}
/*void push_a(t_stack **stack_a, t_stack **stack_b)
{
		int pop;
	
		pop = pop_node(stack_a);
		make_node(stack_b, pop);
		make_node(stack_a, pop);
		ft_printf("pa\n");
}*/

void	push_b(t_stack **stack_b, t_stack **stack_a)
{
	make_node(stack_b, pop_node(stack_a));
	ft_printf("pa\n");
}
