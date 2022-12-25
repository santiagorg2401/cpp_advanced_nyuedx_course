/*
Write a program that computes the cost of a long-distance call. The cost of the call is
determined according to the following rate schedule:
• Any call started between 8:00 A.M. and 6:00 P.M., Monday through Friday, is
billed at a rate of $0.40 per minute.
• Any call starting before 8:00 A.M. or after 6:00 P.M., Monday through Friday, is
charged at a rate of $0.25 per minute.
• Any call started on a Saturday or Sunday is charged at a rate of $0.15 per
minute.
The input will consist of the day of the week, the time the call started, and the length
of the call in minutes.
The output will be the cost of the call.


Notes:
1. The time is to be input as 4 digit number, representing the time in 24-hour
notation, so the time 1:30 P.M. is input as 1330
2. The day of the week will be read as one of the following three character string:
"Mon", "Tue", "Wed", "Thr", "Fri", "Sat" or "Sun"
3. The number of minutes will be input as a positive integer.


For example, an execution could look like this:


Enter the day the call started at: Fri
Enter the time the call started at (hhmm): 2350
Enter the duration of the call (in minutes): 22
This call will cost $5.50
*/

#include <iostream>
#include <string>

using namespace std;

const float COSTPERMIN_DAY = 0.40, COSTPERMIN_NIGHT = 0.25, COSTPERMIN_WKEND = 0.15;
const int DAY_THRES[2] = {800, 1800};
const string WEEKEND[2] = {"Sat", "Sun"};

void load_inputs(int &time, int &minutes, string &day);
float calculate_cost(int time, int minutes, string day);

int main()
{
    int time, minutes;
    string day;

    load_inputs(time, minutes, day);
    float cost = calculate_cost(time, minutes, day);

    return 0;
}

void load_inputs(int &time, int &minutes, string &day)
{
    printf("Enter the day the call started at: ");
    cin >> day;
    printf("Enter the time the call started at (hhmm): ");
    cin >> time;
    printf("Enter the duration of the call (in minutes): ");
    cin >> minutes;
}

float calculate_cost(int time, int minutes, string day)
{
    float cost;
    if (day == WEEKEND[0] | day == WEEKEND[1])
        cost = COSTPERMIN_WKEND * minutes;
    else if (time > DAY_THRES[0] & time < DAY_THRES[1])
        cost = COSTPERMIN_DAY * minutes;
    else
        cost = COSTPERMIN_NIGHT * minutes;

    printf("This call will cost: $%.2f.\n", cost);
    return cost;
}