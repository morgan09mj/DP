# DP
Codes related to dynamic programming
## questions :

## Minimum coins:
Write a program that, according to a set of coins and the value of V, will output the minimum number of coins needed to make their sum equal to V.
Note: If the desired value cannot be created by the input coins, the value -1 will be printed in the output.
Entrance:
In the first line, you will be given two values, N and V, where n is the desired number of coins and V is the minimum sum of coins.
In the second line, you will be given the desired coins to use them and the value of V to output the minimum number of desired coins.
Output:
Minimum number of coins required to make V.
0 ≤ 𝑉 ≤ 10^5
1 ≤ 𝑁 ≤ 12
Example 1:
input:
3 30
25 5 10
Output:
2
Example description:
25 and 5 coins can be used to produce 30 and the answer is 2.

## Too much cache
Sepehr is very rich but very stingy.
Sepehr has n square tiles, the length of the i-th side of the tile is an integer equal to ai. Sepehr wants the total area of these tiles to be exactly equal. In order to achieve this goal, he can convert a tile on side a to a tile on side b at each stage, where the number b is an integer and non-negative and can be less or more than the number a, but because he is rich, this work and he pays (a − b)^2 rials to the tiler to do this (note that the length and width of each tile will always be the same).
Because changing the length of the side of a tile multiple times reduces the resistance of the tile, the length of the side of each tile can be changed at most once. Since Sepehr is very stingy, he wants to get the least amount of money he has to pay the tiler so that the total area of the tiles is exactly equal to m.
Entrance:
n and m are given in the first line.
In the second line, up to 1 + n lines are given in each line along the side of one of the tiles.
1 ≤ 𝑛 ≤ 10
1 ≤ 𝑚 ≤ 10 000
1 ≤ 𝑎
𝑖 ≤ 100
All input numbers are integers.
Output:
In the only output line, the lowest amount of money that Sepehr has to pay to the tiler is the total area of the tiles
Print equals m.
If it was impossible to reach the total area of m, print the number -1 in the output.
Example 1:
input:
3 6
3
3
1
output:
5
Explanation:
By paying 4 rials, Sepehr converts one of the tiles of length 3 into length 1, and by paying 1 ruble, he converts the other tile of length 3 into length 2.

