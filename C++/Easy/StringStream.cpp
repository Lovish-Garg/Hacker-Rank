#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector <int> num;

    stringstream s(str);

    for (int i; s >> i;)
    {
        if (s.peek() == ',')
            s.ignore();
        
        num.push_back(i);
    }
    return num;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
