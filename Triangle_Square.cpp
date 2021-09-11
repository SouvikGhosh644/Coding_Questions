#include<bits/stdc++.h>
using namespace std;


class Square{
    private:
    int len;
    public:
    void input()
    {
        cout<<"Enter the length:";
        cin>>len;
    }
    int area();
};

class Triangle{
    private:
    int a,b,c;
    public:
    void input()
    {
        cout<<"Enter the sides:";
        cin>>a>>b>>c;
    }
    int area();
};
int Square::area()
{
    return len*len;
}
int Triangle::area()
{
    int s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main()
{
    Square s;
    Triangle t;
    s.input();
    t.input();
    int result1=s.area();
    cout<<"Area of the square ="<<result1<<endl;
    int result2=t.area();
    cout<<"Area of the Triangle is="<<result2<<endl;
}