#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> v;
        for(int e=0;e<nums.size()-1;e++)
        {
            for(int f=e+1;f<nums.size();f++)
            {
                if(nums[e]+nums[f]==target)
                {
                    v.push_back(e);
                    v.push_back(f);
                    return v;
                }
            }
        }
        return v;
    }
int main()
{
vector<int> v={1,2,3,4,5,6};
for(int  e:twoSum(v,8))
{
cout<<e<<endl;
}
return 0;
}
