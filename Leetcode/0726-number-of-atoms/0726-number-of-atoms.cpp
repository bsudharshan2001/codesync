class Solution {
public:
    string countOfAtoms(string formula) {
        stack<unordered_map<string, int>> st;
        st.push(unordered_map<string, int>());
        int i = 0;
        int n = formula.size();

        while (i < n) {
            if (formula[i] == '(') {
                st.push(unordered_map<string, int>());
                i++;
            } else if (formula[i] == ')') {
                unordered_map<string, int> top = st.top();
                st.pop();
                i++;
                int start = i;
                while (i < n && isdigit(formula[i])) i++;
                int multiplicity = i > start ? stoi(formula.substr(start, i - start)) : 1;
                for (auto &p : top) {
                    st.top()[p.first] += p.second * multiplicity;
                }
            } else {
                int start = i++;
                while (i < n && islower(formula[i])) i++;
                string name = formula.substr(start, i - start);
                start = i;
                while (i < n && isdigit(formula[i])) i++;
                int multiplicity = i > start ? stoi(formula.substr(start, i - start)) : 1;
                st.top()[name] += multiplicity;
            }
        }

        map<string, int> result(st.top().begin(), st.top().end());
        string res;
        for (auto &p : result) {
            res += p.first;
            if (p.second > 1) res += to_string(p.second);
        }
        return res;
        
    }
};