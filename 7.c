#include<stdio.h>
void main()
{
    char s[100],d;
    int i,n,c;
    scanf("%s",&s);
    c=strlen(s);
for(i=0;i<c;i=i+2)
{
    if(i<c)
    {
    if(i%2==0)
    {
        d=s[i];
        s[i]=s[i+1];
        s[i+1]=d;
    }
}
}
printf("%s",s);
}

