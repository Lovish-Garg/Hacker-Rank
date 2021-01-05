#include <iostream>
#include <deque> 

using namespace std;

void printKMax(int arr[], int n, int k)
{
    //Write your code here.
    deque <int> data(k);

    for (int i = 0; i < k; ++i)
    {
        while ((!data.empty()) && arr[i] >= arr[data.back()])
        {
            data.pop_back();
        }
          
          data.push_back(i);
    }

    for (int i = k; i < n; ++i)
    {
        cout << arr[data.front()] << " ";

        while ((!data.empty()) && data.front() <= (i - k))
            data.pop_front();

        while(!data.empty() && arr[data.back()] <= arr[i])
            data.pop_back();

        data.push_back(i);
    }

    cout << arr[data.front()] << endl;
}

int main(){
  
    int t;
    cin >> t;
    while(t>0) {
        int n,k;
        cin >> n >> k;
        int i;
        int arr[n];
        for(i=0;i<n;i++)
              cin >> arr[i];
        printKMax(arr, n, k);
        t--;
      }
      return 0;
}
