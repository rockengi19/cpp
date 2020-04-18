// This C++ code calculates the average of random numbers' list which amount and maximum value are given by the user

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main() {
    srand((int)time(0));
    int i = 0;
    int sum = 0;
    float average;
    int n = 0;
    int m = 0;
    cout << "Enter the amount of values in the list:" << endl;
    cin >> n;
    cout << "The amount is " << n << endl;
    cout << "Enter the maximum value of the list:" << endl;
    cin >> m;
    cout << "The maximum value is " << m << endl;
    for (i = 0; i < n; i++)
    {
        int r = (rand() % m) + 1;
        cout << r << endl;
        sum += r;
        average = sum/n;
    }
    cout << "The average is " << average << endl;
    //printf("%.2f",average);
    return 0;
}
