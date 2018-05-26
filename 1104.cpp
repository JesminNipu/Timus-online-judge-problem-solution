#include <stdio.h>
 #include <ctype.h>
 int main()
 {
  long num=0,k,v,max=1;
  char ch;
  ch=getchar();
   while(ch!=EOF)
     {
      if(isdigit(ch)) v=ch-'0';
      else v=ch-'A'+10;
      num+=v;
      if(v>max) max=v;
      ch=getchar();
     }
   for(k=max;k<36;k++)
    if(num%k==0) break;
   if(k<36) printf("%ld",k+1);
   else printf("No solution.");
  return 0;
 }
