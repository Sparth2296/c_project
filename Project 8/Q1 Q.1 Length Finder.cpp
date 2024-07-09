#include<stdio.h>
#include<string.h>

main(){

   char str[99];
   
   printf("Enter any string:");
   scanf("%[^\n]s",&str);
   
   int len= strlen(str);
   
   int *count=&len;
   
   printf("Enter any string:%d",*count);
   
}
