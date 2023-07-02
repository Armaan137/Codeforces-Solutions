# This problem can be found here: https://codeforces.com/problemset/problem/1368/A.

def main():
    t = int(input())

    for _ in range(t):
        a, b, n = map(int, input().split(" "))

        cnt = 0
        while a <= n and b <= n:
            if a <= b:
                a += b
            else:
                b += a
            cnt += 1

        print(cnt)


if __name__ == "__main__":
    main()
