# this problem can be found here: https://codeforces.com/problemset/problem/266/B.

def main():
    n, t = map(int, input().split(" "))
    s = input()

    for _ in range(t):
        i = 0
        res = ""
        while i < n:
            if i < n - 1 and s[i] == "B" and s[i + 1] == "G":
                res += "GB"
                i += 2
            else:
                res += s[i]
                i += 1
        s = res

    print(res)


if __name__ == '__main__':
    main()
