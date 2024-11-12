#include <stdio.h>

void Print_Factorial(const int N)
{
    if (N < 0)
    {
        printf("Invalid input\n");
        return;
    }

    int result[3000] = {1}; // 初始化结果数组，存储阶乘的每一位
    int result_size = 1;    // 当前结果的位数

    for (int i = 2; i <= N; i++)
    {
        int carry = 0; // 进位
        for (int j = 0; j < result_size; j++)
        {
            int product = result[j] * i + carry;
            result[j] = product % 10; // 保留个位
            carry = product / 10;     // 更新进位
        }

        // 处理剩余的进位
        while (carry)
        {
            result[result_size] = carry % 10;
            carry /= 10;
            result_size++;
        }
    }

    // 逆序输出
    for (int k = result_size - 1; k >= 0; k--)
    {
        printf("%d", result[k]);
    }
    printf("\n");
}
