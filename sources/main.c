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
		error_out();
	*atual = *topo;
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
	static int	i = 0;

	a = NULL;
	if (argc == 1 || (argc == 2 && argv[1][0] == '\0'))
		error_out();
	else if (argc > 1)
		digit_check(argv);
	make_stack(&a, argv);
	print(&a);
	push_a(&a, &b);
	//print(&b);
	if (is_sorted (&a) == 0)
	{	
	//	start_sorting(&a, &b);
	}
	ft_printf("nova\n");
	print(&a);
	print(&b);
	free_all(&a);
}
