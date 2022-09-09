#include<stdio.h>
void input_string(char *);
void display_string(char *);

void input(int *p,int size)
{
 printf("Enter %d numbers\n",size);
 for (int i = 0; i < size; i++)
    scanf("%d",p+i);
 
}

void display(int *p,int size)
{
for (int i = 0; i < size; i++)
    printf("%d ",*(p+i));

}

int main()
{
// int arr[5];
char str[20];
input_string(str);
display_string(str);
// input(arr,5);
// display(arr,5);

    return 0;  
}

void input_string(char *p)
{
printf("Enter your name\n");
fgets(p,20,stdin);
}

void display_string(char *p)
{
    printf("Hello ,");
    for(int i=0;*(p+i);i++)
    printf("%c",*(p+i));
}