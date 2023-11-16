#include "task_2.h"

namespace task_2 {
    void selectionSort(std::vector<int>& denominations) {
        int n = denominations.size();

        for (int i = 0; i < n - 1; ++i) {
            int minIndex = i;
            for (int j = i + 1; j < n; ++j) {
                if (denominations[j] < denominations[minIndex]) {
                    minIndex = j;
                }
            }

            std::swap(denominations[i], denominations[minIndex]);
        }
    }
}