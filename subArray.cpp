// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
//     int n = nums.size();
    
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             vector<int> ans;
//             for(int k=i;k<=j;k++){
//                 cout<<nums[k]<<" ";
//             }
//             cout<<endl;
//         }
//     }

//     return 0;
// }


// Maximum Subarray
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int n = nums.size();
    int maxi = INT32_MIN;
    
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum+=nums[j];
            maxi = max(maxi,sum);
        }
    }
    cout<<maxi;

    return 0;
}