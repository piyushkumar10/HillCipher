//Max 5 Letter//
//Decryption Problem//
#include<stdio.h>
#include<string.h>
int main()
{
int a[5][5]={{10,9,12,5,6},{7,8,11,13,2},{14,15,16,3,17},{4,18,19,20,21},{22,3,24,25,26} };
float b[5][5]={{0.0402,-0.0304,-0.0266,-0.0692,0.0663},{-1.7042,1.1592,1.0631,-0.1922,-0.2357},{1.1014,-0.6413,-0.5981,0.1633,0.0543},{0.0291,-0.0172,-0.091,0.0063,0.049},{0.4288,-0.3912,-0.2784,0.0718,0.0936}};
int i,j;
int m[25],e[25];
char msg[25];
char s[25];
int t=0;
printf("Enter plain text\n ");
scanf("%s",msg);
for(i=0;i<strlen(msg);i++)
{
m[i]=msg[i]-65;
printf("%d ",m[i]);
}
for(i=0;i<strlen(msg);i++)
{
t=0;
for(j=0;j<strlen(msg);j++)
{
t=t+(a[i][j]*m[j]);
}
e[i]=t%26;
}
printf("\nEncrypted Cipher Text :");
for(i=0;i<strlen(msg);i++)
printf(" %c",e[i]+65);
{
	printf("\n Enter The Encrypted Text:");
	scanf("%s",s);
	
for(i=0;i<strlen(s);i++)
{
t=0;
for(j=0;j<strlen(s);j++)
{
t=t+(b[i][j]*e[j]);
}
e[i]=t%26;
}
printf("\nDecrypted Cipher Text :");
for(i=0;i<strlen(s);i++)
printf(" %c",m[i]+65);
}
return 0;
}
