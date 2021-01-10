#include<stdio.h>
using namespace std;

void swap(int a,int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d %d",a,b);
}

int main(int argc,char ** argc1)
{   int a = 1;
    int  b = 2;
    swap(a,b);
    return 0;    
}