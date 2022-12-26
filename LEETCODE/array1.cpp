/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.


Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].*/

#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int input [100];
    for (int i = 0; i < t; i++)
    {
        cin>>input[i];
    }
    int tar;
    cin>>tar;
    for (int i = 0; i < t; i++)
    {
        int x=input[i];
        for (int j = i+1; j < t; j++)
        {
            int y=input[j];
            if (x+y==tar)
            {
                cout<<i<<j<<endl;
            }
            
        }
        
        
    }
    
    return 0;
}