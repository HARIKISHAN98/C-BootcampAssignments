#include<stdio.h>
// void input(int **ptr)
// {
//     // ptr[i][j];
//     printf("Enter something\n");
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             scanf("%d",&ptr[i][j]);
//         }
//         for (int j = 0; j < 5; j++)
//         {
//             printf("%d ",ptr[i][j]);
//         }
//        printf("\n"); 
//     }
    
// }

void input(int **ptr)
{
   for (int i = 0; i < 5; i++)
   {
    for (int j = 0; j < 4; j++)
    {
        scanf("%d",&ptr[i][j]);
    }
    for (int j = 0; j < 4; j++)
    {
        printf("%d ",ptr[i][j]);
    }
    printf("\n");
   }
   
}

int* f1()
{
    int *p;
    {
        int x;
        p=&x;
    }
    *p=5;
    printf("%u ",*p);

}
int main()
{
// int *p[4];
// int a[5],b[3],c[7],d[4];
// p[0]=&a[0];
// p[1]=&b[0];
// p[2]=&c[0];
// p[3]=&d[0];
// input(p);

//pointer to array
// int (*p)[4];
// int a[5][4];
// p=a;
// printf("Enter any 4 numbers\n");
// input(&p);

//void pointer 
/*
void *p,*q;
int x;
float y;
p=&x;
q=&y;
*(int*)p=5;
*(float*)q=7.6;
printf("%d ",*(int*)p);
printf("%f ",*(float*)q);
*/

//wild pointer
// int *p,x;
// printf("%u ",*p);
// printf("%u ",&x);

//NULL pointer
/*
int *p=NULL;
int x;
// p=&x;
if(p!=NULL)
{
    *p=5;
}
printf("x=%d ",*p);
*/
//dangling pointer
f1();










    return 0;
}