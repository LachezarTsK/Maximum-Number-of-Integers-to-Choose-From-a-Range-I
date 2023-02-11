
/**
 * @param {number[]} banned
 * @param {number} endOfRange
 * @param {number} maximumSum
 * @return {number}
 */
var maxCount = function (banned, endOfRange, maximumSum) {
    const setBanned = new Set(banned);
    let currentSum = 0;
    let maximumNumberOfIntegers = 0;

    for (let i = 1; i <= endOfRange && (currentSum + i <= maximumSum); ++i) {
        if (!setBanned.has(i)) {
            currentSum += i;
            ++maximumNumberOfIntegers;
        }
    }
    return maximumNumberOfIntegers;
};
