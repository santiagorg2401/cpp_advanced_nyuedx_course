/*
Implement function avgoflst(lst), which returns the average
value of the elements in the array.
For example, given a array lst: [19, 2, 20, 1, 0, 18], the function
should return 10.


The name of the method should be avgoflst and the method should take two parameters.  The first parameter is the array of values to test.  The second parameter is the number of elements in the array. Here is an example call to the function

int lst[] = {19, 2, 20, 1, 0, 18};

printf(“%3.0f”,avgoflst(lst,6));
*/

#include <iostream>

float avgoflst(int lst[], int size);

int main()
{
    int lst[] = {19, 2, 20, 1, 0, 18};
    printf("%3.0f", avgoflst(lst, 6));

    return 0;
}

float avgoflst(int lst[], int size)
{
    float avg;
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += lst[i];
    }

    avg = sum / size;
    return avg;
}