
string encode(string src)
{     
  
  char ch=src[0];
  string ans;
  int count =1;
  for(int i=1;i<src.size();i++){
      if(src[i]==ch)count++;
      else {
          ans+=ch+to_string(count);
          ch=src[i];
          count=1;
          
      }
    
      
  }
    ans+=ch+to_string(count);
  return ans;
}   
