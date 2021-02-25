/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magrosje <magrosje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 18:33:13 by magrosje          #+#    #+#             */
/*   Updated: 2019/12/31 13:22:53 by magrosje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *res)
{
	write(1, &c, 1);
	(*res)++;
}

void	ft_putstr(char *src, int *res)
{
	int i;

	i = 0;
	while (src[i])
		ft_putchar(src[i++], res);
}
