#include <iostream>
#include "./headers/Rectangle.h"
#include "./headers/Circle.h"
#include "./headers/Square.h"
#include "./headers/Line.h"
#include "./headers/Triangle.h"
#include "./headers/Ellipse.h"
using namespace std;
using namespace Shape;

int main(){
    
    
    int choice;
    char choice1;
        do
        {

            cout << "Enter your choice \n 1 for Rectangle \n 2 for Square \n 3 for circle \n 4 for line \n 5 for triangle\n 6 for Ellipse";
            cin>>choice;
            switch (choice)
            {
            case 1:
                {
                double length,breadth;
                cout<<"enter length and breadth \n";
                cin>>length>>breadth;
                Rectangle rectange1(length,breadth);
                cout<<"Area of Rectangle is "<<rectange1.area()<<endl;
                cout<<"Perimeter of Rectangle is "<<rectange1.perimeter()<<endl;}
                break;
            case 2:
            {
                double length;
                cout<<"enter length square \n";
                cin>>length;
                Square square1(length);
                cout<<"Area of square is "<<square1.area()<<endl;
                cout<<"Perimeter of square is "<<square1.perimeter()<<endl;
            }break;
            case 3:
            {
                double radius;
                cout<<"enter radius for circle \n";
                cin>>radius;
                Circle circle1(radius);
                cout<<"Area of cricle is "<<circle1.area()<<endl;
                cout<<"Perimeter of circle is "<<circle1.perimeter()<<endl;
            }break;
            case 4:
            {
                float x1cordinate, y1cordinate,x2cordinate,y2cordinate;
                cout<<"enter 4 cordinates for line \n";
                cin>>x1cordinate>>y1cordinate>>x2cordinate>>y2cordinate;
                Line line1(x1cordinate,y1cordinate,x2cordinate,y2cordinate);
                cout<<"Length of line is "<<line1.lengthOfLine()<<endl;
            }break;
            case 5:
            {
                double side1, side2,side3;
                cout<<"Enter length of three side of triangle \n";
                cin>>side1>>side2>>side3;
                Triangle triangle1(side1,side2,side3);
                cout<<"area of triangle is "<<triangle1.area()<<endl;
                cout<<"Permeter of Triangle is "<<triangle1.perimeter()<<endl;
                
            }break;
            case 6:
            {
                double majorAxis,minorAxis;
                cout<<"Enter value for semi major axis and minor axis \n";
                cin>>majorAxis>>minorAxis;
                Ellipse ellipse1(majorAxis,minorAxis);
                cout<<"Area of ellipse is "<<ellipse1.area()<<endl;
                cout<<"Perimeter of elipse is "<<ellipse1.perimeter()<<endl;

            }break;

            case 7:
                exit(1);
            break;
            default:
            { 
                cout<<"wrong choice";
            }                
            break;
            }
            cout << "do you want to continue (y/n)?\n";
            cin >> choice1;
        } while (choice1 == 'y');

    return 0;
}