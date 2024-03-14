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
		ft_printf("%d\n", atual->value);
		atual = atual->next;
	}
}

int	main(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && argv[1][0] == '\0'))
		ft_printf("./push_swap\n");
	else if (argc > 1)
		digit_check(argv);
	make_stack(&a, argv, argc);
	print(&a);
	push_b(&a, &b);
	ft_printf("stack_b\n");
	//print(&a);
	print(&b);
	ft_printf("stack_a\n");
	print(&a);
	// if (is_sorted (&a) == 0)
	// {	
	// 	if (argc == 3)
	// 	swap_a(&a);
	// //	start_sorting(&a, &b);
	// }
	free_all(&a);
}
