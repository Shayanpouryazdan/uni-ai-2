# Greedy Algorithm for Graph Coloring

## Overview
The Greedy Algorithm is a straightforward and efficient method for graph coloring. This algorithm assigns colors to graph vertices sequentially, ensuring that no two adjacent vertices have the same color. While it does not guarantee the minimum number of colors required, it is simple to implement and works well for many practical applications.

الگوریتم حریصانه یکی از روش‌های ساده و کارآمد برای رنگ‌آمیزی گراف است. در این الگوریتم، رأس‌های گراف به صورت ترتیبی رنگ‌آمیزی می‌شوند، به‌گونه‌ای که هیچ دو رأس مجاور رنگ یکسانی نداشته باشند. این روش تضمینی برای کمینه بودن تعداد رنگ‌ها ندارد اما در بسیاری از کاربردهای عملی ساده و موثر است.

---

## Features
- **Time Complexity:** O(V^2), where V is the number of vertices (using an adjacency matrix representation).
- **No Backtracking:** Each vertex is assigned a color without revisiting previous vertices.
- **Fast and Simple:** Ideal for large graphs when optimality is not critical.

### ویژگی‌ها
- **پیچیدگی زمانی:** O(V^2)، که در آن V تعداد رأس‌هاست (با استفاده از ماتریس مجاورت).
- **بدون پسگرد:** هر رأس بدون بازگشت به رأس‌های قبلی رنگ‌آمیزی می‌شود.
- **سریع و ساده:** مناسب برای گراف‌های بزرگ زمانی که بهینه بودن ضروری نیست.

---

## Implementation Details
### Algorithm Steps:
1. Initialize an array `colors[]` of size `V` to keep track of assigned colors for each vertex.
2. For each vertex:
   - Check the colors of its adjacent vertices.
   - Assign the smallest available color that does not conflict with its neighbors.
3. Continue until all vertices are assigned colors.

### جزئیات پیاده‌سازی
#### مراحل الگوریتم:
1. آرایه‌ای به نام `colors[]` به اندازه V برای ذخیره رنگ هر رأس مقداردهی اولیه شود.
2. برای هر رأس:
   - رنگ‌های رأس‌های مجاور بررسی شود.
   - کوچک‌ترین رنگ موجود که با همسایگان تداخل ندارد، اختصاص داده شود.
3. این روند ادامه پیدا کند تا همه رأس‌ها رنگ‌آمیزی شوند.

---

## Example
### Input:
```
Number of Vertices: 5
Adjacency Matrix:
0 1 0 1 0
1 0 1 1 0
0 1 0 1 1
1 1 1 0 1
0 0 1 1 0
```

### نمونه ورودی:
```
تعداد رأس‌ها: 5
ماتریس مجاورت:
0 1 0 1 0
1 0 1 1 0
0 1 0 1 1
1 1 1 0 1
0 0 1 1 0
```

### Output:
```
Vertex 0 -> Color 1
Vertex 1 -> Color 2
Vertex 2 -> Color 1
Vertex 3 -> Color 3
Vertex 4 -> Color 2
Total Colors Used: 3
```

### خروجی:
```
رأس 0 -> رنگ 1
رأس 1 -> رنگ 2
رأس 2 -> رنگ 1
رأس 3 -> رنگ 3
رأس 4 -> رنگ 2
تعداد رنگ‌های استفاده‌شده: 3
```
---
## How to Run
1. Compile the code using a C++ compiler:
   ```bash
   g++ greedy_coloring.cpp -o greedy_coloring
   ```
2. Run the executable:
   ```bash
   ./greedy_coloring
   ```
3. Input the number of vertices and the adjacency matrix as prompted.

### نحوه اجرا:
1. کد را با کامپایلر C++ کامپایل کنید:
   ```bash
   g++ greedy_coloring.cpp -o greedy_coloring
   ```
2. فایل اجرایی را اجرا کنید:
   ```bash
   ./greedy_coloring
   ```
3. تعداد رأس‌ها و ماتریس مجاورت را وارد کنید.

---

## Advantages
- Quick and efficient for large graphs.
- Simple to understand and implement.

### مزایا:
- سریع و کارآمد برای گراف‌های بزرگ.
- ساده برای درک و پیاده‌سازی.

## Disadvantages
- Does not guarantee the minimum number of colors.
- Depends on the order of vertices for color assignment.

### معایب:
- تضمینی برای کمینه بودن تعداد رنگ‌ها ندارد.
- به ترتیب رأس‌ها برای تخصیص رنگ وابسته است.

---

## Applications
- Scheduling problems (e.g., exams, jobs).
- Register allocation in compilers.
- Map coloring.

### کاربردها:
- مسائل زمان‌بندی (مانند امتحانات و کارها).
- تخصیص ثبات در کامپایلرها.
- رنگ‌آمیزی نقشه‌ها.

---

## Next Steps
To explore more advanced algorithms, check out:
- [Backtracking for Graph Coloring](./backtracking_readme.md)

### گام‌های بعدی:
برای بررسی الگوریتم‌های پیشرفته‌تر، موارد زیر را ببینید:
- [رنگ‌آمیزی گراف با روش پسگرد](./backtracking_readme.md)

