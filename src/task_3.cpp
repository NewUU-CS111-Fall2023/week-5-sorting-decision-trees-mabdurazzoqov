//
// Created by Mirzohid Abdurazzoqov on 16/11/23.
//
#include "task_3.h"
#include <algorithm>

namespace task_3 {
    void rearrangeSoldiers(std::vector<std::string> &soldiers) {
        int soldierCount = soldiers.size();

        for (int i = 0; i < soldierCount - 1; i += 2) {
            std::swap(soldiers[i], soldiers[i + 1]);
        }

    }
}