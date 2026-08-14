// data_processor.cpp - Existing project with missing functionality
#include <iostream>

#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
class DataProcessor {
private:
    std::vector<int> data;
    std::string processorName;
public:
    DataProcessor(const std::string& name) : processorName(name) {}
    // Existing function - DO NOT MODIFY
    void addData(int value) {
        data.push_back(value);
    }
    // Existing function - DO NOT MODIFY
    void printData() const {
    std::cout << "Processor '" << processorName << "' Data: ";
    for (const int& value : data) {
        std::cout << value << " ";
        }
        std::cout << std::endl;
    }
    // TODO: Use AI to generate this function
    // Function should validate that all data values are within range [min, max]
    // Return true if all values are in range, false otherwise
    bool validateDataRange(int min, int max) const {
        if (min > max) {
            std::swap(min, max);
        }

        for (int value : data) {
            if (value < min || value > max) {
                return false;
            }
        }

        return true;
    }
    // TODO: Use AI to generate this function  
    // Function should remove all values below a threshold
    // Should modify the data vector directly
    void removeOutliers(int threshold) {
        data.erase(std::remove_if(data.begin(), data.end(),
            [threshold](int value) {
                return value < threshold;
            }),
            data.end());
    }
    // TODO: Use AI to generate this function
    // Function should calculate statistical summary (min, max, average, median)
    // Return as a struct or use output parameters
    struct Statistics {
        int minimum;
        int maximum;
        double average;
        double median;
    };
    Statistics calculateStatistics() const {
        Statistics stats{0, 0, 0.0, 0.0};

        if (data.empty()) {
            return stats;
        }

        std::vector<int> sortedData = data;
        std::sort(sortedData.begin(), sortedData.end());

        stats.minimum = sortedData.front();
        stats.maximum = sortedData.back();

        int sum = std::accumulate(sortedData.begin(), sortedData.end(), 0);
        stats.average = static_cast<double>(sum) / static_cast<double>(sortedData.size());

        size_t mid = sortedData.size() / 2;
        if (sortedData.size() % 2 == 0) {
            stats.median = (static_cast<double>(sortedData[mid - 1]) +
                            static_cast<double>(sortedData[mid])) / 2.0;
        } else {
            stats.median = static_cast<double>(sortedData[mid]);
        }

        return stats;
    }
    // Getter functions for testing
    const std::vector<int>& getData() const { return data; }
    const std::string& getName() const { return processorName; }
    size_t getDataSize() const { return data.size(); }
};