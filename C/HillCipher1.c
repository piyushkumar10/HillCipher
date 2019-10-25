//Max 3 Letter//
#include<stdio.h>
#include<string.h>
int main()
{
 int a[3][3]={{6,24,1},{13,16,10},{20,17,15}};
int i,j;
unsigned int c[20],d[20];
char msg[20];
int t=0;;
printf("Enter plain text\n ");
scanf("%s",msg);
for(i=0;i<strlen(msg);i++)
{
c[i]=msg[i]-65;
printf("%d ",c[i]);
}
for(i=0;i<strlen(msg);i++)
{
t=0;
for(j=0;j<3;j++)
{
t=t+(a[i][j]*c[j]);
}
d[i]=t%26;
}
printf("\nEncrypted Cipher Text :");
for(i=0;i<strlen(msg);i++)
printf(" %c",d[i]+65);
for(i=0;i<strlen(msg);i++)
{
t=0;
for(j=0;j<3;j++)

c[i]=t%26;
}
printf("\nDecrypted Cipher Text: %s",msg);
return 0;
}
