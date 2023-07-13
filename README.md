# DP
Codes related to dynamic programming
# questions :

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

## H algorithm
Hassan has recently arrived at an algorithm that, in his opinion, can reduce the execution time of the Sort Merge algorithm. But Ali, who has been with Hasan for a long time, believes that Hasan's method is wrong. So he gave Hassan an array of n numbers to sort them. The good way to sort the array is as follows:
First, he finds the consecutive ascending parts of the array and writes the length of each one on the paper. For example, if the array is 6 4, 5, 3, 1, then the consecutive ascending parts of the array are two: 5 3, 1, and 6 4, the length of the first being 3 and the length of the second being 2. So Ali writes two numbers 3 and 2 on the paper. He writes k numbers on paper. Then it starts to sort the array in such a way that each time it selects two adjacent ascending parts of the array and merges them similar to sort Merge; It means that after this, these two ascending parts become one ascending part. In other words, he turns these two parts into one arranged part. Then he erases the two numbers related to these two parts from the paper and writes the size of the new part instead of these two numbers on the paper. Also, he has to spend time to merge two consecutive parts equal to the sum of their size (that is, the sum of the numbers he wrote on the paper for these two parts). Now Hassan wants to make the array as soon as possible in order to put Ali to sleep. sort it out and deliver it to Ali. Hassan's problem is that he is always tired. That's why he wants you to tell him what the minimum time is.
Entrance:
In the first line of input, there are two numbers n and k.
Then in the next line k numbers appear, the i-th number represents the i-th number that Ali wrote on the paper.
1 ≤ 𝑛 ≤ 10
9
1 ≤ 𝑘 ≤ 100
It is guaranteed that the sum of the numbers in the second line of the input is equal to n and they are all natural numbers between 1 and n.
Output:
Output the shortest time to sort the array in a single output line.
Example 1:
input:
10 3
1 3 6
output:
14
Explanation:
The optimal method is to merge the first two parts together and then merge the two resulting parts into one. The cost of the first marj is 4 and the cost of the second marj is 10, which makes a total of 14.
Example 2:
input:
7 4
1 1 1 4
Output:
12
Example 3:
input:
2 2
1 1
Output:
2
Example 4:
input:
4 3
1 2 1
Output:
7

## the cinema
Barre Cinema has two halls, each of which shows different movies, and each has the capacity of B people.
The bad habit of Barre people in watching movies is that every person likes to see a movie that the person in front of him in the queue sees and by default buys a ticket for the same movie unless we give him money as much as his pocket so that he is satisfied to watch another movie.
We denote the pocket capacity of the i-th person in the queue by ai. It needs a new 𝑖 manager to manage the ticket sales of these two halls. This ticket sale should happen in such a way that:
1- Don't sell more tickets than B for one hall.
2- Spend the least amount of money on filling people's pockets.
Therefore, ticket sales should be done in such a way that the lowest cost is obtained.
It is guaranteed that we can distribute n people among the halls in such a way that no more than B people go to any of the two halls.
Entrance:
In the first line, n, which is the number of people in the queue, and B, which is the capacity of the halls, will be given to you. In the next line n numbers are given, the i-th number is the pocket size of the i-th person or ai.
1 ≤ 𝑛 ≤ 3000
1 ≤ 𝑎𝑖 ≤ 10^9
𝑛 ≤ 2 × 𝐵
Output:
Print on one line the lowest cost required to meet the conditions.
Example 1:
input:
2 1
1000 50
Output:
50
Example 2:
input:
3 2
50 10 1000
Output:
10

## Calculate the length of the largest common subsequence (LCS)
In the previous exercise series, you got acquainted with the algorithm for calculating the length of the largest common subsequence for two arrays. In this series of exercises, you need to find an algorithm based on dynamic programming that calculates the length of the largest common subsequence for three arrays.
Entrance :
In this question, first, three numbers n, m, k are given, which represent the number of members of the first, second, and third array, respectively, from right to left. In the next three lines, in each i-th line the members of the i-th array are mentioned - proportional to the number of its members (3 ≥ i ≥ 1).
1 ≤ n, m, k ≤ 110
Output:
In the output, you should only output the length of the longest common consecutive subarray (LCS) of the three arrays.
Example 1:
input:
5 5 7
1 2 3 4 5
5 4 3 2 1
5 4 3 2 1 6 7
Output:
1

## Calculate the length of the largest strictly ascending subsequence (LIS)
In the exercise of the previous series, you got acquainted with the algorithm for calculating the length of the largest strictly ascending subsequence. Algorithm presented in the previous series of exercises is an algorithm of time order
It is O(n²).
As you know, this algorithm requires a lot of time (several hours) for large n in the order of 10^6. In this question, you need to provide an algorithm based on dynamic programming in the order of O(nlog(n)) time. .
Entrance:
n is expressed in the first line, which represents the number of array members. In the next line, the array members are separated by spaces.
1 ≤ 𝑛 ≤ 10^6
Output:
In the output, only one number indicating the length of the largest strictly ascending subsequence (LIS) should be shown.
Example 1:
input:
5
2 7 4 3 8
Output:
3
