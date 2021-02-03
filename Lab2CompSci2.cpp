// Lab2CompSci2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int X[] = { 3, 7, 11, 17, 23 };
    int* xPtr = &X[2];
    cout << X[1] << ' ' << X[2] << ' ' << X[3] << ' ' << xPtr << " : " << *xPtr << endl;
    cout << "Array content prior to pointer manipulation\n";
    cout << *xPtr++ << endl;
    cout << (*xPtr)++ << endl;
    cout << *(xPtr)++ << endl;
    cout << *(xPtr++) << endl;
    cout << *(++xPtr) << endl;
    //cout << int(*++);xPtr << endl; // gave error
    cout << ++ * xPtr << endl;
    cout << ++(*xPtr) << endl;
    //cout << int(++*); xPtr << endl; //gave error

    cout << endl << "Array content after ptr manipulation" << endl;
    cout << X[1] << ' ' << X[2] << ' ' << X[3] << ' ' << xPtr << " : " << *xPtr << endl;
    //std::cout << "Hello World!\n";
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
