# This problem can be found here: https://codeforces.com/problemset/problem/144/A.

def main():
    n = int(input())
    heights = list(map(int, input().split()))
    h = heights[0]
    minh = maxh = h
    mini = maxi = 0

    for i in range(1, n):
        h = heights[i]
        if h > maxh:
            maxh = h
            maxi = i
        if h <= minh:
            minh = h
            mini = i

    if mini < maxi:
        result = maxi + (n - 1 - mini) - 1
    else:
        result = maxi + (n - 1 - mini)

    print(result)


if __name__ == "__main__":
    main()
