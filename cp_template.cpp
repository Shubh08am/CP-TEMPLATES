#include<bits/stdc++.h>
using namespace std;

//Speed --> fast_input_output
#define WA_TLE_RE_AC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define ll long long
#define ld long double

#define  pl pair<ll, ll>
#define  pd pair<ld, ld>

#define str string
#define vl vector<ll>
#define vs vector<string>
#define vd vector<ld>
#define vf vector<float>
#define vpl vector<pl>
#define vpd vector<pd>


#define rep(i, a, b) for (ll i = a; i < b; ++i)
#define rev(i, a, b) for (ll i = a; i >b; --i)
#define fo(i, n) for (ll i = 0; i < n; i++)
#define sz(x) x.size();

#define F first
#define S second
#define lb lower_bound
#define ub upper_bound
#define setp(x) setprecision(x) << fixed
#define in insert
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define Sort(x) sort(all(x))

#define mpl map<ll,ll>
#define umpl unordered_map<ll,ll>
#define si set<ll>
#define usi unordered_set<ll>


#define out(x) cout << x << "\n";
#define rd(x) cin>>x ;
#define trav(i, v) for (auto &i : v)
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define take(v) trav(i, v) cin >> i;
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define o_1 cout<<"-1\n"

#define B break 
#define C continue 


const char nl = '\n';
 

 // Values Defined
#define inf = 1e18;
#define mod = 1000000000 + 7;
#define MAXN = 1010101;
#define PI 3.1415926535897932384626

ll gcd(ll a ,ll b)
{
    /* base condition*/ 
    if(b==0) return a;
    return gcd (b,a%b );
}

ll lcm(ll a, ll b){
    return (a*b)/gcd(a,b);
}

ll  fact(ll  n){
    if(n==0) return 1;

    return n *fact(n-1);
}


signed main(){
WA_TLE_RE_AC

ll t;
cin>>t;
while(t--){


ll n  ,x , r, m, b ,y,z,w,k;
ll cnt = 0 , c=0 , cc=0 , one=1 , sum=0 , su=0; bool f = 0 , ff=0 , flg = 1;
str s  , dum = "";
ll res=0 , ans=0 ;  ll mini=INT_MIN , maxi=INT_MAX;


cin>>n  ; 

/*
ll a[n] ;
rep(i,0,n) { cin >> a[i] ;}*/


/*
  vl v,vv  ; 
for(ll i=0; i<n ; i++){   ll x ; cin >> x ;   v.pb(x) ; }
*/



// ll mn =*min_element(a,a+n);
//ll mx = *max_element(a,a+n);
// ll sm = accumulate(a,a+n,0LL) ;


// ll mnn =*min_element(all(v));
//ll mxx = *max_element(all(v));
//ll op = accumulate(all(v),0ll) ;
 



}

return 0;}


