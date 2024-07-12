class Solution {
public:
    int maximumGain(string s, int x, int y) {
        auto remove_and_score = [](string& s, const string& target, int points) -> int {
            stack<char> stack;
            int score = 0;
            for (char ch : s) {
                if (!stack.empty() && stack.top() == target[0] && ch == target[1]) {
                    stack.pop();
                    score += points;
                } else {
                    stack.push(ch);
                }
            }
            string new_s;
            while (!stack.empty()) {
                new_s += stack.top();
                stack.pop();
            }
            reverse(new_s.begin(), new_s.end());
            s = new_s;
            return score;
        };

        int totalScore = 0;

        if (x >= y) {
            totalScore += remove_and_score(s, "ab", x);
            totalScore += remove_and_score(s, "ba", y);
        } else {
            totalScore += remove_and_score(s, "ba", y);
            totalScore += remove_and_score(s, "ab", x);
        }

        return totalScore;
        
    }
};