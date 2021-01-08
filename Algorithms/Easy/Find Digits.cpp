#include <bits/stdc++.h>

using namespace std;

// Complete the findDigits function below.
int findDigits(int n) {
    int arr[10];
    
    int k = 0;
    int copy = n;
    
    while (n != 0)
    {
        arr[k] = n % 10;
        n /= 10;
        ++k;
    }
    
    for (int i = 0; i < k; ++i)
    {
        cout << arr[i] << " ";
    }
    int to = k;
    
    for (int i = 0; i < to; ++i)
    {
        if (arr[i] == 0 || copy % arr[i] != 0)
            --k;
    }
    return k;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = findDigits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
