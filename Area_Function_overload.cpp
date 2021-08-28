#include <iostream>

using namespace std;
int area(int radius);
int area(int radius)
{
    cout<<"The area of Circle is :"<<3.14*radius*radius<<"\n\n\n\n\n";
};
int area(int length, int breath);
int area(int length, int breath)
{
    cout<<"The area of Rectangle is :"<<length*breath<<"\n\n\n\n\n";
};
float area(float base, float hypotenous);
float area(float base, float hypotenous)
{
    cout<<"The area of Triangle is :"<<base*hypotenous/2<<"\n\n\n\n\n";
};
int main()
{
    int i=0;
    top:
    cout<<"Chose the code from one of the following: \nCircle                  1\nRectangle               2\nTriangle                3"<<"\nExit                    4"<<"\n";
    cin>>i;
    if(i==1)
    {
        int radius=0;
        cout<<"Enter the radius";
        cin>>radius;
        area(radius);
        goto top;
    }
    if(i==2)
    {
        int length=0,breath=0;
        cout<<"Enter the length";
        cin>>length;
        cout<<"Enter the breath";
        cin>>breath;
        area(length,breath);
        goto top;
    }
    if(i==3)
    {
        float base=0,hypotenous=0;
        cout<<"Enter the length of base";
        cin>>base;
        cout<<"Enter the length of hypotenous";
        cin>>hypotenous;
        area(base,hypotenous);
        goto top;
    }
    if(i==4)
    {
        exit(0);
    }
    return 0;
}
