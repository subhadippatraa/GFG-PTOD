    string printString(string s, char ch, int count) {
        
        string str="";
        int i=0;
        int cnt=0;
      
        
        for(i=0;i<s.size();i++)
        {
            if(s[i]==ch)
            {
               cnt++;
                if(cnt==count)break;
            }
            
        }
        i++;
        
        while(i<s.size())
        {
            str=str+s[i];
            i++;
        }
        return str;
    }