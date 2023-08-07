#include <iostream>
using namespace std;
int main ()
{
    string comands;
    system("git status");
    getline(cin,comands);

    const char *command = comands.c_str();

    system(command);

    cout << "\nRunning file ";


    return 0;
}
