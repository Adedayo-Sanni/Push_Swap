/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_funcs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:24:41 by marvin            #+#    #+#             */
/*   Updated: 2024/03/12 17:24:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// shifts up all elements of stack a by 1, you need to adjust the
// next and prev pointers of the nodes in the stack.
// This operation effectively moves the top element of the stack
// to the bottom, and all other elements move up by one position

void	rotate_a(t_stack **stack_a)
{
	t_stack	*last_node;

	if (*stack_a == NULL)
		return ;
	last_node = find_base(stack_a);
	last_node->next = *stack_a;
	*stack_a = (*stack_a)->next;
	(*stack_a)->prev = NULL;
	last_node->next->prev = last_node;
	last_node->next->next = NULL;
	ft_printf("ra\n");
}

void	rotate_b(t_stack **stack_b)
{
	t_stack	*last_node;

	if (*stack_b == NULL)
		return ;
	last_node = find_base(stack_b);
	last_node->next = *stack_b;
	*stack_b = (*stack_b)->next;
	(*stack_b)->prev = NULL;
	last_node->next->prev = last_node;
	last_node->next->next = NULL;
	ft_printf("ra\n");
}

void	rotate_rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate_a(stack_a);
	rotate_b(stack_b);
	ft_printf("rr\n");
}
