#include <stdio.h>

int main()
{
    
     printf("Enter your name : "); 
     char name[10];
     scanf("%s",&name);
    
    
    printf("enter your age:\n");
    int age;
    scanf("%d",&age);
    
    printf("enter your phonenumber:\n");
    int phonenumber;
    scanf("%d",&phonenumber);
    
    
    printf("You just said that your name is : %s \n", name); 
    printf("your age is: %d \n" ,age);
    printf("your phonenumber is : %d \n",phonenumber);
    

    return 0;
}
