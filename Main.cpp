#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#include "MouseRecorder.cpp"

using namespace std;

void menu();
void menuOptions();
string getBorder(int);

int main()
{
    menu();
}

void menu()
{
    cout<<getBorder(47)<<endl;
    cout<<"# Mouse recorder by slawek-ja                 #"<<endl;
    cout<<"# github repos - https://github.com/slawek-ja #"<<endl;
    cout<<getBorder(47)<<endl;
    cout<<"Options:"<<endl;
    menuOptions();
}

void menuOptions()
{
    while(true)
    {
        cout<<"1. Start recording."<<endl;
        cout<<"2. End program."<<endl;
        cout<<"Your choice: "<<endl;
        switch(getch())
        {
        case '1' :
        {
            startRecording();
            break;
        }
        case '2' :
        {
            cout<<"Exiting recorder. Bye!";
            Sleep(2000);
            exit(0);
        }
        default:
            cout<<"Error! No such option"<<endl;
            system("pause");
            system("cls");
        }
    }
}

string getBorder(int length)
{
    return string (length,'#');
}
