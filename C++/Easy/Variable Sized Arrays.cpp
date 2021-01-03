#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() 
{
    int r, queries;
       
    cin >> r >> queries;
    
    // here we need a 2d Vector
    vector <vector<int>> data(r);
    
    for (int i = 0; i < r; ++i)
    {
        int len;
        cin >> len;
        
        for (int j = 0; j < len; ++j)
        {
            int val;
            cin >> val;
            data[i].push_back(val);
        }
    }
    
    for (int i = 0; i < queries; ++i)
    {
        int r, c;
        
        cin >> r >> c;
        int row_sum = 0; 
        
        cout << data[r][c] << endl;
    }
    return 0;
}
