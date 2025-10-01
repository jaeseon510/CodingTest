def main():
    import sys
    input = sys.stdin.read
    data = input().splitlines()

    n, m = map(int, data[0].split())
    
    website_passwords = {}

    for i in range(1, n + 1):
        website, password = data[i].split()
        website_passwords[website] = password

    results = []
    for i in range(n + 1, n + 1 + m):
        query_website = data[i]
        results.append(website_passwords[query_website])

    print("\n".join(results))

if __name__ == "__main__":
    main()
