class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {

        vector<int>diff(102,0);
          for(auto log:logs){
            int birth=log[0];
            int death=log[1];

             diff[birth-1950]++;
             diff[death-1950]--;
          }
          int population=0;
          int maxpopulation=0;
          int answer=1950;
          //prefixsum to find max population
          for(int i=0;i<101;i++){
            population+=diff[i];
            //maximum cond
            if(population>maxpopulation){
                maxpopulation=population;
                answer=1950+i;
            }
          }
          return answer;
        
    }
};