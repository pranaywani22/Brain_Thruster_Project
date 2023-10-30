/*
Idea by:- Pranay Ajitkumar Wani
Game intro designed by:- Pranay Ajitkumar Wani
Game Level 1 designed by :- Pranay Ajitkumar Wani
Game level 1 bugs spotted by:- Nishant and Pranay
Words selected by :- Nishant
game flow by :- Pranay Ajitkuma Wani
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<unistd.h>
char name[10];
int score=0,i=0,dob;
char choice='y';
void endgame();
void instructions();
void levels1();
void levels2();
void levels3();
void levels4();
void levels5();
void stage1();
void stage2();
void stage3();
void stage4();
void stage5();
int random();
void groupname();
void l11();
void l12();
void l13();
void l14();
void l15();
void l21();
void l22();
void l23();
void l24();
void l25();
void l31();
void l32();
void l33();
void l34();
void l35();
void l41();
void l42();
void l43();
void l44();
void l45();
void l51();
void l52();
void l53();
void l54();
void l55();
void gamename();
void congratulations();
void endgame();
int main()
{
    int a,i;
    groupname();
    gamename();
    instructions();
    a=random();
switch(a){
case 1:
    stage1();
     break;
case 2:
    stage2();
     break;
case 3:
    stage3();
    break;
case 4:
    stage4();
    break;
case 5:
    stage5();
    break;
}
}
int random(){
 int dob,date,time1,time1rem,time1sum=0,daterem,datesum=0,dobrem,dobsum=0,rem,sum=0;
    int a,b,c,d,e,f,g,h,i,case1;
    char name[10];
printf("\n Enter your name");
scanf("%s",name);
printf("\n Enter your dob ddmm format");
scanf("%d",&dob);
printf("\n Enter current date ddmm");
scanf("%d",&date);
printf("\n Enter current time");
scanf("%d",&time1);
for(;time1>0;time1/=10)
{
time1rem=time1%10;
time1sum=time1sum+time1rem;
}
a=time1sum;
for(;date>0;date/=10)
{
    daterem=date%10;
    datesum=datesum*10+daterem;
}
b=datesum;
for(;dob>0;dob/=10)
{
    dobrem=dob%10;
    dobsum=dobsum*10+dobrem;
}
c=dobsum;
d=a+b;
e=c-a;
for(;e>0;e/=10)
{
    rem=e%10;
    sum=sum*10+rem;
}
f=sum;
for(i=0;i<strlen(name);i++){
g=(int)name[i];
}
h=f/g;
if(h%2==0)
{
    case1=1;
}
else if (h%3==0)
{
    case1=2;
}
else if(h%5==0)
{
    case1=3;
}
else if(h%7==0)
{
    case1 =4;
}
else
case1=5;

return(case1);
}
void stage1(){
l11();}
void stage2(){
l21();
}
void stage3(){
l31();
}
void stage4(){
l41();
}
void stage5(){
l51();
}
void l11(){
    system("cls");
    int live=5;
    char ch='i',ch1='I',ch2='n',ch3='N',ch4='i',ch5='I';
printf("\n Welcome to the level 1");
label1:
    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,             score=%d         your life =%d      |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |    _ _ D _ A                                          |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch);
    ch1=ch;
    if(ch=='i'|| ch1=='I')
    {
        label2:
    system("cls");
    score=score+5;
     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d      |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |    I _ D _ A                                          |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch2);
    ch3=ch2;
    if(ch2=='n'||ch3=='N')
    {
        label3:
        system("cls");
    score=score+10;
     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d      |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |    I N D _ A                                           |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch4);
    ch5=ch4;
    if(ch4=='i'||ch5=='I')
    {
        system("cls");
    score=score+15;
     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d      |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |    I N D I A                                           |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    congratulations();
    printf("\n Want to play the next level Y/n");
    scanf(" %c",&choice);
    if (choice == 'y'|| choice =='Y')
        l12();
    else
        endgame();
    }
    else{
         system("cls");
        live--;
        if(live==0)
            printf("\n YOU LOSE");
        else
            {score=score-6;
          goto label3;}
    }
    }
     else
        {
        system("cls");
        live--;
        if(live==0)
            printf("\n YOU LOSE");
        else
            {score=score-4;
            goto label2;}
    }}
    else
    {
        system("cls");
        live--;
        if(live==0)
            printf("\n YOU LOSE");
        else
            {score=score-2;
         goto label1;}
    }
}
void l13(){
 system("cls");
  int live=6;
    char ch='i',ch1='I',ch2='c',ch3='C',ch4='o',ch5='O';
printf("\n Welcome to the level 2");
label1:
    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,             score=%d         your life =%d       |",score,live);
    printf("\n | Level 2 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q2.                                                    |");
    printf("\n |    M _ _ R _ S _ _ P E                                 |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch);
    ch1=ch;
    if(ch=='i'|| ch1=='I')
    {
        label2:
    system("cls");
    score=score+5;
     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q2.                                                    |");
    printf("\n |     M I _ R _ S _ _ P E                                |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch2);
    ch3=ch2;
    if(ch2=='C'||ch3=='c')
    {
        label3:
        system("cls");
    score=score+10;
     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q2.                                                    |");
    printf("\n |     M I C R _ S _ _ P E                                |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch4);
    ch5=ch4;
    if(ch4=='o'||ch5=='O')
    {
        label4:
        system("cls");
    score=score+15;
     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |      M I C R O S _ _ P E                               |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
     scanf(" %c",&ch2);
    ch3=ch2;
    if(ch2=='c'||ch3=='C')
        {
            label5:
        system("cls");
    score=score+20;
     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |      M I C R O S C _ P E                               |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
     scanf(" %c",&ch4);
    ch5=ch4;
    if(ch4=='o'||ch5=='O')
         {
        system("cls");
    score=score+20;
     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |      M I C R O S C O P E                               |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    congratulations();
    printf("\n Want to play the next level Y/n");
    scanf(" %c",&choice);
    if (choice == 'y'|| choice =='Y')
        l14();
    else
        endgame();
    }
      else{
         system("cls");
        live--;
        if(live==0)
            printf("\n YOU LOSE");
        else
            {score=score-10;
          goto label5;}
    }
    }
     else{
         system("cls");
        live--;
        if(live==0)
            printf("\n YOU LOSE");
        else
            {score=score-8;
          goto label4;}
    }
    }
    else{
         system("cls");
        live--;
        if(live==0)
            printf("\n YOU LOSE");
        else
            {score=score-6;
          goto label3;}
    }
    }
     else
        {
        system("cls");
        live--;
        if(live==0)
            printf("\n YOU LOSE");
        else
            {score=score-4;
            goto label2;}
    }
    }
    else
    {
        system("cls");
        live--;
        if(live==0)
            printf("\n YOU LOSE");
        else
            {score=score-2;
         goto label1;}
    }
}
void l12(){
system("cls");
  int live=6;
    char ch='s',ch1='S',ch2='a',ch3='A',ch4='h',ch5='H',ch6='i',ch7='I';
printf("\n Welcome to the level 2");
label1:
    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,             score=%d         your life =%d       |",score,live);
    printf("\n | Level 2 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q2.                                                    |");
    printf("\n |    _ T _ R S _ _ P                                     |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch);
    ch1=ch;
    if(ch=='s'|| ch1=='S')
    {
        label2:
    system("cls");
    score=score+5;
     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q2.                                                    |");
    printf("\n |    S T _ R S _ _ P                                     |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch2);
    ch3=ch2;
    if(ch2=='a'||ch3=='A')
    {
        label3:
        system("cls");
    score=score+10;
     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q2.                                                    |");
    printf("\n |     S T A R S _ _ P                                    |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch4);
    ch5=ch4;
    if(ch4=='h'||ch5=='H')
    {
        label4:
        system("cls");
    score=score+15;
     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |      S T A R S H _ P                                   |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
     scanf(" %c",&ch2);
    ch3=ch2;
    if(ch2=='i'||ch3=='I')
        {
            label5:
        system("cls");
    score=score+20;
     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |      S T A R S H I P                                   |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    congratulations();
    printf("\n Enter the first word you would expect to be:- ");
    printf("\n Want to play the next level Y/n");
    scanf(" %c",&choice);
    if (choice == 'y'|| choice =='Y')
        l13();
    else
        endgame();
    }

     else{
         system("cls");
        live--;
        if(live==0)
            printf("\n YOU LOSE");
        else
            {score=score-8;
          goto label4;}
    }
    }
    else{
         system("cls");
        live--;
        if(live==0)
            printf("\n YOU LOSE");
        else
            {score=score-6;
          goto label3;}
    }
    }
     else
        {
        system("cls");
        live--;
        if(live==0)
            printf("\n YOU LOSE");
        else
            {score=score-4;
            goto label2;}
    }
    }
    else
    {
        system("cls");
        live--;
        if(live==0)
            printf("\n YOU LOSE");
        else
            {score=score-2;
         goto label1;}
    }

}
void l15(){
system("cls");
  int live=6;
    char ch='p',ch1='P',ch2='h',ch3='H',ch4='s',ch5='S',ch6='y',ch7='Y',ch8='n',ch9='N',ch10='s',ch11='S';
printf("\n Welcome to the level 2");
label1:
    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,             score=%d         your life =%d       |",score,live);
    printf("\n | Level 2 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q2.                                                    |");
    printf("\n |     _ _ O T O _ _ _ T H E _ I _                        |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch);
    ch1=ch;
    if(ch=='p'|| ch1=='P')
    {
        label2:
    system("cls");
    score=score+5;
     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q2.                                                    |");
    printf("\n |    P _ O T O _ _ _ T H E _ I _                         |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch2);
    ch3=ch2;
    if(ch2=='h'||ch3=='H')
    {
        label3:
        system("cls");
    score=score+10;
     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q2.                                                    |");
    printf("\n |     P H O T O _ _ _ T H E _ I _                        |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch4);
    ch5=ch4;
    if(ch4=='s'||ch5=='S')
    {
        label4:
        system("cls");
    score=score+15;
     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |      P H O T O S _ _ T H E _ I _                       |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
     scanf(" %c",&ch6);
    ch7=ch6;
    if(ch6=='y'||ch7=='Y')
        {
            label5:
        system("cls");
    score=score+20;
     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |     P H O T O S Y _ T H E _ I _                        |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch6);
    ch7=ch6;
    if(ch6=='n'||ch7=='N')
    {
            label6:
        system("cls");
    score=score+25;
     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |     P H O T O S Y N T H E _ I _                        |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch6);
    ch7=ch6;
    if(ch6=='s'||ch7=='S')
    {
            label7:
        system("cls");
    score=score+30;
     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |     P H O T O S Y N T H E S I _                        |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch6);
if(ch6=='s'||ch7=='S')
    {
            label8:
        system("cls");
    score=score+40;
     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |     P H O T O S Y N T H E S I S                        |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    congratulations();
    printf("\n Want to play the next level Y/n");
    scanf(" %c",&choice);
    if (choice == 'y'|| choice =='Y')
        instructions();
    else
        endgame();
    }
    else{
         system("cls");
        live--;
        if(live==0)
            printf("\n YOU LOSE");
        else
            {score=score-8;
          goto label7;}
    }
        }
        else{
         system("cls");
        live--;
        if(live==0)
            printf("\n YOU LOSE");
        else
            {score=score-8;
          goto label6;}
    }
        }
else{
         system("cls");
        live--;
        if(live==0)
            printf("\n YOU LOSE");
        else
            {score=score-8;
          goto label5;}
    }
    }
     else{
         system("cls");
        live--;
        if(live==0)
            printf("\n YOU LOSE");
        else
            {score=score-8;
          goto label4;}
    }
    }
    else{
         system("cls");
        live--;
        if(live==0)
            printf("\n YOU LOSE");
        else
            {score=score-6;
          goto label3;}
    }
    }
     else
        {
        system("cls");
        live--;
        if(live==0)
            printf("\n YOU LOSE");
        else
            {score=score-4;
            goto label2;}
    }
    }
    else
    {
        system("cls");
        live--;
        if(live==0)
            printf("\n YOU LOSE");
        else
            {score=score-2;
         goto label1;}
    }
}
void l14(){
system("cls");
  int live=7;
    char ch='t',ch1='T',ch2='c',ch3='C',ch4='o',ch5='O',ch6='n',ch7='N',ch8='i',ch9='I',ch10='t',ch11='T';
printf("\n Welcome to the level 2");
label1:
    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,             score=%d         your life =%d       |",score,live);
    printf("\n | Level 2 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q2.                                                    |");
    printf("\n |     _ E L E _ _ M U _ _ C _ I O N                       |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch);
    ch1=ch;
    if(ch=='t'|| ch1=='T')
    {
        label2:
    system("cls");
    score=score+5;
     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q2.                                                    |");
    printf("\n |    T E L E _ _ M U _ _ C _ I O N                         |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch2);
    ch3=ch2;
    if(ch2=='c'||ch3=='C')
    {
        label3:
        system("cls");
    score=score+10;
     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q2.                                                    |");
    printf("\n |     T E L E C _ M U _ _ C _ I O N                        |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch4);
    ch5=ch4;
    if(ch4=='o'||ch5=='O')
    {
        label4:
        system("cls");
    score=score+15;
     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |      T E L E C O M U _ _ C _ I O N                 |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
     scanf(" %c",&ch6);
    ch7=ch6;
    if(ch6=='n'||ch7=='N')
        {
            label5:
        system("cls");
    score=score+20;
     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |     T E L E C O M U N _ C _ I O N                        |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch8);
    ch9=ch8;
    if(ch8=='i'||ch9=='I')
    {
            label6:
        system("cls");
    score=score+25;
     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |     T E L E C O M U N I C _ I O N                        |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch10);
    ch11=ch10;
    if(ch10=='a'||ch11=='A')
    {
        system("cls");
    score=score+30;
     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |     T E L E C O M U N I C A I O N                        |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    congratulations();
    printf("\n Want to play the next level Y/n");
    scanf(" %c",&choice);
    if (choice == 'y'|| choice =='Y')
            l15();
    else
        endgame();
    }

        else{
         system("cls");
        live--;
        if(live==0)
            printf("\n YOU LOSE");
        else
            {score=score-8;
          goto label6;}
    }
        }
else{
         system("cls");
        live--;
        if(live==0)
            printf("\n YOU LOSE");
        else
            {score=score-8;
          goto label5;}
    }
    }
     else{
         system("cls");
        live--;
        if(live==0)
            printf("\n YOU LOSE");
        else
            {score=score-8;
          goto label4;}
    }
    }
    else{
         system("cls");
        live--;
        if(live==0)
            printf("\n YOU LOSE");
        else
            {score=score-6;
          goto label3;}
    }
    }
     else
        {
        system("cls");
        live--;
        if(live==0)
            printf("\n YOU LOSE");
        else
            {score=score-4;
            goto label2;}
    }
    }
    else
    {
        system("cls");
        live--;
        if(live==0)
            printf("\n YOU LOSE");
        else
            {score=score-2;
         goto label1;}
    }
}
void name1(){
    //designed by pranay
char name[10];
    int b,c,d;
    printf("\n Enter Your Name :- ");
    scanf("%s",name);
    b=strlen(name);
    for(;b>0;b--){

    }
       system("cls");
}
void instructions(){
    system("cls");
    char ch='y',ch1='Y';
printf("\n 1] In this Game we are going to guess the correct word");
printf("\n 2] You have to guess the name by seeing the words and the number of blank spaces in the first try");
printf("\n 3] If you loose the first try then you will get the hint and will remain with only with 2 chances");
printf("\n 4] As your lives becomes 0 you loose the game and you have to restart with some new word");
printf("\n 5] The same word won't repeat");
printf("\n 6] As the level increases the difficulty level will also increase");
printf("\n Do you want to continue and start the game Y/N? \t");
scanf(" %c",&ch);
ch1=ch;
if (ch1=='Y' ||ch=='y')
    {
    system("cls");
    printf("\n Ohk %s Be ready to Make your Brain sprint to its Max capacity");
    }
else
   endgame();
}
void levels1(){
    int level;
printf("                                                     %d",score);
printf("\n Level 01 \t Level 02 \t Level 03 \n");
printf("\n      Level 05  \t Level 04 \n");
printf("\n Enter the Number you want to play");
printf("(Minimum score require to start a level)");
scanf("%d",&level);
system("clr");
switch(level){
case 1:
    l11();
    break;
case 2:
    if(score>25)
    l12();
    else
        {system("cls");
        printf("\n You Are not Eligible for this level play any smaller level again to increase your score");
         printf("\n Your score is %d and required score is 25",score);

        levels1();
        }
    break;
case 3:
    if(score>50)
    l13();
    else
        {system("cls");
        printf("\n You Are not Eligible for this level play any smaller level again to increase your score");
         printf("\n Your score is %d and required score is 50",score);

        levels1();}
    break;
case 4:
     if(score>75)
    l14();
    else
        {
            system("cls");
            printf("\n You Are not Eligible for this level play any smaller level again to increase your score");
         printf("\n Your score is %d and required score is 75",score);

        levels1();}
    break;
case 5:
    if(score>100)
    l15();
    else
        {
            system("cls");
            printf("\n You Are not Eligible for this level play any smaller level again to increase your score");
         printf("\n Your score is %d and required score is 100",score);

        levels1();}
    break;

    printf("\n Enter a valid Number");
    break;
}
}
void endgame(){
int rate;
printf("\n Thankyou ");
printf("\n Play Again");
printf("\n Do Rate the game out of 5");
scanf("%d",rate);
if(rate==1)
    printf("\n WE WILL DEFINITELY TRY TO FULFILL UR ACPECTATIONS");
else if(rate==2)
    printf("\n WE WORK HARD TO FULLFILL YOUR ACCEPECTTIONS");
else if(rate==3)
    printf("\n Thankyou");
else if (rate==4)
    printf("\n Thankyou");
else (rate ==5);
printf("\n Thankyou");
}
void l21(){

}
void l22(){
printf("\n work in progress");
}
void l23(){
printf("\n work in progress");
}
void l24(){
printf("\n work in progress");
}
void l25(){
printf("\n work in progress");
}
void l31(){

}
void l32(){
printf("\n work in progress");
}
void l33(){
printf("\n work in progress");
}
void l34(){
printf("\n work in progress");
}
void l35(){
printf("\n work in progress");
}
void l41(){
}
void l42(){
printf("\n work in progress");
}
void l43(){
printf("\n work in progress");
}
void l44(){
printf("\n work in progress");
}
void l45(){
printf("\n work in progress");
}
void l51(){

}
void l52(){
printf("\n work in progress");
}
void l53(){
printf("\n work in progress");
}
void l54(){
printf("\n work in progress");
}
void l55(){
printf("\n work in progress");
}
void levels2(){
  int level;
printf("                                                     %d",score);
printf("\n Level 01 \t Level 02 \t Level 03 \n");
printf("\n      Level 05  \t Level 04 \n");
printf("\n Enter the Number you want to play");
printf("(Minimum score require to start a level)");
scanf("%d",&level);
system("clr");
switch(level){
case 1:
    l21();
    break;
case 2:
    if(score>25)
    l22();
    else
        {system("cls");
        printf("\n You Are not Eligible for this level play any smaller level again to increase your score");
         printf("\n Your score is %d and required score is 25",score);

        levels2();
        }
    break;
case 3:
    if(score>50)
    l23();
    else
        {system("cls");
        printf("\n You Are not Eligible for this level play any smaller level again to increase your score");
         printf("\n Your score is %d and required score is 50",score);

        levels2();}
    break;
case 4:
     if(score>75)
    l24();
    else
        {
            system("cls");
            printf("\n You Are not Eligible for this level play any smaller level again to increase your score");
         printf("\n Your score is %d and required score is 75",score);

        levels2();}
    break;
case 5:
    if(score>100)
    l25();
    else
        {
            system("cls");
            printf("\n You Are not Eligible for this level play any smaller level again to increase your score");
         printf("\n Your score is %d and required score is 100",score);

        levels2();}
    break;

    printf("\n Enter a valid Number");
    break;
}
}
void levels3(){
  int level;
printf("                                                     %d",score);
printf("\n Level 01 \t Level 02 \t Level 03 \n");
printf("\n      Level 05  \t Level 04 \n");
printf("\n Enter the Number you want to play");
printf("(Minimum score require to start a level)");
scanf("%d",&level);
system("clr");
switch(level){
case 1:
    l31();
    break;
case 2:
    if(score>25)
    l32();
    else
        {system("cls");
        printf("\n You Are not Eligible for this level play any smaller level again to increase your score");
         printf("\n Your score is %d and required score is 25",score);

        levels3();
        }
    break;
case 3:
    if(score>50)
    l33();
    else
        {system("cls");
        printf("\n You Are not Eligible for this level play any smaller level again to increase your score");
         printf("\n Your score is %d and required score is 50",score);

        levels3();}
    break;
case 4:
     if(score>75)
    l34();
    else
        {
            system("cls");
            printf("\n You Are not Eligible for this level play any smaller level again to increase your score");
         printf("\n Your score is %d and required score is 75",score);

        levels3();}
    break;
case 5:
    if(score>100)
    l35();
    else
        {
            system("cls");
            printf("\n You Are not Eligible for this level play any smaller level again to increase your score");
         printf("\n Your score is %d and required score is 100",score);

        levels3();}
    break;

    printf("\n Enter a valid Number");
    break;
}
}
void levels4(){
  int level;
printf("                                                     %d",score);
printf("\n Level 01 \t Level 02 \t Level 03 \n");
printf("\n      Level 05  \t Level 04 \n");
printf("\n Enter the Number you want to play");
printf("(Minimum scaore require to start a level)");
scanf("%d",&level);
system("clr");
switch(level){
case 1:
    l41();
    break;
case 2:
    if(score>25)
    l42();
    else
        {system("cls");
        printf("\n You Are not Eligible for this level play any smaller level again to increase your score");
         printf("\n Your score is %d and required score is 25",score);

        levels4();
        }
    break;
case 3:
    if(score>50)
    l43();
    else
        {system("cls");
        printf("\n You Are not Eligible for this level play any smaller level again to increase your score");
         printf("\n Your score is %d and required score is 50",score);

        levels4();}
    break;
case 4:
     if(score>75)
    l44();
    else
        {
            system("cls");
            printf("\n You Are not Eligible for this level play any smaller level again to increase your score");
         printf("\n Your score is %d and required score is 75",score);

        levels4();}
    break;
case 5:
    if(score>100)
    l45();
    else
        {
            system("cls");
            printf("\n You Are not Eligible for this level play any smaller level again to increase your score");
         printf("\n Your score is %d and required score is 100",score);

        levels4();}
    break;

    printf("\n Enter a valid Number");
    break;
}
}
void levels5(){
  int level;
printf("                                                     %d",score);
printf("\n Level 01 \t Level 02 \t Level 03 \n");
printf("\n      Level 05  \t Level 04 \n");
printf("\n Enter the Number you want to play");
printf("(Minimum scaore require to start a level)");
scanf("%d",&level);
system("clr");
switch(level){
case 1:
    l51();
    break;
case 2:
    if(score>25)
    l52();
    else
        {system("cls");
        printf("\n You Are not Eligible for this level play any smaller level again to increase your score");
         printf("\n Your score is %d and required score is 25",score);

        levels5();
        }
    break;
case 3:
    if(score>50)
    l53();
    else
        {system("cls");
        printf("\n You Are not Eligible for this level play any smaller level again to increase your score");
         printf("\n Your score is %d and required score is 50",score);

        levels5();}
    break;
case 4:
     if(score>75)
    l54();
    else
        {
            system("cls");
            printf("\n You Are not Eligible for this level play any smaller level again to increase your score");
         printf("\n Your score is %d and required score is 75",score);

        levels5();}
    break;
case 5:
    if(score>100)
    l55();
    else
        {
            system("cls");
            printf("\n You Are not Eligible for this level play any smaller level again to increase your score");
         printf("\n Your score is %d and required score is 100",score);

        levels5();}
    break;

    printf("\n Enter a valid Number");
    break;
}
}
void gamename(){
    system("cls");
printf("\nBBB   RRR   AAAA  IIIII  NN  N  ");
printf("\nB  B  R  R  A  A    I    N N N  ");
printf("\nB  B  R  R  A  A    I    N N N  ");
printf("\nBBB   RRR   AAAA    I    N N N  ");
printf("\nB  B  RR    A  A    I    N N N  ");
printf("\nB  B  R R   A  A    I    N N N  ");
printf("\nBBB   R  R  A  A  IIIII  N  NN  ");
printf("\n");
printf("\n");
printf("\n             TTTTT  H  H  RRR   U  U  SSSS  TTTTT  EEEE  RRR  ");
printf("\n               T    H  H  R  R  U  U  S       T    EEEE  R  R ");
printf("\n               T    H  H  R  R  U  U  S       T    E     R  R ");
printf("\n               T    HHHH  RRR   U  U  SSSS    T    EEEE  RRR  ");
printf("\n               T    H  H  RR    U  U     S    T    E     RR   ");
printf("\n               T    H  H  R R   U  U     S    T    EEEE  R R  ");
printf("\n               T    H  H  R  R  UUUU  SSSS    T    EEEE  R  R ");
sleep(2);
}
void congratulations(){
    system("cls");
printf("\n/^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|");
printf("\n| CCCC   OO   NN  N  GGGG  RRR   AAAA  TTTTT  U  U  L     AAAA  TTTTT  U  U  L     AAAA  TTTTT  IIIII   OO   NN  N SSSS  |");
printf("\n| C     O  O  N N N  G     R  R  A  A    T    U  U  L     A  A    T    U  U  L     A  A    T      I    O  O  N N N S     |");
printf("\n| C     O  O  N N N  G     R  R  A  A    T    U  U  L     A  A    T    U  U  L     A  A    T      I    O  O  N N N S     |");
printf("\n| C     O  O  N N N  G GG  RRR   AAAA    T    U  U  L     AAAA    T    U  U  L     AAAA    T      I    O  O  N N N SSSS  |");
printf("\n| C     O  O  N N N  G  G  RR    A  A    T    U  U  L     A  A    T    U  U  L     A  A    T      I    O  O  N N N    S  |");
printf("\n| C     O  O  N N N  G  G  R R   A  A    T    U  U  L     A  A    T    U  U  L     A  A    T      I    O  O  N N N    S  |");
printf("\n|  CCC   OO   N  NN   GG   R  R  A  A    T     UU   LLLL  A  A    T     UU   LLLL  A  A    T    IIIII   OO   N  NN SSSS  |");
printf("\n|                                                                                                                        |");
printf("\n|                                                                                                                        |");
printf("\n|                                     L     EEEE  VV     VV EEEE  L                                                      |");
printf("\n|                                     L     EEEE   V     V  EEEE  L                                                      |");
printf("\n|                                     L     E      VV   VV  E     L                                                      |");
printf("\n|                                     L     EEEE    V   V   EEEE  L                                                      |");
printf("\n|                                     L     E       VV VV   E     L                                                      |");
printf("\n|                                     L     EEEE     VVV    EEEE  L                                                      |");
printf("\n|                                     LLLL  EEEE      V     EEEE  LLLL                                                   |");
printf("\n|                                                                                                                        |");
printf("\n|                                                                                                                        |");
printf("\n|                           CCC   OO   M M   M M  PPP   L     EEEE  TTTTT  EEEE  DDD                                     |");
printf("\n|                          C     O  O  M MM MM M  P  P  L     EEEE    T    EEEE  D  D                                    |");
printf("\n|                          C     O  O  M  MMM  M  P  P  L     E       T    E     D  D                                    |");
printf("\n|                          C     O  O  M   M   M  PPP   L     EEEE    T    EEEE  D  D                                    |");
printf("\n|                          C     O  O  M       M  P     L     E       T    E     D  D                                    |");
printf("\n|                          C     O  O  M       M  P     L     EEEE    T    EEEE  D  D                                    |");
printf("\n|                           CCC   OO   M       M  P     LLLL  EEEE    T    EEEE  DDD                                     |");
printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
sleep(5);
 }
 void groupname(){
     system("cls");
 printf("\n|^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|");
 printf("\n|  CCC   OO   H  H  EEEE  RRR   EEEE  NN  N  TTTTT                   |");
 printf("\n| C     O  O  H  H  EEEE  R  R  EEEE  N N N    T                     |");
 printf("\n| C     O  O  H  H  E     R  R  E     N N N    T                     |");
 printf("\n| C     O  O  HHHH  EEEE  RRR   EEEE  N N N    T                     |");
 printf("\n| C     O  O  H  H  E     RR    E     N N N    T                     |");
 printf("\n| C     O  O  H  H  EEEE  R R   EEEE  N N N    T                     |");
 printf("\n|  CCC   OO   H  H  EEEE  R  R  EEEE  N  NN    T                     |");
 printf("\n|                                                                    |");
 printf("\n|                                                                    |");
 printf("\n|                   BBB   U  U  IIIII  L     DDD   EEEE  RRR   SSSS  |");
 printf("\n|                   B  B  U  U    I    L     D  D  EEEE  R  R  S     |");
 printf("\n|                   B  B  U  U    I    L     D  D  E     R  R  S     |");
 printf("\n|                   BBB   U  U    I    L     D  D  EEEE  RRR   SSSS  |");
 printf("\n|                   B  B  U  U    I    L     D  D  E     RR       S  |");
 printf("\n|                   B  B  U  U    I    L     D  D  EEEE  R R      S  |");
 printf("\n|                   BBB   UUUU  IIIII  LLLL  DDD   EEEE  R  R  SSSS  |");
 printf("\n|                                                                    |");
 printf("\n|                                                                    |");
 printf("\n| PPP   RRR   EEEE  SSSS  EEEE  NN  N  TTTTT ||  SSSS                |");
 printf("\n| P  P  R  R  EEEE  S     EEEE  N N N    T  _||  S                   |");
 printf("\n| P  P  R  R  E     S     E     N N N    T       S                   |");
 printf("\n| PPP   RRR   EEEE  SSSS  EEEE  N N N    T       SSSS                |");
 printf("\n| P     RR    E        S  E     N N N    T          S                |");
 printf("\n| P     R R   EEEE     S  EEEE  N N N    T          S                |");
 printf("\n| P     R  R  EEEE  SSSS  EEEE  N  NN    T       SSSS                |");
 printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
 sleep(2);
 }
