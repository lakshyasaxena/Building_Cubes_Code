#ifndef SPECIAL_FUNCTIONS_H_INCLUDED
#define SPECIAL_FUNCTIONS_H_INCLUDED
using namespace std;
typedef long long ll;
namespace  special_functions
{
    bool all_integers(std::string temp);
    bool valid_pos_neg_integer(string temp);
    ll string_to_integer_converter(string temp);
    string positive_number_to_string(ll);
    bool check_odd_exist(ll a,ll b);
    bool check_even_exist(ll a,ll b);
    bool check_prime(ll a);
    bool check_prime_exist(ll a,ll b);
    bool check_non_prime_exist(ll a,ll b);
    ll count_no_of_permutations(string a);
}


bool special_functions::all_integers(std::string temp)
{
    for(int i=0;i<temp.size();i++)
    {
        if( (temp[i]=='0') || (temp[i]=='1') || (temp[i]=='2') || (temp[i]=='3') || (temp[i]=='4') || (temp[i]=='5') || (temp[i]=='6') || (temp[i]=='7') || (temp[i]=='8') || (temp[i]=='9')  )
        {continue;}
        else { return false; }
    }
    return true;
}


bool special_functions::valid_pos_neg_integer(string temp)
{
    if(temp.size()>20) return false;
    short i=0;
    if(temp[0]=='-') { i++; }
    for(i;i<temp.size();i++)
    {
        if( (temp[i]=='0') || (temp[i]=='1') || (temp[i]=='2') || (temp[i]=='3') || (temp[i]=='4') || (temp[i]=='5') || (temp[i]=='6') || (temp[i]=='7') || (temp[i]=='8') || (temp[i]=='9')  )
        {continue;}
        else { return false; }
    }
    return true;
}



ll special_functions::string_to_integer_converter(string str)
{
    ll sum=0; ll itr=1;
    if(str[0]=='-')
    {
    reverse(str.begin(),str.end());
    for(int i=0;i<str.size()-1;i++)
    {
        ll store=str[i]-48;
        sum+=(itr*store);
        itr*=10;
    }
    sum*=-1;
    return sum;
    }
    else
    {
    reverse(str.begin(),str.end());
    for(int i=0;i<str.size();i++)
    {
        ll store=str[i]-48;
        sum+=(itr*store);
        itr*=10;
    }
    return sum;
    }
}


string special_functions::positive_number_to_string(ll num)
{
    string str="";
    while(num!=0)
    {
        int ch; ch=num%10; num/=10;
        switch(ch)
        {
        case 0: { str+="0"; break; }
        case 1: { str+="1"; break; }
        case 2: { str+="2"; break; }
        case 3: { str+="3"; break; }
        case 4: { str+="4"; break; }
        case 5: { str+="5"; break; }
        case 6: { str+="6"; break; }
        case 7: { str+="7"; break; }
        case 8: { str+="8"; break; }
        case 9: { str+="9"; break; }
        }
    }
    reverse(str.begin(),str.end()); return str;
}


bool special_functions::check_odd_exist(ll a,ll b)
{
    short co=0; a=abs(a); b=abs(b);
    ll mini=min(a,b); ll maxi=max(a,b);
    for(ll i=mini;i<=maxi;i++) { if(i%2==1) return true; }
    return false;
}


bool special_functions::check_even_exist(ll a,ll b)
{
    short co=0; a=abs(a); b=abs(b);
    ll mini=min(a,b); ll maxi=max(a,b);
    for(ll i=mini;i<=maxi;i++) { if(i%2==0) return true; }
    return false;
}


bool special_functions::check_prime(ll a)
{
    for(int i=2;i<=sqrt(a);i++) { if(a%i==0) return false; }
    return true;
}


bool special_functions::check_prime_exist(ll a,ll b)
{
    for(ll i=a;i<=b;i++)
    {
        bool check=check_prime(i);
        if(check==true) return true;
    }
    return false;
}


bool special_functions::check_non_prime_exist(ll a,ll b)
{
    if(a==1) return true;
    for(ll i=a;i<=b;i++)
    {
        bool check=check_prime(i);
        if(check==false) return true;
    }
    return false;
}


ll special_functions::count_no_of_permutations(string a)
{
    if(a.size()>19) return 0;  // string length must be smaller then 19
    sort(a.begin(),a.end());
    vector <ll> v1;ll countt=1,sum=1;
    for(short i=1;i<a.size();i++)
    {
        if(a[i]==a[i-1]) { sum++; continue; }
        v1.push_back(sum); sum=1; countt++;
    }
    v1.push_back(sum);
    if(countt>10) { return 39916800; }
    ll num=1,den=1; sum=a.size();
    while(sum--) { num*=(sum+1); }
    for(int i=0;i<v1.size();i++) { while(v1[i]--) { den*=(v1[i]+1); } }
    countt=(num/den); return countt;
}


#endif // SPECIAL_FUNCTIONS_H_INCLUDED
