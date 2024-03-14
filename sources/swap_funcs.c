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
	t_stack	*top;
	t_stack	*prox_node;

	top = *swap;
	prox_node = top->next;
	top->next = prox_node->next;
	if (prox_node->next != NULL)
		prox_node->next->prev = top;
	prox_node->prev = top->prev;
	top->prev = prox_node;
	if (top->prev != NULL)
		top->prev->next = prox_node;
	prox_node->next = top;
	*swap = prox_node;
	ft_printf("sa\n");
	return (0);
}

void	*swap_b(t_stack **swap)
{
	t_stack	*top;
	t_stack	*prox_node;

	top = *swap;
	prox_node = top->next;
	top->next = prox_node->next;
	if (prox_node->next != NULL)
		prox_node->next->prev = top;
	prox_node->prev = top->prev;
	top->prev = prox_node;
	if (top->prev != NULL)
		top->prev->next = prox_node;
	prox_node->next = top;
	*swap = prox_node;
	ft_printf("sb\n");
	return (0);
}

void	swap_both(t_stack **swapa, t_stack **swapb)
{
	swap_a(swapa);
	swap_b(swapb);
	ft_printf("ss\n");
}
