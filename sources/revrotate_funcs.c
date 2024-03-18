/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrotate_funcs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:32:03 by asanni            #+#    #+#             */
/*   Updated: 2024/03/18 15:32:03 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rev_a(t_stack **stack_a)
{
	t_stack	*last_node;

	if (*stack_a == NULL)
		return ;
	last_node = find_top(stack_a);
	last_node->prev->next = NULL;
	last_node->next = *stack_a;
	last_node->prev = NULL;
	*stack_a = last_node;
	last_node->next->prev = last_node;
	ft_printf("rra\n");
}

void	rev_b(t_stack **stack_b)
{
	t_stack	*last_node;

	if (*stack_b == NULL)
		return ;
	last_node = find_top(stack_b);
	last_node->prev->next = NULL;
	last_node->next = *stack_b;
	last_node->prev = NULL;
	*stack_b = last_node;
	last_node->next->prev = last_node;
	ft_printf("rra\n");
}

void	rev_rr(t_stack **stack_a, t_stack **stack_b)
{
	rev_a(stack_a);
	rev_b(stack_b);
	ft_printf("rrr\n");
}
