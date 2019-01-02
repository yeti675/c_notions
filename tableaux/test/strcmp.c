#include <stdio.h>
#include <string.h>

int main () {
   char str1[] = "test";
   char str2[] = "test";
   int ret;


   //strcpy(str1, "test");
   //strcpy(str2, "abcdef");

   ret = strcmp(str1, str2);

   if(ret < 0) {
      printf("str1 is less than str2\n");
   } else if(ret > 0) {
      printf("str2 is less than str1\n");
   } else {
      printf("str1 is equal to str2\n");
   }

   printf("\n\n%d\n\n", ret);
   
   return(0);
}