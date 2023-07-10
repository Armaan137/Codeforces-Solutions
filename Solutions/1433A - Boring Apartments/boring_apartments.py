# This problem can be found here: https://codeforces.com/problemset/problem/1433/A.

def main():
    t = int(input())

    for _ in range(t):
        x = input()
        n = len(x)
        cnt = ((int(x[0]) - 1) * 10) + (n * (n + 1) // 2)
        print(cnt)


if __name__ == '__main__':
    main()

# Another solution:
# def main():
#     t = int(input())
#
#     for _ in range(t):
#         x = input()
#
#         cnt = 0
#         for digit in range(1, 10):
#             for i in range(1, 5):
#                 curr = str(digit) * i
#                 cnt += len(curr)
#                 if curr == x:
#                     break
#             else:
#                 continue
#             break
#
#         print(cnt)
