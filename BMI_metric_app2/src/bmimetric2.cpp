/*Modify your earlier BMI Metric program to also display the CDC standard weight status categories:

The CDC standard weight status categories are:

BMI

Weight Status

Below 18.5

Underweight

18.5-24.9

Normal

25.0-29.9

Overweight

30.0 and above

Obese

For example,  an  execution could look  like  this:
Please enter weight in kilograms: 50
Please enter height in meters: 1.58
BMI is: 20.03, Status is Normal*/

#include <iostream>
#include <string>

using namespace std;

const float UNDERWEIGHT_THRES = 18.5, NORMAL_THRES[2] = {18.5, 24.9}, OVERWEIGHT_THRES[2] = {25.0, 29.0}, OBESE_THRES = 30.0;
float bmimetricf(float weight, float height, string &status);

int main()
{
    float weight = 50;
    float height = 1.58;
    string status;
    float BMI = bmimetricf(weight, height, status);

    printf("BMI is: %3.2f with status %s.\n", BMI, status.c_str());
}

float bmimetricf(float weight, float height, string &status)
{
    // Compute BMI.
    float BMI = weight / (height * height);
    if (BMI < UNDERWEIGHT_THRES)
        status = "underweight";
    else if (BMI >= NORMAL_THRES[0] && BMI <= NORMAL_THRES[1])
        status = "normal";
    else if (BMI >= OVERWEIGHT_THRES[0] && BMI <= NORMAL_THRES[1])
        status = "overweight";
    else if (BMI > OBESE_THRES)
        status = "obese";

    return BMI;
}