#include <iostream>
using namespace std;

int Show_Print_Menu();
int main()
{
    Show_Print_Menu();
    return 0;
}
int Show_Print_Menu()
{
    for(;1;)
    {
        cout << "                 ┎┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┒" << endl;
        cout << "                 ┋           学生教务管理系统       ┋" << endl;
        cout << "                 ┋       １姓名排序     ２学号排序    ┋" << endl;
        cout << "                 ┋       ３默认顺序     4写入文件    ┋" << endl;
        cout << "                 ┋       ５返回菜单                 ┋" << endl;
        cout << "                 ┖┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┚" << endl;
        cout << "请输入相应操作前面的序号：";
    }
}
