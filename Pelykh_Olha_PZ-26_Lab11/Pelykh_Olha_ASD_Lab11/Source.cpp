#include <iostream>
#include <sstream>
#include <string>
#include <chrono> // для вимірювання часу

#define NO_OF_CHARS 256

using namespace std;
using namespace std::chrono; // для доступу до класів вимірювання часу

void badCharHeuristic(string str, int size, int badchar[NO_OF_CHARS]) {
    int i;
    for (i = 0; i < NO_OF_CHARS; i++)
        badchar[i] = -1;
    for (i = 0; i < size; i++)
        badchar[(int)str[i]] = i;
}

void search(string txt, string pat) {
    int m = pat.size();
    int n = txt.size();

    int badchar[NO_OF_CHARS];

    badCharHeuristic(pat, m, badchar);

    int s = 0;
    while (s <= (n - m)) {
        int j = m - 1;

        while (j >= 0 && pat[j] == txt[s + j])
            j--;

        if (j < 0) {
            cout << "Pattern occurs at shift = " << s << endl;
            s += (s + m < n) ? m - badchar[txt[s + m]] : 1;
        }
        else {
            s += max(1, j - badchar[txt[s + j]]);
        }
    }
}

string findWordWithMostVowels(string text) {
    string vowels = "aeiouAEIOU";
    int maxVowels = 0;
    string wordWithMostVowels = "";
    stringstream ss(text);
    string word;

    while (ss >> word) {
        int vowelCount = 0;
        for (char c : word) {
            if (vowels.find(c) != string::npos) {
                vowelCount++;
            }
        }
        if (vowelCount > maxVowels) {
            maxVowels = vowelCount;
            wordWithMostVowels = word;
        }
    }

    return wordWithMostVowels;
}

int main() {
    string text1, text2;

    // Введення текстів
    cout << "Enter the first text: ";
    getline(cin, text1);
    cout << "Enter the second text: ";
    getline(cin, text2);

    // Вимірювання часу для знаходження слова з найбільшою кількістю голосних
    auto start = high_resolution_clock::now();
    string wordWithMostVowels = findWordWithMostVowels(text1);
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);
    cout << "Time to find the word with most vowels: " << duration.count() << " microseconds" << endl;

    if (wordWithMostVowels.empty()) {
        cout << "No words found in the first text." << endl;
        return 0;
    }

    cout << "Word with the most vowels: " << wordWithMostVowels << endl;

    // Вимірювання часу для пошуку слова в другому тексті
    start = high_resolution_clock::now();
    search(text2, wordWithMostVowels);
    end = high_resolution_clock::now();
    duration = duration_cast<microseconds>(end - start);
    cout << "Time to search the word in the second text: " << duration.count() << " microseconds" << endl;

    return 0;
}
