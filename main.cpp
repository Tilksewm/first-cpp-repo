#include <iostream>
using namespace std;
int main ()
{
    char comands[100];
    system("git status");
    cin.getline(comands, 100);

    string str = comands;

    const char *command = str.c_str();

    system(command);

    cout << "\nRunning file ";


    return 0;
}
