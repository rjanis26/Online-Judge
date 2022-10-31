/* 
#include<bits/stdc++.h>
using namespace std;
 
int find_floor(int arr[], int n, int value) {

    int l=0, r=n-1, ans=-1;
    while(l <= r) {
        int mid = l + (r-l)/2;
        
        if(arr[mid] == value) {
            ans = arr[mid];
            break;
        }

        else if(arr[mid] < value) {
            ans = arr[mid];
            l = mid+1;
        }
        else 
            r = mid-1;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    int arr[n+2];
    for(int i=0; i<n; i++) 
        cin>>arr[i];
    
    int item; cin>>item;
    cout<< find_floor(arr,n,item) << endl;

 
    return 0;
} */
/* 

#include<bits/stdc++.h>
using namespace std;

int search(vector<int> &arr, int target) {
  
    int n=arr.size();
    int l=0, r=n-1;

    while(l <= r)  {
        const int mid  = l+(r-l)/2;

        if(arr[mid] == target)
            return mid;
        if(arr[l] <= arr[mid]) {
            if(arr[l] <= target && target < arr[mid])
                r=mid-1;
            else 
                l=mid+1;
        }
        else {
            if(arr[mid] < target && target <= arr[mid])
                l =mid+1;
            else 
                r=mid-1;
        }
        return -1;
    }
  
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

 


    return 0;
}


   int search(vector<int>& nums, int target) {
            int l = 0;
    int r = nums.size() - 1;

    while (l <= r) {
      const int m = l + (r - l) / 2;
      if (nums[m] == target)
        return m;
      if (nums[l] <= nums[m]) {  // nums[l..m] are sorted
        if (nums[l] <= target && target < nums[m])
          r = m - 1;
        else
          l = m + 1;
      } else {  // nums[m..n - 1] are sorted
        if (nums[m] < target && target <= nums[r])
          l = m + 1;
        else
          r = m - 1;
      }
    }

    return -1;
  }


// int search(vector<int>& nums, int target) {
//     int n = nums.size();
//     int low = 0, high = n-1;
//     while(low<=high){
//         int mid = (low+high)/2;
//         // check if the current element is target
//         if(nums[mid] == target)
//             return mid;
//         // if the starting index of the search space has smaller element than current element
//         else if(nums[low]<=nums[mid]){
//             // if target lies in non-rotated search space (or subarray)
//             if(target >= nums[low] && target < nums[mid])
//                 high = mid - 1;
//             else
//                 low = mid + 1;
//         } else {
//             // if target lies in non-rotated subarray
//             if(target>nums[mid] && target<=nums[high])
//                 low = mid + 1;
//             else
//                 high = mid - 1;
//         }
//     }
//     // if you couldn't find the target element until now then it does not exists
//     return -1;
// }
// int main(){
//     vector<int> nums({4,5,6,7,0,1,2});
//     cout<<search(nums, 4);
// }
 */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void print_arr(vector<int> &arr) {
    for(auto x : arr) 
        cout << x << " ";
    cout << endl;
}

vector<int> find_previous_smallest(vector<int> &arr) {
    stack<int> st;
    vector<int> ans;
    int n = arr.size();
    
    for(int i=0; i<n; i++) {
        while(!st.empty() && st.top() >= arr[i]) 
            st.pop();
        
        int ele = (st.empty()) ? -1 : st.top();
        ans.push_back(ele);
        st.push(arr[i]);
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>> n;
    vector<int> arr(n,0);

    for(int i=0; i<n; i++) 
        cin >> arr[i];
    vector<int> ans = find_previous_smallest(arr);
    print_arr(arr);



    return 0;
} */
/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void print_arr(vector<int> &arr) {
    for(auto x : arr) 
        cout << x << " ";
    cout << endl;
}

vector<int> find_previous_smallest(vector<int> &arr) {
    stack<int> st;
    vector<int> ans;
    int n = arr.size();

    for(int i=0; i<n; i++) {
        while(!st.empty() && st.top() >= arr[i]) 
            st.pop();
        
        int ele = (st.empty()) ?  -1 : st.top();
        ans.push_back(ele);
        st.push(arr[i]);

    }

    return ans;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin >> n; 
   vector<int> arr(n);
    for(int i=0; i<n; i++) 
        cin >> arr[i];
    
    vector<int> ans = find_previous_smallest(arr);
    print_arr(ans);
 

    return 0;
} */




#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void print_arr(vector<int> &arr) {
    for(auto x : arr) 
        cout<< x <<" ";
    cout<< endl;
}

vector<int> find_next_smallest(vector<int> &arr) {
    stack<int> st;
    vector<int> ans;
    int n = arr.size();

    for(int i=n-1; i>=0; i--) {
        while(!st.empty() && st.top() >= arr[i]) 
            st.pop();
        
        int ele = (st.empty()) ? -1 : st.top();
        ans.push_back(ele);
        st.push(arr[i]);
    }

    reverse(ans.begin(), ans.end());    
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    int n; cin >> n;
    vector<int> arr(n), ans;
    for(int i=0; i<n; i++) 
        cin >> arr[i];

    ans = find_next_smallest(arr);
    print_arr(ans);
    
 
    return 0;
}