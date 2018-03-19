#include <stdio.h>
int main()
{
  int n1,n2,i,j,f=0,c=0;
  scanf("%d%d",&n1,&n2);
  for(i=n1;i<=n2;i++)
  {
      f=0;
      for(j=2;j<=(i/2);j++)
      {
          if((i%j)==0)
          {
              f=1;
              break;
          }
          else
          {
              f=0;
          }
      }
      
       if(f==0)
        {
            
          }
            c++;
        
  }
  printf("%d",c);
   return 0;
}
