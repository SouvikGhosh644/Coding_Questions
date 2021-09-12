//Calculator program using class//

#include<bits/stdc++.h>
using namespace std;

class Calculator{
    private:
    int a,b;
    int Sum();
    int Sub();
    int Multiple();
    int Division();
    public:
    void input()
    {
        cout<<"Enter the value=";
        cin>>a>>b;
    }
    void display()
    {
        cout<<"Sum of given no is="<<Sum()<<endl;
        cout<<"Subtractions of given no is="<<Sub()<<endl;
        cout<<"Product of given no is="<<Multiple()<<endl;
        cout<<"Division of given no is="<<Division()<<endl;
    }
    
};

int Calculator::Sum()
{
    return a+b;
}
int Calculator::Sub()
{
    return a-b;
}
int Calculator::Multiple()
{
    return a*b;
}
int Calculator::Division()
{
    return a/b;
}

int main()
{
  Calculator c;
  c.input();
  c.display();
}