//write a program to implement student class//

#include<bits/stdc++.h>
using namespace std;

class Student{
    private:
    int roll;
    string name;
    int marks[3];
    public:
    void input()
    {
        cin>>roll>>name;
        for(int i=0;i<3;i++)
        cin>>marks[i];
    }
    int calculate();
    void output()
    {
        cout<<"*****STUDENT DETAILS*****"<<endl;
        cout<<"Roll No:"<<roll<<endl;
        cout<<"Nmae:"<<name<<endl;
        cout<<"Total Marks:"<<calculate();
    }
};

int Student::calculate()
{
    int sum=0;
    for(int i=0;i<3;i++)
    sum+=marks[i];
    
    return sum;
}

int main()
{
    Student s;
    s.input();
    s.output();
    return 0;
}