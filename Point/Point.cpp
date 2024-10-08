#include<iostream>
using namespace std;

class Point 
{
    int x;
    int y;

public:

    Point() {}
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void Print() 
    {
        cout << "X: " << x << "\tY: " << y << endl;
    }
    void Input(int a, int b) 
    {
        x = a;
        y = b;
    }

    Point operator+ (Point& b) 
    {
        Point sum(x + b.x, y + b.y);
        return sum;
    }

    int GetX()const
    {
        return x;
    }
    int GetY()const
    {
        return y;
    }
    void SetX(int _x)
    {
        x = _x;
    }
    void SetY(int _y)
    {
        y = _y;
    }

    Point operator-(Point& b)
    {
        Point result(x - b.x, y - b.y);
        return result;
    }
    Point operator-(int b)
    {
        Point result(x - b, y - b);
        return result;
    }
    Point operator*(int b)
    {
        Point result(x * b, y * b);
        return result;
    }
    Point& operator-=(int a)
    {
        x -= a;
        y -= a;
        return *this;
    }
    Point& operator*=(int a)
    {
        x *= a;
        y *= a;
        return *this;
    }
    Point& operator--()
    {
        x -= 10;
        y -= 10;
        return *this;
    }
    Point  operator--(int)
    {
        Point temp(*this);
        x -= 10;
        y -= 10;
        return temp;
    }
};

Point operator+(int a, Point& b) 
{
    
    Point rez;
    rez.SetX(a + b.GetX());
    rez.SetY(a + b.GetY());
    return rez;
}
Point operator+(Point& b, int a) 
{
    Point rez(b.GetX() + a, b.GetY() + a);
    return rez;
}
Point operator++(Point& obj) 
{
    obj.SetX(obj.GetX() + 10);
    obj.SetY(obj.GetY() + 10);
    return obj;
}
Point operator++(Point& obj, int) 
{
    Point temp(obj.GetX(), obj.GetY());

    obj.SetX(obj.GetX() + 10);
    obj.SetY(obj.GetY() + 10);

    return temp;
}

Point operator+=(Point& obj, int a)
{
    obj.SetX(obj.GetX() + a);
    obj.SetY(obj.GetY() + a);
    return obj;
}

int main()
{
    Point a(1, 2);
    a.Print();

    a += 100;
    a.Print();

    Point b(10, 5);

    Point x = a + b;
 

}