#include<stdio.h>
// #include"Q-1_Function_find_greater_number_in_array.c"
// #include"Q-2_Function_find_smaller_number_in_array.c"
// #include"Q-3_function_sort_an_array_of_size_n.c"
// #include"Q-4_rotate_array_in_n_position_in_d_direction.c"
// #include"Q-5_function_first_occurence_adjacent_duplicate_value.c"
// #include"Q-6_fun_Read_elment_display_in_reverse_order.c"
// #include"Q-7_function_count_duplicate_elment_in_array.c"
#include"Q-8_fun_print_unique_element_in_array.c"
// #include"Q-10_function_count_frequency_of_each_element.c"
int main()
{
// // Q-1 greater number in array

// int size=10,arr[size];

// printf("Enter 10 number\n");

// for(int i=0;i<size;i++)
// scanf("%d",&arr[i]);

// printf("Greater number is : %d\n",Greater_number_in_array(arr,size));

// ###################################################################################

// Q-2 smaller number in array

// int size=10,arr[size];

// printf("Enter 10 number\n");

// for(int i=0;i<size;i++)
// scanf("%d",&arr[i]);

// printf("smaller number is : %d\n",smaller_number_in_array(arr,size));

// ####################################################################################
// Q-3 sort an array of size n


// int size=10,arr[size];

// printf("Enter 10 number\n");

// for(int i=0;i<size;i++)
// scanf("%d",&arr[i]);

// sort(arr,size);

// printf("After sort the array will :\n");
// for (int i = 0; i < size; i++)
// {
//     printf("%d ",arr[i]);
// }

// ##########################################################################################
// Q-4 rotate array in n position and in d direction

//  int size=10,arr[size],pos,dir;
// printf("Enter %d number\n",size); 

// for(int i=0;i<size;i++)
// scanf("%d",&arr[i]);

// printf("Enter how many postion you want to rotate\n");
// scanf("%d",&pos);

// printf("Enter direction \npress 0. Left\npress 1. Right\n");
// scanf("%d",&dir);


// rotate_array(arr,size,pos,dir);      //function call 

// dir==0 ? printf("\nAfter rotate the array in %d position ,in Left direction :\n",pos) : printf("\nAfter rotate the array in %d position ,in Right direction :\n",pos);
// for(int i=0;i<size;i++)
// printf("%d ",arr[i]);

// ##########################################################################################

// Q-5_First occurence adjacent duplicate value in array
// int size=10,arr[size];

// printf("Enter %d number\n",size);

// for(int i=0;i<size;i++)
// scanf("%d",&arr[i]);

// printf("First Occurence of Adjacent duplicate value is : %d\n",adjacent_duplicate_value(arr,size));

// ##########################################################################################
// Q-6 Read_elment_display_in_reverse_order

// int size;
// printf("Enter the size of array\n");
// scanf("%d",&size);

// read_and_display(size);

// ##########################################################################################

// Q-7 count_duplicate_elment_in_array

//  int size=5,arr[size];
// printf("Enter %d number\n",size); 

// for(int i=0;i<size;i++)
// scanf("%d",&arr[i]);

// printf("Duplicate elements : %d\n",count_duplicate(arr,size));

// ##########################################################################################

//Q-8 Print all unique element in array
int size=5,arr[size];

printf("Enter %d element in array\n",size);

for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);

// printf("Unique element in array is :\n");

sort(arr,size);
// print_unique_element(arr,size);    

// ##########################################################################################
// Q-10 count frequency of each element
//  int size=5,arr[size];
// printf("Enter %d number\n",size); 

// for(int i=0;i<size;i++)
// scanf("%d",&arr[i]);

// printf("\n");
// count_frequency(arr,size);







    return 0;
}