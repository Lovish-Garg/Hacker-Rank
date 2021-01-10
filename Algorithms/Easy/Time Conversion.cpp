#include <bits/stdc++.h>

using namespace std;

int main()
{
    int hh, mm, ss;
    string time;
    char ch;
    cin >> hh >> ch >> mm >> ch >> ss >> time;
    
    hh = (time[0] == 'A') ? (hh == 12 ? 0 : hh) : (hh == 12 ? 12 : hh + 12);
    
    cout << setw(2) << setfill('0') << hh << ':' <<
    setw(2) << setfill('0') << mm << ':' << 
    setw(2) << setfill('0') << ss << endl;
    
    return 0;
}
