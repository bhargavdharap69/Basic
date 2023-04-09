#include<iostream>
using namespace std;
class Circle
{
    private:
       float radius;
    public:
        void setRadius(float r)
        {
            radius=r;
        }

        float getRadius()//getter method

        {

            return radius;

        }

        float area();//signature


        float circumference()

        {

            return 2*3.1416*radius;

        }

};

float Circle::area()//definition

{

    return 3.1416*radius*radius;

}

int main()

{

    Circle c1,c2;//object created

    //c1.radius=5;

    //cout<<c1.radius;

    c1.setRadius(5);

    c2.setRadius(7);

    cout<<c1.getRadius()<<endl;

    cout<<c2.getRadius()<<endl;

    cout<<c1.area()<<endl;

    cout<<c2.area()<<endl;

    cout<<c1.circumference()<<endl;

    cout<<c2.circumference()<<endl;

    return 0;

}

