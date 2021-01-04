#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person
{
    protected:
        string name;
        int age;
        
    public:
        virtual void getdata() = 0;
        virtual void putdata() = 0;
};

int profes = 1, student = 1;

class Professor : public Person
{
    private:
        int publications;
        int cur_id;
        
    public:
        virtual void getdata();
        virtual void putdata();
};

void Professor::getdata()
{
    cin >> name >> age >> publications;
    cur_id = profes++;
}

void Professor::putdata()
{
    cout << name << " " << age << " " << publications << " "
    << cur_id << endl;
}

class Student : public Person
{
    private:
        int total;
        int marks[6];
        int cur_id;
        
    public:
        void getdata();
        void putdata();
};

void Student::getdata()
{
    cin >> name >> age;
    
    total = 0;
    
    for (int i = 0; i < 6; ++i)
    {
        cin >> marks[i];
        total += marks[i];
    }
    
    cur_id = student++;
}

void Student::putdata()
{
    cout << name << " " << age << " " << total << " "
    << cur_id << endl;
}

int main(){
