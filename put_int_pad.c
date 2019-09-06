/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_int_pad.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angela <angela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 01:34:18 by angela            #+#    #+#             */
/*   Updated: 2019/09/06 02:04:25 by angela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	put_pad_int(t_format *f)
{
	if (FLAGS & F_ZERO)
	{
		put_pad_int_zero(f);
		return ;
	}
	while (P_SPACE-- > 0)
	{
		write(1, " ", 1);
		COUNT++;
	}
	if (!(FLAGS & F_ZERO))
		(f->d_arg >= 0) ? put_prefix_int(f) : put_prefix_int_neg(f);
	while (P_ZERO-- > 0)
	{
		write(1, "0", 1);
		COUNT++;
	}
	put_int_value(f);
}

void	put_pad_int_minus(t_format *f)
{
	(f->d_arg >= 0) ? put_prefix_int(f) : put_prefix_int_neg(f);
	while (P_ZERO-- > 0)
	{
		write(1, "0", 1);
		COUNT++;
	}
	ft_putnbr(f->d_arg);
	while (P_SPACE-- > 0)
	{
		write(1, " ", 1);
		COUNT++;
	}
}

void	put_pad_int_zero(t_format *f)
{
	(f->d_arg >= 0) ? put_prefix_int(f) : put_prefix_int_neg(f);
	while (P_ZERO-- > 0)
	{
		if (FLAGS & F_ZERO)
		{
			(f->p && PREC > LEN) ? write(1, " ", 1) : write(1, "0", 1);
		}
		else
			write(1, " ", 1);
		COUNT++;
	}
	while (P_SPACE-- > 0)
	{
		if (FLAGS & F_ZERO)
		{
			if (f->p)
				(PREC > LEN) ? write(1, "0", 1) : write(1, " ", 1);
			else
				write(1, "0", 1);
		}
		else
			write(1, " ", 1);
		COUNT++;
	}
	put_int_value(f);
}

void	put_prefix_int(t_format *f)
{
	if (f->d_arg >= 0)
	{
		if (FLAGS & F_SPACE)
		{
			write(1, " ", 1);
			COUNT++;
		}
		else if (FLAGS & F_PLUS)
		{
			write(1, "+", 1);
			COUNT++;
		}
	}
}

void	put_prefix_int_neg(t_format *f)
{
	if (f->d_arg < 0)
	{
		write(1, "-", 1);
		if (f->d_arg+1 == -9223372036854775807)
		{
			write(1, "9223372036854775808", 19);
			return ;
		}
		if (f->spec != 'u')
			f->d_arg *= -1;
	}
	LEN++;
}
