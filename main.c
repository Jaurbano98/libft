/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaurbano <jaurbano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:50:25 by jaurbano          #+#    #+#             */
/*   Updated: 2023/09/20 12:48:41 by jaurbano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>


int	main(void)
{
	printf("\n\n Funcion 'is alpha'\n");
	printf(" letra Z: C %d, Creada %d.\n", isalpha('Z'), ft_isalpha('Z'));
	printf(" numero 1: C %d, Creada %d.\n", isalpha('1'), ft_isalpha('1'));


	printf("\n\n Funcion 'is digit'\n");
	printf(" letra Z: C %d, Creada %d.\n", isdigit('Z'), ft_isdigit('Z'));
	printf(" numero 1: C %d, Creada %d.\n", isdigit('1'), ft_isdigit('1'));


	printf("\n\n Funcion 'is alnum'\n");
	printf(" letra Z: C %d, Creada %d.\n", isalnum('Z'), ft_isalnum('Z'));
	printf(" numero 1: C %d, Creada %d.\n", isalnum('1'), ft_isalnum('1'));
	printf(" letra Ç: C %d, Creada %d.\n", isalnum(128), ft_isalnum(128));


	printf("\n\n Funcion 'is ascii'\n");
	printf(" letra Z: C %d, Creada %d.\n", isascii('Z'), ft_isascii('Z'));
	printf(" numero 1: C %d, Creada %d.\n", isascii('1'), ft_isascii('1'));
	printf(" letra Ç: C %d, Creada %d.\n", isascii(128), ft_isascii(128));


	printf("\n\n Funcion 'is print'\n");
	printf(" letra Z: C %d, Creada %d.\n", isprint('Z'), ft_isprint('Z'));
	printf(" numero 1: C %d, Creada %d.\n", isprint('1'), ft_isprint('1'));
	printf(" letra Ç: C %d, Creada %d.\n", isprint(128), ft_isprint(128));
	printf(" Salto de linea: C %d, Creada %d.\n", isprint('\n'), ft_isprint('\n'));


	printf("\n\n Funcion 'strlen'\n");
	printf(" Hola: C %lu, Creada %lu.\n", strlen("Hola"), ft_strlen("Hola"));
	printf(" QWERTYUIOP: C %lu, Creada %lu.\n", strlen("QWERTYUIOP"), ft_strlen("QWERTYUIOP"));
	printf(" : C %lu, Creada %lu.\n", strlen(""), ft_strlen(""));
	

	printf("\n\n Funcion 'memset'\n");
	char strmemset[50];
	strcpy(strmemset,"Hay que recoger la basura");
	printf(" Fuente %s\n", strmemset);
	memset(strmemset, '$', 18);
	printf(" C      %s\n", strmemset);
	char strmemset2[50];
	strcpy(strmemset2, "Hay que recoger la basura");
	ft_memset(strmemset2, '$', 18);
	printf(" Creada %s\n", strmemset2);


	printf("\n\n Funcion 'bzero'\n");
	char strbzero[50];
	strcpy(strbzero,"Hay que recoger la basura");
	printf(" Fuente %s\n", strbzero);
	bzero(strbzero, 5);
	printf(" C      %s\n", strbzero);
	char strbzero2[50];
	strcpy(strbzero2, "Hay que recoger la basura");
	ft_bzero(strbzero2, 5);
	printf(" Creada %s\n", strbzero2);


	printf("\n\n Funcion 'memcpy'\n");
	char srcmemcpy[50] = "I've come to talk with you again.";
   	char destmemcpy[50];
   	strcpy(destmemcpy,"Hello Darkness my old friend.");
   	printf(" Fuente = %s\n", destmemcpy);
   	memcpy(destmemcpy, srcmemcpy, 21);
   	printf(" C      = %s\n", destmemcpy);
	char srcmemcpy2[50] = "I've come to talk with you again.";
   	char destmemcpy2[50];
   	strcpy(destmemcpy2,"Hello Darkness my old friend.");
	ft_memcpy(destmemcpy2, srcmemcpy2, 21);
	printf(" Creada = %s\n", destmemcpy2);

	printf("\n\n Funcion 'memmove'\n");
	char srcmemmove[] =   "qwertyuilk";
	char destmemmove[] =  "popopopopopo";
	char destmemmove2[] = "popopopopopo";

	printf(" Fuente  dest = %s, src = %s\n", destmemmove, srcmemmove);
	ft_memmove(destmemmove, srcmemmove, 10);
	memmove(destmemmove2, srcmemmove, 10);
	printf(" Creada; dest = %s, src = %s\n", destmemmove, srcmemmove);
	printf(" C    ; dest2 = %s, src = %s\n", destmemmove2, srcmemmove);

	printf("\n\n Funcion 'strlcpy'\n");
	char srcstrlcpy[] = "Holita";
	char deststrlcpy[] = "Adiiytvb";
	char deststrlcpy2[] = "Adiiytvb";
	printf(" Fuente  dest = %s, src = %s\n", deststrlcpy, srcstrlcpy);
	printf(" Creada %lu, %s\n", ft_strlcpy(deststrlcpy, srcstrlcpy, 5), deststrlcpy);
	printf(" C      %lu, %s\n", strlcpy(deststrlcpy2, srcstrlcpy, 5), deststrlcpy2);

	printf("\n\n Funcion 'strlcat'\n");
	char	sstrlcat1[] = "Marvinette";
	char	sstrlcat2[50] = "Hola Mundo";
	char	sstrlcat3[50] = "Hola Mundo";
	printf(" Creada  %lu", ft_strlcat(sstrlcat2,sstrlcat1, 20));
	printf("%s\n", sstrlcat2);
	printf(" C       %lu",  strlcat(sstrlcat3, sstrlcat1, 20));
	printf("%s\n", sstrlcat3);


	printf("\n\n Funcion 'toupper'\n");
	printf(" C Transforma %c en %c\n", 'a', toupper('a'));
	printf(" Creada Transforma %c en %c\n", 'a', ft_toupper('a'));
	printf(" C Transforma %c en %c\n", 'Z', toupper('Z'));
	printf(" Creada Transforma %c en %c\n", 'Z', ft_toupper('Z'));


	printf("\n\n Funcion 'tolower'\n");
	printf(" C Transforma %c en %c\n", 'a', tolower('a'));
	printf(" Creada Transforma %c en %c\n", 'a', ft_tolower('a'));
	printf(" C Transforma %c en %c\n", 'Z', tolower('Z'));
	printf(" Creada Transforma %c en %c\n", 'Z', ft_tolower('Z'));


	printf("\n\n Funcion 'strchr'\n");
	char str_strchr[] = "asdfghjisvafdsAS";
	char str_strchr2[] = "asdfghjisvafdsAS";
	char ch_strchr = 'f';
   	char *ret_strchr;
	char *ret_strchr2;
	printf(" Fuente %s letra %c. \n", str_strchr, ch_strchr);
   	ret_strchr = ft_strchr(str_strchr, ch_strchr);
   	ret_strchr2 = strchr(str_strchr2, ch_strchr);
	printf(" Caracter %c puntero %p cadena %s\n", ch_strchr, ret_strchr, ret_strchr);
	printf(" Caracter %c puntero %p cadena %s\n", ch_strchr, ret_strchr2, ret_strchr2);


	printf("\n\n Funcion 'strrchr'\n");
	char str_strrchr[] =  "asdfghjisvafdsAS";
	char str_strrchr2[] = "asdfghjisvafdsAS";
	char ch_strrchr = 'f';
   	char *ret_strrchr;
	char *ret_strrchr2;
	printf(" Fuente %s letra %c. \n", str_strrchr, ch_strrchr);
   	ret_strrchr = ft_strrchr(str_strrchr, ch_strrchr);
   	ret_strrchr2 = strrchr(str_strrchr2, ch_strrchr);
	printf(" Caracter %c puntero %p cadena %s\n", ch_strrchr, ret_strrchr, ret_strrchr);
	printf(" Caracter %c puntero %p cadena %s\n", ch_strrchr, ret_strrchr2, ret_strrchr2);

	printf("\n\n Funcion 'strncmp'\n");
	char *strncmp1, *strncmp2;
	strncmp1 = "QWERTYUIOP";
	strncmp2 = "QWERWYUIOP";
	printf(" Strings: %s || %s\n", strncmp1, strncmp2);
	printf(" Creada 3: %d\n", ft_strncmp("test\200", "test\0", 6));
	printf(" Creada 6: %d\n", ft_strncmp(strncmp1, strncmp2, 6));
	printf(" C      3: %d\n", strncmp("test\200", "test\0", 6));
	printf(" C      6: %d\n", strncmp(strncmp1, strncmp2, 6));

	printf("\n\n Funcion 'memchr'\n");
	char *smemchr1;
	smemchr1 = "Holarata";
	printf(" String: %s\n", smemchr1);
	printf(" Creada %p\n", ft_memchr(smemchr1, 'a', 4));
	printf(" C      %p\n", memchr(smemchr1, 'a', 4));

	printf("\n\n Funcion 'memcmp'\n");
	char *memcmp1, *memcmp2;
	memcmp1 = "Holarata";
	memcmp2 = "Holawata";
	printf(" Strings: %s || %s\n", memcmp1, memcmp2);
	printf(" Creada 3: %d\n", ft_memcmp(memcmp1, memcmp2, 3));
	printf(" Creada 6: %d\n", ft_memcmp(memcmp1, memcmp2, 6));
	printf(" C      3: %d\n", memcmp(memcmp1, memcmp2, 3));
	printf(" C      6: %d\n", memcmp(memcmp1, memcmp2, 6));

	printf("\n\n Funcion 'strnstr'\n");
	char *strnstr1, *strnstr2;
	strnstr1 = "Holarata";
	strnstr2 = "ar";
	printf(" String: %s\n", strnstr1);
	printf(" Creada 6 %s\n", ft_strnstr(strnstr1, strnstr2, 6));
	printf(" C      6 %s\n", strnstr(strnstr1, strnstr2, 6));
	printf(" Creada 2 %s\n", ft_strnstr(strnstr1, strnstr2, 2));
	printf(" C      2 %s\n", strnstr(strnstr1, strnstr2, 2));

	printf("\n\n Funcion 'atoi'\n");
	char *numatoi;
	numatoi = "+ 1234567";
	printf("C      string %s, numero %d\n",numatoi,  atoi(numatoi));
	printf("Creada string %s, numero %d\n",numatoi,  ft_atoi(numatoi));

	printf("\n\n Funcion 'calloc'\n");
	char *str = "Hola Mundo";
	char *p;
	p = ft_calloc(2,1);
	printf("%s\n", p);
	p = str;
	printf("%s\n", p);
}
