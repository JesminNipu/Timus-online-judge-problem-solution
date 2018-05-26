 #include <stdio.h> 
  int main()
  {
  	int m[1009],n,k;
  	scanf("%d %d",&n,&k);
  m[1] = k-1;
         m[2] = k*(k-1);
         for (int i = 3; i <=n; i++)
        {
            m[i] = (m[i-1]+m[i-2])*(k-1);
        }
           printf("%d",m[n]);
    return 0;
	}

