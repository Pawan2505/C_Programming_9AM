
---

## **Topic: Recursion in C**

---

### 💡 What is Recursion?

**Recursion** means a function that **calls itself** until a certain condition (called **base case**) is met.
It helps solve big problems by dividing them into **smaller sub-problems**.

---

### Example: Basic Recursive Function

```c
void functionName() {
    if (condition) {
        return; // base case
    } else {
        functionName(); // recursive call
    }
}
```

---

## **Question 1: Find the Sum of Digits using Recursion**

### 👉 Problem:

Write a program to find the sum of digits of a number using recursion.

### Code:

```c
#include <stdio.h>

int sumOfDigits(int num) {
    if (num == 0)
        return 0;
    else
        return (num % 10) + sumOfDigits(num / 10);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Sum of digits = %d", sumOfDigits(number));
    return 0;
}
```

### 🧾 Output:

```
Enter a number: 1234  
Sum of digits = 10
```

---

## **Question 2: Reverse a String using Recursion**

### 👉 Problem:

Write a program to reverse a string using recursion.

### Code:

```c
#include <stdio.h>
#include <string.h>

void reverseString(char str[], int index) {
    if (index < 0)
        return;
    printf("%c", str[index]);
    reverseString(str, index - 1);
}

int main() {
    char str[50];
    printf("Enter a string: ");
    gets(str);

    int len = strlen(str);
    printf("Reversed string: ");
    reverseString(str, len - 1);

    return 0;
}
```

### 🧾 Output:

```
Enter a string: hello  
Reversed string: olleh
```

---

## **Question 3: Find Power of a Number (xⁿ) using Recursion**

### 👉 Problem:

Write a program to find the power of a number using recursion.

### Code:

```c
#include <stdio.h>

int power(int base, int exp) {
    if (exp == 0)
        return 1;
    else
        return base * power(base, exp - 1);
}

int main() {
    int base, exponent;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    printf("%d^%d = %d", base, exponent, power(base, exponent));
    return 0;
}
```

### 🧾 Output:

```
Enter base and exponent: 2 4  
2^4 = 16
```

---

## **Question 4: Print Numbers from N to 1 using Recursion**

### 👉 Problem:

Write a program to print numbers from N to 1 using recursion.

### Code:

```c
#include <stdio.h>

void printNumbers(int n) {
    if (n == 0)
        return;
    printf("%d ", n);
    printNumbers(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Numbers from %d to 1: ", n);
    printNumbers(n);

    return 0;
}
```

### 🧾 Output:

```
Enter a number: 5  
Numbers from 5 to 1: 5 4 3 2 1
```

---

## **Question 5: Find GCD of Two Numbers using Recursion**

### 👉 Problem:

Write a program to find the **GCD (Greatest Common Divisor)** of two numbers using recursion.

### Code:

```c
#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("GCD of %d and %d = %d", num1, num2, gcd(num1, num2));
    return 0;
}
```

### 🧾 Output:

```
Enter two numbers: 20 12  
GCD of 20 and 12 = 4
```

---

## **How Recursion Works**

When a function calls itself:

1. Each call is stored in the **stack memory**.
2. When the **base case** is reached, the program starts **returning values backward**.
3. This process continues until the original call finishes.

---

## **Advantages of Recursion**

1. Simplifies complex problems.
2. Makes code clean and short.
3. Perfect for problems like factorial, Fibonacci, and searching.

---

## **Disadvantages of Recursion**

1. Uses more memory.
2. Slower than loops for large inputs.
3. Risk of infinite recursion if no base case is given.

---

## 🧾 **Summary**

| Concept        | Description                      |
| -------------- | -------------------------------- |
| Definition     | Function calling itself          |
| Base Case      | Stops recursion                  |
| Recursive Case | Function keeps calling itself    |
| Common Uses    | Factorial, Fibonacci, GCD, Power |
| Pros           | Simple, elegant                  |
| Cons           | Memory-heavy, slower             |

---

