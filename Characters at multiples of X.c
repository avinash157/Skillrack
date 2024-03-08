#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[100];
    int x;
    fgets(str,100,stdin);
    scanf("%d",&x);
    for(int i=1;i<=strlen(str);i++)
    {
       if(i%x==0)
        printf("%c",str[i-1]);
    }

}

Input: 
abcdexyzwqpoolj 
5 

Output: 
eqj 
