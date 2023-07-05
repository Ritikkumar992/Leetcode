class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int max_length=0;
        int i=0;
        while(i<sentences.size())
        {
            int length=0;
            for(int j=0;j<sentences[i].size();j++)
            {
                if(sentences[i][j]==' ')
                   length++;
            }
            length+=1; // to include to last word of sentences[i].
            max_length = max(max_length,length);
            i++;
        }
        return max_length;
    }
};