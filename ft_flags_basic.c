/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_basic.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magrosje <magrosje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 17:42:12 by magrosje          #+#    #+#             */
/*   Updated: 2020/01/06 15:37:44 by magrosje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_zero(t_printf *conv, char *src, int *res, int s_len)
{
	if (src[0] == '-')
	{
		ft_putchar('-', res);
		src++;
		conv->prec = conv->prec + 1;
	}
	while ((conv->flag == '0' && conv->wid > s_len) || conv->prec > s_len)
	{
		ft_putchar('0', res);
		s_len++;
	}
	if (!(conv->prec == 0 && src[0] == '0'))
		ft_putstr(src, res);
}

void	ft_minus(t_printf *conv, char *src, int *res, int s_len)
{
	int i;

	i = 0;
	ft_putstr(src, res);
	if (conv->prec == -1)
		ft_putstr(src, res);
	while ((conv->wid - conv->prec > s_len) || conv->wid > s_len)
	{
		ft_putchar(' ', res);
		conv->wid--;
	}
}

void	ft_spaces(t_printf *conv, char *src, int *res, int s_len)
{
	int i;

	i = 0;
	if (src[0] == '-' && conv->wid > conv->prec && conv->prec >= s_len
	&& conv->flag != '-')
		conv->wid = conv->wid - 1;
	while (conv->wid > s_len && conv->wid > conv->prec && conv->prec != 0)
	{
		ft_putchar(' ', res);
		conv->wid--;
	}
	if (conv->prec == 0 && conv->wid > 0 && src[0] == '0')
		conv->wid = conv->wid + 1;
	while (conv->wid > s_len && conv->prec <= 0)
	{
		ft_putchar(' ', res);
		conv->wid--;
	}
}
