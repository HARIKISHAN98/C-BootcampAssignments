#include<stdio.h>
#include<string.h>
void swap(char **x, char **y)
{
    char *temp;
    temp= *x;
    *x=*y;
    *y=temp;
}

int main()
{
// char *p="hunny", *q="kapil";
char str1[20],str2[20],*p=str1,*q=str2;

printf("Enter 1st string\n");
fgets(str1,20,stdin);
str1[strlen(str1)-1]='\0';

printf("Enter 2nd string\n");
fgets(str2,20,stdin);
str2[strlen(str2)-1]='\0';



printf("Before swap :\n");
printf("1st string : %s , 2nd string : %s",p,q);

// printf("1st string : ");

// for (int i = 0; *(p+i); i++)
// {
//    printf("%c",*(p+i));
// }

// printf(", 2nd string : ");

// for (int i = 0; *(q+i); i++)
// {
//    printf("%c",*(q+i));
// }

swap(&p,&q);

printf("\nAfter swap :\n");
printf("1st string : %s , 2nd string : %s",p,q);


// printf("1st string : ");
// for (int i = 0; *(p+i); i++)
// {
//    printf("%c",*(p+i));
// }

// printf(", 2nd string : ");

// for (int i = 0; *(q+i); i++)
// {
//    printf("%c",*(q+i));
// }
   
    return 0;
}