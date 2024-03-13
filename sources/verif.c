/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:43:47 by asanni            #+#    #+#             */
/*   Updated: 2024/03/09 15:39:50 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// ERROR: it must display "Error" followed by a ’\n’on the standard error.
// Errors include: 
// some arguments aren’t integers,
// some arguments are bigger than an integer (int max: 2147483647)
// there are duplicates (percorre toda a lista e compara tds ints se repetem)

void	error_out(void)
{
	ft_putendl_fd("Error", 2);
	exit (EXIT_FAILURE);
}

int	digit_check(char **str)
{
	int		i;
	int		j;

	i = 1;
	while (str[i])
	{
		if (ft_signal(str[i][0]) && !ft_isdigit(str[i][1]))
			error_out();
		j = 0;
		if (ft_signal(str[i][j]))
			j++;
		while (str[i][j] != '\0')
		{
			if (ft_isdigit(str[i][j]) == 0)
				error_out();
			j++;
		}
		i++;
	}
	return (1);
}

int	duplicate_check(t_stack **stack, int value)
{
	t_stack	*aux;

	aux = (*stack);
	while (aux != NULL)
	{
		if (aux->value == value)
			return (1);
		aux = aux->next;
	}
	return (0);
}

int	is_sorted(t_stack **stack)
{
	if (NULL == stack)
		error_out();
	while ((*stack)->next)
	{
		if ((*stack)->value > (*stack)->next->value)
			return (0);
		(*stack) = (*stack)->next;
	}
	return (1);
}
