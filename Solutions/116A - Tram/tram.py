# This problem can be found here: https://codeforces.com/problemset/problem/116/A.

def main():
    n = int(input())

    cap = 0
    curr_max = 0
    for _ in range(n):
        a, b = map(int, input().split(" "))
        cap += b - a
        if cap > curr_max:
            curr_max = cap

    print(curr_max)


if __name__ == "__main__":
    main()
