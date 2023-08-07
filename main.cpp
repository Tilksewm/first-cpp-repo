#include <iostream>

using namespace std;
class complex{
public:
	string name;
	void print(){
	cout<<name<<endl;
	}
};
int main()
{
	complex com;
	com.name="tilksew";
	com.print();

    cout  << endl;
    return 0;
}
