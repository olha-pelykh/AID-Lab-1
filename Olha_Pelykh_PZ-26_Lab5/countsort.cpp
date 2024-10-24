#include "countsort.h"
#include "qelapsedtimer.h"

CountSort::CountSort(int evenCount, int oddCount) {
    twoDimensionalVector.resize(2);
    twoDimensionalVector[0].resize(evenCount);
    twoDimensionalVector[1].resize(oddCount);
}

void CountSort::fillRandom() {
    std::random_device rd;
    std::default_random_engine generator(rd());
    std::uniform_int_distribution<int> evenDistribution(0, 100);
    std::uniform_int_distribution<int> oddDistribution(0, 100);

    for (int i = 0; i < twoDimensionalVector[0].size(); ++i) {
        twoDimensionalVector[0][i] = evenDistribution(generator);
    }

    for (int i = 0; i < twoDimensionalVector[1].size(); ++i) {
        twoDimensionalVector[1][i] = oddDistribution(generator);
    }
}

void CountSort::addEvenNumbers(const QVector<int>& evens) {
    for (const int& num : evens) {
        if (num % 2 == 0) {
            twoDimensionalVector[0].append(num);
        }
    }
}

void CountSort::addOddNumbers(const QVector<int>& odds) {
    for (const int& num : odds) {
        if (num % 2 != 0) {
            twoDimensionalVector[1].append(num);
        }
    }
}

void CountSort::countingSort(QVector<int>& arr) {
    if (arr.isEmpty()) return;

    int N = arr.size();
    int M = 0;

    for (int i = 0; i < N; i++) {
        M = std::max(M, arr[i]);
    }

    QVector<int> countArray(M + 1, 0);

    for (int i = 0; i < N; i++) {
        countArray[arr[i]]++;
    }

    for (int i = 1; i <= M; i++) {
        countArray[i] += countArray[i - 1];
    }

    result.resize(N);
    for (int i = N - 1; i >= 0; i--) {
        result[countArray[arr[i]] - 1] = arr[i];
        countArray[arr[i]]--;
    }
}

QVector<int> CountSort::sort(QElapsedTimer &timer) {
    timer.start();
    QVector<int> combined;
    combined.reserve(twoDimensionalVector[0].size() + twoDimensionalVector[1].size());

    combined.append(twoDimensionalVector[0]);
    combined.append(twoDimensionalVector[1]);

    countingSort(combined);
    return result;
    qint64 elapsed = timer.elapsed();
}

QString CountSort::getTwoDimensionalVectorsAsString() const {
    QString output;

    output += "Even Numbers: ";
    for (int num : twoDimensionalVector[0]) {
        output += QString::number(num) + " ";
    }
    output += "\n";

    output += "Odd Numbers: ";
    for (int num : twoDimensionalVector[1]) {
        output += QString::number(num) + " ";
    }
    output += "\n";

    output += "Result: ";
    for (int num : result) {
        output += QString::number(num) + " ";
    }

    return output;
}

