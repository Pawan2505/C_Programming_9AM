# C Programming – Print, `\t` and `\n`

---

### Prog – 1 : Using `\t`

```c
#include<stdio.h>
int main(){
   printf("Hello World!!\t");
   printf("This is my second C programming class!\t");
   printf("Thank You!");
}
```

👉 `\t` → gives a **tab space** (big gap).

**Output:**
Hello World!!  This is my second C programming class!  Thank You!

---

### Prog – 2 : Using `\n`

```c
#include<stdio.h>
int main(){
   printf("Hello World!!\n");
   printf("This is my second C programming class!\n");
   printf("Thank You!");
}
```

👉 `\n` → goes to **new line**.

**Output:**
Hello World!!
This is my second C programming class!
Thank You!

---

### Prog – 3 : Mixed

```c
#include<stdio.h>
int main(){
   printf("Hello World!!");
   printf("\nThis is my second C programming class!\n");
   printf("Thank You!");
}
```

**Output:**
Hello World!!
This is my second C programming class!
Thank You!

---

### Prog – 4 : Extra `\n`

```c
#include<stdio.h>
int main(){
   printf("Hello World!!");
   printf("\nThis is my second \n C programming class!\n");
   printf("Thank You!");
}
```

**Output:**
Hello World!!
This is my second
C programming class!
Thank You!

---

### Quick Notes 📝

* `\t` → Tab space (gap)
* `\n` → New line
* Always put **`;`** at end
* Need `#include<stdio.h>` for printf

---

