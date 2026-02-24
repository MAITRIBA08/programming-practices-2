7
// enter n element and print.

#include<stdio.h>
int main()
{

    int a[100];
    int n,i;
      printf("enter number of elements:");
      scanf("%d",&n);

      printf("Enter %d elements:\n",n);
         for(i=0;i<n;i++)
           {
             scanf("%d",&a[i]);
           }
        printf("you have entered :\n");
        for(i=0;i<n;i++)
        {
            printf("%d",a[i]);
        }
        return 0;
}
