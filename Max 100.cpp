#include <iostream>
#include <Windows.h>
using namespace std;
void zadanie()
{
    string input;
    int ilerazy;
    cout << "napisz slowo: " << endl;
    cin >> input;
    if (input == "kurwa")
    {
        cout << "slowo niedozwolone" << "\n";
        Sleep(1000);
        exit(0);
    }
    cout << "ile razy: " << endl;
    cin >> ilerazy;
    if (ilerazy > 100)
    {
        cout << "za duzo max 100" << "\n";
        Sleep(1000);
        exit(0);
    }
    for (int i = 0; i < ilerazy; i++) {     
           cout << input << "\n";
    }
}
int main()
{
    zadanie();
    return 0;
}
