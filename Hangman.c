#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int i,j,c,count=0,flag=0,*ptr,counter;
char a[1][1000],pl1[100],pl2[100];
char b[10],alpha;
char d='_';
printf("enter the names of the two players playing\n");
scanf("%s %s",pl1,pl2);
printf("%s to enter his word to be hidden first\n",pl1);
scanf("%s",a);
c=strlen(&a[0][0]);
system("cls");
printf("\n\n\t\t\t ** HANGMAN ** \n");
printf("\n\t\t\t**************\t\t\t");
printf("\n\t\t\t..............\n\n\t\t\t  ");
for(j=0;j<c;j++)
{
    printf("%c ",d);
    b[j]=d;
}
printf("\n\n\t\t\t..............\t\t\t");
printf("\n\n\t\t\t**************");
while (count<6)//||(ans<c))
{
    counter=0;
    flag=0;
    printf("\n\n\n\n\n\n\t enter a char ");
    alpha=getche();
    for(i=0;i<c;i++)
    {
        if(alpha==b[i])
            flag=2;
    }
    if(flag==0)
    {
        for(i=0;i<c;i++)
        {
            if (alpha==a[0][i])
            {
                b[i]=a[0][i];
                flag=1;
            }
        }
    }
    system("cls");
    printf("\n\n\t\t\t ** HANGMAN ** \n");
    printf("\n\t\t\t**************\t\t\t");
    printf("\n\t\t\t..............\n\n\t\t\t  ");
    for(i=0;i<c;i++)
    {
        printf("%c ",b[i]);
        if(b[i]=='_')
            counter++;
    }
    printf("\n\n\t\t\t..............\t\t\t");
    printf("\n\n\t\t\t**************");
    if(flag==0)
    {
        count++;
        printf("\n\n\n\n\t\t%c i\as a w\ar\aon\ag guess ",alpha);
        printf("\n\n\t\t (You have %d more guesses)",6-count);
    }
    else if(flag==2)
    {
        printf("\n\n\t\t\t\tYou have already guessed this earlier.....\n");
        printf("\n\t\t\t\tTry again\n");
    }
    else
    {
        printf("\n\n\t\t You are correct!!");
        printf("\n\t\t(Guess the rest)");
    }
    if(counter==0 || count==6)
        break;
}
if(counter==0)
    printf("\n\n\n\t %s won",pl2);
else
    printf("\n\n\n\t\t   YOU LOSE !!! %s has won.\n\n \t\t **$$  SORRY YOU ARE HANGED $$**",pl1);

getch();

}

