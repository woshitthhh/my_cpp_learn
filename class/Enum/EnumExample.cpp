/*------------------------------------------------------------------------------
 * @file    ENUMEXAMPLE.CPP
 * @author  ZhouRongTao
 * @date    2023/11/23 12:17:07
------------------------------------------------------------------------------*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    enum color_set
    {
        red,
        yellow,
        blue,
        white,
        black
    };
    color_set color;
    int i, j, k, counter = 0, loop;
    for (i = red; i <= black; i++)
    {
        for (j = red; j <= black; j++)
        {
            if (i != j)
            {
                for (k = red; k <= black; k++)
                {
                    if (k != i && k != j)
                    {
                        counter++;
                        if ((counter) % 22 == 0)
                        { // 每屏显示22行
                            cout << "请按回车键继续";
                            cin.get();
                        }
                        cout << setw(15) << counter;
                        for (loop = 1; loop <= 3; loop++)
                        {
                            switch (loop)
                            {
                            case 1:
                                color = (color_set)i;
                                break;
                            case 2:
                                color = (color_set)j;
                                break;
                            case 3:
                                color = (color_set)k;
                                break;
                            }
                            switch (color)
                            {
                            case red:
                                cout << setw(15) << "red";
                                break;
                            case yellow:
                                cout << setw(15) << "yellow";
                                break;
                            case blue:
                                cout << setw(15) << "blue";
                                break;
                            case white:
                                cout << setw(15) << "white";
                                break;
                            case black:
                                cout << setw(15) << "black";
                                break;
                            }
                        }
                        cout << endl;
                    }
                }
            }
        }
    }
    cout << "共有：" << counter << "种取法" << endl;
    return 0;
}