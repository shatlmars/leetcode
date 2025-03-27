#include <unordered_map>
#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> nums, int target)
{
    unordered_map<int, int> numMap;

    for(int i = 0; i < nums.size(); i++)
    {
        int comp = target - nums[i];
        if(numMap.count(comp))
        {
            return{numMap[comp], i};
        }
        numMap[nums[i]] = i;
    }

    return {};// no solution
}

int main()
{

}