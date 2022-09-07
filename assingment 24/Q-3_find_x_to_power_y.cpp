int power(int ,int );
int power(int x,int y)

{
    int power=1;

    while(y--)
       power=power*x; 
    
    return power;
}