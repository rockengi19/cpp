// This C++ code calculates the exponentiation of two numbers given by the user using the for cycle and multiplication

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float n,e,i,result = 1;
    
    cout<<"Enter a number: "<< endl;
    cin >> n;
    cout << "The number is "<< n << endl;
    
    cout<<"Enter an exponent"<< endl;
    cin >> e;
    cout << "The exponent is "<< e << endl;
    
    for (i = 1; i <= e; i++)
    {
        result *= n;
    }
    
    if (e == 0){
        
        result = 1;
        
    } else if (e < 0)
    {
        for (i = (-1); i >= e; i--)
        {
            result *= 1.0/n;
        }
    }
    
    cout << "The approximation of the exponentiation is " << result << endl;
    
    cout << "The exponentiation is "<< pow(n,e) << endl;
    return 0;
}
