#include <iostream>
#include <windows.h>
#include <vector>
#include "Mouse.cpp"

using namespace std;

void getInfo();
void startRecording();
void playRecordedPositions(vector<Mouse>);
void click(Mouse);

void recorderMenu()
{
    getInfo();
    startRecording();
}

void getInfo()
{
    system("cls");
    cout<<"1. Move mouse on the position of the screen that you want to record and then press left button on your mouse to save that position."<<endl;
    cout<<"2. When you finished recording, tap F1 to save your progress"<<endl;
    cout<<"3. Chose how many times program should repeat recorded positions."<<endl;
    cout<<"4. To stop - press F2 if you wish to stop at any time."<<endl;
    system("pause");
}

void startRecording()
{
    vector<Mouse> mousePositions = {};
    while(true)
    {
        if (GetAsyncKeyState(VK_LBUTTON))
        {
            mousePositions.push_back(Mouse());
            Sleep(200);
        }
        if (GetAsyncKeyState(VK_F1))
        {
            break;
        }
    }
    cout<<"Stopped!"<<endl;
    system("pause");
    playRecordedPositions(mousePositions);
}

void playRecordedPositions(vector<Mouse> mousePositions)
{
    for(Mouse mouse : mousePositions)
    {
        mouse.click();
    }
}
