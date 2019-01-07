#include <stdio.h>

int main()
{
    int n,k,ar[50];
    scanf("%d",&n);
    scanf("%d",&k);
    for(int x=0;x<n;x++)
    {
        scanf("%d",&ar[x]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]>ar[j])
            {
                int temp;
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    /*for(int i=0;i<n;i++)
    {
        printf("%d\n",ar[i]);
    }
 */
 for(int m=0;m<=n;m++)
 {
     if(m==k)
     {
         printf("%d",ar[m-1]);
     }
 }
    return 0;
}
