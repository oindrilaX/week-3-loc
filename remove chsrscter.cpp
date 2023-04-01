#include<stdio.h>
#include<conio.h>
#include<string.h>
void removeChar(char * str, char charToRemove){
    int i, j;
    int len = strlen(str);
    for(i=0; i<len; i++)
    {
        if(str[i] == charToRemove)
        {
            for(j=i; j<len; j++)
            {
                str[j] = str[j+1];
            }
            len--;
            i--;
        }
    }
}
int main(){
	 char str[100],ch,c;
	 int i,j,len;
	 printf("enter the string : n");
	 scanf("%[^n]%c",str,&c);
	 printf("enter a char you want to remove : ");
	 scanf("%c",&ch);
	 removeChar(str,ch);
	 printf("String after removing '%c': %s", ch, str);
	 getch();
 } 
