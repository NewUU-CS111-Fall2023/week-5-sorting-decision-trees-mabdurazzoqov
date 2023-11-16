//
// Created by Mirzohid Abdurazzoqov on 16/11/23.
//

#include "task_4.h"

namespace task_4 {
    int countElements(const std::vector<int>& arr) {
        int count = 0;
        int n = arr.size();

        for (int i = 1; i < n - 1; ++i) {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                count++;
            }
        }

        return count;
    }
}