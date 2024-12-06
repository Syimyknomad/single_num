#include <iostream>
#include <vector>
using namespace std;
class Solutions{
public:
    int singleNumber(vector<int>& nums){
        int result=0;
        for(int num: nums){
            result ^=num;
        }
        return result;
    }
};
