#include "task_1.h"

namespace task_1 {
    void bubbleSort(std::vector<std::string>& titles) {
        int n = titles.size();

        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - i - 1; ++j) {
                if (titles[j] > titles[j + 1]) {
                    std::swap(titles[j], titles[j + 1]);
                }
            }
        }
    }
}