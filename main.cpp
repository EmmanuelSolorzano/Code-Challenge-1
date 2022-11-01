#include <iostream>
#include <vector>
#include "Point.h"
#include <math.h>

using namespace std;

int main(){
    float inputX, inputY;

    cout<<"Introduzca las cordenadas del PRIMER punto en X:"<<endl;
    cin>>inputX;
    cout<<"Introduzca las cordenadas del PRIMER punto en Y:"<<endl;
    cin>>inputY;
    Point p1(inputX,inputY);

    cout<<"Introduzca las cordenadas del SEGUNDO punto en X:"<<endl;
    cin>>inputX;
    cout<<"Introduzca las cordenadas del SEGUNDO punto en Y:"<<endl;
    cin>>inputY;
    Point p2(inputX,inputY);
    
    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;

    int step;
    if (dx >= dy){
        step = abs(dx);
    }
    else{
        step = abs(dy);
    }

    float x = p1.x;
    float y = p1.y;
    dx = dx / step;
    dy = dy /step;
    Point array[step];

    for (int i = 0; i < step; i++){
        x += dx;
        y += dy;
        Point aux(x,y);
        array[i] = aux;
    }
    
    for (int i = 0; i < step; i++){
        array[i].print();
    }
    return 0;
}