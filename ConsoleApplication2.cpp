﻿// ConsoleApplication2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

/*#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "给我三个数字，我判断是否构成三角形" << endl;
    if (scanf_s("%d",&a) && scanf_s("%d",&b) && scanf_s("%d",&c)) {
        if (((a+b)<=c)|| ((a + c) <= b) || ((c + b) <= a) )
            cout << "不可以构成" << endl;
        else cout << "可以" << endl;
    }
    else { cout << "格式错误" << endl; }
}*/


/*#include<iostream>
using namespace std;
int main () {
    int x;
    cout << "输入年份，我判断是不是闰年" << endl;
    if (scanf_s("%d", &x))
    {
        if (x % 400 == 0 || (x % 4 == 0 && x % 100 != 0))
            cout << "是闰年" << endl;
        else
            cout << "不是" << endl;
    }
    else cout << "格式错误" << endl;
}*/

#include<iostream>
using namespace std;
int main() {
   float x, y,sign=1;
    char m, n=0;
    do {
        cin >> x >> m >> y;
        
        if (cin.fail()==0)
        {
            switch (m) {
            case '+':cout << x + y << endl; break;
            case '-':cout << x - y << endl; break;
            case '*':cout << x * y << endl; break;
            case '/':cout << x / y << endl; break;
            }
            cout << "任意按键继续，数字0退出" << endl;
            cout << sign << endl;
            cin >> sign;            
            cout << sign << endl;
           
            if (cin.fail())
                cout << cin.fail() << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            cout << sign << endl;

        }
           
        else {
            cout << "格式错误" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
    } while (sign);

}



// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
