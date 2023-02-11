
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
    
public:
    int maxCount(const vector<int>& banned, int endOfRange, int maximumSum) const {
        unordered_set<int> setBanned(banned.begin(), banned.end());
        int currentSum = 0;
        int maximumNumberOfIntegers = 0;

        for (int i = 1; i <= endOfRange && (currentSum + i <= maximumSum); ++i) {
            //C++20: !setBanned.contains(i)
            if (setBanned.find(i) == setBanned.end()) {
                currentSum += i;
                ++maximumNumberOfIntegers;
            }
        }
        return maximumNumberOfIntegers;
    }
};
