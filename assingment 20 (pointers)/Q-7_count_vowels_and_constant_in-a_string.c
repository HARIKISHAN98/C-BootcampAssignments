#include<stdio.h>
int main()
{
char str[20],*ptr;
printf("Enter a string\n");
fgets(str,20,stdin);
ptr=str;
int count_vowels =0,count_constant=0;
for (int i = 0; *(ptr+i); i++)
{
    if( *(ptr+i) == 'A' || *(ptr+i) == 'E' || *(ptr+i) =='I' || *(ptr+i) =='O' || *(ptr+i)=='U' )
    count_vowels++;

   else if( *(ptr+i) == 'a' || *(ptr+i) == 'e' || *(ptr+i) =='i' || *(ptr+i) =='o' || *(ptr+i)=='u' )
    count_vowels++;

    else if(ptr[i] >= 'A' && ptr[i] <= 'Z' || ptr[i] >= 'a' && ptr[i] <= 'z')
    count_constant++;

}
printf("constant : %d , vowels : %d\n",count_constant,count_vowels);

    return 0;
}