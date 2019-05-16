#include<iostream>
#include<typeinfo>

using namespace std;
int main(int argc ,char* argv[])
{
    cout << "argc " << argc << endl;
    for(int i = 0; i < argc ;i++)
    {
        cout << "argment[" << i <<" ] is "  << argv[i] << endl;
        cout << typeid(argv[i]).name() << " " << sizeof(argv[i]) << " " <<  &argv[i] << endl;
    }
    return 0;
}
