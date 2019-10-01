/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_int_pad.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angela <angela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 01:34:18 by angela            #+#    #+#             */
/*   Updated: 2019/09/06 02:04:23by angela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	put_pad_int(t_format *f)
{
	// if (FLAGS & F_ZERO)
	// {
	// 	put_pad_int_zero(f);
	// 	return ;
	// }

	if (f->d_arg == 0 && f->p == 1 && PREC <= 0)
	{
		if (f->spec == 'd' || f->spec == 'o')
		{
			P_SPACE++;
			WIDTH = -1;
		}
	}

	while (P_SPACE-- > 0)
	{
		write(1, " ", 1);
		COUNT++;
	}
	// if (!(FLAGS & F_ZERO))
	(f->d_arg >= 0) ? put_prefix_int(f) : put_prefix_int_neg(f);
	if (f->spec == 'o' || f->spec == 'x' || f->spec == 'X')
		(f->ox_arg > 0) ? put_prefix_ox_xx(f) : put_ox_zero(f);
	while (P_ZERO-- > 0)
	{
		write(1, "0", 1);
		COUNT++;
	}
	if (f->spec == 'o' || f->spec == 'x' || f->spec == 'X')
		put_ox_value(f);
	else if (f->spec == 'd' || f->spec == 'i' || f->spec == 'u')
		put_int_value(f);
}

void	put_pad_int_minus(t_format *f)
{
	(f->d_arg >= 0) ? put_prefix_int(f) : put_prefix_int_neg(f);
	if (f->spec == 'o' || f->spec == 'x' || f->spec == 'X')
		(f->ox_arg > 0) ? put_prefix_ox_xx(f) : put_ox_zero(f);

	while (P_ZERO-- > 0)
	{
		write(1, "0", 1);
		COUNT++;
	}
	if (f->d_arg == 0 && f->p == 1 && f->p_val <= 0)
		P_SPACE++;
	else
	{
		if (f->spec == 'o')
			ft_putoctal(f->ox_arg);
		else if (f->spec == 'x' || f->spec == 'X')
			(f->spec == 'x') ? ft_puthex_lower(f->ox_arg) : ft_puthex_upper(f->ox_arg);
		else if (f->spec == 'd' || f->spec == 'i' || f->spec == 'u')
			(f->spec == 'u') ? ft_putnbr(f->u_arg) : ft_putnbr(f->d_arg);
	}
	while (P_SPACE-- > 0)
	{
		write(1, " ", 1);
		COUNT++;
	}
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
	// else if (f->flags & F_HASH)
	// {
		
	// }
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
