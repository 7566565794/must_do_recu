using namespace std;

void com_sum(vector<int>a,vector<int>&r, set<vector<int>>&res,
                    int sum, int i){
    if(sum<0)
        return;
    if(sum==0){
        res.insert(r);
        return;
    }
    while(i<a.size()&& a[i]<=sum){
       
        
        r.push_back(a[i]);
        com_sum(a,r,res,sum-a[i],i+1);
        r.pop_back();
         if(i<a.size()-1 && a[i]==a[i+1]){
            i++;
            continue;
        }
        i++;
    }
}

int main()
 {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; ++i)
            cin>>a[i];
        int sum;
        cin>>sum;
        sort(a.begin(),a.end());
        vector<int>r;
        set<vector<int>>res;
        com_sum(a,r,res,sum,0);
        for(auto i=res.begin(); i!=res.end(); i++){
            cout<<"(";
            auto j = i->begin();
	        for(;j!=i->end(); j++){    
	            if(j!=i->end()-1)
	               cout<<*j<<" ";
	            else 
	             cout<<*j;
	         }
	        cout<<")";
	   }
	   if(res.size()==0)
	        cout<<"Empty";
	   cout<<endl;
    }
	return 0;
}
