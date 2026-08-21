class Solution {
public:
    string interpret(string command) {
        int n=command.size();
        string s;
        int i=0;
        while(i<n){
           if(command[i]=='(' && command[i+1]==')') {
            s+='o';
            i+=2;
           }
           else if(command[i]=='(' && command[i+3]==')'){
            s+="al";
            i+=4;
           }
           else{ 
            s+='G';
            i++;
           }
        }

        return s;
       }  
};