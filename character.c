#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
int i,max_freq=0;
int count[256]={0};
char str[100];
char max_char;

printf("Enter the String: ");
fgets(str,sizeof(str),stdin);

for(i=0;str[i] != '\0'; i++) {
if(isalpha(str[i])) {
char ch=tolower(str[i]);
count[ch]++; 
}
}
for(i=0;str[i] != '\0'; i++) {
char ch=tolower(str[i]);
if(isalpha(ch) && count[ch]>max_freq) {
max_freq=count[ch];
max_char=ch;
}
}
printf("most frequent character is '%c' and it appears %d times\n",max_char,max_freq);

return 0;
}

