#include "StringData.h"
#include <iostream>
#include <vector>
#include <string>

int linear_search(const std::vector<std::string>& container, const std::string& element) {
    for(size_t i = 0; i < container.size(); ++i) {
       if(container[i] == element) {
           return i;
       }
    }
    return -1;
}

int binary_search(const std::vector<std::string>& container, const std::string& element) {
    int low = 0;
    int high = container.size() - 1;

    while (low <= high) {
        if (const int mid = (high + low) / 2; container[mid] == element) {
            return mid;
        }
        else if (container[mid] < element) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    std::vector<std::string> letterContainer = getStringData();
    int index = -1;

    auto startTime = std::chrono::high_resolution_clock::now();
    index = linear_search(letterContainer, "not_here");
    auto endTime = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = endTime - startTime;
    std::cout << "Linear search took " << elapsed.count() << " seconds to find element \"not_here\", at index " << index << std::endl;

    startTime = std::chrono::high_resolution_clock::now();
    index = binary_search(letterContainer, "not_here");
    endTime = std::chrono::high_resolution_clock::now();
    elapsed = endTime - startTime;
    std::cout << "Binary search took " << elapsed.count() << " seconds to find element \"not_here\", at index " << index << std::endl;

    startTime = std::chrono::high_resolution_clock::now();
    index = linear_search(letterContainer, "mzzzz");
    endTime = std::chrono::high_resolution_clock::now();
    elapsed = endTime - startTime;
    std::cout << "Linear search took " << elapsed.count() << " seconds to find element \"mzzzz\", at index " << index << std::endl;

    startTime = std::chrono::high_resolution_clock::now();
    index = binary_search(letterContainer, "mzzzz");
    endTime = std::chrono::high_resolution_clock::now();
    elapsed = endTime - startTime;
    std::cout << "Binary search took " << elapsed.count() << " seconds to find element \"mzzzz\", at index " << index << std::endl;

    startTime = std::chrono::high_resolution_clock::now();
    index = linear_search(letterContainer, "aaaaa");
    endTime = std::chrono::high_resolution_clock::now();
    elapsed = endTime - startTime;
    std::cout << "Linear search took " << elapsed.count() << " seconds to find element \"aaaaa\", at index " << index << std::endl;

    startTime = std::chrono::high_resolution_clock::now();
    index = binary_search(letterContainer, "aaaaa");
    endTime = std::chrono::high_resolution_clock::now();
    elapsed = endTime - startTime;
    std::cout << "Binary search took " << elapsed.count() << " seconds to find element \"aaaaa\", at index " << index << std::endl;

    return 0;
}

