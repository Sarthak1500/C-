#include <bits/stdc++.h>
using namespace std;

map<int, string> segment_patterns;

vector<int> possible_digits(const string& faulty_segment) {
    vector<int> candidates;
    for (auto& [digit, pattern] : segment_patterns) {
        int diff = 0;
        for (int i = 0; i < faulty_segment.size(); i++) {
            if (faulty_segment[i] != pattern[i]) diff++;
        }
        if (diff <= 1) candidates.push_back(digit);
    }
    return candidates;
}

int main() {
    vector<string> digit_patterns(3);
    for (int i = 0; i < 3; i++) {
        cin >> digit_patterns[i];
    }

    for (int i = 0; i < 10; i++) {
        string segment = "";
        for (int j = 0; j < 3; j++) {
            segment += digit_patterns[j].substr(i * 3, 3);
        }
        segment_patterns[i] = segment;
    }

    vector<string> input_segments(3);
    for (int i = 0; i < 3; i++) {
        cin >> input_segments[i];
    }

    vector<vector<int>> all_possible_numbers;
    int width = input_segments[0].size() / 3;

    for (int i = 0; i < width; i++) {
        string segment = "";
        for (int j = 0; j < 3; j++) {
            segment += input_segments[j].substr(i * 3, 3);
        }

        vector<int> candidates = possible_digits(segment);
        if (candidates.empty()) {
            cout << "Invalid";
            return 0;
        }
        all_possible_numbers.push_back(candidates);
    }

    long long total_sum = 0;
    vector<int> indices(all_possible_numbers.size(), 0);

    while (true) {
        long long current_number = 0;
        for (int i = 0; i < all_possible_numbers.size(); i++) {
            current_number = current_number * 10 + all_possible_numbers[i][indices[i]];
        }
        total_sum += current_number;

        int k = all_possible_numbers.size() - 1;
        while (k >= 0 && ++indices[k] == all_possible_numbers[k].size()) {
            indices[k] = 0;
            k--;
        }
        if (k < 0) break;
    }

    cout << total_sum;
    return 0;
}
