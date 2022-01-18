/*
Given an array A of integers, find the index of values that satisfy A + B = C + D, where A,B,C & D are integers values in the array

Note:

1) Return the indices `A1 B1 C1 D1`, so that 
  A[A1] + A[B1] = A[C1] + A[D1]
  A1 < B1, C1 < D1
  A1 < C1, B1 != D1, B1 != C1 

2) If there are more than one solutions, 
   then return the tuple of values which are lexicographical smallest. 

Assume we have two solutions
S1 : A1 B1 C1 D1 ( these are values of indices int the array )  
S2 : A2 B2 C2 D2

S1 is lexicographically smaller than S2 iff
  A1 < A2 OR
  A1 = A2 AND B1 < B2 OR
  A1 = A2 AND B1 = B2 AND C1 < C2 OR 
  A1 = A2 AND B1 = B2 AND C1 = C2 AND D1 < D2
Example:

Input: [3, 4, 7, 1, 2, 9, 8]
Output: [0, 2, 3, 5] (O index)
If no solution is possible, return an empty list.
*/

vector<int> Solution::equal(vector<int> &v) {
    vector<pair<int,pair<int,int>>>va;
    int n=v.size(),i,j;
    vector<vector<int>>vv;
    vector<int>vt;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            va.push_back({v[i]+v[j],{i,j}});
        }
    }
    sort(va.begin(),va.end());
    for(i=0;i<va.size()-1;i++){
        if(va[i].first==va[i+1].first){
            if(va[i].second.first<va[i+1].second.first and va[i+1].second.first<va[i+1].second.second and va[i].second.second != va[i+1].second.first and va[i].second.first != va[i+1].second.second){
                vt.push_back(va[i].second.first);
                vt.push_back(va[i].second.second);
                vt.push_back(va[i+1].second.first);
                vt.push_back(va[i+1].second.second);
                vv.push_back(vt);
            }
        }
    }
    if(vv.size()==0) {};
    sort(vv.begin(),vv.end());
    return vv.front();
}

