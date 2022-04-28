#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

char	ascii_plus_n(unsigned int n, char c)
{
	return (c + n);
}

void	*lstmap_f(void *str)
{
	int		i;
	char	*str_cpy;

	str_cpy = (char *)str;
	i = 0;
	while (str_cpy[i] != '\0')
	{
		str_cpy[i] += 1;
		i++;
	}
	return ((void *)str_cpy);
}

int	main(void)
{
/* ft_lstmap */
	// t_list *l = ft_lstnew(strdup(" 1 2 3 "));
	// t_list *ret;

	// l->next = ft_lstnew(strdup("ss"));
	// l->next->next = ft_lstnew(strdup("-_-"));
	// ret = ft_lstmap(l, &lstmap_f, ((void *)0));
	// if (!strcmp(ret->content, "OK !") && !strcmp(ret->next->content, "OK !")
	// 	&& !strcmp(ret->next->next->content, "OK !")
	// 	&& !strcmp(l->content, " 1 2 3 ")
	// 	&& !strcmp(l->next->content, "ss")
	// 	&& !strcmp(l->next->next->content, "-_-"))
	// 	printf("success\n");
	// printf("failed\n");

/* ft_strlcat */
	// char	dest[30]; ft_memset(dest, 0, 30);
	// char	* src = (char *)"AAAAAAAAA";
	// size_t	n = 0;

	// dest[0] = 'B';
	// printf("dest : %s || result : %ld\n", dest, ft_strlcat(dest, src, n));

/* ft_lstclear */
	// t_list	**lst;
	// t_list	*first;

	// first = ft_lstnew(ft_strdup("test1"));
	// lst = &first;
	// ft_lstclear(lst, &free); //strdupで文字列test1のmallocをとったけど、それをfree関数がfreeするだけ。

/* ft_strmapi */
	// char	*str = "Bonjour";
	// printf("'%s'\n", ft_strmapi(str, &ascii_plus_n));

/* ft_itoa */
	//for (int nb = -2147483648; nb > -2147483645; nb++)
	// int	nb = -2147483648;
	// 	printf("nb  : %d str : '%s'\n", nb, ft_itoa(nb));

/* ft_split */
	// char	*str = "--1-2--3---4----5-----42";
	// char	set = '-';
	// char	**result;
	// size_t	i = 0;

	// result = ft_split(str, set);
	// printf("str : '%s' || set : '%c'\n", str, set);
	// for (i = 0; result[i] != NULL; i++)
	// {
	// 	printf("result[%ld] : '%s'\n", i, result[i]);
	// 	free(result[i]);
	// }
	// printf("result[%ld] : '%s'\n", i, result[i]);
	// free(result[i]);
	// free(result);

/* ft_strtrim */
	// const char	*str1 = "............lkgor..q.r...................";
	// const char	*set = ".";
	// char	*result;

	// result = ft_strtrim(str1, set);
	// printf("str1 : '%s' || set : '%s'\nresult : '%s'\n", str1, set, result);
	// free(result);

/* ft_strjoin */
	char	*str1 = "\n- Bonjour, je m'appelle jean-eude.";
	char	*str2 = "\n- Enchante jean-eude.";
	char	*result;

	result = ft_strjoin(str1, str2);
	printf("str1 : '%s' || str2 : '%s'\n result : \n'%s'\n", str1, str2, result);
	free(result);

/* ft_substr */
	// char			*str1 = "Bonjour je m'appelle jean-eude.";
	// char			*str2;
	// unsigned int	start = 8;
	// size_t			size = 100;

	// str2 = ft_substr(str1, start, size);
	// printf("str1 : '%s'\nstr2 : '%s' || start : %u || size : %ld\n", str1, str2, start, size);
	// free(str2);

/* ft_strdup */
	// char	*str1 = "hrlhqrjtqohtrohrgqehrqghqgiergqier";
	// char	*str2;

	// str2 = ft_strdup(str1);
	// printf("ft_strdup :\nstr1 : '%s'\nstr2 : '%s'\n\n", str1, str2);
	// free(str2);
	// str2 = strdup(str1);
	// printf("strdup :\nstr1 : '%s'\nstr2 : '%s'\n", str1, str2);
	// free(str2);

/* ft_calloc */
	// char	*ptr1;
	// size_t	nmemb = 1000;
	// size_t	size = 8;

	// size_t	count_ft = 0;
	// size_t	count = 0;

	// ptr1 = ft_calloc(nmemb, size);
	// for (size_t i = 0 ; i < nmemb * size ; i++)
	// {
	// 	if (ptr1[i] == 0)
	// 		count_ft++;
	// 	else
	// 		break ;
	// }
	// free(ptr1);
	// ptr1 = calloc(nmemb, size);
	// for (size_t i = 0 ; i < nmemb * size ; i++)
	// {
	// 	if (ptr1[i] == 0)
	// 		count++;
	// 	else
	// 		break ;
	// }
	// free(ptr1);
	// printf("ft_calloc : %ld || calloc : %ld\n", count_ft, count);

/* ft_atoi */
// 	char	*nptr = "9223372036854775807";
// ///* 34. LONG_MAX - 1 */ ASSERT_EQ_I(atoi("9223372036854775806"), ft_atoi("9223372036854775806"));
// ///* 35. LONG_MIN + 1 */ ASSERT_EQ_I(atoi("-9223372036854775807"), ft_atoi("-9223372036854775807"));
// 	printf("nptr '%s'\n", nptr);
// 	printf("ft_atoi : '%d'\n   atoi : '%d'\n", ft_atoi(nptr), atoi(nptr));

/* ft_strnstr */
	// char	*str1 = "aaabcabcd";
	// char	*str2 = "cd";

	// for (size_t n = 0 ; n < 15 ; n++)
	// {
	// 	if (n == 0 || ft_strnstr (str1, str2, n - 1) != ft_strnstr(str1, str2, n))
	// 	{
	// 		printf("n : %ld\n", n);
	// 		printf("str1 '%s' || str2 : '%s'\n", str1, str2);
	// 		printf("ft_strnstr : %s\n\n", ft_strnstr(str1, str2, n));
	// 	}
	// }

/* ft_memcmp */
	// char	*str1 = "0123456789";
	// char	str2[] = "019";
	// //str2[1] += 100;

	// for (size_t n = 0 ; n < 15 ; n++)
	// {
	// 	if (ft_memcmp(str1, str2, n) != memcmp(str1, str2, n))
	// 	{
	// 		printf("n : %ld\n", n);
	// 		printf("str1 '%s' || str2 : '%s'\n", str1, str2);
	// 		printf("ft_memcmp : %d || memcmp : %d\n", ft_memcmp(str1, str2, n), memcmp(str1, str2, n));
	// 	}
	// }

/* ft_memchr */
	// char	*str = "azertyuiop";
	// int		c = 'B';

	// for (size_t n = 0 ; n < 15 ; n++)
	// {
	// 	if (ft_memchr(str, c, n) != memchr(str, c, n))
	// 	{
	// 		printf("n : %ld\n", n);
	// 		printf("ft_memchr : '%s'\n", (char *)ft_memchr(str, c, n));
	// 		printf("memchr    : '%s'\n", (char *)memchr(str, c, n));
	// 	}
	// }

/* ft_strncmp */
	// char	*str1 = "0123456789";
	// char	str2[] = "01";
	// str2[1] += 100;

	// for (size_t n = 0 ; n < 15 ; n++)
	// {
	// 	if (ft_strncmp(str1, str2, n) != strncmp(str1, str2, n))
	// 	{
	// 		printf("str1 '%s' || str2 : '%s'\n", str1, str2);
	// 		printf("ft_strncmp : %d || strncmp : %d\n", ft_strncmp(str1, str2, n), strncmp(str1, str2, n));
	// 	}
	// }

/* ft_strchr */
	// char	*str = "azertyuiopad";
	// int		c = '\0';

	// printf("ft_strrchr : '%s'\n", ft_strrchr(str, c));
	// printf("strrchr    : '%s'\n", strrchr(str, c));

/* ft_strchr */
	// char	*str = "azertyuiop";
	// int		c = 'B';

	// printf("ft_strchr : '%s'\n", ft_strchr(str, c));
	// printf("strchr    : '%s'\n", strchr(str, c));

/* tolower */
	// for (int c = -300 ; c < 300 ; c++)
	// {
	// 	// printf("ft_toupper : %d\n", ft_toupper(c));
	// 	// printf("toupper    : %d\n\n", toupper(c));
	// 	if (tolower(c) - ft_tolower(c) != 0)
	// 		printf("tolower : c = %d --> %d\n", c, tolower(c) - ft_tolower(c));
	// }

/* toupper */
	// for (int c = -300 ; c < 300 ; c++)
	// {
	// 	// printf("ft_toupper : %d\n", ft_toupper(c));
	// 	// printf("toupper    : %d\n\n", toupper(c));
	// 	//if (toupper(c) - ft_toupper(c) != 0)
	// 		printf("toupper : c = %d --> %d\n", c, toupper(c) - ft_toupper(c));
	// }

/* ft_memmove */
	// char	str1_b[] = "0123456789";
	// char	*str2_b = &str1_b[2];

	// char	str1_a[] = "0123456789";
	// char	*str2_a = &str1_a[2];
	// size_t	n = 9;

	// ft_memmove(str2_a, str1_a, n);
	// printf("ft_memmove : str1 '%s' || str2 : '%s'\n",str1_a, str2_a);
	// memmove(str2_b, str1_b, n);
	// printf("memmove :    str1 '%s' || str2 : '%s'\n",str1_b, str2_b);

/* ft_memchr */
/* 5 */ //check(ft_memchr(s, 2 + 256, 3) == s + 2); showLeaks(); //Cast check
	// char	s[] = {'0', '1', '2' ,'3' ,'4' ,'5'};
	// int		c = '1';
	// printf(" '1' : %c || '1' + 256 : %c\n", '1', '1' + 256);
	// printf("ft_memchr :\nc : '%s' || c + 256 : '%s'\n\n", (char *)ft_memchr(s, c, 6), (char *)ft_memchr(s, c + 256, 6));
	// printf("Original :\nc : '%s' || c + 256 : '%s'\n", (char *)memchr(s, c, 6), (char *)memchr(s, c + 256, 6));
	// return (0);
}
