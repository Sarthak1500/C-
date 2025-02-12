// #include<bits/stdc++.h>
// using namespace std;

// string clean_word(const string& word) {
//     string cleaned_word;
//     for (char c : word) {
//         if (isalnum(c)) {
//             cleaned_word += tolower(c);
//         }
//     }
//     return cleaned_word;
// }

// string first_repeated_word(const string& sentence) {
//     unordered_set<string> word_set;
//     stringstream ss(sentence);
//     string word;

//     while (ss >> word) {
//         string cleaned_word = clean_word(word);
//         if (!cleaned_word.empty()) {
//             if (word_set.find(cleaned_word) != word_set.end()) {
//                 return cleaned_word;
//             }
//             word_set.insert(cleaned_word);
//         }
//     }
    
//     return "None";
// }

// int main() {
//     string sentence = "This is a test. This test is simple!";
//     string result = first_repeated_word(sentence);
//     if (result != "None") {
//         cout << "First repeated word: " << result << endl;
//     } else {
//         cout << "No repeated word found." << endl;
//     }
//     return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;

string clean_word(const string& word) {
    string cleaned_word;
    for (char c : word) {
        if (isalnum(c)) {
            cleaned_word += tolower(c);
        }
    }
    return cleaned_word;
}

string first_repeated_word(const string& sentence) {
    unordered_set<string> word_set;
    stringstream ss(sentence);
    string word;

    while (ss >> word) {
        string cleaned_word = clean_word(word);
        if (!cleaned_word.empty()) {
            if (word_set.find(cleaned_word) != word_set.end()) {
                return cleaned_word;
            }
            word_set.insert(cleaned_word);
        }
    }
    
    return "None";
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string result = first_repeated_word(sentence);
    if (result != "None") {
        cout << "First repeated word: " << result << endl;
    } else {
        cout << "No repeated word found." << endl;
    }

    return 0;
}
// ////////////////////////////////////////////////////////////////////////////////////////
// #include<bits/stdc++.h>
// using namespace std;

// string first_repeated_word(const string& sentence) {
//     unordered_set<string> word_set;
//     stringstream ss;
//     string cleaned_sentence;
    
//     for (char ch : sentence) {
//         if (isalnum(ch) || ch == ' ') {
//             cleaned_sentence += ch;
//         } else {
//             cleaned_sentence += ' ';
//         }
//     }

//     ss << cleaned_sentence;
//     string word;

//     while (ss >> word) {
//         for (char &ch : word) {
//             ch = tolower(ch);
//         }

//         if (word_set.find(word) != word_set.end()) {
//             return word;
//         }

//         word_set.insert(word);
//     }

//     return "";
// }

// int main() {
//     string sentence;
//     getline(cin, sentence);

//     string result = first_repeated_word(sentence);

//     if (result.empty()) {
//         cout << "No repeated word found." << endl;
//     } else {
//         cout << "First repeated word: " << result << endl;
//     }

//     return 0;
// }
