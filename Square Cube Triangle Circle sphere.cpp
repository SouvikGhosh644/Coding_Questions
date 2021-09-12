#include<bits/stdc++.h>
using namespace std;
class Square{
    private:
    int len;
    public:
    void input()
    {
        cout<<"Enter the length of Square=";
        cin>>len;
    }
    int area();
};
class Circle{
    private:
    float r;
    public:
    void input()
    {
        cout<<"Enter the radius of Circle=";
        cin>>r;
    }
    float area();
};
class Triangle{
    private:
    int a,b,c;
    public:
    void input()
    {
        cout<<"Enter the sides Triangle=";
        cin>>a>>b>>c;
    }
    float area();
};
class Sphere{
    private:
    float r;
    public:
    void input()
    {
        cout<<"Enter the radius Sphere=";
        cin>>r;
    }
    float area();
};
class Cube{
    private:
    int len;
    public:
    void input()
    {
        cout<<"Enter the length Cube=";
        cin>>len;
    }
    int area();
};
int Square::area()
{
    return len*len;
}
float Circle::area()
{
    return 3.14*r*r;
}
float Triangle::area()
{
    int s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
float Sphere::area()
{
    return (4*3.14*r*r*r)/3 ;
}
int Cube::area()
{
    return len*len*len;
}
int main()
{
    Square s1;
    Circle c1;
    Triangle t;
    Sphere s2;
    Cube c2;
    s1.input();
    c1.input();
    t.input();
    s2.input();
    c2.input();
    int result1=s1.area();
    float result2=c1.area();
    float result3=t.area();
    float result4=s2.area();
    int result5=c2.area();
    cout<<"Area of Square="<<result1<<endl;
    cout<<"Area of circle="<<result2<<endl;
    cout<<"Area of Triangle="<<result3<<endl;
    cout<<"Area of Sphere="<<result4<<endl;
    cout<<"Area of Cube="<<result5<<endl;
}