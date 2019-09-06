#include "ft_printf.h"

static char	*add_dot(char *n, size_t prec)
{
	char	*res;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(n);
	res = ft_strnew(j + 1);
	while (i < (j - prec))
	{
		res[i] = n[i];
		i++;
	}
	res[i++] = '.';
	while (prec > 0)
	{
		res[i++] = n[j - prec];
		prec--;
	}
	res[i] = '\0';
	free(n);
	return (res);
}

static char	*add_zero(char *n, size_t zero)
{
	char	*zero_s;
	size_t	i;

	i = 0;
	zero_s = ft_strnew(zero);
	while (i < zero)
		zero_s[i++] = '0';
	return (ft_strmerge(zero_s, n));
}

static void	fixnegative(char *n)
{
	char	*neg;
	int		i;

	i = 0;
	neg = ft_strchr(n, '-');
	while (n[i] != '-' && n[i])
		i++;
	if (neg)
	{
		n[i] = '0';
		n[0] = '-';
	}
}

static char	*mkfstr(long double n, size_t prec, size_t *zero)
{
	size_t i;

	i = 0;
	*zero = (n < 1) ? 1 : 0;
	while (i++ < prec)
	{
		n *= 10;
		if (n < 1 && n > -1)
			*zero += 1;
	}
	if (n < 0)
		n -= .5;
	else
		n += .5;
	return (ft_itoa((intmax_t)n));
}

char		*ft_ldtoa(long double n, size_t prec)
{
	char	*nbr;
	size_t	zero;

	nbr = mkfstr(n, prec, &zero);
	if (zero > prec)
		zero = prec;
	if (zero && n > -1)
		nbr = add_zero(nbr, zero);
	nbr = add_dot(nbr, prec);
	if (n < 0)
		fixnegative(nbr);
	return (nbr);
}