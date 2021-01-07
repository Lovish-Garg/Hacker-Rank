#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set <int> s;
    
    int queries;
    
    cin >> queries;
    
    for (int i = 0; i < queries; ++i)
    {
        int q, num;
        
        cin >> q >> num;
        
        if (q == 1)
        {
            s.insert(num);
        }
        else if (q == 2) 
        {
            s.erase(num);
        }
        else
        {
            if (s.end() == s.find(num))
                cout << "No\n";
            else
                cout << "Yes\n";
        }
    }   
    return 0;
}
