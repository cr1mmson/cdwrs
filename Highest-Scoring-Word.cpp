#include <string>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
const int sizearr = 26;

char letters[sizearr];
int value[sizearr];

string highestScoringWord(const string &str){
    for (int i = 0; i < sizearr; i++) {
        letters[i] = 'a' + i;
    }

    for (int i = 0; i < sizearr; i++) {
        value[i] = 1 + i;
    }

    int score = 0;
    string word;
    vector<string> words;
    vector<char>letter;
    vector<int>score_word;
    vector<int>scores;

    istringstream stream(str);

    while (getline(stream, word, ' ')) {
        words.push_back(word);
    }

    for (const string& ww : words) {
        score_word.clear();
        letter.clear();
        score = 0;

        for (char lett : ww ) {
            letter.push_back(lett);
        }

        for (char l : letter) {
            for (int i = 0; i<26; i++) {
                if (l == letters[i]) {
                    score_word.push_back(value[i]);
                }
            }
        }

        for (int i : score_word) {
            score += i;
        }
        scores.push_back(score);
    }
    
     int max_num = scores[0];
    for (int ii = 1; ii < scores.size(); ++ii) {
        if (scores[ii] > max_num) {
            max_num = scores[ii];  
            
        }
    }
    
    for(int i=0; i < scores.size(); i++){
        if(scores[i] == max_num){
            return words[i];
        }
    }

    
}
