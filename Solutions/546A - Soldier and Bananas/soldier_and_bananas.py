# This problem can be found here: https://codeforces.com/problemset/problem/546/A.

def main():
    k, n, w = map(int, input().split(" "))

    b = 0
    for i in range(1, w + 1):
        b += (i * k)

    if b > n:
        print(b - n)
    else:
        print(0)


if __name__ == "__main__":
    main()
