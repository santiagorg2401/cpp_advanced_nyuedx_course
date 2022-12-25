/*
Implement function maxinlst(lst), which returns the maximum value of the elements in the array.
For example, given an array lst: [-19, -3, 20, -1, 5, -25], the function
should return 20.


The name of the method should be maxinlst and the method should take two parameters.  The first parameter is the array of values to test.  The second parameter is the number of elements in the array. Here is an example call to the function

int lst[] = {-19, -3, 20, -1, 5, -25};

printf(“%i”,maxinlst(lst,6));

File Name

maxinlst.cpp

Function Signature

int maxinlst(int lst[], int size);
*/

#include <iostream>
using namespace std;

int maxinlst(int lst[], int size);

int main()
{
    int lst[] = {-19, -3, 20, -1, 5, -25};
    printf("%i", maxinlst(lst, 6));

    return 0;
}

int maxinlst(int lst[], int size)
{
    int  max;
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
            max = lst[i];
        else if (lst[i] > max)
            max = lst[i];
    }

    return max;
}