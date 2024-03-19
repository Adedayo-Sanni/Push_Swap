/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:10:01 by asanni            #+#    #+#             */
/*   Updated: 2024/03/19 17:42:08 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	bigger_node(t_stack **stack)
{
	int		bigger;

	bigger = (*stack)->value;
	while (stack)
	{
		if ((*stack)->value > bigger)
			bigger = (*stack)->value;
		stack = (*stack)->next;
	}
	return (bigger);
}

void	lesser_node(t_stack **stack)
{
	int		lesser;

	lesser = (*stack)->value;
	while (stack)
	{
		if ((*stack)->value > lesser)
			lesser = (*stack)->value;
		stack = (*stack)->next;
	}
	return (lesser);
}
