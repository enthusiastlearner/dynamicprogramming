# include "coinChange_recursivePermutations.cpp"

// Coin Change Problem
int main()
{
    // `n` coins of given denominations
    vector<int> S = { 1, 2, 3 };

    // total change required
    int target = 4;

    cout << "The total number of ways to get the desired change is "
        << count(S, target);

    return 0;
}