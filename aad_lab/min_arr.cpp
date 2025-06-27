#include<bits/stdc++.h>
using namespace std;

vector<int> min_max(vector<int>&arr)
{
    int mini = *min_element(arr.begin(),arr.end());
    int maxi =  *max_element(arr.begin(),arr.end());
    return {mini, maxi};
}

void mini_maxi(vector<int> &arr, int i, int j) {
    if (i == j) {
        max_val = min_val = arr[i];
    }
    else if (i == j - 1) {
        if (arr[i] < arr[j]) {
            max_val = arr[j];
            min_val = arr[i];
        } else {
            max_val = arr[i];
            min_val = arr[j];
        }
    }
    else {
        int mid = (i + j) / 2;
        int max1, min1;

        // Left half
        mini_maxi(arr, i, mid);
        max1 = max_val;
        min1 = min_val;

        // Right half
        mini_maxi(arr, mid + 1, j);
        
        // Combine results
        if (max_val < max1)
            max_val = max1;
        if (min_val > min1)
            min_val = min1;
    }
}



    vector<int> test = {90,20,30,40,50,72,41,1,2};
    int x = 0;
    int y = test.size()-1;

   int max_val = test[0];
   int min_val = test[0];
int main()
{

    mini_maxi(test,x,y);

    cout<<"Using DAC Min and Max values are:"<<max_val<<" ,"<<min_val;
    return 0;
}
