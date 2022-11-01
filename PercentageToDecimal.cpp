/*This program converts percentage to decimal*/
#include <iostream>
#include <iomanip>
using namespace std;

int main (void)
{
    //declare local variables
    float n= 0.01;
    float percentage;
    float decimal;
    int to_perCentage= 100;

    cout << "Enter percentage:\n";
    cin >> percentage;

    decimal= percentage*n;
    percentage=decimal*to_perCentage;

    cout << decimal << " is the equivalent decimal of " << percentage << "%";
}
