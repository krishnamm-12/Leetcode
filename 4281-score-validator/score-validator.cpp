class Solution {
public:
  
    vector<int> scoreValidator(vector<string>& events) {
        vector<int> v(2, 0);
        int n = events.size();
        int i = 0;
        while (i < n && v[1] < 10) {

            if (events[i] == "W")
                v[1]++;
            else if (events[i] == "WD" || events[i] == "NB")
                v[0]++;

            else
                v[0] += (events[i].at(0) - '0');

            i++;
        }
        return v;
    }

};