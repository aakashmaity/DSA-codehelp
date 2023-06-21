//Not correct
//NO matching function to call'erase'

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int size=sentences.size();
        int maxword=INT_MIN;
        int len,str=0;
        for(int i=0;i<size;i++)
        {
            int space=0;
            //finding total no of spaces for each sentence
            string sen=sentences[str];
            len=sen.size();                     //length of each sentence
            while(len)
            {
                int index=sen.find(' ');
                sen.erase(sen.begin(),index+1);     //erase that string from begining to index(first space found)
                space++;
                len=sen.size();
            }
            //find maximum words for each sentence
            maxword=max(space,maxword);
            str++;
        }
        return maxword + 1;
    }
};