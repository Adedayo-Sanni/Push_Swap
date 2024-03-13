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

int	pop_node(t_stack **head)
{
	t_stack	*temp;
	int		aux;

	if (*head == NULL)
		return (-1);
	*temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	aux = temp->value;
	if (temp->prev != NULL)
		temp->prev->next = NULL;
	else
		*head = NULL;
	free(temp);
	return (aux);
}
