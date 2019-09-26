#include<stdio.h>
#include<string.h>
#define SIZE 20
 
struct bookdetail
{
          char title[20];
          char author[20];
          char genre[20];
 
};
 
void output(struct bookdetail v[],int n);
 
void main()
{
          struct bookdetail b[SIZE];
 
          int num,i;
          printf("Enter the Numbers of Books:");
          scanf("%d",&num);
          printf("\n");
          for(i=0;i<num;i++)
 
          {
 
        
 
                   printf("\nEnter the Book title:\n");
                   scanf("%s",b[i].title);
 
                   printf("Enter the Author of Book:\n");
                   scanf("%s",b[i].author);
 
                   printf("Enter the genre:\n");
                   scanf("%s",&b[i].genre);
 
          }
 
          output(b,num);
 
}
 
void output(struct bookdetail v[],int n)
 
{
 
          int i,t=1;
 
          for(i=0;i<n;i++,t++)
 
          {
 
                    printf("\n");
 
               
 
                   printf("\t\tBook %d title is=%s \n",t,v[i].title);
 
                   printf("\t\tBook %d Author is=%s \n",t,v[i].author);
 
                   printf("\t\tBook %d genre is=%s \n",t,v[i].genre);
 
 
                   printf("\n");
 
          }
 
}
 