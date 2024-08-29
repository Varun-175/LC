class Solution {
    public String reverseVowels(String s) {

        String vowels = "aeiouAEIOU";
        char letters [] = s.toCharArray();
        char temp;
        int first = 0;
        int last = s.length() - 1;

        while (first < last)
        {
            while (first < last && vowels.indexOf(letters[first]) == -1)
            {
                first++;
            }

            while (first < last && vowels.indexOf(letters[last]) == -1)
            {
                last--;
            }

            temp = letters[first];
            letters[first] = letters[last];
            letters[last] = temp;

            first++;
            last--;            
        }
        String new_str = new String(letters);
        return new_str;
    }
}