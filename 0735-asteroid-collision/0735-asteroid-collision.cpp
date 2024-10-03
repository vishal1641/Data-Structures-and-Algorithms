class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        int a = 0, b = 0;

        for (int i = 0; i < asteroids.size(); i++) {

            if (s.empty() || s.top() < 0 && asteroids[i] < 0 ||
                s.top() > 0 && asteroids[i] > 0 ||
                s.top() < 0 && asteroids[i] > 0) {
                s.push(asteroids[i]);
            } else {

                while (!s.empty()) {
                    a = s.top();
                    b = asteroids[i];

                    if (a > 0 && b < 0) {
                        if (abs(a) == abs(b)) {
                            s.pop();
                            break;
                        } else if (abs(a) > abs(b)) {
                            break;
                        } else {
                            s.pop();
                            if (s.empty()) {
                                s.push(b);
                                break;
                            }
                        }
                    } else {
                        s.push(b);
                        break;
                    }
                }
            }
        }

        vector<int> v;

        while (!s.empty()) {
            v.push_back(s.top());
            s.pop();
        }
        reverse(begin(v), end(v));
        return v;
    }
};
