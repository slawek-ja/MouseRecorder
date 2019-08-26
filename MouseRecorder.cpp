#include <iostream>
#include <windows.h>

using namespace std;

void getCursorPos();
void click(int, int);

int main()
{
    bool exit = false;
    while(!exit)
    {
        if (GetAsyncKeyState(VK_F1))
        {
            while(!exit)
            {
                click(312,1029);
                click(415,1029);
                click(524,1029);
                click(634,1029);
                click(741,1029);
                click(916,976);
            }
        }
        if (GetAsyncKeyState(VK_F2))
        {
            exit = true;
        }
    }
}

void getCursorPos()
{
    int x;
    int y;
    POINT cursorPosition;
    GetCursorPos(&cursorPosition);
    x = cursorPosition.x;
    y = cursorPosition.y;
    cout << "Mouse X = " << x << endl;
    cout << "Mouse Y = " << y << endl;
}

void click(int x, int y)
{
    if (GetAsyncKeyState(VK_F2))
    {
        //stop running after F2
        exit(0);
    }
    SetCursorPos(x,y);
    mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
    Sleep(1000);
}
