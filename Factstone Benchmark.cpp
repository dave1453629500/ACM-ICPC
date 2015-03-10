/*
Problem B: Factstone Benchmark

Amtel has announced that it will release a 128-bit computer chip by 2010, a 256-bit computer by 2020, and so on, continuing its strategy of doubling the word-size every ten years. (Amtel released a 64-bit computer in 2000, a 32-bit computer in 1990, a 16-bit computer in 1980, an 8-bit computer in 1970, and a 4-bit computer, its first, in 1960.)
Amtel will use a new benchmark - the Factstone - to advertise the vastly improved capacity of its new chips. The Factstone rating is defined to be the largest integer n such that n! can be represented as an unsigned integer in a computer word.

Given a year 1960 ≤ y ≤ 2160, what will be the Factstone rating of Amtel's most recently released chip?

There are several test cases. For each test case, there is one line of input containing y. A line containing 0 follows the last test case. For each test case, output a line giving the Factstone rating.

Sample Input

1960
1981
0
Output for Sample Input

3
8
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int year, k = 2;
    while (cin >> year && year != 0)
    {
        double w = log(4);
        for (int i = 1960; i <= year; i += 10)
            w *= 2;
        int t = 0;
        double f = 0;
        while (f < w)
            f += log(++t);
        cout << t - 1<< endl;
    }   
    return 0;
}