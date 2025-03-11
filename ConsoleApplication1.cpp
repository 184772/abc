// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<sstream>
#include <regex>
#include <string>
using namespace std;

void clear(void)
{
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}


int main()
{
    do
    {
       
        int x = 0, y = 0;
        char m=0,b=0;
        cout << "请输入整数x，y。我将计算他们的和" << endl;
        cin >> x >> y;//在正则表达式中，如果x，y输入错误，那么x，y值为0，仍然满足正则表达式
       
        clear();
        stringstream ss;
        ss << x << y;
        string result = ss.str();
        if (regex_match(result, regex("^[0-9]{0,6}$")))
        {

            cout << x + y << endl << "hello world" << endl;
            cout << "请问是否继续计算？" << endl<<"任意键:继续。2：中止";
            int sign=0;
            cin >> sign;
            clear();
            if (sign == 2)
            {break;}
            
        }
        else
            cout << "格式错误，请重新输入" << endl;
        clear();
    } while (1);
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
