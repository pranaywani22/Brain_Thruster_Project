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
void stage1();
void stage2();
void stage3();
void stage4();
int random();
void groupname();
void l11();
void l12();
void l13();
void l14();
void l21();
void l22();
void l23();
void l24();
void l31();
void l32();
void l33();
void l34();
void l41();
void l42();
void l43();
void l44();
void lose();
void gamename();
void congratulations();
void endgame();
int main(){
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
else if(h%5==0){
    case1=3;
}
else
case1=4;

return(case1);
}
void stage1(){
l21();}
void stage2(){
l21();
}
void stage3(){
l21();
}
void stage4(){
l41();
}
void l11(){
    system("cls");
    int live=5;
    char ch='i',ch1='I',ch2='n',ch3='N',ch4='i',ch5='I';
printf("\n Welcome to the level 1");
label1:
    printf("\nA small hint for you to make your life easy.");
    printf("\nThe word below is a country surrounded by 2 seas.");
    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,             score=%d         your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |    _ _ D _ A                                           |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch);
    ch1=ch;
    if(ch=='i'|| ch1=='I')
    {score=score+5;
        label2:
    system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d      |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |    I _ D _ A                                           |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch2);
    ch3=ch2;
    if(ch2=='n'||ch3=='N')
    {score=score+10;
        label3:
        system("cls");

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
    {score=score+15;
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
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
       {
       if(score>=20)
        l12();
        else
        {
         system("cls");
         levels1();
        }
        }
    else
        endgame();
    }
    else{
         system("cls");
        live--;
        if(live==0)
           {
        lose();
       levels1();
      }
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
      {
        lose();
       levels1();
      }
        else
            {score=score-4;
            goto label2;}
    }}
    else
    {
        system("cls");
        live--;
        if(live==0)
       {
        lose();
       levels1();
      }
        else
            {score=score-2;
         goto label1;}
    }
}
void l12(){
 system("cls");
  int live=6;
    char ch='s',ch1='S',ch2='r',ch3='R',ch4='s',ch5='S',ch6='h',ch7='H',ch8='p',ch9='P';
printf("\n Welcome to the level 2");
label1:
    printf("A small hint for you to make your life easy.");
    printf("The word below is a SpaceX's Launch Vehicle");
    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,             score=%d         your life =%d       |",score,live);
    printf("\n | Level 2 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q2.                                                    |");
    printf("\n |    _ T A _ _ _ I _                                     |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch);
    ch1=ch;
    if(ch=='s'|| ch1=='S')
    { score=score+5;
        label2:
    system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q2.                                                    |");
    printf("\n |     S T A _ _ _ I _                                    |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf("%c",&ch2);
    ch3=ch2;
    if(ch2=='r'||ch3=='R')
    {score=score+10;
        label3:
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q2.                                                    |");
    printf("\n |     S T A R _ _ _ I _                                  |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch4);
    ch5=ch4;
    if(ch4=='s'||ch5=='S')
    {score=score+15;
        label4:
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |      S T A R S _ _ I _                                 |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
     scanf(" %c",&ch6);
    ch7=ch6;
    if(ch6=='h'||ch7=='H')
        {score=score+20;
            label5:
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |      S T A R S H I _                               |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
     scanf(" %c",&ch8);
    ch9=ch8;
    if(ch8=='p'||ch9=='P')
         {
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
    printf("\n Want to play the next level Y/n");
    scanf(" %c",&choice);
    if (choice == 'y'|| choice =='Y')
        levels1();
    else
        endgame();
    }
      else{
         system("cls");
        live--;
        if(live==0)
    {
        lose();
       levels1();
      }
        else
            {score=score-10;
          goto label5;}
    }
    }
     else{
         system("cls");
        live--;
        if(live==0)
   {
        lose();
       levels1();
      }
        else
            {score=score-8;
          goto label4;}
    }
    }
    else{
         system("cls");
        live--;
        if(live==0)
   {
        lose();
       levels1();
      }
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
  {
        lose();
       levels1();
      }
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
      {
        lose();
       levels1();
      }
        else
            {score=score-2;
         goto label1;}
    }
}
void l13(){
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
    {score=score+5;
        label2:
    system("cls");

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
    {score=score+10;
        label3:
        system("cls");

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
    {score=score+15;
        label4:
        system("cls");

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
        {score=score+20;
            label5:
        system("cls");

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
    {score=score+25;
            label6:
        system("cls");

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
    {score=score+30;
            label7:
        system("cls");

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
    {score=score+40;
            label8:
        system("cls");

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
  {
        lose();
       levels1();
      }
        else
            {score--;
          goto label7;}
    }
        }
        else{
         system("cls");
        live--;
        if(live==0)
     {
        lose();
       levels1();
      }
        else
            {score=score-8;
          goto label6;}
    }
        }
else{
         system("cls");
        live--;
        if(live==0)
   {
        lose();
       levels1();
      }
        else
            {score=score-8;
          goto label5;}
    }
    }
     else{
         system("cls");
        live--;
        if(live==0)
   {
        lose();
       levels1();
      }
        else
            {score=score-8;
          goto label4;}
    }
    }
    else{
         system("cls");
        live--;
        if(live==0)
         {
        lose();
       levels1();
      }
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
       {
        lose();
       levels1();
      }
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
        {
        lose();
       levels1();
      }
        else
            {score=score-2;
         goto label1;}
    }
}
void l14(){
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
  {score=score+5;
        label2:
    system("cls");
    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q4.                                                    |");
    printf("\n |     M I _ R _ S _ _ P E                                |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch2);
    ch3=ch2;
    if(ch2=='C'||ch3=='c')
    {score=score+10;
        label3:
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q4.                                                    |");
    printf("\n |     M I C R _ S _ _ P E                                |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch4);
    ch5=ch4;
    if(ch4=='o'||ch5=='O')
    {  score=score+15;
        label4:
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q4.                                                    |");
    printf("\n |      M I C R O S _ _ P E                               |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
     scanf(" %c",&ch2);
    ch3=ch2;
    if(ch2=='c'||ch3=='C')
        {score=score+20;
            label5:
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q4.                                                    |");
    printf("\n |      M I C R O S C _ P E                               |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
     scanf(" %c",&ch4);
    ch5=ch4;
    if(ch4=='o'||ch5=='O')
         {score=score+20;
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q4.                                                    |");
    printf("\n |      M I C R O S C O P E                               |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");

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
    printf("\n Ohk Be ready to Make your Brain sprint to its Max capacity");
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
    levels1();
    else
        {
            system("cls");
            printf("\n You Are not Eligible for this level play any smaller level again to increase your score");
         printf("\n Your score is %d and required score is 75",score);

        levels1();}
    break;

default:
    printf("\n Enter a valid Number");
    break;
}
void l14(){
printf("\n to be updated soon");
}
}
void endgame(){
int rate;
printf("\n Thank you ");
printf("\n Play Again");
printf("\n Do Rate the game out of 5");
scanf("%d",rate);
if(rate==1)
    printf("\n WE WILL DEFINITELY TRY TO FULFILL UR ACPECTATIONS");
else if(rate==2)
    printf("\n WE WORK HARD TO FULLFILL YOUR ACCEPECTTIONS");
else if(rate==3)
    printf("\n Thank you");
else if (rate==4)
    printf("\n Thank you");
else (rate ==5);
printf("\n Thank you");
}
void l21(){
  system("cls");
    int live=5;
    char ch='b',ch1='B',ch2='a',ch3='A',ch4='i',ch5='I';
    printf("\n Welcome to the level 1");
    label1:
    printf("A small hint for you to make your life easy.");
    printf("The word below is a country that produces largest coffee in the world.");
    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,             score=%d         your life =%d      |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |    _ R _ Z _ L                                         |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch);
    ch1=ch;
    if(ch=='b'|| ch1=='B')
    {score=score+5;
        label2:
    system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d      |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |    B R _ Z _ L                                         |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch2);
    ch3=ch2;
    if(ch2=='a'||ch3=='A')
    {score=score+10;
        label3:
        system("cls");

    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d      |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |    B R A Z _ L                                         |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch4);
    ch5=ch4;
    if(ch4=='i'||ch5=='I')
    {score=score+15;
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d      |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |    B R A Z I L                                         |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    congratulations();
    printf("\n Want to play the next level Y/n");
    scanf(" %c",&choice);
    if (choice == 'y'|| choice =='Y')
        l22();
    else
        endgame();
    }
    else{
         system("cls");
        live--;
        if(live==0)
   {
        lose();
       levels2();
      }
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
     {
        lose();
       levels2();
      }
        else
            {score=score-4;
            goto label2;}
    }}
    else
    {
        system("cls");
        live--;
        if(live==0)
  {
        lose();
       levels2();
      }
        else
            {score=score-2;
         goto label1;}
    }
}
void l22(){
system("cls");
  int live=6;
    char ch='a',ch1='A',ch2='r',ch3='R',ch4='e',ch5='E',ch6='n',ch7='N',ch8='e',ch9='E';
printf("\n Welcome to the level 2");
label1:
    printf("A small hint for you to make your life easy.");
    printf("This word represents center of mass of a system, often used to describe celestial bodies and their motion.");
    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,             score=%d         your life =%d       |",score,live);
    printf("\n | Level 2 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q2.                                                    |");
    printf("\n |    B _ _ Y C _ _ T _ R                                 |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch);
    ch1=ch;
    if(ch=='a'|| ch1=='A')
    { score=score+5;
        label2:
    system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q2.                                                    |");
    printf("\n |     B A _ Y C _ _ T _ R                                    |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf("%c",&ch2);
    ch3=ch2;
    if(ch2=='r'||ch3=='R')
    {score=score+10;
        label3:
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q2.                                                    |");
    printf("\n |     B A R Y C _ _ T _ R                                 |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch4);
    ch5=ch4;
    if(ch4=='e'||ch5=='E')
    {score=score+15;
        label4:
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q2.                                                    |");
    printf("\n |      B A R Y C E _ T _ R                              |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
     scanf(" %c",&ch6);
    ch7=ch6;
    if(ch6=='n'||ch7=='N')
        {score=score+20;
            label5:
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |      B A R Y C E N T _ R                               |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
     scanf(" %c",&ch8);
    ch9=ch8;
    if(ch8=='e'||ch9=='E')
         {
        system("cls");
    score=score+20;
     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q2.                                                    |");
    printf("\n |      B A R Y C E N T E R                                   |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    congratulations();
    printf("\n Want to play the next level Y/n");
    scanf(" %c",&choice);
    if (choice == 'y'|| choice =='Y')
        l23();
    else
        endgame();
    }
      else{
         system("cls");
        live--;
        if(live==0)
     {
        lose();
       levels2();
      }
        else
            {score=score-10;
          goto label5;}
    }
    }
     else{
         system("cls");
        live--;
        if(live==0)
     {
        lose();
       levels2();
      }
        else
            {score=score-8;
          goto label4;}
    }
    }
    else{
         system("cls");
        live--;
        if(live==0)
    {
        lose();
       levels2();
      }
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
     {
        lose();
       levels2();
      }
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
 {
        lose();
       levels2();
      }
        else
            {score=score-2;
         goto label1;}
    }
}
void l23(){
system("cls");
  int live=6;
    char ch='o',ch1='O',ch2='a',ch3='A',ch4='n',ch5='N',ch6='e',ch7='E',ch8='s',ch9='S',ch10='u',ch11='U',ch12='r',ch13='R';
printf("\n Welcome to the level 2");
label1:
    printf("\nA small hint for you to make your life easy.");
    printf("\nThis city has South Africa's largest gold and diamond mines.");
    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,             score=%d         your life =%d       |",score,live);
    printf("\n | Level 2 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q3.                                                    |");
    printf("\n |     J _ H _ N _ _ _ B _ _ G                            |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch);
    ch1=ch;
    if(ch=='o'|| ch1=='O')
    {score=score+5;
        label2:
    system("cls");

    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q4.                                                    |");
    printf("\n |    J O H _ N _ _ _ B _ _ G                               |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch2);
    ch3=ch2;
    if(ch2=='a'||ch3=='A')
    {score=score+10;
        label3:
        system("cls");

    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q4.                                                    |");
    printf("\n |     J O H A N _ _ _ B _ _ G                              |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch4);
    ch5=ch4;
    if(ch4=='n'||ch5=='N')
    {score=score+15;
        label4:
        system("cls");

    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q4.                                                    |");
    printf("\n |      J O H A N N _ _ B _ _ G                             |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
     scanf(" %c",&ch6);
    ch7=ch6;
    if(ch6=='e'||ch7=='E')
        {score=score+20;
            label5:
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q4.                                                    |");
    printf("\n |     J O H A N N E _ B _ _ G                       |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch8);
    ch9=ch8;
    if(ch8=='s'||ch9=='S')
    {score=score+25;
            label6:
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |     J O H A N N E S B _ _ G                            |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch10);
    ch11=ch10;
    if(ch10=='u'||ch11=='U')
    {
        score=score+30;
            label7:
        system("cls");
    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |     J O H A N N E S B U _ G                            |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch12);
if(ch12=='r'||ch13=='R')
    {score=score+40;
            label8:
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |     J O H A N N E S B U R G                            |");
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
     {
        lose();
       levels2();
      }
        else
            {score--;
          goto label7;}
    }
        }
        else{
         system("cls");
        live--;
        if(live==0)
    {
        lose();
       levels2();
      }
        else
            {score=score-8;
          goto label6;}
    }
        }
else{
         system("cls");
        live--;
        if(live==0)
    {
        lose();
       levels2();
      }
        else
            {score=score-8;
          goto label5;}
    }
    }
     else{
         system("cls");
        live--;
        if(live==0)
    {
        lose();
       levels2();
      }
        else
            {score=score-8;
          goto label4;}
    }
    }
    else{
         system("cls");
        live--;
        if(live==0)
    {
        lose();
       levels2();
      }
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
    {
        lose();
       levels2();
      }
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
    lose();
        else
            {score=score-2;
         goto label1;}
    }
}
void l24(){
system("cls");
  int live=6;
    char ch='a',ch1='A',ch2='e',ch3='E',ch4='i',ch5='I',ch6='o',ch7='O',ch8='h',ch9='H',ch10='g',ch11='G',ch12='e',ch13='E';
printf("\n Welcome to the level 2");
label1:
    printf("A small hint for you to make your life easy.");
    printf("This word is a virus that infects and replicates within bacteria and archaea.");
    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,             score=%d         your life =%d       |",score,live);
    printf("\n | Level 2 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q4.                                                    |");
    printf("\n |     B _ C T _ R _ _P _ A _ _                           |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch);
    ch1=ch;
    if(ch=='a'|| ch1=='A')
    {score=score+5;
        label2:
    system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q4.                                                    |");
    printf("\n |    B A C T _ R _ _P _ A _ _                            |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch2);
    ch3=ch2;
    if(ch2=='e'||ch3=='E')
    {score=score+10;
        label3:
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q4.                                                    |");
    printf("\n |     B A C T E R _ _P _ A _ _                           |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch4);
    ch5=ch4;
    if(ch4=='i'||ch5=='I')
    {score=score+15;
        label4:
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q4.                                                    |");
    printf("\n |      B A C T E R I _ P _ A _ _                         |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
     scanf(" %c",&ch6);
    ch7=ch6;
    if(ch6=='o'||ch7=='O')
        {score=score+20;
            label5:
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q4.                                                    |");
    printf("\n |     B A C T E R I O P _ A _ _                          |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch8);
    ch9=ch8;
    if(ch8=='h'||ch9=='H')
    {score=score+25;
            label6:
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |     B A C T E R I O P H A _ _                          |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch10);
    ch11=ch10;
    if(ch10=='g'||ch11=='G')
    {score=score+30;
            label7:
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |     B A C T E R I O P H A G _                          |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch12);
if(ch12=='e'||ch13=='E')
    {score=score+40;
            label8:
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |     B A C T E R I O P H A G E                          |");
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
    {
        lose();
       levels2();
      }
        else
            {score--;
          goto label7;}
    }
        }
        else{
         system("cls");
        live--;
        if(live==0)
    {
        lose();
       levels2();
      }
        else
            {score=score-8;
          goto label6;}
    }
        }
else{
         system("cls");
        live--;
        if(live==0)
    {
        lose();
       levels2();
      }
        else
            {score=score-8;
          goto label5;}
    }
    }
     else{
         system("cls");
        live--;
        if(live==0)
     {
        lose();
       levels2();
      }
        else
            {score=score-8;
          goto label4;}
    }
    }
    else{
         system("cls");
        live--;
        if(live==0)
    {
        lose();
       levels2();
      }
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
    {
        lose();
       levels2();
      }
            {score=score-4;
            goto label2;}
    }
    }
    else
    {
        system("cls");
        live--;
        if(live==0)
   {
        lose();
       levels2();
      }
        else
            {score=score-2;
         goto label1;}
    }
}
void l31(){
 system("cls");
    int live=5;
    char ch='e',ch1='E',ch2='g',ch3='G',ch4='u',ch5='U';
printf("\n Welcome to the level 1");
label1:
    printf("\nA small hint for you to make your life easy.");
    printf("\nThe word below is a country often associated with waffles.");
    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,             score=%d         your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |    B _ L _ I _ M                                       |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch);
    ch1=ch;
    if(ch=='e'|| ch1=='E')
    {score=score+5;
        label2:
    system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |    B E L _ I _ M                                       |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch2);
    ch3=ch2;
    if(ch2=='g'||ch3=='G')
    {score=score+10;
        label3:
        system("cls");

    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |    B E L G I _ M                                       |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch4);
    ch5=ch4;
    if(ch4=='u'||ch5=='U')
    {score=score+15;
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |    B E L G I U M                                       |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    congratulations();
    printf("\n Want to play the next level Y/n");
    scanf(" %c",&choice);
    if (choice == 'y'|| choice =='Y')
       {
       if(score>=20)
        l12();
        else
        {
         system("cls");
         levels1();
        }
        }
    else
        endgame();
    }
    else{
         system("cls");
        live--;
        if(live==0)
           {
        lose();
       levels1();
      }
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
      {
        lose();
       levels1();
      }
        else
            {score=score-4;
            goto label2;}
    }}
    else
    {
        system("cls");
        live--;
        if(live==0)
       {
        lose();
       levels1();
      }
        else
            {score=score-2;
         goto label1;}
    }
}

void l32(){
printf("\n work in progress");
}
void l33(){
system("cls");
  int live=9;
    char ch='a',ch1='A',ch2='u',ch3='U',ch4='n',ch5='N',ch6='g',ch7='G',ch8='a',ch9='A',ch10='a',ch11='A',ch12='d',ch13='D';
printf("\n Welcome to the level 2");
label1:
    printf("\nA small hint for you to make your life easy.");
    printf("\nThe word below is a structure that helps cells maintain their shape and internal organization.");
    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,             score=%d         your life =%d       |",score,live);
    printf("\n | Level 2 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q2.                                                    |");
    printf("\n |     _ _ R A _ _ _ B _ _                                |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf("%c",&ch);
    ch1=ch;
    if(ch=='a'|| ch1=='A')
    {score=score+5;
        label2:
    system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q2.                                                    |");
    printf("\n |    A _ R A _ _ _ B _ _                             |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch2);
    ch3=ch2;
    if(ch2=='u'|| ch3=='U')
    {score=score+10;
        label3:
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q2.                                                    |");
    printf("\n |     A U R A _ _ _ B _ _                                |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch4);
    ch5=ch4;
    if(ch4=='n'|| ch5=='N')
    {score=score+15;
        label4:
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |     A U R A N _ _ B _ _                                |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
     scanf(" %c",&ch6);
    ch7=ch6;
    if(ch6=='g' || ch7=='G')
        {score=score+20;
            label5:
        system("cls");
    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |     A U R A N G _ B _ _                            |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch8);
    ch9=ch8;
    if(ch8=='a'|| ch9=='A')
    {score=score+25;
            label6:
        system("cls");

    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |     A U R A N G A B _ _                            |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch10);
    ch11=ch10;
    if(ch10=='a'||ch11=='A')
    {score=score+30;
            label7:
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |     A U R A N G A B A _                        |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch12);
if(ch12=='d'||ch13=='D')
    {score=score+40;
            label8:
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |     A U R A N G A B A D                                |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    congratulations();
    printf("\n Want to play the next level Y/n");
    scanf(" %c",&choice);
    if (choice=='y'|| choice =='Y')
        instructions();
    else
        endgame();
    }
    else{
         system("cls");
        live--;
        if(live==0)
  {
        lose();
       levels1();
      }
        else
            {score--;
          goto label7;}
    }
        }
        else{
         system("cls");
        live--;
        if(live==0)
     {
        lose();
       levels1();
      }
        else
            {score=score-8;
          goto label6;}
    }
        }
else{
         system("cls");
        live--;
        if(live==0)
   {
        lose();
       levels1();
      }
        else
            {score=score-8;
          goto label5;}
    }
    }
     else{
         system("cls");
        live--;
        if(live==0)
   {
        lose();
       levels1();
      }
        else
            {score=score-8;
          goto label4;}
    }
    }
    else{
         system("cls");
        live--;
        if(live==0)
         {
        lose();
       levels1();
      }
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
       {
        lose();
       levels1();
      }
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
        {
        lose();
       levels1();
      }
        else
            {score=score-2;
         goto label1;}
    }
}
void l34(){
printf("\n work in progress");
}
void l41(){
system("cls");
    int live=5;
    char ch='a',ch1='A',ch2='t',ch3='T',ch4='i',ch5='I';
printf("\n Welcome to the level 1");
label1:
    printf("\nA small hint for you to make your life easy.");
    printf("\nThe word below is a country surrounded by 2 seas.");
    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,             score=%d         your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |    _ U S _ R _ A                                           |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch);
    ch1=ch;
    if(ch=='a'|| ch1=='A')
    {score=score+5;
        label2:
    system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d      |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |    A U S _ R _ A                                           |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch2);
    ch3=ch2;
    if(ch2=='t'||ch3=='T')
    {score=score+10;
        label3:
        system("cls");

    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d      |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |    A U S T R _ A                                           |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch4);
    ch5=ch4;
    if(ch4=='i'||ch5=='I')
    {score=score+15;
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |    A U S T R I A                                       |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    congratulations();
    printf("\n Want to play the next level Y/n");
    scanf(" %c",&choice);
    if (choice == 'y'|| choice =='Y')
       {
       if(score>=20)
        l12();
        else
        {
         system("cls");
         levels1();
        }
        }
    else
        endgame();
    }
    else{
         system("cls");
        live--;
        if(live==0)
           {
        lose();
       levels1();
      }
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
      {
        lose();
       levels1();
      }
        else
            {score=score-4;
            goto label2;}
    }}
    else
    {
        system("cls");
        live--;
        if(live==0)
       {
        lose();
       levels1();
      }
        else
            {score=score-2;
         goto label1;}
    }
}
void l42(){
system("cls");
  int live=5;
    char ch='h',ch1='H',ch2='y',ch3='Y',ch4='g',ch5='G',ch6='a',ch7='A',ch8='a',ch9='A';
printf("\n Welcome to the level 2");
label1:
    printf("A small hint for you to make your life easy.");
    printf("The word below is a SpaceX's Launch Vehicle");
    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,             score=%d         your life =%d       |",score,live);
    printf("\n | Level 2 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q2.                                                    |");
    printf("\n |    _ _ P E R _ _ L _ X Y                                     |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch);
    ch1=ch;
    if(ch=='h'|| ch1=='H')
    { score=score+5;
        label2:
    system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q2.                                                    |");
    printf("\n |     H _ P E R _ _ L _ X Y                                    |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf("%c",&ch2);
    ch3=ch2;
    if(ch2=='y'||ch3=='Y')
    {score=score+10;
        label3:
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q2.                                                    |");
    printf("\n |     H Y P E R _ _ L _ X Y                                  |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch4);
    ch5=ch4;
    if(ch4=='g'||ch5=='G')
    {score=score+15;
        label4:
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |      H Y P E R G _ L _ X Y                             |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
     scanf(" %c",&ch6);
    ch7=ch6;
    if(ch6=='a'||ch7=='A')
        {score=score+20;
            label5:
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q1.                                                    |");
    printf("\n |      H Y P E R G A L _ X Y                             |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
     scanf(" %c",&ch8);
    ch9=ch8;
    if(ch8=='a'||ch9=='A')
         {
        system("cls");
    score=score+20;
     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q2.                                                    |");
    printf("\n |      H Y P E R G A L A X Y                             |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    congratulations();
    printf("\n Want to play the next level Y/n");
    scanf(" %c",&choice);
    if (choice == 'y'|| choice =='Y')
        levels1();
    else
        endgame();
    }
      else{
         system("cls");
        live--;
        if(live==0)
    {
        lose();
       levels1();
      }
        else
            {score=score-10;
          goto label5;}
    }
    }
     else{
         system("cls");
        live--;
        if(live==0)
   {
        lose();
       levels1();
      }
        else
            {score=score-8;
          goto label4;}
    }
    }
    else{
         system("cls");
        live--;
        if(live==0)
   {
        lose();
       levels1();
      }
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
  {
        lose();
       levels1();
      }
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
      {
        lose();
       levels1();
      }
        else
            {score=score-2;
         goto label1;
         }
    }
}
void l43(){
int live=7;
system("cls");
    char ch='h',ch1='H',ch2='i',ch3='I',ch4='a',ch5='A',ch6='d',ch7='D',ch8='p',ch9='P',ch10='h',ch11='H',ch12='a',ch13='A';
printf("\n Welcome to the level 2");
label1:
    printf("\nA small hint for you to make your life easy.");
    printf("\nThis city has South Africa's largest gold and diamond mines.");
    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,             score=%d         your life =%d       |",score,live);
    printf("\n | Level 3 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q3.                                                    |");
    printf("\n |     P _ _ L _ _ E L _ _ I _                            |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch);
    ch1=ch;
    if(ch=='h'|| ch1=='H')
    {score=score+5;
        label2:
    system("cls");

    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 3 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q3.                                                    |");
    printf("\n |    P H _ L _ _ E L _ _ I _                             |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch2);
    ch3=ch2;
    if(ch2=='i'||ch3=='I')
    {score=score+10;
        label3:
        system("cls");

    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 3 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q3.                                                    |");
    printf("\n |     P H I L _ _ E L _ _ I _                            |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch4);
    ch5=ch4;
    if(ch4=='a'||ch5=='A')
    {score=score+15;
        label4:
        system("cls");

    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 3 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q3.                                                    |");
    printf("\n |      P H I L A _ E L _ _ I _                           |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
     scanf(" %c",&ch6);
    ch7=ch6;
    if(ch6=='d'||ch7=='D')
        {score=score+20;
            label5:
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q3.                                                    |");
    printf("\n |     P H I L A D E L _ _ I _                            |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch8);
    ch9=ch8;
    if(ch8=='p'||ch9=='P')
    {score=score+25;
            label6:
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q3.                                                    |");
    printf("\n |     P H I L A D E L P _ I _                            |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch10);
    ch11=ch10;
    if(ch10=='h'||ch11=='H')
    {
        score=score+30;
            label7:
        system("cls");
    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q3.                                                    |");
    printf("\n |     P H I L A D E L P H I _                            |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch12);
if(ch12=='a'||ch13=='A')
    {score=score+40;
            label8:
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 1 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q3.                                                    |");
    printf("\n |    P H I L A D E L P H I A                             |");
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
     {
        lose();
       levels2();
      }
        else
            {score--;
          goto label7;}
    }
        }
        else{
         system("cls");
        live--;
        if(live==0)
    {
        lose();
       levels2();
      }
        else
            {score=score-8;
          goto label6;}
    }
        }
else{
         system("cls");
        live--;
        if(live==0)
    {
        lose();
       levels2();
      }
        else
            {score=score-8;
          goto label5;}
    }
    }
     else{
         system("cls");
        live--;
        if(live==0)
    {
        lose();
       levels2();
      }
        else
            {score=score-8;
          goto label4;}
    }
    }
    else{
         system("cls");
        live--;
        if(live==0)
    {
        lose();
       levels2();
      }
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
    {
        lose();
       levels2();
      }
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
    lose();
        else
            {score=score-2;
         goto label1;}
    }
}
void l44(){
int live=7;
system("cls");
    char ch='m',ch1='M',ch2='e',ch3='E',ch4='m',ch5='M',ch6='p',ch7='P',ch8='h',ch9='H',ch10='o',ch11='O',ch12='i',ch13='I';
printf("\n Welcome to the level 2");
label1:
    printf("\nA small hint for you to make your life easy.");
    printf("\nThis city has South Africa's largest gold and diamond mines.");
    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,             score=%d         your life =%d       |",score,live);
    printf("\n | Level 3 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q3.                                                    |");
    printf("\n |     _ _ T A _ O R _ _ _ S _ S                            |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch);
    ch1=ch;
    if(ch=='m'|| ch1=='M')
    {score=score+5;
        label2:
    system("cls");

    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 3 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q3.                                                    |");
    printf("\n |    M _ T A _ O R _ _ _ S _ S                             |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch2);
    ch3=ch2;
    if(ch2=='e'||ch3=='E')
    {score=score+10;
        label3:
        system("cls");

    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 4 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q4.                                                    |");
    printf("\n |     M E T A _ O R _ _ _ S _ S                            |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch4);
    ch5=ch4;
    if(ch4=='m'||ch5=='M')
    {score=score+15;
        label4:
        system("cls");

    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 4 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q4.                                                    |");
    printf("\n |      M E T A M O R _ _ _ S _ S                           |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
     scanf(" %c",&ch6);
    ch7=ch6;
    if(ch6=='p'||ch7=='P')
        {score=score+20;
            label5:
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 4 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q4.                                                    |");
    printf("\n |     M E T A M O R P _ _ S _ S                            |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch8);
    ch9=ch8;
    if(ch8=='h'||ch9=='H')
    {score=score+25;
            label6:
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 4 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q4.                                                    |");
    printf("\n |     M E T A M O R P H _ S _ S                            |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch10);
    ch11=ch10;
    if(ch10=='o'||ch11=='O')
    {
        score=score+30;
            label7:
        system("cls");
    printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 4 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q4.                                                    |");
    printf("\n |     M E T A M O R P H O S _ S                            |");
    printf("\n |                                                        |");
    printf("\n |                                                        |");
    printf("\n ----------------------------------------------------------");
    printf("\n Enter the first word you would expect to be:- ");
    scanf(" %c",&ch12);
if(ch12=='i'||ch13=='I')
    {score=score+40;
            label8:
        system("cls");

     printf("\n ----------------------------------------------------------");
    printf("\n |    Hi,              score=%d        your life =%d       |",score,live);
    printf("\n | Level 4 starts                                         |");
    printf("\n |                                                        |");
    printf("\n | Q4.                                                    |");
    printf("\n |    M E T A M O R P H O S I S                           |");
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
     {
        lose();
       levels2();
      }
        else
            {score--;
          goto label7;}
    }
        }
        else{
         system("cls");
        live--;
        if(live==0)
    {
        lose();
       levels2();
      }
        else
            {score=score-8;
          goto label6;}
    }
        }
else{
         system("cls");
        live--;
        if(live==0)
    {
        lose();
       levels2();
      }
        else
            {score=score-8;
          goto label5;}
    }
    }
     else{
         system("cls");
        live--;
        if(live==0)
    {
        lose();
       levels2();
      }
        else
            {score=score-8;
          goto label4;}
    }
    }
    else{
         system("cls");
        live--;
        if(live==0)
    {
        lose();
       levels2();
      }
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
    {
        lose();
       levels2();
      }
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
    lose();
        else
            {score=score-2;
         goto label1;}
    }
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
default:

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
default:

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
default:

    printf("\n Enter a valid Number");
    break;
}
}
void gamename(){
    system("cls");
printf("\nBBBB    RRRR    AAAAA   IIIIII   NN    N  ");
printf("\nB   B   R   R   A   A      I     N N   N  ");
printf("\nB   B   R   R   A   A      I     N  N  N  ");
printf("\nBBBB    RRRR    AAAAA      I     N  N  N  ");
printf("\nB   B   RR      A   A      I     N  N  N  ");
printf("\nB   B   R R     A   A      I     N   N N  ");
printf("\nBBBB    R  R    A   A   IIIIII   N    NN  ");
printf("\n");
printf("\n");
printf("\n             TTTTTT   H   H   RRRR    U   U   SSSSS   TTTTTT   EEEE   RRRR  ");
printf("\n                T     H   H   R   R   U   U   S         T      EEEE   R   R ");
printf("\n                T     H   H   R   R   U   U   S         T      E      R   R ");
printf("\n                T     HHHHH   RRRR    U   U   SSSSS     T      EEEE   RRRR  ");
printf("\n                T     H   H   RR      U   U       S     T      E      RR    ");
printf("\n                T     H   H   R R     U   U       S     T      EEEE   R R   ");
printf("\n                T     H   H   R  R    UUUUU   SSSSS     T      EEEE   R  R  ");
sleep(1);
}
void congratulations(){
    system("cls");
printf("\n/^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|");
printf("\n|  CCCC    OOO    NN    N   GGGGG   RRRR   AAAAA   TTTTTT   U   U   L      AAAAA   TTTTTT   U   U   L       AAAAA   TTTTTT   IIIIII   OOO    NN    N   SSSSS  |");
printf("\n| C       O   O   N N   N   G       R   R  A   A      T     U   U   L      A   A      T     U   U   L       A   A     T        I     O   O   N N   N   S      |");
printf("\n| C       O   O   N  N  N   G       R   R  A   A      T     U   U   L      A   A      T     U   U   L       A   A     T        I     O   O   N  N  N   S      |");
printf("\n| C       O   O   N  N  N   G GGG   RRRR   AAAAA      T     U   U   L      AAAAA      T     U   U   L       AAAAA     T        I     O   O   N  N  N   SSSSS  |");
printf("\n| C       O   O   N  N  N   G   G   RR     A   A      T     U   U   L      A   A      T     U   U   L       A   A     T        I     O   O   N  N  N       S  |");
printf("\n| C       O   O   N   N N   G   G   R R    A   A      T     U   U   L      A   A      T     U   U   L       A   A     T        I     O   O   N   N N       S  |");
printf("\n|  CCCC    OOO    N    NN    GGG    R  R   A   A      T      UUU    LLLLL  A   A      T      UUU    LLLLL   A   A     T     IIIIIII   OOO    N    NN   SSSSS  |");
printf("\n|                                                                                                                                                             |");
printf("\n|                                                                                                                                                             |");
printf("\n|                                                        L      EEEEE   VV      VV   EEEEE   L                                                                |");
printf("\n|                                                        L      EEEEE    V      V    EEEEE   L                                                                |");
printf("\n|                                                        L      E        VV    VV    E       L                                                                |");
printf("\n|                                                        L      EEEEE     V    V     EEEEE   L                                                                |");
printf("\n|                                                        L      E         VV VV      E       L                                                                |");
printf("\n|                                                        L      EEEEE      VVV       EEEEE   L                                                                |");
printf("\n|                                                        LLLLL  EEEEE       V        EEEEE   LLLLL                                                            |");
printf("\n|                                                                                                                                                             |");
printf("\n|                                                                                                                                                             |");
printf("\n|                                        CCCC   OOO    MM      MM   PPPP    L       EEEEE   TTTTTT   EEEEE   DDDD                                             |");
printf("\n|                                       C      O   O   M MM  MM M   P   P   L       EEEEE      T     EEEEE   D   D                                            |");
printf("\n|                                       C      O   O   M  M M   M   P   P   L       E          T     E       D    D                                           |");
printf("\n|                                       C      O   O   M   M    M   PPPP    L       EEEEE      T     EEEEE   D    D                                           |");
printf("\n|                                       C      O   O   M        M   P       L       E          T     E       D    D                                           |");
printf("\n|                                       C      O   O   M        M   P       L       EEEEE      T     EEEEE   D   D                                            |");
printf("\n|                                        CCCC   OOO    M        M   P       LLLLL   EEEEE      T     EEEEE   DDDD                                             |");
printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
sleep(1);
system("cls");
 };
void groupname(){
     system("cls");
 printf("\n|^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|");
 printf("\n|  CCCC    OOO    H   H   EEEEE  RRRR    EEEEE   NN    N   TTTTTT                    |");
 printf("\n| C       O   O   H   H   EEEEE  R   R   EEEEE   N N   N     T                       |");
 printf("\n| C       O   O   H   H   E      R   R   E       N  N  N     T                       |");
 printf("\n| C       O   O   HHHHH   EEEEE  RRRR    EEEEE   N  N  N     T                       |");
 printf("\n| C       O   O   H   H   E      RR      E       N  N  N     T                       |");
 printf("\n| C       O   O   H   H   EEEEE  R R     EEEEE   N   N N     T                       |");
 printf("\n|  CCCC    OOO    H   H   EEEEE  R  R    EEEEE   N    NN     T                       |");
 printf("\n|                                                                                    |");
 printf("\n|                                                                                    |");
 printf("\n|                   BBBB    U   U   IIIIII   L       DDDD     EEEEE   RRRR    SSSSS  |");
 printf("\n|                   B   B   U   U      I     L       D   D    EEEEE   R   R   S      |");
 printf("\n|                   B   B   U   U      I     L       D    D   E       R   R   S      |");
 printf("\n|                   BBBB    U   U      I     L       D    D   EEEEE   RRRR    SSSSS  |");
 printf("\n|                   B   B   U   U      I     L       D    D   E       RR          S  |");
 printf("\n|                   B   B   U   U      I     L       D   D    EEEEE   R R         S  |");
 printf("\n|                   BBBB    UUUUU   IIIIII   LLLLL   DDDD     EEEEE   R  R    SSSSS  |");
 printf("\n|                                                                                    |");
 printf("\n|                                                                                    |");
 printf("\n| PPPP    RRRR    EEEEE   SSSSS   EEEEE   NN    N   TTTTTT ||  SSSSS                 |");
 printf("\n| P   P   R   R   EEEEE   S       EEEEE   N N   N     T   _||  S                     |");
 printf("\n| P   P   R   R   E       S       E       N  N  N     T        S                     |");
 printf("\n| PPPP    RRRR    EEEEE   SSSSS   EEEEE   N  N  N     T        SSSSS                 |");
 printf("\n| P       RR      E           S   E       N  N  N     T            S                 |");
 printf("\n| P       R R     EEEEE       S   EEEEE   N  N  N     T            S                 |");
 printf("\n| P       R  R    EEEEE   SSSSS   EEEEE   N   NN      T        SSSSS                 |");
 printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
 sleep(1);
 }
void lose(){
    system("cls");
printf("\n|-------------|");
printf("\n|   YOU LOSE  |");
printf("\n|-------------|");
sleep(1);
}

