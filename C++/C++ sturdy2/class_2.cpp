#include <iostream>

using namespace std;

class Point {
private:
    int x;
    int y;
public:
    Point(const int& xpos, const int& ypos);
    int GetX() const;
    int GetY() const;
    bool SetX(int xpos);
    bool SetY(int ypos);
};

Point::Point(const int& xpos, const int& ypos)
{
    x = xpos;
    y = ypos;
}

int Point::GetX() const
{
    return x;
}

int Point::GetY() const
{
    return y;
}

bool Point::SetX(int xpos)
{
    if (xpos < 0 || xpos > 100) return false;
    x = xpos;
    return true;
}

bool Point::SetY(int ypos)
{
    if (ypos < 0 || ypos > 100) return false;
    y = ypos;
    return true;
}

class Rectangle {
private:
    Point upLeft;
    Point lowRight;
public:
    Rectangle(const int& x1, const int& x2,
        const int& y1, const int& y2);
    
    void ShowRecInfo() const;
};

Rectangle::Rectangle(const int& x1, const int& x2,
    const int& y1, const int& y2) : upLeft(x1, y1), lowRight(x2, y2)
{
    upLeft = Point(x1, y1);
    //upLeft = new Point(x1, y1); => 포인터일 경우 사용하는 방식
}

void Rectangle::ShowRecInfo() const
{
    cout << "(" << upLeft.GetX() << ", " << upLeft.GetY() << ")";
    cout << "(" << lowRight.GetX() << ", " << lowRight.GetY() << ")";
}

int main()
{
    Rectangle r(10, 20, 30, 40);
    
    return 0;

}
