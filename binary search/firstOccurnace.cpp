#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <bits.h>
using namespace std;

int main(){


    vector<int> nums = {1,2,3,4,4,4,5,5,6};

    int n = nums.size();

    int s = 0;
    int e = n-1;

    int mid = s + (e-s)/2;

    int ans = -1;

    int target = 4;

    while(s<=e){

        if( target == nums[mid] ){

            ans = mid;
            e = mid-1;
        }

        else if(nums[mid] < target){

            s = mid+1;
        }

        else if(nums[mid] > target){

            e = mid-1;
        }

        mid = s + (e-s)/2;
    }
    
    cout << ans;

}
