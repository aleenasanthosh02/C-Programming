#include<stdio.h>
#include<ctype.h>
int main()
{
int i,vowels=0,consonants=0;
char str[100];

printf("Enter the String: ");
fgets(str,sizeof(str),stdin);
for (i=0; str[i] != '\0' ;i++)
{
char ch = tolower(str[i]);
if(ch>='a' && ch<='z')
{
if(ch=='a' || ch=='u' || ch=='o' || ch=='i' || ch=='e'){
vowels++;
}
else{
consonants++;
}
}
}
printf("vowels: %d \n",vowels);
printf("consonants: %d\n",consonants);
return 0;
}




