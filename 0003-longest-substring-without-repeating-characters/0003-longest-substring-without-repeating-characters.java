import java.util.*;

public class Solution {
    public int lengthOfLongestSubstring(String s) {
        int maxLength = 0; // stores the length of the longest substring
        int start = 0; // starting index of the current substring
        Map<Character, Integer> map = new HashMap<>(); // map to store the last occurrence index of each character

        for (int end = 0; end < s.length(); end++) {
            char c = s.charAt(end);

            if (map.containsKey(c)) {
                start = Math.max(start, map.get(c) + 1); // update the start index to the next index of the repeated character
            }

            map.put(c, end); // update the last occurrence index of the character

            maxLength = Math.max(maxLength, end - start + 1); // update the maximum length
        }

        return maxLength;
    }
}