#include<stdio.h>
#include<stdlib.h>
void str_comp(char s1[],char s2[]); 
str_concat(char s1[],char s2[]);
void str_length(char s1[]);
void main()
{
char str1[50],str2[50];
int ch;
while(1) // its infinite loop
{
printf("Enter your choice\n 1:String Compare \n 2:String concatenate\n
3:String length\n 4:Exit\n");
scanf("%d", &ch);
switch(ch)
{
case 1: printf("Enter the string one \n");
scanf("%s", str1);
printf("Enter the string two \n");
scanf("%s", str2);
str_comp(str1,str2);
break;
case 2: printf("Enter the string one \n");
scanf("%s", str1);
printf("Enter the string two \n");
scanf("%s", str2);
str_concat(str1,str2);
break;
case 3: printf("Enter the string \n");
scanf("%s", str1);
str_length(str1);
break;
case 4: exit(0);
}
}
}
void str_comp(char s1[50], char s2[50])
{
int i=0;
while(s1[i]==s2[i] && s1[i]!='\0')i++;
if(s1[i]<s2[i])
printf("String1 %s is less than string2 %s\n",s1,s2);
else if (s1[i]>s2[i])
printf("String1 %s is greater than string2 %s\n",s1,s2);
else
printf("String1 %s is equal to string2 %s\n",s1,s2);
}
void str_concat(char s1[50], char s2[50])
{
int i,j;
for(i=0;s1[i]!='\0';i++); 
for (j=0;s2[j]!='\0';j++,i++)
{
s1[i]=s2[j];
}
s1[i]='\0';
printf("After concatenation : %s\n ",s1);
}
void str_length(char s1[50])
{
int i;
for(i=0;s1[i]!='\0'; i++); 
printf("The length of string %s is %d \n",s1,i);
}