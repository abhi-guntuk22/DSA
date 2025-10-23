class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int totalBottles = numBottles;  // total bottles you can drink
    int empty = numBottles;         // empty bottles after drinking

    // jab tak tumhare paas enough empty bottles hain exchange ke liye
    while (empty >= numExchange) {
        int newBottles = empty / numExchange; // new full bottles after exchange
        empty = empty % numExchange + newBottles; // remaining empty + new empties after drinking
        totalBottles += newBottles; // add newly gained bottles to total
    }

    return totalBottles;
    }
};