#include<iostream>
using namespace std;
#include"Q-1_check_prime.cpp"
#include"Q-2_find_highest_value_digit.cpp"
#include"Q-3_find_x_to_power_y.cpp"
#include"Q-5_check_term_is_in_fibonacci_series_or_not.cpp"
#include"Q-6_swap_using_call_by_reference.cpp"
#include"Q-7_sum_two_and_three_values_using_default_arguments.cpp"

int main()
{

// ##################################################
// q-1 check given number is prime or not
//    int num,i=2;
//    cout<<"Enter a number"<<endl;
//    cin>>num;

// if (check_prime(num))
//     cout<<num <<" is prime"<<endl;

// else
//     cout<<num <<" is not prime"<<endl;
   
// ##################################################
// Q-2 find higest value digit in given number
// int num;
//    cout<<"Enter a number"<<endl;
//    cin>>num;

//  cout<<"highest value digit  is "<<find_highest_value_digit(num) <<" in the "<<num <<endl;  

// ##################################################
// Q-3 x raise to power y 
// int x,y;
// cout<<"Enter two number"<<endl;;
// cin>>x>>y;

// cout<<x <<" raise to power "<<y <<" is "<<power(x,y);

// ##################################################
// Q-5_check_term_is_in_fibonacci_series_or_not
// int num;
// cout<<"Enter a number to find term is in fibonacci series or not"<<endl;
// cin>>num;

// if(check_Term(num))
// cout<<endl <<num <<" is in fibonacci series" <<endl;

// else
// cout<<endl <<num <<" is not in fibonacci series" <<endl;



// ##################################################
// Q-6 swap two int value using call by reference 
// int x,y;
// cout<<"Enter two number"<<endl;
// cin>>x>>y;
// cout<<"Before swap"<<endl <<"x = "<<x <<" ,y= "<<y <<endl;
// int &a=x,&b=y;
// swap_data(a,b);
// cout<<"After swap"<<endl <<"x = "<<x <<" ,y= "<<y <<endl;

// ##################################################
// q -7 sum of two and three values using default arguments
int a,b;
cout<<"Enter two numbers"<<endl;
cin>>a>>b;
cout<<"Sum is : "<<sum(a,b) <<endl;
int c;
cout<<"Enter three numbers"<<endl;
cin>>a>>b>>c;
cout<<"Sum is : "<<sum(a,b,c) <<endl;

    return 0;

}