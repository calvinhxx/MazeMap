#include <iostream>
using namespace std;

class Array
{
private:
    int _int_count;
public:
    Array(int count = 0);
    Array(const Array& array);
    ~Array();
    void set_count(int count);
    int get_count(void);
};
