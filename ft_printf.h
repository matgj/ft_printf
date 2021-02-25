/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magrosje <magrosje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 14:12:28 by magrosje          #+#    #+#             */
/*   Updated: 2020/01/03 18:17:46 by magrosje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct		s_printf
{
	char	flag;
	int		wid;
	int		prec;
	char	type;

}					t_printf;

void				ft_putchar(char c, int *res);
void				ft_putstr(char *src, int *res);
int					ft_printf(const char *src, ...);
int					ft_atoi_mini(const char *src, int *i);
char				*ft_itoa_base(long int nb, int base, char *base_tab);
void				ft_c(va_list arg_list, t_printf *conv, int *res);
void				ft_s(va_list arg_list, t_printf *conv, int *res);
void				ft_mod(t_printf *conv, int *res);
void				ft_di(va_list arg_list, t_printf *conv,
	int *res, char *base_tab);
void				ft_u(va_list arg_list, t_printf *conv,
	int *res, char *base_tab);
void				ft_x(va_list arg_list, t_printf *conv,
	int *res, char *base_tab);
void				ft_p(va_list arg_list, t_printf *conv,
	int *res, char *base_tab);
void				ft_zero(t_printf *conv, char *src, int *res, int s_len);
void				ft_minus(t_printf *conv, char *src, int *res, int s_len);
void				ft_spaces(t_printf *conv, char *src, int *res, int s_len);
void				ft_space_s(t_printf *conv, char *str, int *res, int len);
void				ft_zero_s(t_printf *conv, char *str,
int *res, int len);
void				ft_minus_s(t_printf *conv, char *str,
int *res, int len);
void				ft_flags_prec(const char *src, int *i,
	va_list arg_list, t_printf *conv);
void				ft_flags_wid(const char *src, int *i,
	va_list arg_list, t_printf *conv);
void				ft_flags_zero_minus(const char *src,
	int *i, t_printf *conv);
void				ft_flag_p(t_printf *conv, char *str, int *res, int len);
int					ft_check_type(char c);

#endif
