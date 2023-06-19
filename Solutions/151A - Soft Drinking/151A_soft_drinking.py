# The problem can be found here: https://codeforces.com/problemset/problem/151/A

def main():
    n, k, l, c, d, p, nl, np = map(int, input().split(" "))
    drink = (k * l) // (n * nl)
    limes = (c * d) // n
    salt = p // (n * np)

    ans = min(drink, limes, salt)
    print(ans)


if __name__ == "__main__":
    main()