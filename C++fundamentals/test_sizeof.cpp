/*------------------------------------------------------------------------------
 * @file    TEST_SIZEOF.CPP
 * @author  ZhouRongTao 
 * @date    2023/11/14 10:09:02
------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;


int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<< -arr[0];
}