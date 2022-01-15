#include<vector>
using namespace std;
int findDuplicate(vector<int> &arr) 
{
    int ans = 0;
    
    //XOR ing all array elements along with XOR [1, n-1]
   for (int i=0;i<arr.size();i++){
        ans = ans^arr[i];
        ans = ans^i;
    }
	
  
   
    return ans;
}
