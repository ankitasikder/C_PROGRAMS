//acromating
#include<Stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
     char x[1];
     int len,i;
     printf("Enter the name=");
     gets(x);
     len=strlen(x);
     if(x[0]>=97 && x[0]<=122)
     printf("%c",x[0]-32);
     for(i=1;i<len;i++)
     {
          if(x[i]==' ')
          {
                     if(x[i+1]>=97 && x[i+1]<=122)
                     printf("%c",x[i+1]-32);
                     else
                     printf("%c",x[i+1]);
          }
     }
getch();
}
