

#include <iostream>
#include"SmartHouse.h"



int main()
{
    SmartHouse smartHouse;
    for (int i = 0; i < 30; i++) {
        cout << "\t\tCycle #" << i + 1<<endl;
        if (i == 29) {
            smartHouse.LeaveHome();
        }
        else {
            smartHouse.ConditionerManage();
            smartHouse.TVManage();
        }
        smartHouse.display();
        Sleep(4000);
        system("cls");
    }
}

