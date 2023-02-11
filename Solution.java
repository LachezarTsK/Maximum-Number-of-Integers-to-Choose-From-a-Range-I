
import java.util.Set;
import java.util.HashSet;

public class Solution {

    public int maxCount(int[] banned, int endOfRange, int maximumSum) {
        Set<Integer> setBanned = new HashSet<>();
        for (int num : banned) {
            setBanned.add(num);
        }
        int currentSum = 0;
        int maximumNumberOfIntegers = 0;

        for (int i = 1; i <= endOfRange && (currentSum + i <= maximumSum); ++i) {
            if (!setBanned.contains(i)) {
                currentSum += i;
                ++maximumNumberOfIntegers;
            }
        }
        return maximumNumberOfIntegers;
    }
}
