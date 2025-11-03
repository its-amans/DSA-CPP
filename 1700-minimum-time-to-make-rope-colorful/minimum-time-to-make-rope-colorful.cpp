class Solution {
public:
    int minCost(string colors, vector<int>& cost) {
        int n = colors.size();
        if (n <= 1) return 0;
        int total = 0;
        // keep index of the last kept balloon in the run (or its cost)
        int prev_cost = cost[0];
        for (int i = 1; i < n; ++i) {
            if (colors[i] == colors[i-1]) {
                // must remove one: remove cheaper one
                total += min(prev_cost, cost[i]);
                // keep the more expensive one as the "prev" for next comparison
                prev_cost = max(prev_cost, cost[i]);
            } else {
                // different color: start fresh run
                prev_cost = cost[i];
            }
        }
        return total;
    }
};