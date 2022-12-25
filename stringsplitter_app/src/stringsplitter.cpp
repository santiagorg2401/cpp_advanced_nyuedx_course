/*Read from the user a string containing
odd number of characters. Your program should:
a) Print the middle character.
b) Print the string up to but not including the middle character (i.e., the first half
of the string).
c) Print the string from the middle character to the end (not including the
middle character).

Sample output:
Enter an odd length string: Fortune favors the bold
Middle character: o
First half: Fortune fav
Second half: rs the bold
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string usr_input;
    printf("Enter an odd length string: ");
    getline(cin, usr_input);

    int len = usr_input.length() / 2;
    char middle_char = usr_input[len];
    printf("Middle character:  %c\n", middle_char);

    string first_half = usr_input.substr(0, len);
    cout << "First half: " << first_half << endl;

    string second_half = usr_input.substr(len, len * 2 - 1);
    cout << "Second half: " << second_half << endl;

    return 0;
}