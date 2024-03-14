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

t_stack	*pop_node(t_stack **head)
{
	t_stack	*temp;

	if (*head == NULL)
		return (NULL);
	temp = (*head);
	temp->next = NULL;
	temp->prev = NULL;
	(*head) = (*head)->next;
	//(*head)->prev = NULL;
	return (temp);
}
