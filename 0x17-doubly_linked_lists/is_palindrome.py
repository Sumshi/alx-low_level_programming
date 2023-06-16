#!/usr/bin/python3
largest_palindrome = 0

for i in range(100, 1000):
    for j in range(i, 1000):
        product = i * j
        if str(product) == str(product)[::-1] and product > largest_palindrome:
            largest_palindrome = product  # [::-1] reverses string

# Save the result in the file "102-result" without any extra spaces or newlines
with open("103-result", "w") as file:
    file.write(str(largest_palindrome))
