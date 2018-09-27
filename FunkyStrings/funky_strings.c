// Tim Marder
// Systems pd04
// CW - Funky Strings
// 2018-09-26

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
// ==========[ strcat ]========== //
/*
The C library function char *strcat(char *dest, const char *src)
appends the string pointed to by src to the end of the string
pointed to by dest.
Source: https://www.tutorialspoint.com/c_standard_library/c_function_strcat.htm
*/
   char src[10], dest[10];

   strcpy(src,  "ya!");
   strcpy(dest, "Boo");

   strcat(dest, src);

   printf("strcat test:\n");
   printf("Final destination string : %s\n", dest);
   printf("\n");

// ==========[ strncat ]========== //
/*
The C library function char *strncat(char *dest, const char *src, size_t n)
appends the string pointed to by src to the end of the string pointed to by
dest up to n characters long.
Source: https://www.tutorialspoint.com/c_standard_library/c_function_strncat.htm
*/
   char give[10], receive[10];

   strcpy(give,  "ya!");
   strcpy(receive, "Boo");

   strncat(receive, give, 1); //Will only allow 4 characters

   printf("strncat test:\n");
   printf("Final destination string : %s\n", receive);
   printf("\n");

   return(0);
}
