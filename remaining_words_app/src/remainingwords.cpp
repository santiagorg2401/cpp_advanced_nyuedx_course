/*Write a function that is given a phrase and returns the phrase we get if we take
out the first word from the input phrase.
For example, given ‘the quick brown fox’, your function should return ‘quick brown fox’


Here is an example call to the function

Cout << remainingwords(“the quick brown fox”);*/

#include <iostream>
#include <string>

using namespace std;

string remainingwords(string s);

int main()
{
    cout << remainingwords("the quick brown fox");
    return 0;
}

string remainingwords(string s)
{
    string remaining = s.substr(s.find(" "), s.length() - 1);
    return remaining;
}