//Write a C++ function to swap two integers without
//using a temp variable. 

//Hint: think about pointers

#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    if (x==y)
    return;
    cout<< "before swap "<< "x:"<<*x<<" y:"<<*y<<endl;
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    cout<< "after swap "<< "x:"<<*x<<" y:"<<*y<<endl;
    
}

int main()
{
    int a = 10;
    int b = 15;
    swap(&a,&b);
    return 0;
}