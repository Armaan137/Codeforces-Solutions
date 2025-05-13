# https://codeforces.com/problemset/problem/1901/A

def main():
    t = int(input())

    for _ in range(t):
        n, x = map(int, input().split())
        a = list(map(int, input().split()))

        # since we start at 0.
        # the minimum will be the max value of a[i] - prev entry.
        # since the last trip distance is made twice, we want to check the max between 2 * (x - a[n - 1]).
        left = 0
        ans = 0
        for i in range(n):
            ans = max(ans, a[i] - left)
            left = a[i]

        ans = max(ans, 2 * (x - a[n - 1]))
        print(ans)


if __name__ == '__main__':
    main()
