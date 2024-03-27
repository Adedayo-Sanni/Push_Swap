/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:10:01 by asanni            #+#    #+#             */
/*   Updated: 2024/03/20 19:17:33 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	bigger_node(t_stack *head)
{
	t_stack	*current;
	int		bigger;

	bigger = head->value;
	current = head;
	while (current)
	{
		if (current->value > bigger)
			bigger = current->value;
		current = current->next;
	}
	return (bigger);
}

int	lesser_node(t_stack *head)
{
	t_stack	*current;
	int		lesser;

	lesser = head->value;
	current = head;
	while (current)
	{
		if (current->value < lesser)
			lesser = current->value;
		current = current->next;
	}
	return (lesser);
}

void	move_to_top(int smallest, t_stack **stack)
{
	t_stack	*temp;

	temp = *stack;
	while (temp->value != smallest)
		temp = temp->next;
	if (temp->next == NULL)
	{
		rev_a(stack);
		return ;
	}	
	while ((*stack)->value != smallest)
		rotate_a(stack);
}

void	sort_3(t_stack **stack)
{
	int	bigger;

	bigger = bigger_node(*stack);
	if ((*stack)->value == bigger)
		rotate_a(stack);
	else if ((*stack)->next->value == bigger)
		rev_a(stack);
	if (((*stack)->value) > ((*stack)->next->value))
		swap_a(stack);
}

void	sort_5(t_stack **stack_a, t_stack **stack_b)
{
	move_to_top(lesser_node(*stack_a), stack_a);
	push_b(stack_a, stack_b);
	move_to_top(lesser_node((*stack_a)), stack_a);
	push_b(stack_a, stack_b);
	sort_3(stack_a);
	push_a(stack_a, stack_b);
	push_a(stack_a, stack_b);
}
