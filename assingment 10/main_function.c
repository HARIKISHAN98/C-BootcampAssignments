#include<stdio.h>
#include"Q-1_calculate_funct_to_area_of_circle.c"
#include"Q-2_calculate_simple_interest.c"
#include"Q-3_check_even_odd.c"
#include"Q-4_first_n_natural_number.c"
#include"Q-5_n_odd_natural_numbers.c"
// #include"Q-6_calculate_factorial.c"
// #include"Q-7_combination.c"
#include"Q-8_permutation.c"
#include"Q-9_check_number_contain_digit.c"
#include"Q-10_prime_factorisation_of_number.c"
int main()
{

    // #####################################
    // Q-1
    // int r;
    // printf("Enter radius of circle\n");
    // scanf("%d",&r);
    // printf("Area : %.2f",area(r));

    // ############################################
    // Q-2
    // int p,r,t;
    // printf("Enter principle,rate of intrest,time\n");
    // scanf("%d%d%d",&p,&r,&t);

    // printf("S.I is : %d\n",Simple_intrest(p,r,t));

    // ###############################################
    // Q-3
    // int n;
    // printf("Enter a number\n");
    // scanf("%d",&n);
    // printf("IsEven : %d\n",IsEven(n));

    // #####################################################
    //  Q-4
    //  int n;
    //  printf("Enter a natural number\n");
    //  scanf("%d",&n);
    //  print(n);

    // ########################################################
    // Q-5
    // int num;
    //  printf("Enter a natural number\n");
    //  scanf("%d",&num);
    //  printf("Odd natural number from 1 to  %d :\n",num);
    //  print_odd(num);

    //  #####################################################
    // Q-6
    // int num;
    //  printf("Enter a  number\n");
    //  scanf("%d",&num);
    //  printf("Factorial of  %d : %d\n",num,fact(num));

    //  #######################################################
    // Q-7
    // int n,r;
    // printf("Enter number of items\n");
    // scanf("%d",&n);
    // printf("Enter number of item want to be select\n");
    // scanf("%d",&r);

    // printf("Combination makes : %d\n",combination(n,r));

//    #############################################################
// Q-8
    // int n,r;
    // printf("Enter number of items\n");
    // scanf("%d",&n);
    // printf("Enter number of item want to be arrange\n");
    // scanf("%d",&r);

    // printf("permutation  : %d\n",permutation(n,r));

// ########################################################################
// Q-9
// int num,digit;
// printf("Enter a number\n");
// scanf("%d",&num);

// printf("Enter digit\n");
// scanf("%d",&digit);

// printf("Digit is present : %d\n",check_number(num,digit));

// #############################################################################
// Q-10
int num;
printf("Enter a number\n");
scanf("%d",&num);
prime_factor(num);



    return 0;
}