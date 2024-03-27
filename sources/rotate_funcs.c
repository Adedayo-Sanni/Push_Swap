/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_funcs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:32:12 by asanni            #+#    #+#             */
/*   Updated: 2024/03/18 15:32:12 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rotate_a(t_stack **stack_a)
{
	t_stack	*node_to_move;
	t_stack	*last_node;
	t_stack	*new_head;

	if (NULL == *stack_a || NULL == stack_a)
		return ;
	last_node = find_base(stack_a);
	node_to_move = *stack_a;
	new_head = node_to_move->next;
	node_to_move->next->prev = NULL;
	last_node->next = node_to_move;
	node_to_move->prev = last_node;
	node_to_move->next = NULL;
	*stack_a = new_head;
	ft_printf("ra\n");
}

void	rotate_b(t_stack **stack_b)
{
	t_stack	*last_node;

	if (NULL == *stack_b || NULL == stack_b)
		return ;
	last_node = find_top(stack_b);
	last_node->next = *stack_b;
	*stack_b = (*stack_b)->next;
	(*stack_b)->prev = NULL;
	last_node->next->prev = last_node;
	last_node->next->next = NULL;
	ft_printf("rb\n");
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate_a(stack_a);
	rotate_b(stack_b);
	ft_printf("rr\n");
}
