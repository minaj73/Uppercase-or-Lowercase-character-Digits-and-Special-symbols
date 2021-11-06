#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='\0';
    printf("\n enter character = ");
   ch=getche();
   if(ch>='A' && ch<='Z')
   {
    printf("\n %c is uppercase") ;
   }
   else if(ch>='a' && ch<='z')
   {
    printf("\n %c is lowercase");
   }
   else if(ch>='0' && ch<='9')
   {
    printf("%c is a digit") ;
   }
  else
   {
    printf("\n %c is special symbol");

   }


    getch();
    return 0;

}
