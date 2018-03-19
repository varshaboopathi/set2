#include<stdio.h>
int main()
{
    char k[10];
    int a[10],i,j,s=0,n;
    gets(k);
    n=strlen(k);
    for(i=0;i<n;i++)
    {
        switch(k[i])
        {
            case 'I':a[i]=1;
                     break;
            case 'V':a[i]=5;
                     break;
            case 'X':a[i]=10;
                     break;
            case 'L':a[i]=50;
                     break;
            case 'C':a[i]=100;
                     break;
            case 'CC':a[i]=200;
                      break;
            case 'CCC':a[i]=300; 
                       break;
            case 'CD':a[i]=400;
                      break;
            case 'D':a[i]=500;
                      break;
            case 'DC':a[i]=600;
                      break;
            case 'DCC':a[i]=700;
                      break;
            case 'DCCC':a[i]=800;
                      break;
            case 'CM':a[i]=900;
                      break;
            case 'M':a[i]=1000;
                      break;
                       }
       }
     s=a[n-1];
     for(j=n-1;j>0;j--)
     {
         if(a[j]>a[j-1])
         {
             s-=a[j-1];
         }
         else
         {
             s+=a[j-1];
         }
     }
     printf("%d",s);
     return 0;
}
