#ifndef MOUSE_H
#define MOUSE_H


class Mouse
{
    public:
        Mouse();
        ~Mouse();
        int getX();
        int getY();
        void click();

    protected:

    private:
        int x;
        int y;
        void getCursorPos();
};

#endif // MOUSE_H
