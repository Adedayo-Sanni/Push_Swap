/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:31:50 by asanni            #+#    #+#             */
/*   Updated: 2024/03/18 15:31:50 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	lstadd_front(t_stack **lst, t_stack *new)
{
	new->next = *lst;
	*lst = new;
}

void	push_function(t_stack **source, t_stack **receive)
{
	t_stack	*popped_node;
	t_stack	*last_node;

	popped_node = pop_node(source);
	if (popped_node == NULL)
		error_out();
	if (*receive == NULL)
		*receive = popped_node;
	else
	{
		last_node = find_top(receive);
		last_node->next = popped_node;
		popped_node->prev = last_node;
		popped_node->next = NULL;
	}
}

void	push_a(t_stack **stack_a, t_stack **stack_b)
{
	push_function(stack_b, stack_a);
	ft_printf("pa\n");
}

void	push_b(t_stack **stack_a, t_stack **stack_b)
{
	push_function(stack_a, stack_b);
	ft_printf("pb\n");
}
