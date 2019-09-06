/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_perc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <angkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 15:30:43 by angkim            #+#    #+#             */
/*   Updated: 2019/09/02 23:47:06 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_percent(char **format, t_format *f)
{
	if (**format == '%')
	{
		f->arg_len = 1;
		if (f->flags & F_MINUS)
		{
			ft_putchar('%');
			put_padding(f);
			f->flags -= F_MINUS;
		}
		else
		{
			put_padding(f);
			ft_putchar('%');
		}
		f->arg_num = 10;
		f->count++;
		(*format)++;
	}
	else
		f->arg_num = -1;
}
