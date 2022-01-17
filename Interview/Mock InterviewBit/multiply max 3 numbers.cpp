int Solution::maxp3(vector<int> &v) {
    sort(v.begin(),v.end());
    n=v.size();
    vector<ll>vv;
    if(n>2) vv.push_back(v[n-3]*v[n-2]*v[n-1]);
    if(n>2) vv.push_back(v[0]*v[1]*v[n-1]);
    if(n>1) vv.push_back(v[n-2]*v[n-1]);
    if(n>1) vv.push_back(v[0]*v[1]);
    if(n>1) vv.push_back(v[1]);
    vv.push_back(v[0]);
    vv.push_back(0);
    sort(vv.begin(),vv.end());
    P(vv.back());
}
