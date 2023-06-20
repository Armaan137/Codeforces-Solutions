# The problem can be found here: https://codeforces.com/problemset/problem/282/A.

def main():
    n = int(input())
    ans = 0

    for _ in range(n):
        line = input()
        if "++" in line:
            ans += 1
        elif "--" in line:
            ans -= 1
    
    print(ans)

main()
