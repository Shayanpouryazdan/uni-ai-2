#include <iostream>
#include <vector>
using namespace std;

// تابع کمکی برای بررسی سازگاری رنگ
bool isSafe(int node, const vector<vector<int>>& graph, const vector<int>& colors, int color) {
    for (int neighbor = 0; neighbor < graph.size(); neighbor++) {
        if (graph[node][neighbor] == 1 && colors[neighbor] == color) {
            return false; // همسایه‌ای با همین رنگ وجود دارد
        }
    }
    return true;
}

// تابع بازگشتی برای رنگ‌آمیزی گراف با استفاده از پسگرد
bool graphColoringBacktracking(int node, const vector<vector<int>>& graph, vector<int>& colors, int maxColors) {
    int n = graph.size();
    
    // اگر همه رأس‌ها رنگ‌آمیزی شده باشند
    if (node == n) {
        return true;
    }

    // امتحان کردن تمام رنگ‌ها برای رأس فعلی
    for (int color = 1; color <= maxColors; color++) {
        if (isSafe(node, graph, colors, color)) {
            colors[node] = color; // تخصیص رنگ

            // ادامه بازگشتی به رأس بعدی
            if (graphColoringBacktracking(node + 1, graph, colors, maxColors)) {
                return true;
            }

            // بازگردانی (Backtracking)
            colors[node] = 0;
        }
    }

    return false; // هیچ رنگی برای این رأس مناسب نیست
}

// تابع اصلی برای پیدا کردن کمترین تعداد رنگ
int findMinColors(const vector<vector<int>>& graph) {
    int n = graph.size();

    // تعداد رنگ‌های ممکن را از 1 شروع می‌کنیم
    for (int maxColors = 1; maxColors <= n; maxColors++) {
        vector<int> colors(n, 0); // آرایه رنگ‌ها

        // امتحان کردن رنگ‌آمیزی با تعداد رنگ maxColors
        if (graphColoringBacktracking(0, graph, colors, maxColors)) {
            return maxColors; // کمترین تعداد رنگ پیدا شد
        }
    }

    return n; // در بدترین حالت، به n رنگ نیاز داریم
}

int main() {
    int n;
    cout << "تعداد رأس‌های گراف را وارد کنید: ";
    cin >> n;

    vector<vector<int>> graph(n, vector<int>(n, 0));

    cout << "ماتریس مجاورت گراف را وارد کنید:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> graph[i][j];
        }
    }

    int numColors = findMinColors(graph);
    cout << "حداقل تعداد رنگ‌های موردنیاز: " << numColors << endl;

    return 0;
}
