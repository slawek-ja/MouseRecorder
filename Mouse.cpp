#include <windows.h>
#include "Mouse.h"

Mouse::Mouse()
{
    getCursorPos();
}

Mouse::~Mouse(){}

void Mouse::getCursorPos()
{
    POINT cursorPosition;
    GetCursorPos(&cursorPosition);
    this->x = cursorPosition.x;
    this->y = cursorPosition.y;
}

int Mouse::getX(){
    return this->x;
}

int Mouse::getY(){
    return this->y;
}

void Mouse::click()
{
    SetCursorPos(this->getX(),this->getY());
    mouse_event(MOUSEEVENTF_LEFTDOWN, this->getX(),this->getY(), 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, this->getX(),this->getY(), 0, 0);
    Sleep(3000);
}
