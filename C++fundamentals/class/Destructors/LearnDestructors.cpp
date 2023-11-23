/*------------------------------------------------------------------------------
 * @file    DESTRUCTORS.CPP
 * @author  ZhouRongTao
 * @date    2023/11/23 14:04:14
------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;

class Line
{
private:
    double lenth;

public:
    void setLenth(double len);
    void print();
    Line(double len);
    ~Line();
};

void Line::print()
{
    cout << "now lenth = " << lenth << endl;
}

void Line::setLenth(double len)
{
    lenth = len;
}

Line::Line(double len)
{
    cout << "object is being created, lenth = " << len << endl;
    lenth = len;
}

Line::~Line()
{
    cout << "object is being delete" << endl;
}

int main()
{
    Line L1(20);
    L1.setLenth(20);
    L1.print();
}