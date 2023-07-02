# This problem can be found here: https://codeforces.com/problemset/problem/702/A.

def main():
    n = int(input())
    array = list(map(int, input().split(" ")))

    curr = maximum = 1

    for i in range(1, n):
        if array[i] > array[i - 1]:
            curr += 1
        else:
            curr = 1
        maximum = max(maximum, curr)

    print(maximum)


if __name__ == '__main__':
    main()
