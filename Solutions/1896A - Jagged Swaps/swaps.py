# https://codeforces.com/problemset/problem/1896/A

def main():
    t = int(input())

    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))

        if a[0] == min(a):
            print("YES")
        else:
            print("NO")


if __name__ == '__main__':
    main()
