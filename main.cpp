#include <iostream>
using namespace std;
int main ()
{
    string comands;
    bool exitfile=true;
    while(exitfile){
			cout<<"enter your comand\n";
			getline(cin,comands);

			const char *command = comands.c_str();

			system(command);
    }


    cout << "\nRunning file ";

    return 0;
}
