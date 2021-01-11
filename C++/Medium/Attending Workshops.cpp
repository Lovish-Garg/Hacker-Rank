#include<bits/stdc++.h>

using namespace std;

//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops
typedef struct  Workshop
{
    int start_time;
    int duration;
    int end_time;
}Workshop;

typedef struct  Available_Workshops
{
    int n;
    vector <Workshop> arr;
}Available_Workshops;

bool compare(Workshop &w1, Workshop &w2)
{
    return w1.end_time < w2.end_time;
}

Available_Workshops* initialize (int start_time[], int           duration[], int n)
    {
        Available_Workshops *ptr = new Available_Workshops;
            ptr->n = n;
            ptr->arr = vector<Workshop> (n);
            
           for (int i = 0; i < n; ++i)
           {
               ptr->arr[i].start_time = start_time[i];
               ptr->arr[i].duration = duration[i];
               ptr->arr[i].end_time = start_time[i] + duration[i];
           }
           sort(ptr->arr.begin(), ptr->arr.end(), compare);
           return ptr;
    }

int CalculateMaxWorkshops(Available_Workshops *ptr)
{
    int n = ptr->n;
    int count = 1;
    int j = 0;

    for (int i = 1; i < n; ++i)
    {
        
        if (ptr->arr[i].start_time >= ptr->arr[j].end_time)
        {
            ++count;
            j = i;
        }
    }

    return count;
}


int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
