#include <stdio.h>
#include <stdlib.h>
void stu()
{
    printf("::MENU::\n");
    printf("1.Add student\n");
    printf("2.Show All student\n");
    printf("3.Result\n");
    printf("4.update student data\n");
    printf("0.Exit\n");

}
struct student
{
    int rollno;
    char name[50] ;
    int z;
    int b;
    int c;

};

int main()

{    int h,i,g,sum=0,j,m,v,ch,f;
    float per;
     struct student a[100];

     stu();
     printf("enter your choice\n");
     scanf("%d",&h);

     if(h==1)
     printf("you have selected to add student\n");
     else if(h==2)
     printf("you have selected show all student\n");
     else if(h==3)
    printf("you have selected show result\n");
    else if(h==4)
    printf("you have selected update student data\n");
    if(h==1)
    {
    printf("enter the size of student required:\n");
    scanf("%d",&g);
    }

    if(g>i)
    {
    for(i=0;i<g;i++)
    {
    printf("enter name of student:\n");
    scanf("%s",&a[i].name);
    printf("enter roll no of student:\n");
    scanf("%d",&a[i].rollno);
    printf("enter marks of data structure:\n");
    scanf("%d",&a[i].z);
    printf("enter marks of object oriented:\n");
    scanf("%d",&a[i].b);
    printf("enter marks of data base management:\n");
    scanf("%d",&a[i].c);
     printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    }
    }
    for(i=0;i<g;i++)
    {
    printf("name:%s\n",a[i].name);
    printf("roll no:%d\n",a[i].rollno);
    printf("marks of dsu:%d\n",a[i].z);
    printf("marks of OOP:%d\n",a[i].b);
    printf("marks of DBMS:%d\n",a[i].c);
    printf("\n Record saved!\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    }
   if(h==0)
   {
    printf("you selected have exit\n\nthank you!");
   }
   if(h>=1)
   {
    stu();
 printf("enter your choice\n");
 scanf("%d",&h);
   }




if(h==2)
{

 for(i=0;i<g;i++)
 {
 printf("\n\t\t|| ALL STUDENT ||\n");
 printf("\nROLL NO.\tNAME\t\tDsu\tOOP\tDBMS\n");
 printf("\n%d\t\t%s\t\t%d\t%d\t%d\n",a[i].rollno,a[i].name,a[i].z,a[i].b,a[i].c);
 printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
 }
 if(h==0)
 {
  printf("you selected have exit\n\nthank you!");
 }
 if(h>=2)
 {
 stu();
 printf("enter your choice\n");
 scanf("%d",&j);
 }
}
if(j==3)
{
for(i=0;i<g;i++)
{
    printf("\nROLL NO.\tNAME\t\tDsu\tOOP\tDBMS\n");
    printf("\n%d\t\t%s\t\t%d\t%d\t%d\n",a[i].rollno,a[i].name,a[i].z,a[i].b,a[i].c);
    printf("total marks scored by student =%d\n",sum=a[i].z+a[i].b+a[i].c);
    per=sum;
    printf("total percentage scored by student=%0.2f\n",per/300*100);

    if(35<per)
    {
        printf("PASS\n");
    }
    else if(35>per)
    {
        printf("FAIL\n");
    }
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
}
if(j==0)
{
    printf("you selected have exit\n\nthank you!");
}
if(j>=3)
{
stu();
printf("enter your choice\n");
 scanf("%d",&h);
}
}
if(h==4)
{
  printf("Do you want to change name:\n");
 printf("1.YES\n");
 printf("2.NO\n");
 scanf("%d",&v);
}

 if(v==1)
 {
     printf("choice 1\n");
 }
 else if(v==2)
 {
     printf("choice 2\n");
 }

 if(v=1)
 {
 printf("enter your Roll No:\n");
 scanf("%d",&m);
 }
 for(i=0;i<g;i++)
 {
    if(m==a[i].rollno)
     {
         printf("the old name of student is: %s\n",a[i].name);

     }

 }

 if(v=2)

printf("enter the new name of student\n");
scanf("%s",a[i].name);
printf("Do you really to change name:\n");
 printf("1.YES\n");
 printf("2.NO\n");
 scanf("%d",&v);

 if(v==1)
 {
     printf("choice 1\n");
     printf("\n\nok records updatted succesfully!\n");
 }
 else if(v==2)
 {
     printf("choice 2\n");
 }


printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
if(h>=4)
{
stu();
printf("enter your choice\n");
 scanf("%d",&f);
}
if(f==1)
printf("you have selected to add student\n");
else if(f==2)
printf("you have selected show all student\n");
else if(f==3)
printf("you have selected show result\n");
else if(f==4)
printf("you have selected update student data\n");
else if(f==0)
printf("you selected have exit\n\nthank you!");



 return 0;
}


