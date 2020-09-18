/*
 * area.cpp
 *
 *  Created on: 15 ott 2019
 *
 *      Author: Profilo
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float b1,b2,h,area;

	cout << "Enter the small base of the trapezoid" << endl;
	cin >> b1;
	cout << "The small base is " << b1 << " cm." << endl;

	cout << "Enter the great base of the trapezoid" << endl;
	cin >> b2;
	cout << "The great base is " << b2 << " cm." << endl;

	cout << "Enter the altitude of the trapezoid" << endl;
	cin >> h;
	cout << "The altitude is " << h << " cm." << endl;

	area = (h*(b1+b2))/2;

	cout << "The are of the trapezoid is " << area << " cm^2" <<endl;

	return 0;
}




