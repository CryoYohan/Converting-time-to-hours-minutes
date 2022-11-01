/* Converting-time-to-hours-minutes
   Enter the amount of time in minutes and then convert it into this format; {HOURS}:{MINUTES}*/
#include <iostream>
using namespace std;

int main(){
int minutes, hours;

cout << "Enter the amount of minutes: ";
cin >> minutes;

hours=minutes/60;
minutes=minutes%60;

cout << hours << ":" << minutes;
return 0;
}
