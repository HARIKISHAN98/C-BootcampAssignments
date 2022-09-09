#include<stdio.h>
#include<string.h>
#include"Q-1_swap_value_of_two_int_variable.c"
#include"Q-2_swap_string_of_two_char_array.c"
#include"Q-3_fun_sort_an_array_int_type.c"
int main()
{
// ###################################################################
// Q-1 swap value of two int variable
// int x=5,y=10;
// printf("Before swap : x= %d,y=%d\n",x,y);
// swap_data(&x,&y);
// printf("After swap : x= %d,y=%d\n",x,y);

// ###################################################################
// Q-2 swap string of two char array.c
// char str1[20],str2[20];

// printf("Enter 1st string\n");
// fgets(str1,20,stdin);
// str1[strlen(str1)-1]='\0';

// printf("Enter 2nd string\n");
// fgets(str2,20,stdin);
// str2[strlen(str2)-1]='\0';

// printf("\nBefore swap \n1st string is : %s ,2nd string is : %s\n",str1,str2);
// swap_strings(str1,str2);
// printf("\nAfter swap \n1st string is : %s ,2nd string is : %s\n",str1,str2);

// ###################################################################
// Q-3 sort array of int type
int size=5,arr[size];
printf("Enter %d element in array\n",size);

for (int i = 0; i < size; i++)
{
    scanf("%d",&arr[i]);
}

printf("Before sort :\n");
for (int i = 0; i < size; i++)
{
    printf("%d ",arr[i]);
}

sort_array(arr,size);

printf("\nAfter sort :\n");
for (int i = 0; i < size; i++)
{
    printf("%d ",arr[i]);
}

    return 0;
}