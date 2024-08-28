class Solution {
    public String reverseWords(String s) 
    {
        s = s.trim();

        int n=0,i,j=0;
        for(i=0; i<s.length(); i++)
        {
            if(s.charAt(i)==' ')
                n++;
        }

        String words[] = new String[n+1];
        for(i=0; i<s.length(); i++)
        {
            String word ="";
            while (i<s.length() && s.charAt(i)!=' ')
            {
                word += s.charAt(i);
                i++;
            }
            words[j] = word;
            j++;
        }    

        StringBuilder result = new StringBuilder();
        for(i=words.length-1; i>=0; i--)
        {
            if(words[i]=="")
                continue;

            result.append(words[i]);

            if(i>0)
                result.append(" ");
        }
        return result.toString();
    }
}