# Backtracking Algorithm for Graph Coloring

## Overview
The Backtracking Algorithm is a systematic approach to solving the graph coloring problem. It explores all possible ways to color a graph by assigning colors to vertices one by one, backtracking whenever a conflict arises. This method guarantees the minimum number of colors required, making it an optimal solution but computationally expensive for large graphs.

الگوریتم پسگرد یک روش سیستماتیک برای حل مسئله رنگ‌آمیزی گراف است. این الگوریتم تمامی راه‌های ممکن برای رنگ‌آمیزی گراف را بررسی می‌کند و در صورت بروز تضاد، به مرحله قبلی بازمی‌گردد. این روش کمترین تعداد رنگ‌های مورد نیاز را تضمین می‌کند اما برای گراف‌های بزرگ از لحاظ محاسباتی زمان‌بر است.

---

## Features
- **Optimal Solution:** Guarantees the minimum number of colors.
- **Exhaustive Search:** Explores all possible assignments of colors.
- **High Complexity:** Exponential time complexity for large graphs.

### ویژگی‌ها
- **راه‌حل بهینه:** کمترین تعداد رنگ‌ها را تضمین می‌کند.
- **جستجوی کامل:** تمامی تخصیص‌های ممکن رنگ را بررسی می‌کند.
- **پیچیدگی بالا:** پیچیدگی زمانی نمایی برای گراف‌های بزرگ.

---

## Implementation Details
### Algorithm Steps:
1. Start with an empty coloring assignment.
2. For each vertex, assign the smallest available color that satisfies constraints.
3. If no color is available for a vertex, backtrack to the previous vertex and try a different color.
4. Continue until all vertices are successfully colored.

### جزئیات پیاده‌سازی
#### مراحل الگوریتم:
1. با یک تخصیص رنگ خالی شروع کنید.
2. برای هر رأس، کوچک‌ترین رنگ موجود که محدودیت‌ها را رعایت می‌کند اختصاص دهید.
3. اگر برای یک رأس رنگی موجود نباشد، به رأس قبلی بازگردید و رنگ دیگری را امتحان کنید.
4. این روند را ادامه دهید تا تمام رأس‌ها با موفقیت رنگ‌آمیزی شوند.

---

## Example
### Input:
```
Number of Vertices: 4
Adjacency Matrix:
0 1 1 1
1 0 1 0
1 1 0 1
1 0 1 0
```

### نمونه ورودی:
```
تعداد رأس‌ها: 4
ماتریس مجاورت:
0 1 1 1
1 0 1 0
1 1 0 1
1 0 1 0
```

### Output:
```
Vertex 0 -> Color 1
Vertex 1 -> Color 2
Vertex 2 -> Color 3
Vertex 3 -> Color 2
Total Colors Used: 3
```

### خروجی:
```
رأس 0 -> رنگ 1
رأس 1 -> رنگ 2
رأس 2 -> رنگ 3
رأس 3 -> رنگ 2
تعداد رنگ‌های استفاده‌شده: 3
```


---

## How to Run
1. Compile the code using a C++ compiler:
   ```bash
   g++ backtracking_coloring.cpp -o backtracking_coloring
   ```
2. Run the executable:
   ```bash
   ./backtracking_coloring
   ```
3. Input the number of vertices, colors, and the adjacency matrix as prompted.

### نحوه اجرا:
1. کد را با کامپایلر C++ کامپایل کنید:
   ```bash
   g++ backtracking_coloring.cpp -o backtracking_coloring
   ```
2. فایل اجرایی را اجرا کنید:
   ```bash
   ./backtracking_coloring
   ```
3. تعداد رأس‌ها، تعداد رنگ‌ها و ماتریس مجاورت را وارد کنید.

---

## Advantages
- Guarantees the minimum number of colors.
- Provides an optimal solution.

### مزایا:
- کمترین تعداد رنگ‌ها را تضمین می‌کند.
- راه‌حل بهینه ارائه می‌دهد.

## Disadvantages
- Computationally expensive for large graphs.
- Exponential time complexity.

### معایب:
- برای گراف‌های بزرگ از لحاظ محاسباتی زمان‌بر است.
- پیچیدگی زمانی نمایی.

---

## Applications
- Solving puzzles (e.g., Sudoku).
- Frequency assignment problems.
- Map coloring.

### کاربردها:
- حل پازل‌ها (مانند سودوکو).
- مسائل تخصیص فرکانس.
- رنگ‌آمیزی نقشه.

---

## Next Steps
Explore more algorithms for graph coloring:
- [Greedy Algorithm for Graph Coloring](.Source/Greedy Algorithm)

### گام‌های بعدی
الگوریتم‌های بیشتری برای رنگ‌آمیزی گراف بررسی کنید:
- [الگوریتم حریصانه برای رنگ‌آمیزی گراف](.Source/Greedy Algorithm)

