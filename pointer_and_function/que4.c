/*4. For the following standard functions, write corresponding user defined functions and write a menu
driven program to use them. strcat, strcmp, strrev, strupr.*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
void StrCat(char str[],char str1[]); 
void StrCmp(char str[],char str1[]); 
void StrRev(char str[]);
void StrUpr(char str[]); 

int main()
{
    char str[20],str1[20],ch;
    int choice;
    do{
        printf("\n****Menu****");
        printf("\n 1.strcat");
        printf("\n 2.strcmp");
        printf("\n 3.strrev");
        printf("\n 4.strupr");
        printf("\n 5.Exit \n");
        printf("\n Which function do you want to use:- ");
        scanf("%d",&choice);
        if(choice==1 || choice==2)
        { 
            printf("\n Enter first string (20 Characters Max):- ");
            scanf("%s",str);
            printf("\n Enter second string (20 Characters Max):- ");
            scanf("%s",str1);
        } 
        else if(choice==3 || choice==4)
        {
            printf("\n Enter any string (20 Characters Max):- ");
            scanf("%s",str);
        }
        switch(choice)
        {
            case 1:
            StrCat(str,str1);
            break;
            case 2:
            StrCmp(str,str1);
            break;
            case 3:
            StrRev(str);
            break;
            case 4:
            StrUpr(str);
            break;
            default:
            printf("\n Invalid Choice. \n \n");
        }
    }while(ch!=5);
    return 0;
} 

void StrCat(char str[],char str1[])
{
    int i,j=0;
    for(i=(strlen(str)-1);i<=(strlen(str)+strlen(str1)-2);i++)
    { 
        str[i]=str1[j];
        j++;
    }
    printf("\n The Concatenation of two strings is \"%s\" \n \n",str);
}

void StrCmp(char str[],char str1[])
{
    int i,j=0,LED=0;
    for(i=0;i<=strlen(str)-1;i++)
    { 
        if(str[i]!=str1[j])
        {
            LED=1;
            break;
        }
        j++;
    }
    if(LED==0)
        printf("\n Two strings is \"%s\" and \"%s\" are same \n",str,str1);   
    else
        printf("\n Two strings is \"%s\" and \"%s\" are  not same \n",str,str1); 
}

void StrRev(char str[])
{
    char str1[20];
    int i,j=0;
    for(i=strlen(str)-1;i>=0;i--)
    {
        str1[j]=str[i];
        j++;
    }
    printf("\n The reverse string of \"%s\" is \"%s\" \n",str,str1);
}

void StrUpr(char str[])
{
    char ch,str1[20];
    int i;
    for(i=0;i<=strlen(str)-1;i++)
    {
        ch=toupper(str[i]);
        str1[i]=ch;
    }
    printf("\n The uppercase string of \"%s\" is \"%s\" \n",str,str1);
}


