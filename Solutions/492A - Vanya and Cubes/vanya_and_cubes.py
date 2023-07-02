# This problem can be found here: https://codeforces.com/problemset/problem/492/A.

def main():
    n = int(input())

    cnt = 0
    cubes = 0
    h = 0
    for i in range(1, n + 1):
        cnt += i
        cubes += cnt
        if cubes <= n:
            h += 1
        else:
            break


if __name__ == '__main__':
    main()


# This problem can be solved in O(logn) time, but I arrived to the solution above first.

# n = int(input())
# cnt = 0
# i = 1
# m = 1
#
# while m <= n:
#     m = (i * i + i) // 2
#
#     if m > n:
#         break
#
#     n -= m
#     cnt += 1
#     i += 1
#
# print(cnt)
