#include<bits/stdc++.h>
using namespace std;

int linear(vector<int> &arr, int target) //linear search function , taking KEY(target) , and array as inputs
{
    int n = arr.size();
    if(n == 0)return -1;  ///edge case of an empty array
    for(int i = 0 ; i<n;i++)
    {
        if(arr[i] == target)
        {
            return i;
        }
    }
}
int main()
{
    int n;
    cin>>n;

    vector<int>nums = {1,2,5,6,7,8};
    cout<<linear(nums,n)<< " ";

    return 0;
}