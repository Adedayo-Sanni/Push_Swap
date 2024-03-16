/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:54:19 by marvin            #+#    #+#             */
/*   Updated: 2024/03/11 17:54:19 by marvin           ###   ########.fr       */
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
	ft_printf("poped node %d\n", temp->value);
	return (temp);
}

t_stack	*find_top(t_stack **stack)
{
	t_stack	*temp;

	temp = (*stack);
	if (temp == NULL)
		return (NULL);
	while (temp->prev != NULL)
		temp = temp->prev;
	return (temp);
}

t_stack	*find_base(t_stack **stack)
{
	t_stack	*current;

	if (*stack == NULL)
		return (NULL);
	current = *stack;
	while (current->next != NULL)
		current = current->next;
	return (current);
}
