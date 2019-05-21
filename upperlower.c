#include<stdio.h>
 
int main() {
   int upper = 0, lower = 0;
   char ch[80];
   int i;
   gets(ch);
 
   i = 0;
   while (ch[i] != NULL)
   {
      if (ch[i] >= 'A' && ch[i] <= 'Z')
         upper++;
      if (ch[i] >= 'a' && ch[i] <= 'z')
         lower++;
      i++;
   }
 
   printf("\nUpper case characters: %d", upper);
   printf("\nLower Case characters: %d", lower);
 
   return (0);
}
