// ch5speedConversionChart.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Ch 5 Speed Conversion by Kevin Bell\n\n";
    cout << "    KPH        MPH   \n";
    cout << "---------------------\n";
    int num;
    for (num = 30; num < 130; num) {
        num = num + 10;
        cout << setw(6) << num << setw(13) << (num * .6214) << endl;
    }
    //Keep window open til done
    system("pause");
    return 0;
}