#include<stdio.h>
int main()
{
    int a[155],b[155],nn;
    int n,i,j,count,h,k,m=0;
    scanf("%d\n",&n);
        
        for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

        for (i=0;i<n;i++)
        {
            count=0;
            for (j=0;j<n;j++)
            {
                if (a[i]==a[j])
                    count++;
            }
            if (count>=4)
            {
               h=0;
                for(k=0;k<i;k++)
                {
                    if(a[i]!=a[k])
                        h++;
                }
                if (h==i)
                {
                 (b[m++]==a[i]);
                }
                    
            }
        }
    nn=m;
printf("%d",nn);
    
    return 0;
}
