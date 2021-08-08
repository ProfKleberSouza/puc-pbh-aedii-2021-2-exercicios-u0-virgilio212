#include <stdio.h>

int main() {
   int num;
   scanf("%i", &num);

   if(num==0)
     printf("NUMERO NEUTRO\n"); 
   else {
     if(num%2==0) {
      printf("NUMERO PAR ");
        if (num<0)
          printf("NEGATIVO\n");
        else
          printf("POSITIVO\n"); 
      }
     else {
      if(num%2!=0) {
        printf("NUMERO IMPAR ");
        if (num<0)
          printf("NEGATIVO\n");
       else
          printf("POSITIVO\n");
     } }
   }
  
   return 0;
}