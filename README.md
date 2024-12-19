# Graph Coloring Project

## Overview
This project explores two distinct approaches to solving the graph coloring problem:
1. **Greedy Algorithm**: A simple and fast method for coloring graphs.
2. **Backtracking Algorithm**: An advanced method that ensures an optimal solution by exploring all possibilities.

In this project, we compare the efficiency and accuracy of these two algorithms, providing implementations, examples, and analysis.

## پروژه رنگ‌آمیزی گراف

### معرفی
این پروژه دو روش متفاوت برای حل مسئله رنگ‌آمیزی گراف را بررسی می‌کند:
1. **الگوریتم حریصانه**: روشی ساده و سریع برای رنگ‌آمیزی گراف‌ها.
2. **الگوریتم پسگرد**: روشی پیشرفته که با بررسی تمام حالات، یک جواب بهینه ارائه می‌دهد.

در این پروژه، کارایی و دقت این دو الگوریتم مقایسه شده و پیاده‌سازی‌ها، مثال‌ها و تحلیل‌های مرتبط ارائه شده است.

---

## Key Features
- **Greedy Algorithm**:
  - Fast but not guaranteed to find the optimal solution.
  - Time complexity: O(V^2).

- **Backtracking Algorithm**:
  - Guarantees the optimal solution.
  - More computationally expensive compared to the greedy method.

### ویژگی‌های کلیدی
- **الگوریتم حریصانه**:
  - سریع ولی تضمینی برای پیدا کردن جواب بهینه ندارد.
  - پیچیدگی زمانی: O(V^2).

- **الگوریتم پسگرد**:
  - تضمین‌کننده جواب بهینه.
  - هزینه محاسباتی بالاتر نسبت به روش حریصانه.

---

## How to Run
1. Compile and execute the desired algorithm (Greedy or Backtracking):
   ```bash
   g++ greedy_coloring.cpp -o greedy
   ./greedy
   ```
   or
   ```bash
   g++ backtracking_coloring.cpp -o backtracking
   ./backtracking
   ```

### نحوه اجرا
1. الگوریتم مورد نظر (حریصانه یا پسگرد) را کامپایل و اجرا کنید:
   ```bash
   g++ greedy_coloring.cpp -o greedy
   ./greedy
   ```
   یا
   ```bash
   g++ backtracking_coloring.cpp -o backtracking
   ./backtracking
   ```

---

## Comparison Goals
- Analyze the performance of each algorithm on different graph sizes.
- Compare the number of colors used.
- Measure the execution time and efficiency.

### اهداف مقایسه
- تحلیل عملکرد هر الگوریتم روی گراف‌های با اندازه‌های مختلف.
- مقایسه تعداد رنگ‌های استفاده‌شده.
- اندازه‌گیری زمان اجرا و کارایی.

---

## Applications
- Scheduling problems.
- Register allocation.
- Map coloring.

### کاربردها
- مسائل زمان‌بندی.
- تخصیص ثبات در کامپایلرها.
- رنگ‌آمیزی نقشه‌ها.

---

## Next Steps
- Explore hybrid approaches that combine greedy and backtracking methods.
- Analyze additional graph structures, such as weighted or directed graphs.

### گام‌های بعدی
- بررسی روش‌های ترکیبی که الگوریتم‌های حریصانه و پسگرد را ترکیب می‌کنند.
- تحلیل ساختارهای گرافی اضافی، مانند گراف‌های وزن‌دار یا جهت‌دار.

