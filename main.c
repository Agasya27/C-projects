#include <stdio.h>
#include <stdlib.h>
int hotel()
{
    printf("welcome to hotel asterisc\n");
    printf( " :: MENU :: \n");
    printf("1.samosa 30/- \n");
    printf("2.Dosa 40/- \n");
    printf("3. tea 10/- \n");
    printf("4.coffee 20/- \n");
    printf("0.exit  \n");

    return 0;


}
int main()

{
    hotel();
    int a=0,b=0,sum=0,amt=0,y=0,u=0,o=0,p=0,n=0,g=0,h=0,token=0,pay=0,z=0,eamt=0,w=0,q=0,t=0;
    printf("enter your choice :");
    scanf("%d",&a);

    if(a==1)
    {
       printf("you have selected samosa\n");
       printf("how many plates:");
       scanf("%d",&b);
       y=30;
       t=30*b;
       sum=t;
       printf("\n");
   printf("ok...Any thing else");
   printf("\n");

    }
    else if(a==2)
    {
       printf("you have selected dosa\n");
        printf("how many plates:");
       scanf("%d",&n);
       amt=40;
       t=40*n;
       sum=t;
       printf("\n");
   printf("ok...Any thing else");
   printf("\n");

    }
    else if(a==3)
    {
       printf("you have selected tea\n");
        printf("how many plates:");
       scanf("%d",&g);
       o=10;
       t=10*g;
       sum=t;
       printf("\n");
   printf("ok...Any thing else");
   printf("\n");
    }
    else if(a==4)
    {
       printf("you have selected coffee\n");
        printf("how many plates:");
       scanf("%d",&h);
       p=20;
       t=20*h;
       sum=t;
       printf("\n");
   printf("ok...Any thing else");
   printf("\n");

    }
    else if(a==0)
    {
       printf("you have selected exit\n");
    }
    else
    {
        printf("nothing\n",a);
    }
    if(a>0)
    {
   printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
   printf("\n");


     hotel();
    printf("enter your choice :");
    scanf("%d",&w);
   }


    if(w==1)
    {
       printf("you have selected samosa\n");
        printf("how many plates:");
       scanf("%d",&b);
       y=30;
       sum=t+30*b;
       printf("\n");
   printf("ok...Any thing else");
   printf("\n");

    }
    if(w==2)
    {
       printf("you have selected dosa\n");
        printf("how many plates:");
       scanf("%d",&n);
       amt=40;
       sum=t+40*n;
       printf("\n");
   printf("ok...Any thing else");
   printf("\n");
    }
    if(w==3)
    {
       printf("you have selected tea\n");
        printf("how many plates:");
       scanf("%d",&g);
       o=10;
       sum=t+10*g;
       printf("\n");
   printf("ok...Any thing else");
   printf("\n");
    }
    if(w==4)
    {
       printf("you have selected coffee\n",a);
        printf("how many plates:");
       scanf("%d",&h);
       p=20;
       sum=t+20*h;
       printf("\n");
   printf("ok...Any thing else");
   printf("\n");

    }
    if(w>0)
  {
   printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
   printf("\n");
  hotel();
    printf("enter your choice :");
    scanf("%d",&a);
  }


    if(q==1)
    {
       printf("you have selected samosa\n");
    }
    else if(q==2)
    {
       printf("you have selected dosa\n");
    }
    else if(q==3)
    {
       printf("you have selected tea\n");
    }
    else if(q==4)
    {
       printf("you have selected coffee\n");

    }
    else
    {
        printf("\n");
    }

   printf("\n");
   printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
   printf("\n");
   if(q==0)
   {
   printf("you have selected exit\n");
   printf("samosa  %d*%d\n",y,b);
   printf("dosa %d*%d\n",amt,n);
   printf("tea %d*%d\n",o,g);
   printf("coffee  %d*%d\n",p,h);
    printf("bill=%d",sum);
    printf("\n");
 printf("enter amount ");
    scanf("%d",&token);
    printf("\n");
    }
    if(sum==token)
    {
    printf("thank you \n visit again\n");
    }
   else
   if(sum>token)
    {
   printf("please pay more  = 10\n");
       printf("enter amount:  ");
        scanf("%d",&pay);
       printf("thank you \n visit again\n");
    }
    else
    if(sum<token)
    {
     printf("return :10\n");
     printf("enter the amount\n");
     scanf("%d",&eamt);
    printf("thank you \n visit again\n");
    }









    return 0;
}
