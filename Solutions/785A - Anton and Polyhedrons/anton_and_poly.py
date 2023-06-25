# This problem can be found here: https://codeforces.com/problemset/problem/785/A.

def main():
    n = int(input())
    faces = {"Tetrahedron": 4, "Cube": 6, "Octahedron": 8, "Dodecahedron": 12, "Icosahedron": 20}

    ans = 0
    for _ in range(n):
        ans += faces[input()]

    print(ans)


if __name__ == "__main__":
    main()
