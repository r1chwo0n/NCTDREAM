#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(){
    int count = 0;
    double sum = 0, a, b = 0;
    string textline;
    ifstream source ("score.txt");
    while (getline(source,textline))
    {
        double x = atof(textline.c_str());
        sum += x;
        a = pow(x,2);
        b += a;
        count++;
    }
    
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    double mean = sum/count;
    cout << "Mean = " << mean << endl ;
    cout << "Standard deviation = " << sqrt(b/count - pow(mean,2))  << endl;
    
    return 0;
}