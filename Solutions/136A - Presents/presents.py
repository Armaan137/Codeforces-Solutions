# This problem can be found here: https://codeforces.com/problemset/problem/136/A.

def main():
    n = int(input())
    friends = list(map(int, input().split(" ")))

    gifts = [0] * (n + 1)
    for i in range(1, n + 1):
        p = friends[i - 1]
        gifts[p] = i

    ans = str(gifts[1])
    for i in range(2, n + 1):
        ans += " " + str(gifts[i])

    print(ans)


if __name__ == "__main__":
    main()
