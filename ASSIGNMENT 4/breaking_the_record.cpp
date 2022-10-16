#include <iostream>
#include<vector>

using namespace std;

     vector<int> breakingRecords(vector<int> scores) 
{
    int max = scores[0]; 
    int min = scores[0]; 
    int count_max = 0;   
    int count_min = 0; 
    vector <int> re ; 
    int len  = scores.size(); 
    for (int i=0; i<len; i++)
    {
        if(max<scores[i]) 
        {
            max = scores[i];
            count_max++; 
        }
        if(min>scores[i])
        {
            min = scores[i];
            count_min++;
        }
    }
    re.push_back(count_max);
    re.push_back(count_min);
    return re;
    }
