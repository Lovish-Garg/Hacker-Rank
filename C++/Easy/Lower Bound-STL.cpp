#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;  
     
    vector <int> arr;
    
    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;
        
        arr.push_back(val);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int num;
        cin >> num;

        auto i = lower_bound(arr.begin(), arr.end(), num);

        if (arr[i - arr.begin()] == num)
            cout << "Yes" << " " << (i - arr.begin() + 1) << endl; 
        else
            cout << "No" << " " << (i - arr.begin() + 1) << endl; 
    }
    return 0;
}
