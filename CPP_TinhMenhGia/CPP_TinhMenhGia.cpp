// CPP_TinhMenhGia.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int sotien;
    int so_to;
    so_to = 0;
    cout << "Nhap so tien can rut. "; cin >> sotien;
    int menhgia[8] = { 500, 200, 100, 50, 20, 10, 5 ,1 };
    so_to = sotien / menhgia[0];
    cout << "So to menh gia " << menhgia[0] << ": " << sotien / menhgia[0] << endl;
    sotien = sotien - menhgia[0] * so_to;    
    for (int i = 1; i < 8; i++) {
        if (sotien >= menhgia[i]) {
            so_to = so_to + (sotien / menhgia[i]);
            cout << "So to menh gia " << menhgia[i] << ": " << sotien / menhgia[i] << endl;
            sotien = sotien - menhgia[i] * so_to;
        }
    }
    cout << "So to tien la: " << so_to;
    return 0;

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
