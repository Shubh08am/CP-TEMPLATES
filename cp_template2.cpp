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
#define vb vector<bool>
#define vs vector<string>
#define vc vector<char>
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
#define numberOfDigit(n) ((ll)log10(n) + 1)

//BITS
#define setBit(x) __builtin_popcountll(x)
#define zeroBit(x) __builtin_ctzll(x)
//to check if nth bit is set from right
bool isnthbitset(ll num,ll n){
    bool result = (num>>(n-1))&1 ;
    return result;
}


//MAPS
#define mpl map<ll,ll>
#define mpcl map<char,ll>
#define mpsl map<string,ll>
#define mpbl map<ll,bool>
#define umpl unordered_map<ll,ll>
#define umpcl unordered_map<char,ll>
#define umpsl unordered_map<string,ll>
#define umpbl unordered_map<ll,bool>

//SETS
#define si set<ll>
#define sc set<char>
#define sst set<string>
#define usi unordered_set<ll>
#define usc unordered_set<char>
#define usst unordered_set<string>

#define out(x) cout << x << "\n";
#define os(x) cout << x << " ";
#define rd(x) cin>>x ;
#define trav(i, v) for (auto &i : v)
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define take(v) trav(i, v) cin >> i;
#define no cout<<"No\n"
#define yes cout<<"Yes\n"
#define NO cout<<"NO\n"
#define YES cout<<"YES\n"
#define o_1 cout<<"-1\n"
#define one cout<<"1\n"
#define MAX(x) *max_element(all(x))
#define MIN(x) *min_element(all(x))
#define SUM(x) accumulate(all(x), 0LL)

#define B break 
#define C continue 

const char nl = '\n';
 
 // Values Defined
#define inf = 1e18;
#define mod = 1000000000 + 7;
#define MAXN = 1010101;
#define PI 3.1415926535897932384626
ll N = 1e5;
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

//check for power of two
bool isPowerofTwo(ll n)
{
    if (n == 0) return 0;
    if ((n & (~(n - 1))) == n)  return 1;
    return 0;
}

//perfect square 
bool isPerfectSquare(ll x){
    if (x >= 0) {
        long long num = sqrt(x);
        num = num*num*1LL;
        return num == x ;
    }
    return false;
}

//check prime 
bool checkPrime(ll n){
if(n<=1)  return false;
for(ll i = 2;  i<=sqrt(n) ; i++){
        if(n%i==0) return false;
    }
return true;
}

// Uppercase
void toUppercase(string &st) { 
transform(all(st), st.begin(), ::toupper) ;
}
 
// Lowercase
void toLowercase(string &st) { 
transform(all(st), st.begin(), ::tolower) ;
}

//check for palindrome
bool palindrome(string &s) {
    ll n =s.size();
    ll m=n/2;
    rep(i, 0,m) {
        if(s[i]!=s[n-i-1]) {return false;}
    }
    return true;
}

//subsequence --> if s1 is a subsequence of s2 --> return true --> 2 pointer
bool isSubSequence(str&s1, str&s2){
    ll m = s1.size();
    ll n = s2.size();
    ll j = 0; // points to s1 
 
    for (int i = 0; i < n && j < m; i++){ 
        if (s1[j] == s2[i]){
            j++;
        }
    }
    // If all characters of s1 is present in s2 i.e subsequence
    return j == m;
}

//sieve for prime numbers.
vl sieve; vector<bool>isprime(N,1);
void sieveOfEratosthenes() {
    

    for(int p=2; p*p<=N; p++){
         if(isprime[p]==1) {
             for(int i=p*p; i<=N; i+=p){
                 isprime[i]=0;
             } 
         }
    }
    
    for(int p=2; p<=N; p++) if(isprime[p]) {
        sieve.pb(p);
    }
}

//total number of divisor
ll number_of_divisor(ll n){
    vl v;
  for(ll i=1;i*i<=n;i++){
      if(n%i==0){
          if(n/i!=i){
              v.pb(n/i);
              v.pb(i);
          }      
          else{
               v.pb(i);
          }
      }
  } 
    return v.size();
}

//gives divisor of a number
vl give_divisor(ll n){
 vl v;
for(ll i=1;i*i<=n;i++){
     if(n%i==0){
        if(n/i!=i){
            v.pb(n/i);
            v.pb(i);
          }      
          else{
               v.pb(i);
          }
      }
  } 
    return v;
}

//Precomputation Technique
//prefix sum in vector 
void prefix_sum(vl &pre){
    rep(i,1,pre.size()){
        pre[i]+=pre[i-1];
    }
}
//suffix sum in vector 
void suffix_sum(vl &suf){
    rev(i,suf.size()-1,0){
        suf[i-1]+=suf[i];
    }
}

//write ncr , npr , substring 

signed main(){
WA_TLE_RE_AC

ll t;
cin>>t;
while(t--){


ll n  ,x , r, m ,y,z,w,k;
ll cnt = 0 , c=0 , cc=0 , sum=0 , su=0; bool f = 0 , ff=0 , flg = 1;
str s  , dum = "";
ll res=0 , ans=0 ;  ll mini=INT_MIN , maxi=INT_MAX;

 
cin>>n     ; 

/*
ll a[n] ;
rep(i,0,n) { cin >> a[i] ;}
*/

/*
  vl v,vv  ; 
for(ll i=0; i<n ; i++){   ll x ; cin >> x ;   v.pb(x) ; }
*/



}

return 0;}


