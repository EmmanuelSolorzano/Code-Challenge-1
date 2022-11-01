#include <iostream>
using namespace std;

class Point
{
public:
    float x;
    float y;
    Point();
    Point(int x, int y);
    void print();
};

Point::Point(){
    this->x = 0;
    this->y = 0;
}

Point::Point(int x, int y){
    this->x = x;
    this->y = y;
}

void Point::print(){
    cout<<"("<<this->x<<","<<this->y<<")"<<endl;
}