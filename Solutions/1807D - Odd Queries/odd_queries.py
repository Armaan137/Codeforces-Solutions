# https://codeforces.com/contest/1807/problem/D

def main():
    t = int(input())

    for _ in range(t):
        n, q = map(int, input().split())
        a = list(map(int, input().split()))
        total = sum(a)

        # create a prefix array to calculate ranges later on.
        prefix = [0] * (n + 1)
        for i in range(n):
            prefix[i + 1] = prefix[i] + a[i]

        for _ in range(q):
            l, r, k = map(int, input().split())

            # calculate the sum of the range l to r.
            range_sum = prefix[r] - prefix[l - 1]

            # calculate what the sum would be if we replace l to r with k.
            s = total - range_sum + (r - l + 1) * k

            if s % 2 == 0:
                print("NO")
            else:
                print("YES")


if __name__ == '__main__':
    main()