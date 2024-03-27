/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:31:40 by asanni            #+#    #+#             */
/*   Updated: 2024/03/18 15:31:40 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	*pop_node(t_stack **stack_top)
{
	t_stack	*temp;

	if (*stack_top == NULL)
		return (NULL);
	temp = (*stack_top);
	(*stack_top) = (*stack_top)->next;
	temp->next = NULL;
	temp->prev = NULL;
	return (temp);
}

t_stack	*find_top(t_stack **stack)
{
	t_stack	*temp;

	temp = *stack;
	if (temp == NULL)
		return (NULL);
	while (temp->prev != NULL)
		temp = temp->prev;
	return (temp);
}

t_stack	*find_base(t_stack **stack)
{
	t_stack	*temp;

	temp = *stack;
	if (temp == NULL)
		return (NULL);
	while (temp->next != NULL)
		temp = temp->next;
	return (temp);
}
