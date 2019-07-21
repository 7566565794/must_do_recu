using namespace std;

int ans(int m, int n){
    if(m==0 || n==0)
        return 0;
    if(m==1 || n==1)
        return 1;
    return ans(m,n-1)+ans(m-1,n);
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    cout<<ans(m,n)<<endl;
	}
	return 0;
}
