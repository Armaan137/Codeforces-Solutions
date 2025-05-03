# https://codeforces.com/problemset/problem/152/A

def main():
    n, m = map(int, input().split())
    courses = [input().strip() for _ in range(n)]
    successful = set()

    for j in range(m):
        # find the highest grade for that subject.
        max_grade = max(courses[i][j] for i in range(n))
        for i in range(n):
            if courses[i][j] == max_grade:
                successful.add(i)

    print(len(successful))


if __name__ == '__main__':
    main()
