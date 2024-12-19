#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// تابع برای رنگ‌آمیزی گراف و بازگرداندن تعداد رنگ‌های استفاده‌شده
int graphColoring(const vector<vector<int>>& graph) {
    int n = graph.size(); // تعداد رأس‌ها
    vector<int> result(n, -1); // رنگ هر رأس، در ابتدا -1 (بدون رنگ)
    vector<bool> availableColors(n, false); // رنگ‌های استفاده‌شده

    // تخصیص رنگ به اولین رأس
    result[0] = 0;

    // رنگ‌آمیزی رأس‌های باقی‌مانده
    for (int u = 1; u < n; u++) {
        // علامت‌گذاری رنگ‌هایی که نمی‌توان استفاده کرد
        for (int v = 0; v < n; v++) {
            if (graph[u][v] && result[v] != -1) {
                availableColors[result[v]] = true;
            }
        }

        // پیدا کردن اولین رنگ موجود
        int color;
        for (color = 0; color < n; color++) {
            if (!availableColors[color]) break;
        }

        result[u] = color; // تخصیص رنگ

        // بازنشانی وضعیت رنگ‌ها
        fill(availableColors.begin(), availableColors.end(), false);
    }

    // پیدا کردن بیشترین رنگ استفاده‌شده
    int maxColor = *max_element(result.begin(), result.end());
    return maxColor + 1; // تعداد رنگ‌ها = بیشترین رنگ + 1
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

    int numColors = graphColoring(graph);
    cout << "حداقل تعداد رنگ‌های موردنیاز: " << numColors << endl;

    return 0;
}
