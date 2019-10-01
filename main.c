#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

// remove from Makefile SRCS

int main(void)
{
    // int d = 123;
    // // double dubl = 3.33;
    // // int d2 = -3030303;
    // char c = 'a';
    // char str[] = "hello";
	// int *ptr = &d;



// printf("pf\t<%#02.7x>\n", 3267);
// ft_printf("ft\t<%#02.7x>\n", 3267);


printf("pf\t<% u>\n", 4294967296);
ft_printf("ft\t<% u>\n", 4294967296);

printf("pf\t<%#8.5x>\n", 21);
ft_printf("ft\t<%#8.5x>\n", 21);

// printf("pf\t<%#-8.5x>\n", 34);
// ft_printf("ft\t<%#-8.5x>\n", 34);



// printf("pf\t<%#02.7o>\n", 3267);
// ft_printf("ft\t<%#02.7o>\n", 3267);


// ft_printf("@moulitest: %.d %.0d", 0, 0);

// ft_printf("@moulitest: %5.d %5.0d", 0, 0);


// 	printf("\npf\t<%f>\n", 0.000039);
// 	ft_printf("ft\t<%f>\n", 0.000039);

// 	printf("\npf\t<%f>\n", 0.000398);
// 	ft_printf("ft\t<%f>\n", 0.000398);

// printf("\npf\t<%f>\n", 0.999999);
// ft_printf("ft\t<%f>\n", 0.999999);

	// printf("\npf\t<%f>\n", 999.999999);
	// ft_printf("ft\t<%f>\n", 999.999999);

	// printf("\npf\t<%f>\n", 0.0894255);
	// ft_printf("ft\t<%f>\n", 0.0894255);

	// printf("pf\t<%f>\n", -3.85);
	// ft_printf("ft\t<%f>\n", -3.85);

	// printf("\npf\t<%f>\n", -958.125);
	// ft_printf("ft\t<%f>\n", -958.125);

	// printf("\npf\t<%f>\n", 23.375094499);
	// ft_printf("ft\t<%f>\n", 23.375094499);



	// minus flag


	// # flag


// printf("P\t<%f>\n", (double)INT_MIN + 1);
// ft_printf("FP\t<%f>\n", (double)INT_MIN + 1);

// printf("P\t<%f>\n", (double)INT_MIN);
// ft_printf("FP\t<%f>\n", (double)INT_MIN);

// printf("printf:\t<%4.f>\n", (double)42.042);
// ft_printf("mine:\t<%4.f>\n", (double)42.042);

// printf("%10.3f\n", (double)-42.042);
// ft_printf("%10.3f\n", (double)-42.042);

// printf("%#4.f\n", (double)42.042);
// printf("%#4.f\n", (double)42.042);

// ----------- Testing --------------------------------


// flags
// width
// precision            if a precision is given with a numeric conversion (diouxX), 0 flag ignored
// length modifiers
// bonus				color, fd

//  d   i   o   u   x   X               c   s   p

//	%	(- flag)	(field width)	(precision)
	// printf("return: %d\n", printf("pp\t<%%>\n") - 6);
	// printf("ft_printf return: %d\n", ft_printf("*pp\t<%%>\n") - 7);
	// printf("p5p\t<%5%>\n");
	// ft_printf("*p5p\t<%5%>\n");
	// printf("p-5p\t<%-5%>\n");
	// ft_printf("*p-5p\t<%-5%>\n");
	// printf("p.0p\t<%.0%>\n");
	// ft_printf("*p.0p\t<%.0%>\n");
/*
	printf("return: %d\n", printf("%   %", "test"));
	printf("return :%d\n", ft_printf("%   %", "test"));
*/


	// printf("c\t<%c>\n", c);
	// ft_printf("*c\t<%c>\n", c);
	// printf("5c\t<%5c>\n", c);
	// ft_printf("*5c\t<%5c>\n", c);
	// printf("return: %d\n", printf("-5c\t<%-5c>\n", c));
	// printf("ft_printf return: %d\n", ft_printf("*-5c\t<%-5c>\n", c));


// static char *s_hidden = "hi low\0don't print me lol\0";

// 	printf("PF\t<%3.s>\n", s_hidden);
// 	ft_printf("ft\t<%3.s>\n", s_hidden);
	// printf("PF\t<%.0s>\n", "hello");
	// ft_printf("ft\t<%.0s>\n", "hello");
	// printf("PF\t<%.03s>\n", NULL);
	// ft_printf("ft\t<%.03s>\n", NULL);	
	// printf("PF\t<%.03s>\n", s_hidden);
	// ft_printf("ft\t<%.03s>\n", s_hidden);


// char *str = "hello";
	// printf("PF\t<%7.5s>\n", "hellohello");
	// ft_printf("FT\t<%7.5s>\n", "hellohello");
	// printf("PF\t<%.0s>\n", "hello");
	// ft_printf("FT\t<%.0s>\n", "hello");
	// printf("PF\t<%-5.3s>\n", "hello");
	// ft_printf("FT\t<%-5.3s>\n", "hello");
	// printf("s\t<%s>\n", "");
	// ft_printf("*s\t<%s>\n", "");
	// printf("s\t<%s>\n", str);
	// ft_printf("*s\t<%s>\n", str);
	// printf("10s\t<%10s>\n", str);
	// ft_printf("*10s\t<%10s>\n", str);
	// printf("return: %d\n", printf("-10s\t<%-10s>\n", str));
	// printf("ft_printf return: %d\n", ft_printf("*-10s\t<%-10s>\n", str));
	// printf(".10s\t<%.10s>\n",str);
	// ft_printf("*.10s\t<%.10s>\n", str);
	// printf("10.3s\t<%10.3s>\n", str);
	// ft_printf("*10.3s\t<%10.3s>\n", str);
	// ft_printf("*10.6s\t<%10.6s>\n", str);
	// printf("-10.6s\t<%-10.6s>\n", str);
	// ft_printf("*-10.6s\t<%-10.6s>\n", str);



// int d = 123;
// int *ptr = &d;
//	(- flag)	(field width)
	// printf("PF\t<%p>\n", "");
	// ft_printf("ft\t<%p>\n", "");
	// printf("p\t<%20p>\n", ptr);
	// ft_printf("*p\t<%20p>\n", ptr);
	// printf("20p\t<%20p>\n", ptr);
	// ft_printf("*20.15p\t<%20p>\n", ptr);
	// printf("-20p\t<%-20p>\n", ptr);
	// ft_printf("*-20p\t<%-20p>\n", ptr);
	// printf("return: %d\n", printf("-10p\t<%-10p>\n", ptr));
	// printf("ft_printf return: %d\n", ft_printf("*-10p\t<%-10p>\n", ptr));


	// printf("int d\t<%d>\n", d);
	// ft_printf("*int d\t<%d>\n", d);
	// printf("int 15d\t<%15d>\n", d);
	// ft_printf("*int 15d\t<%15d>\n", d);
	// printf("int .3d\t<%.3d>\n", d);
	// printf("int 0.3d\t<%0.3d>\n", d);
	// printf("int .4d\t<%.4d>\n", d);
	// printf("int 0.4d\t<%0.4d>\n", d);
	// printf("int 15.5d\t<%15.5d>\n", d);
	// printf("int -15d\t<%-15d>\n", d);
	// ft_printf("*int -15d\t<%-15d>\n", d);
	// printf("int -15.5d\t<%-15d>\n", d);
	// printf("int -.5d\t<%-.5d>\n", d);
	// printf("int 015d\t<%015d>\n", d);
	// ft_printf("*int 015d\t<%015d>\n", d);
	// printf("int 015.5d\t<%015.5d>\n", d);

	// printf("return: %d\n", printf("int +15d\t<%+15d>\n", d));
	// printf("ft_printf return: %d\n", ft_printf("*int +15d\t<%+15d>\n", d) - 1);

	// printf("int +15.5d\t<%+15.5d>\n", d);
	// printf("int +015d\t<%+015d>\n", d);
	// ft_printf("*int +015d\t<%+015d>\n", d);
	// printf("int 0+15.5d\t<%0+15.5d>\n", d);
	// printf("int +-15d\t<%+-15d>\n", d);
	// ft_printf("*int +-15d\t<%+-15d>\n", d);
	// printf("int +-15.5d\t<%+-15.5d>\n", d);
	// printf("int +-.5d\t<%+-.5d>\n\n", d);

	
	// printf("<PF\t<%o>\n", 0);
	// ft_printf("<FT\t<%o>\n", 0);
	// printf("<PF\t<%o>\n", -0);
	// ft_printf("<FT\t<%o>\n", -0);
	// printf("octal o\t<%o>\n", d);
	// ft_printf("*octal o\t<%o>\n", d);
	// printf("octal 15o\t<%15o>\n", d);
	// ft_printf("*octal 15o\t<%15o>\n", d);
	// printf("octal .3o\t<%.3o>\n", d);
	// printf("octal 0.3o\t<%0.3o>\n", d);
	// printf("octal .4o\t<%.4o>\n", d);
	// printf("octal 0.4o\t<%0.4o>\n", d);
	// printf("octal 15.5o\t<%15.5o>\n", d);
	// printf("octal -15o\t<%-15o>\n", d);
	// ft_printf("*octal -15o\t<%-15o>\n", d);
	// printf("octal -15.5o\t<%-15o>\n", d);
	// printf("octal -.5o\t<%-.5o>\n", d);
	// printf("octal 015o\t<%015o>\n", d);
	// ft_printf("*octal 015o\t<%015o>\n", d);
	// printf("octal 015.5o\t<%015.5o>\n", d);
	// printf("octal #15o\t<%#15o>\n", d);
	// ft_printf("*octal #15o\t<%#15o>\n", d);
	// printf("octal #15.5o\t<%#15.5o>\n", d);
	// printf("octal #015o\t<%#015o>\n", d);
	// ft_printf("*octal #015o\t<%#015o>\n", d);
	// printf("octal 0#15.5o\t<%0#15.5o>\n", d);
	// printf("octal #-15o\t<%#-15o>\n", d);
	// ft_printf("*octal #-15o\t<%#-15o>\n", d);
	// printf("octal #-15.5o\t<%#-15.5o>\n", d);
	// printf("octal #-.5o\t<%#-.5o>\n\n", d);


	// printf("return: %d\n", printf("x\t<%x>\n", 0) - 5);
	// printf("ft_printf return: %d\n", ft_printf("*x\t<%x>\n", 0) - 6);
	// printf("return: %d\n", printf("x\t<%x>\n", 42) - 5);
	// printf("ft_printf return: %d\n", ft_printf("*x\t<%x>\n", 42) - 6);	
	// printf("hex h\t<%x>\n", d);
	// ft_printf("*hex x\t<%x>\n", d);
	// printf("hex 15h\t\t<%15x>\n", d);
	// ft_printf("*hex 15h\t<%15x>\n", d);
	// printf("hex .3h\t<%.3x>\n", d);
	// printf("hex 0.3h\t<%0.3x>\n", d);
	// printf("hex .4h\t<%.4x>\n", d);
	// printf("hex 0.4h\t<%0.4x>\n", d);
	// printf("hex 15.5h\t<%15.5x>\n", d);
	// printf("hex -15h\t<%-15x>\n", d);
	// ft_printf("*hex -15h\t<%-15x>\n", d);
	// printf("hex -15.5h\t<%-15x>\n", d);
	// printf("hex -.5h\t<%-.5x>\n", d);
	// printf("hex 015h\t<%015x>\n", d);
	// ft_printf("*hex 015h\t<%015x>\n", d);
	// printf("hex 015.5h\t<%015.5x>\n", d);
	// printf("hex #15h\t<%#15x>\n", d);
	// ft_printf("*hex #15h\t<%#15x>\n", d);
	// printf("hex #15.5h\t<%#15.5x>\n", d);
	// printf("hex #015h\t<%#015x>\n", d);
	// ft_printf("*hex #015h\t<%#015x>\n", d);
	// printf("hex 0#15.5h\t<%0#15.5x>\n", d);
	// printf("hex #-15h\t<%#-15x>\n", d);
	// ft_printf("*hex #-15h\t<%#-15x>\n", d);
	// printf("hex #-15.5h\t<%#-15.5x>\n", d);
	// printf("hex #-.5h\t<%#-.5x>\n\n", d);


	// printf("return: %d\n", printf("X\t<%X>\n", 42) - 5);
	// printf("ft_printf return: %d\n", ft_printf("*X\t<%X>\n", 42) - 6);
	// printf("return: %d\n", printf("X\t<%X>\n", 0) - 5);
	// printf("ft_printf return: %d\n", ft_printf("*X\t<%X>\n", 0) - 6);


/*
    // precision with doubles and 0 flag
    double test = 12.3
    printf("5.1\t|%5.1f\n", test);
    printf("5\t|%5f\n", test);
    // when precision value and field width are given, 0 flag is ignored
    printf("*05.1\t|%05.1f*\n", test);
    printf("*0.5\t|%0.5f*\n", test);
    printf(".5\t|%.5f\n", test);
*/

	// system("leaks a.out");

    return (0);
}
