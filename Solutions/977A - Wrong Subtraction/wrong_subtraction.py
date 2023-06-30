# This problem can be found here: https://codeforces.com/problemset/problem/977/A.

def main():
    n, k = map(int, input().split(" "))

    for _ in range(k):
        if n % 10 != 0:
            n -= 1
        else:
            n //= 10

    print(n)


if __name__ == "__main__":
    main()
