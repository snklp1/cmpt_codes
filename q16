//https://leetcode.com/problems/goal-parser-interpretation/submissions/

class Solution {
public:
    string interpret(string command) 
    {
        string answer;
        for(int i=0; i<command.size() ; i++)
        {
            if(command[i]=='G')
            {
                answer.push_back('G');
            }
            if(command[i]=='(')
            {
                if(command[i+1]==')')
                {
                    answer.push_back('o');
                    i++;
                }
                if(command[i+1]=='a')
                {
                    answer.push_back('a');
                    answer.push_back('l');
                    i = i+2;
                }
            }
            
        }
        return answer;
    }
};
