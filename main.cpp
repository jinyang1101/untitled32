自然数的位数：
int NumDigit(int number)
{
    if(number==0)
    {
        return 0;
    }
    else if(number/10==0)
    {
        return 1;
    }
    else
    {
        return NumDigit(number/10)+1;
    }
}
跨函数求一批数中的最大数：

int maxnum(int a[],int n){
    int max = a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
    数组-查找k出现次数：


#include <stdio.h>
int main() {
        int arr[10];
        int k, i, count = 0;
        for (i = 0; i < 10; i++) {
            scanf("%d", &arr[i]);
        }
        scanf("%d", &k);
        for (i = 0; i < 10; i++) {
            if (arr[i] == k) {
                count++;
            }
        }
        printf("%d", count);
        return 0;
    }
    统计字符数量：
#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000

    int main() {
        char str[MAX_LEN];
        fgets(str, MAX_LEN, stdin);
        printf("%ld\n", strlen(str) - 1); // 注意减去换行符的长度
        return 0;
    }
    统计字母个数
#include <stdio.h>
    int main() {
        int cnt = 0;  // 统计字母的个数
        char c;
        while ((c = getchar()) != '@') {
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) cnt++;  // 判断是否为字母
        }
        printf("%d\n", cnt);
        return 0;
    }
最值对应下标位置：
#include <stdio.h>

#define N 10

    int main()
    {
        int a[N];
        int min = 0, max = 0;
        for (int i = 0; i < N; i++) {
            scanf("%d", &a[i]);
            if (a[i] < a[min]) min = i;
            if (a[i] > a[max]) max = i;
        }
        printf("min=%d,minpos=%d\n", a[min], min + 1);
        printf("max=%d,maxpos=%d\n", a[max], max + 1);
        return 0;
    }
    素数的和：
#include <stdio.h>

    int is_prime(int n)
    {
        if (n < 2) {
            return 0;
        }
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return 0;
            }
        }
        return 1;
    }

    int main()
    {
        int n, sum = 0;
        do {
            scanf("%d", &n);
            if (is_prime(n)) {
                sum += n;
            }
        } while (n != 1);
        printf("%d\n", sum);
        return 0;
    }
    比较大小：
#include <stdio.h>

    int main()
    {
        int a, b, c, t;
        scanf("%d%d%d", &a, &b, &c);
        if (a > b) {
            t = a;
            a = b;
            b = t;
        }
        if (a > c) {
            t = a;
            a = c;
            c = t;
        }
        if (b > c) {
            t = b;
            b = c;
            c = t;
        }
        printf("%d->%d->%d", a, b, c);
        return 0;
    }
统计字母：
#include <stdio.h>
    int main() {
        int cnt = 0;  // 统计字母的个数
        char c;
        while ((c = getchar()) != '@') {
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) cnt++;  // 判断是否为字母
        }
        printf("%d\n", cnt);
        return 0;
    }
    字符数量：
#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000

    int main() {
        char str[MAX_LEN];
        fgets(str, MAX_LEN, stdin);
        printf("%ld\n", strlen(str) - 1); // 注意减去换行符的长度
        return 0;
    }



