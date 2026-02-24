
// find minimum and maximum value.

#include<stdio.h>
int main()
{

    int a[100];
    int n,i;
    int pos,neg,even,odd;

      printf("enter number of elements:");
      scanf("%d",&n);

      printf("Enter %d elements:\n",n);
         for(i=0;i<n;i++)
           {
             scanf("%d",&a[i]);
           }

           for(i=0;i<n;i++)
           {
               if(a[i]>0)
                pos++;
               if(a[i]<0)
                neg++;
               if(a[i]%2==0)
                even++;
               else
                odd++;

           }
           printf("positive=%d\n",pos);
           printf("negative=%d\n",neg);
           printf("odd=%d\n",odd);
           printf("even=%d\n",even);


        return 0;
}

