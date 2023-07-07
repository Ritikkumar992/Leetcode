#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::string sortSentence(std::string s) {
        std::istringstream iss(s);
        std::vector<std::string> words;
        
        // Split the sentence into individual words
        std::string word;
        while (iss >> word) {
            words.push_back(word);
        }
        
        // Sort the words based on the last character (the position)
        std::sort(words.begin(), words.end(), [](const std::string& a, const std::string& b) {
            return a.back() < b.back();
        });
        
        // Construct the sorted sentence
        std::string sortedSentence;
        for (const std::string& w : words) {
            sortedSentence += w.substr(0, w.size() - 1);  // Append the word without the position
            sortedSentence += ' ';  // Add a space between words
        }
        
        // Remove the trailing space and return the sorted sentence
        sortedSentence.pop_back();
        return sortedSentence;
    }
};
