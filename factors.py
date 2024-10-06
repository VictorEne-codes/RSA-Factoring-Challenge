import sys
import math

def factorize(number):
    for i in range(2, int(math.sqrt(number)) + 1):
        if number % i == 0:
            return i, number // i
    return None

def main():
    if len(sys.argv) != 2:
        print("Usage: factors <file>")
        return

    filename = sys.argv[1]

    try:
        with open(filename, 'r') as file:
            numbers = file.readlines()
    except FileNotFoundError:
        print(f"Error: File {filename} not found")
        return

    for line in numbers:
        number = int(line.strip())
        factors = factorize(number)
        if factors:
            p, q = factors
            print(f"{number}={p}*{q}")

if __name__ == "__main__":
    main()
