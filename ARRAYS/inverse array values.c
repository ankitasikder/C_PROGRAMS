#include<Stdio.h>
#include<conio.h>
void main()
{
     int a[10],i,n;
     printf("Enter the range->");
     scanf("%d",&n);
     //input array
      printf("Enter the number of array-->\n");
     for(i=0;i<n;i++)
     {
            
             scanf("%d",&a[i]);
     }
     for(i=n-1;i>=0;i--)
     {
             printf("The numbers of array a[%d] is -->%d\n",i,a[i]);
             
     }

getch();
}
