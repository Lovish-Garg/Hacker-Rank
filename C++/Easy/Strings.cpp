#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void revrse(string str)
{
    int n = str.size() / 2;
    for (int i = 0; i < n; i++) 
        swap(str[i], str[n - i - 1]); 
    cout << str;
}

int main() {
	// Complete the program
    string a;
    cin >> a;
    
    string b;
    cin >> b;
    
    cout << a.size() << " ";
    cout << b.size() << endl;
    
    cout << a + b << endl;
    char temp = *(a.begin());
    *(a.begin()) = *(b.begin());
    *(b.begin()) = temp;
    
    cout << a << " " << b;
    return 0;
}
