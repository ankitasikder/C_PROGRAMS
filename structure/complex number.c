/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include<stdio.h>
#include<conio.h>
struct complex
{
       int real,img;
};
int main()
{
    struct complex a,b,c;
    printf("Enter a and b where a+ib is the first complex number.\n");
    scanf("%d %d",&a.real,&a.img);
    printf("Enter c and d where c+id is the second complex number.\n");
    scanf("%d %d",&b.real,&b.img);
    c.real=a.real+b.real;
    c.img=a.img+b.img;
    printf("sum of the complex numbers:%d+%di\n",c.real,c.img);
    getch();
}
