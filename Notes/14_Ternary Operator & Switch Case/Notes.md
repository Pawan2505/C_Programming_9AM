
---

## **Topic: Ternary Operator & Switch Case in C Programming**

---

### 🔹 **1️⃣ Ternary Operator ( ? : )**

The **ternary operator** is a **shortcut** for writing simple `if-else` statements in **one line**.

📘 **Syntax:**

```c
condition ? expression1 : expression2;
```

If the **condition is true**, `expression1` executes.
If the **condition is false**, `expression2` executes.

---

### **Example: Find Minimum of 3 Numbers**

```c
#include <stdio.h>
int main() {
    int a, b, c, min;

    printf("Enter value of first number: ");
    scanf("%d", &a);

    printf("Enter value of second number: ");
    scanf("%d", &b);

    printf("Enter value of third number: ");
    scanf("%d", &c);

    min = (a < b && a < c) ? a : (b < c ? b : c);

    printf("The minimum value is: %d", min);
    return 0;
}
```

🧾 **Output Example:**

```
Enter value of first number: 8
Enter value of second number: 3
Enter value of third number: 12
The minimum value is: 3
```

---

### 🔹 **2️⃣ Switch Case Statement**

The **switch-case** statement allows you to **choose** between **multiple options** based on a single value.

📘 **Syntax:**

```c
switch(expression) {
    case value1:
        // code
        break;
    case value2:
        // code
        break;
    default:
        // code
}
```

Use `break;` to stop checking further cases.
Use `default` to handle invalid or unmatched options.

---

### **Example: Telecom Service Menu using Nested Switch**

```c
#include <stdio.h>
int main() {
    int lang, choice;

    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujarati\n");
    printf("Enter your choice: ");
    scanf("%d", &lang);

    switch (lang) {
        case 1:
            printf("Press 1 for Internet Recharge\n");
            printf("Press 2 for Top-up Recharge\n");
            printf("Press 3 for Special Recharge\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1: printf("You have successfully done an Internet Recharge.\n"); break;
                case 2: printf("You have successfully done a Top-up Recharge.\n"); break;
                case 3: printf("You have successfully done a Special Recharge.\n"); break;
                default: printf("Invalid Option!\n");
            }
            break;

        case 2:
            printf("Internet Recharge ke liye 1 dabaiye\n");
            printf("Top-up Recharge ke liye 2 dabaiye\n");
            printf("Special Recharge ke liye 3 dabaiye\n");
            printf("Apna choice dijiye: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1: printf("Aapne Internet Recharge safalta se kiya.\n"); break;
                case 2: printf("Aapne Top-up Recharge safalta se kiya.\n"); break;
                case 3: printf("Aapne Special Recharge safalta se kiya.\n"); break;
                default: printf("Galat vikalp!\n");
            }
            break;

        case 3:
            printf("Internet Recharge mate 1 dabavo\n");
            printf("Top-up Recharge mate 2 dabavo\n");
            printf("Special Recharge mate 3 dabavo\n");
            printf("Tamaru choice nakho: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1: printf("Tame Internet Recharge safalta thi karyo.\n"); break;
                case 2: printf("Tame Top-up Recharge safalta thi karyo.\n"); break;
                case 3: printf("Tame Special Recharge safalta thi karyo.\n"); break;
                default: printf("Khotu vikalp!\n");
            }
            break;

        default:
            printf("Invalid language choice!\n");
    }

    return 0;
}
```

---

