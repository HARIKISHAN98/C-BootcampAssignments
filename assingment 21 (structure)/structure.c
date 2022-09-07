#include<stdio.h>
#include<string.h>
struct book
{
    int bookid;
    char title[20];
    float price;
}b1,b2;

//function returning structure 
struct book print()
{
    struct book b;
    b.bookid=5;
    strcpy(b.title,"hunny");
    b.price=170.0;

    return b;
}

//function call by passing structure
void display(struct book b)
{
    printf("%d %s %f\n",b.bookid,b.title,b.price);


}

int main()
{
//    struct book b3={12,"java",150.7}; 
//   b1.bookid=5;
//   b2.bookid=2;
//   strcpy(b2.title,"c language");
//   b2.price=125.6f;
//   printf("b2 : %d %s %f\n",b2.bookid,b2.title,b2.price);
//   printf("%d\n",b1.bookid);
//  printf("b3 : %d  %s %f",b3.bookid,b3.title,b3.price);

//taking input from user
printf("Enter bookid\n");
scanf("%d",&b1.bookid);
printf("Enter title\n");
fflush(stdin);
fgets(b1.title,20,stdin);
b1.title[strlen(b1.title)-1]='\0';
printf("Enter price\n");
scanf("%f",&b1.price);
printf("\n%d %s %.2f\n",b1.bookid,b1.title,b1.price);

//structure array

// struct book b4=print();
// printf("%d %s %f\n",b4.bookid,b4.title,b4.price);
// printf("%d %s %f\n",print());   //error

//function call by passing structure
// struct book b5;
// b5.bookid=5;
// strcpy(b5.title,"hunny");
// b5.price=170.0;
// display(b5);




    return 0;
}