/*
Implement function maxabsinlst(lst), which returns the maximum absolute
value of the elements in the array.
For example, given a array lst: [-19, -3, 20, -1, 0, -25], the function
should return 25.

The name of the method should be maxabsinlst and the method should take two parameters.  The first parameter is the array of values to test.  The second parameter is the number of elements in the array. Here is an example call to the function

int lst[] = {-19, -3, 20, -1, 5, -25};

printf(“%i”,maxabsinlst(lst,6));
*/

#include <iostream>

int maxabsinlst(int lst[], int size);
int abs_(int x);

int main()
{
    int lst[] = {-19, -3, 20, -1, 5, -25};
    printf("%i", maxabsinlst(lst, 6));

    return 0;
}

int maxabsinlst(int lst[], int size)
{
    int max;
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
            max = abs_(lst[i]);
        else if (abs_(lst[i]) > max)
            max = abs_(lst[i]);
    }
    return max;
}

int abs_(int x)
{
    if (x >= 0)
        return x;
    else
        return x *= -1;
}