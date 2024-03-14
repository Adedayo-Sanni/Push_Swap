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
