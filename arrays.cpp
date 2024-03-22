#include<iostream>
using namespace std;

int main()
{

    float monthsArray[] = {100, 220, 300, 0, 200, 250};
    float total = monthsArray[0] + monthsArray[1] + monthsArray[2] 
                + monthsArray[3] + monthsArray[4] + monthsArray[5];

    float average = total/ 6;
    float inTwoYears = average * 24;

    cout << "Total = " << total << endl;
    cout << "average = " << average << endl;
    cout << "inTwoYears = " << inTwoYears << endl;



    return 0;
}