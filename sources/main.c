/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:52:26 by asanni            #+#    #+#             */
/*   Updated: 2024/03/09 16:11:34 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	print(t_stack **topo)
{
	t_stack	*atual;

	if (*topo == NULL)
	{
		ft_printf("NON Ecxiste!!!");
		error_out();
	}
	atual = (*topo);
	while (atual != NULL)
	{
		ft_printf("node: %d\n", atual->value);
		ft_printf("index: %d\n", atual->index);
		atual = atual->next;
	}
}

int	main(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;

	a = NULL;
	b = NULL;
	if (argc == 1)
		ft_printf("./push_swap\n");
	if (argc == 2 || argv[1][0] == '\0')
		error_out();
	else if (argc > 1)
	{
		// make_stack(&a, argv, argc);
		// print(&a);
		// 	set_index(&a);
		// 	ft_printf("\nindex setado\n");
		// 	print(&a);
		// if (is_sorted (&a) == 0)
		// {	
		// 	if (argc == 3)
		// 		//swap_a(&a);
		// 	//start_sorting(&a, &b);
		// }
	}
	free_all(&a);
}
