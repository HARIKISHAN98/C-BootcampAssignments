int find_highest_value_digit(int );

int find_highest_value_digit(int num)
{
   int highest_digit,digit=num%10;;
   highest_digit=digit;

   while (num)
   {
     digit = num%10;

     if(highest_digit<digit)
     highest_digit=digit;

     num/=10;
   }
   
return highest_digit;
}