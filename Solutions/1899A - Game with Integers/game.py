# https://codeforces.com/problemset/problem/1899/A

def main():
    t = int(input())

    for _ in range(t):
        n = int(input())

        # if n is not divisible by 3 at the start, Vanya can make it so after their turn.
        # if n is divisible bt 3 at the start, then Vova can prevent Vanya from winning in a loop.
        if n % 3 != 0:
            print("First")
        else:
            print("Second")


if __name__ == '__main__':
    main()
