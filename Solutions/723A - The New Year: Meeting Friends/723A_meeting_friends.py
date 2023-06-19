def main():
    x1, x2, x3 = map(int, input().split(" "))
    coords = sorted([x1, x2, x3])

    d1 = coords[1] - coords[0]
    d2 = coords[2] - coords[1]
    d3 = coords[2] - coords[0]

    res = min(d1 + d2, d1 + d3, d2 + d3)
    print(res)


if __name__ == "__main__":
    main()
