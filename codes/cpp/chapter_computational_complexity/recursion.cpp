/**
 * File: recursion.cpp
 * Created Time: 2023-08-24
 * Author: Krahets (krahets@163.com)
 */

#include "../utils/common.hpp"

/* 递归 */
int recur(int n) {
    // 终止条件
    if (n == 1)
        return 1;
    // 递：递归调用
    int res = recur(n - 1);
    // 归：返回结果
    return n + res;
}

/* 尾递归 */
int tailRecur(int n, int res) {
    // 终止条件
    if (n == 0)
        return res;
    // 尾递归调用
    return tailRecur(n - 1, res + n);
}

/* 斐波那契数列：递归 */
int fib(int n) {
    // 终止条件 f(1) = 0, f(2) = 1
    if (n == 1 || n == 2)
        return n - 1;
    // 递归调用 f(n) = f(n-1) + f(n-2)
    int res = fib(n - 1) + fib(n - 2);
    // 返回结果 f(n)
    return res;
}

/* Driver Code */
int main() {
    int n = 5;
    int res;

    res = recur(n);
    cout << "\n递归函数的求和结果 res = " << res << endl;

    res = tailRecur(n, 0);
    cout << "\n尾递归函数的求和结果 res = " << res << endl;

    res = fib(n);
    cout << "\n斐波那契数列的第 " << n << " 项为 " << res << endl;

    return 0;
}
