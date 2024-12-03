#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <chrono> // Для вимірювання часу

using namespace std;
using namespace chrono;

int countVowels(const string& word) {
    int count = 0;
    for (char ch : word) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    return count;
}

string findWordWithMostVowels(const string& text) {
    stringstream ss(text);
    string word, maxVowelWord;
    int maxVowels = 0;

    while (ss >> word) {
        int vowels = countVowels(word);
        if (vowels > maxVowels) {
            maxVowels = vowels;
            maxVowelWord = word;
        }
    }
    return maxVowelWord;
}

void constructLps(const string& pat, vector<int>& lps) {
    int len = 0;
    lps[0] = 0;
    int i = 1;

    while (i < pat.length()) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else {
            if (len != 0) {
                len = lps[len - 1];
            }
            else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

vector<int> search(const string& pat, const string& txt) {
    int n = txt.length();
    int m = pat.length();
    vector<int> lps(m);
    vector<int> res;

    constructLps(pat, lps);

    int i = 0, j = 0;
    while (i < n) {
        if (txt[i] == pat[j]) {
            i++;
            j++;
            if (j == m) {
                res.push_back(i - j);
                j = lps[j - 1];
            }
        }
        else {
            if (j != 0) {
                j = lps[j - 1];
            }
            else {
                i++;
            }
        }
    }
    return res;
}

int main() {
    string text1, text2;

    cout << "Enter the first text: ";
    getline(cin, text1);
    cout << "Enter the second text: ";
    getline(cin, text2);

    auto start = high_resolution_clock::now();

    string wordWithMostVowels = findWordWithMostVowels(text1);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    if (wordWithMostVowels.empty()) {
        cout << "There are no words in the first text." << endl;
        return 0;
    }

    cout << "Word with the most vowels: " << wordWithMostVowels << endl;
    cout << "Time to find word with most vowels: " << duration.count() << " microseconds" << endl;

    start = high_resolution_clock::now();

    vector<int> positions = search(wordWithMostVowels, text2);

    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);

    if (positions.empty()) {
        cout << "The word was not found in the second text." << endl;
    }
    else {
        cout << "Occurrences of the word in the second text at positions: ";
        for (int pos : positions) {
            cout << pos << " ";
        }
        cout << endl;
    }

    cout << "Time to search word in second text: " << duration.count() << " microseconds" << endl;

    return 0;
}
