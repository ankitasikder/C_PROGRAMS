/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include<Stdio.h>
#include<conio.h>
void main()
{
    int n,rem=0,s=0,c=0;
     printf("Enter the no-->");
     scanf("%d",&n);
     for(;n!=0;n=(n/10))
     {
        rem=n%10;
        s=s+rem;
     }
     if(n%s==0)
     printf("harshad no.");
     else
     printf("not harshad no.");
getch();
}
