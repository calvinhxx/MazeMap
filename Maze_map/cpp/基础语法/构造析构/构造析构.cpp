#include<iostream>

using namespace std;

class Line
{
public:
    void setlength(double len)
    {
        length = len;
    }
    double& getlength(void)
    {
        return this->length;
    }
private:
    double length;
};
int main(int argc, char* argv[])
{
    Line line;
    line.setlength(3);
    cout << line.getlength() << endl;
    return 0;
}
