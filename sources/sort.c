/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:10:01 by asanni            #+#    #+#             */
/*   Updated: 2024/03/19 23:35:37 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// int	bigger_node(t_stack *stack)
// {
// 	t_stack	*bigger;

// 	bigger = stack->value;
// 	while (stack)
// 	{
// 		if (stack->value > bigger)
// 			bigger = stack->value;
// 		stack = stack->next;
// 	}
// 	return (bigger->value);
// }

// int	lesser_node(t_stack *stack)
// {
// 	t_stack	*lesser;

// 	lesser = stack->value;
// 	while (stack)
// 	{
// 		if (stack->value > lesser)
// 			lesser = stack->value;
// 		stack = stack->next;
// 	}
// 	return (lesser->value);
// }

// void	move_to_top(int lesser, t_stack **stack)
// {
// 	t_stack	*temp;

// 	temp = *stack;
// 	while (temp->value != lesser)
// 		temp = temp->next;
// 	if (temp->next == NULL)
// 	{
// 		rev_a(stack);
// 		return ;
// 	}	
// 	while ((*stack)->value != lesser)
// 		rotate_a(stack);
// }

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

void	move_to_top(int value, t_stack **head)
{
	t_stack	*current;

	current = *head;
	while (current && current->value != value)
		current = current->next;
	if (!current)
		return ;
	if (current->prev)
	{
		current->prev->next = current->next;
		if (current->next)
			current->next->prev = current->prev;
	}
	else
		return ;
	current->next = *head;
	current->prev = NULL;
	(*head)->prev = current;
	*head = current;
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
	push_b(stack_a, stack_b);
	push_b(stack_a, stack_b);
}
