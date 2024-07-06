class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char, char> mpp1;
        int k = 0;
        for (int i = 0; i < key.size(); i++) {
            if (key[i] == ' ' || mpp1.find(key[i]) != mpp1.end()) {
            } else {
                mpp1[key[i]] = k + 'a';
                k++;
            }
        }

        for (int i = 0; i < message.length(); i++) {

            if (message[i] == ' ')
                continue;
            else {
                message[i] = mpp1[message[i]];
            }
        }
        return message;
    }
};