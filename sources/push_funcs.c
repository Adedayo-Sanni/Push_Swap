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

void	push_function(t_stack **source, t_stack **receive)
{
	t_stack	*node_to_push;

	if (NULL == *source)
		return ;
	node_to_push = *source;
	*source = (*source)->next;
	if (*source)
		(*source)->prev = NULL;
	if (NULL == *receive)
	{
		*receive = node_to_push;
		node_to_push->next = NULL;
	}
	else
	{
		node_to_push->next = *receive;
		node_to_push->next->prev = node_to_push;
		*receive = node_to_push;
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
