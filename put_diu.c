/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_diu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <angkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 15:26:00 by angkim            #+#    #+#             */
/*   Updated: 2019/09/05 18:02:39 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// get argument
// get LEN, WIDTH, and PRECISION values
// determine if prefix needed (check for F_PLUS || F_SPACE)
	// negative values (minus sign)
// determine padding: how many zeros/spaces (check for F_ZERO)
// determine order of prefix, padding, value (check for F_MINUS)
	// 0's should always be connected to the decimal value
	// prefix (+ or space) are the same
	// space padding should never come between zero padding / prefix and decimal values
// keep track of count (f->count)
// reset struct

void	put_int(char **format, t_format *f, va_list args)
{
	get_mod_arg_di(f, args);
	COUNT += (f->d_arg < 0) ? 1 : 0;
	LEN = ft_digitcount(f->d_arg);
	WIDTH -= (f->d_arg < 0) ? 1 : 0;
	if (FLAGS & F_PLUS || FLAGS & F_SPACE)
	{
		if (f->d_arg >= 0)
			WIDTH--;
	}
// printf("prec: %d\twidth: %d\tlen: %d\n", PREC, WIDTH, LEN);
	P_ZERO = PREC - LEN;
	P_SPACE = (WIDTH -= (PREC > LEN) ? PREC : LEN);
// printf("zeros: %d\tspaces: %d\n", P_ZERO, P_SPACE);
	if (!(FLAGS & F_MINUS))
		put_pad_int(f);
	else if (FLAGS & F_MINUS)
		put_pad_int_minus(f);
	COUNT += ft_digitcount(f->d_arg);
	(*format)++;
	reset_struct(f);
}

void	put_int_value(t_format *f)
{
	if (f->d_arg == 0 && f->p && (PREC == 0 || PREC == 1))
	{
			if (WIDTH > -1)
				write(1, " " , 1);
			else
				COUNT--;
	}
	else
	{
		if ((f->d_arg)+1 == -9223372036854775807)
			return ;
		ft_putnbr(f->d_arg);
	}
}

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

void	put_unsigned(char **format, t_format *f, va_list args)
{
	get_mod_arg_u(f, args);
	LEN = ft_digitcount(f->u_arg);
	if (f->flags & F_MINUS)
	{
		ft_putnbr(f->u_arg);
		put_padding(f);
	}
	else
	{
		put_padding(f);
		ft_putnbr_u(f->u_arg);
	}
	f->count += ft_digitcount_u(f->u_arg);
	(*format)++;
	reset_struct(f);
}
