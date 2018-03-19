#include<stdio.h>
#include<string.h> 
void main()
{
    char s1[10],s2[10];
    int i,j,l,l2,c=0;
    printf("Enter two strings ");
    scanf("%s\t%s",s1,s2);
    l=strlen(s1);
    l2=strlen(s2);
    printf("%d\t",l);
    for(i=0;s1[i]!='\0';i++)
    {
        for(j=0;s2[j]!='\0';j++)
    {
        if(s1[i]==s2[j])
        {
            c++;
            }
        }
}
if(c==l)
{
    printf("not Isomorphic");
}
else
{
    printf("Isomorphic");
}
}
