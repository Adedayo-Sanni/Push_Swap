/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_moves1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:09:14 by marvin            #+#    #+#             */
/*   Updated: 2024/03/12 17:09:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	*swap_a(t_stack **swap)
{
	t_stack*	top;
	t_stack*	nextNode;

	top = *swap;
	nextNode = top->next;
	top->next = nextNode->next;
	if (nextNode->next != NULL)
		nextNode->next->prev = top;
	nextNode->prev = top->prev;
	top->prev = nextNode;
	if (top->prev != NULL)
		top->prev->next = nextNode;
	nextNode->next = top;
	*swap = nextNode;
	ft_printf("sa\n");
}

void	*swap_b(t_stack **swap)
{
	t_stack*	top;
	t_stack*	nextNode;

	top = *swap;
	nextNode = top->next;
	top->next = nextNode->next;
	if (nextNode->next != NULL)
		nextNode->next->prev = top;
	nextNode->prev = top->prev;
	top->prev = nextNode;
	if (top->prev != NULL)
		top->prev->next = nextNode;
	nextNode->next = top;
	*swap = nextNode;
	ft_printf("sb\n");
}

void	swap_both(t_stack **swapa, t_stack **swapb)
{
	swap_a(swapa);
	swap_b(swapb);
	ft_printf("ss\n");
}
