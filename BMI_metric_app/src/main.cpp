/*Body mass index (BMI) is a number calculated from  a person’s weight and height.
According to the Centers for Disease Control and Prevention, the BMI is a fairly
reliable indicator of body fatness for most people. BMI does not measure body fat
directly, but research has shown that  BMI correlates to direct  measures  of  body  fat,
such  as  underwater  weighing  and dual-energy X-ray absorptiometry. The formula
for BMI is
    Weight/Height2

Where    weight is in kilograms    and height is in meters.


The name of the function should be named bmimetricf and the function should take two parameters which are the weight in kilograms and the height in meters to use to calculate the BMI..  Here is an example call to the function

int weight = 50;

float height = 1.58;

printf(“BMI is: %3.2f”,bmimetricf(weight, height)) ;

The output of the code above would be: BMI is: 20.03*/

#include <iostream>

float bmimetricf(float weight, float height);

int main()
{
    float weight = 50;

    float height = 1.58;

    printf("BMI is: % 3.2f\n", bmimetricf(weight, height));
}

float bmimetricf(float weight, float height)
{
    // Compute BMI.
    float BMI = weight / (height * height);

    return BMI;
}