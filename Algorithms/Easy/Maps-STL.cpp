#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() 
{
    map <string, int> student;

    int queries;
       
       cin >> queries;

       while (queries--)
       {
           int type;
           string name;
           
           cin >> type >> name;

           switch(type)
           {
               case 1:
                   {
                       int marks;            
                       cin >> marks;
                       
                        student[name] += marks;
                   }
                   break;
               
               case 2:
                   student.erase(name);
                   break;

               case 3:
                   cout << student[name] << endl;
                   break;
           }
       }
    return 0;
}



