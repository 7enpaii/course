/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 12:05:18 by aazdoev           #+#    #+#             */
/*   Updated: 2023/01/05 12:05:19 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	sa(t_data *data, int i)
{
	t_stack	*stack_fst;
	t_stack	*stack_scd;
	int		tp;
	int		tp_index;

	if (data->stack_a_size > 1)
	{
		stack_fst = data->top_stack_a;
		tp = stack_fst->nb;
		tp_index = stack_fst->index;
		stack_scd = stack_fst->next;
		stack_fst->nb = stack_scd->nb;
		stack_scd->nb = tp;
		stack_scd->index = tp_index;
		if (i == 1)
			ft_putstr_fd("sa\n", 1);
	}
}

void	sb(t_data *data, int i)
{
	t_stack	*stack_fst;
	t_stack	*stack_scd;
	int		tp;
	int		tp_index;

	if (data->stack_b_size > 1)
	{
		stack_fst = data->top_stack_b;
		tp = stack_fst->nb;
		tp_index = stack_fst->index;
		stack_scd = stack_fst->next;
		stack_fst->nb = stack_scd->nb;
		stack_scd->nb = tp;
		stack_scd->index = tp_index;
		if (i == 1)
			ft_putstr_fd("sb\n", 1);
	}
}

void	ss(t_data *data)
{
	sa(data, 0);
	sb(data, 0);
	ft_putstr_fd("ss\n", 1);
}
