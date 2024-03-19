/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:42:53 by asanni            #+#    #+#             */
/*   Updated: 2024/03/03 20:42:54 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	free_all(t_stack **head)
{
	t_stack	*temp;

	temp = NULL;
	while ((*head) != NULL)
	{
		temp = (*head)->next;
		free((*head));
		(*head) = temp;
	}
	head = NULL;
}

void	error_out(void)
{
	ft_putendl_fd("Error", 2);
	exit (EXIT_FAILURE);
}
