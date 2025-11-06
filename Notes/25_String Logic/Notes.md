
---

# **Topic: String Logic Programs in C**

---

## **Q.1 Palindrome Checker**

### **Concept**

A **palindrome** is a word that reads the same forward and backward.
Examples:
*nayan* → Palindrome
*hello* → Not a palindrome

Here, we will check if a string is a palindrome **without using built-in string functions** like `strlen()` or `strrev()`.

---

### 🧾 **Program: Check if a string is Palindrome (without string functions)**

```c
#include<stdio.h>

int main(){
    char str[100];
    int i, j, len = 0, flag = 0;

    printf("Enter any string: ");
    scanf("%s", str);   // take string input

    // find length manually
    for(i = 0; str[i] != '\0'; i++){
        len++;
    }

    // check palindrome
    for(i = 0, j = len - 1; i < j; i++, j--){
        if(str[i] != str[j]){
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("The given string is a Palindrome.\n");
    else
        printf("The given string is NOT a Palindrome.\n");

    return 0;
}
```

---

### 🧩 **Explanation**

1. The user enters a string.
2. We find its length manually (without using `strlen`).
3. Compare the first and last characters.
4. If all characters match, it’s a palindrome.

---

### **Example**

```
Input: nayan  
Output: The given string is a Palindrome.
```

---


---

## **Q.2 Frequency Counter**

### **Concept**

The **frequency counter** program counts how many times each character appears in a string.
For example, in “development”:

* d → 1
* e → 3
* v → 1
* l → 1
* o → 1
* p → 1
* m → 1
* n → 1
* t → 1

We’ll do this **without using advanced string functions** — just loops and arrays.

---

### 🧾 **Program: Count frequency of each character in a string**

```c
#include<stdio.h>

int main(){
    char str[100];
    int count[256] = {0};  // to store frequency of each ASCII character
    int i;

    printf("Enter any string: ");
    scanf("%s", str);

    // Count frequency
    for(i = 0; str[i] != '\0'; i++){
        count[(int)str[i]]++;
    }

    printf("\nFrequency of each character:\n");
    for(i = 0; i < 256; i++){
        if(count[i] != 0){
            printf("%c => %d\n", i, count[i]);
        }
    }

    return 0;
}
```

---

### **Explanation**

1. We take input from the user.
2. Each character’s ASCII value is used as an index in the `count` array.
3. Whenever a character appears, its count increases by one.
4. Finally, we print characters that have a frequency greater than zero.

---

### **Example**

```
Input: development

Output:
Frequency of each character:
d => 1
e => 3
v => 1
l => 1
o => 1
p => 1
m => 1
n => 1
t => 1
```

---

## **Summary**

| Program            | Logic Used                    | Key Concept                     |
| ------------------ | ----------------------------- | ------------------------------- |
| Palindrome Checker | Compare string from both ends | Manual length + character check |
| Frequency Counter  | Count character occurrences   | ASCII indexing + loops          |

---
