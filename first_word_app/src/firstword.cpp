/*Write a function that is given a phrase and returns the first word in that phrase.
For example, given ‘the quick brown fox’, your function should return ‘the’.

Here is an example call to the function

cout << firstword(“the quick brown fox”);

Function Signature

string firstword(string s);*/

#include <iostream>
#include <string>

using namespace std;

string firstword(string s);

int main()
{
    cout << firstword("the quick brown fox");
    return 0;
}

string firstword(string s)
{
    string first = s.substr(0, s.find(" "));
    return first;
}