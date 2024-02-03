#include <bits/stdc++.h>
using namespace std;

bool arr[100000 + 5];


int main()
{
    vector <int> nums;
    int n;
    while(cin >> n){
        nums.push_back(n);
    }

    for(int i = 0; i < nums.size(); i++)
    {
        if(arr[nums[i]] == true)
        {
            cout << "true";
            return 0;
        }
        arr[nums[i]] = true;
    }
    cout << "false";

    map<int,int> _map;
        for(int i = 0; i < nums.size(); i++){
            _map[nums[i]]++;
        }
        for(int i = 0; i < nums.size(); i++){
            if(_map[nums[i]] > 1){
                return true;
            }
        }
        return false;


    return 0;
}
