/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angkim <angkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 12:18:32 by angkim            #+#    #+#             */
/*   Updated: 2019/08/28 16:05:248 by angkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// get argument (into largest needed data type: long double)
// length modifier function when storing argument value
// understand flags: 
    // +, space, -, # (forces result to include '.'
// put integer component & '.'
// width and precision algorithm for fractional component
    // width: minumum num of characters to print total (including prefix and .)
    // prec: minimum num of digits AFTER decimal
// algorithm for rounding

// int		get_mod_arg_f(t_format *f, va_list args, long double *n, char **s)
// {
// 	uint64_t	whole;
// 	int			neg;

// 	neg = 0;
// 	if (MOD == 'L')
// 		*n = (long double)va_arg(args, long double);
// 	else
// 		*n = (long double)va_arg(args, double);

// 	if (*n < 0)
// 	{
// 		*n = *n * -1;
// 		neg = 1;
// 		COUNT++;
// 	}
// 	whole = ((uint64_t)*n);
// 	*n = *n - ((uint64_t)*n);
// 	if (!f->p)
// 		PREC = 6;
// 	LEN = ft_digitcount(whole) + 1 + PREC;
// 	*s = ft_memalloc(sizeof(char) * LEN + 1);
// 	*s = ft_llutoa(whole);
// 	return (neg ? 1 : 0);
// }

void	put_float(char **format, t_format *f, va_list args)
{
	char 		*f_str = NULL;
	long double	f_arg;
	int			places;
	
	int i = 0;

	f_arg = va_arg(args, long double);

	places = (f_arg < 1) ? 1 : 0;

	if (!f->p)
		PREC = 6;

	while (i++ < PREC)
	{
		f_arg *= 10;
		if (f_arg < 1 && f_arg > -1)
			places += 1;
	}

	if (f_arg < 0)
		f_arg -= 0.5;
	else
		f_arg += 0.5;

printf("f arg: %Lf\n", f_arg);

	f_str = ft_ltoa((uint64_t)f_arg);


	

	(*format)++;
	reset_struct(f);
}

