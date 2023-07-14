# This problem can be found here: https://codeforces.com/problemset/problem/1391/B.

def main():
    t = int(input())

    for _ in range(t):
        n, m = map(int, input().split(" "))

        belt = []
        for _ in range(n):
            belt.append(list(input()))

        cnt = 0
        for r in range(n - 1, n):
            for c in range(m - 1):
                if belt[r][c] != "R":
                    cnt += 1

        for r in range(n - 1):
            for c in range(m - 1, m):
                if belt[r][c] != "D":
                    cnt += 1

        print(cnt)


if __name__ == '__main__':
    main()
