#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
{
    private:
        int age;
        string first_name;
        string last_name;
        int standard;
        
    public:
        int get_age();
        void set_age(int x);
        void set_first_name(string f_name);
        string get_first_name();
        void set_last_name(string l_name);
        string get_last_name();
        void set_standard(int stand);
        int get_standard();
        string to_string();
};

int Student::get_age()
{
    return age;
}

void Student::set_age(int x)
{
    age = x;
}

void Student::set_first_name(string f_name)
{
    first_name = f_name;
}

string Student::get_first_name()
{
    return first_name;
}

void Student::set_last_name(string l_name)
{
    last_name = l_name;
}
string Student::get_last_name()
{
    return last_name;
}

void Student::set_standard(int stand)
{
    standard = stand;
}
int Student::get_standard()
{
    return standard;
}

string Student::to_string()
{
    char c = ',';
    
    string year = std::to_string(age);
    string stand = std::to_string(standard);
    string check = (year + c + first_name + c + last_name +
    c + stand);
    
    return check;
}

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
