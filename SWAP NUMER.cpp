#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

int main()
{
    int a,b,temp;
    a=10;
    b=20;

    cout<<"a:"<<a<<" and b:"<<b<<""<<endl;

    temp = a;
    a = b;
    b = temp;

    cout<<"a:"<<a<<" and b:"<<b<<""<<endl;

    a = a+b;
    b = a-b;
    a = a-b;

    cout<<"a:"<<a<<" and b:"<<b<<""<<endl;

    swap(&a,&b);

    cout<<"a:"<<a<<" and b:"<<b<<""<<endl;
    
    
    return 0;
}
