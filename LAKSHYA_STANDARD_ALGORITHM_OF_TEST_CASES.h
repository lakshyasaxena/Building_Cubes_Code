#ifndef LAKSHYA_STANDARD_ALGORITHM_OF_TEST_CASES_H_INCLUDED
#define LAKSHYA_STANDARD_ALGORITHM_OF_TEST_CASES_H_INCLUDED
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
namespace lakshya_standard_algorithm_of_test_cases
{
    class Integer
    {
    private:
        // function type-> within class use functions
        ll generate_number()
        {
            short countt=0;
            ll a=rand(); ll b=rand(); ll c=rand(); ll d=rand();
            ll store=0;
            while(a!=0) { store=10; store+=(a%10); a/=10; countt++; }
            while(b!=0) { store*=10; store+=(b%10); b/=10; countt++; }
            while(c!=0) { store*=10; store+=(c%10); c/=10; countt++; }
            while(d!=0) { if(countt==18) break; store*=10; store+=(d%10); d/=10; countt++;}
            return store;
        }

        bool is_prime(ll num)
        {
            if(num==1) return false;
            for(ll i=2;i<=sqrt(num);i++) { if(num%i==0) {return false;} }
            return true;
        }

    public:
        // function type-> within class use functions but also used by array class which is child of Integer Class
        void randomized_vector(vector <ll> &v1)
        {
            for(int i1=v1.size()-1;i1>0;i1--)
            {
                swap(v1[i1],v1[(rand()*rand())%(i1+1)]);
            }
        }
        //****************************************************************************************************************

        // function type-> used by user data_type object , can be accessed outside class by its object
        ll get_random(ll lower_limit,ll upper_limit)
        {
            ll difference=abs(upper_limit-lower_limit+1);
            ll number=generate_number()%difference;
            number+=lower_limit;
            return number;
        }


        ll get_odd(ll lower_limit,ll upper_limit)
        {
            if(upper_limit%2==0) { upper_limit--; }
            if(lower_limit%2==0) { lower_limit++; }
            ll difference=abs(upper_limit-lower_limit+1);
            ll number=generate_number()%difference;
            number+=lower_limit;
            if(number%2==0) number++;
            return number;
        }


        ll get_even(ll lower_limit,ll upper_limit)
        {
            if(upper_limit&1==1) { upper_limit--; }
            if(lower_limit&1==1) { lower_limit++; }
            ll difference=abs(upper_limit-lower_limit+1);
            ll number=generate_number()%difference;
            number+=lower_limit;
            if(number&1==1) number++;
            return number;
        }


        vector <ll> get_prime(ll lower_limit,ll upper_limit,ll sizee)
        {
            vector <bool> check(upper_limit+1,false);
            vector <ll> prime;
            if(lower_limit==2) prime.push_back(2);
            for(int i=3;i<check.size();i+=2)
            {
                if(check[i]==true) continue;
                if(lower_limit<=i) prime.push_back(i);
                for(int j=i;j<check.size();j+=i) { check[j]=true; }
            }
        if(sizee<prime.size()) { randomized_vector(prime); while(prime.size()!=sizee) prime.pop_back(); }
        if(sizee>prime.size()) { while(prime.size()!=sizee) { prime.push_back(prime[rand()%prime.size()]); } }
        randomized_vector(prime); return prime;
        }


        ll get_non_prime(ll lower_limit,ll upper_limit)
        {
            bool check=true;
            ll difference=abs(upper_limit-lower_limit+1);
            ll number;
            while(check!=false)
            {
            number=generate_number()%difference;
            number+=lower_limit;
            check=is_prime(number);
            }
            return number;
        }


        vector <ll> get_fibonacci(ll lower_limit,ll upper_limit,ll sizee)
        {
            vector <ll> fibo; fibo.push_back(0); fibo.push_back(1);
            for(int i=2;i<=92;i++) { fibo.push_back(fibo[i-2]+fibo[i-1]); }
            vector <ll> fibonacci;
            for(int i=lower_limit-1;i<upper_limit;i++) { fibonacci.push_back(fibo[i]); }
            if(sizee<fibonacci.size()) { randomized_vector(fibonacci); while(fibonacci.size()!=sizee) fibonacci.pop_back(); }
            if(sizee>fibonacci.size()) { while(fibonacci.size()!=sizee) { fibonacci.push_back(fibonacci[rand()%fibonacci.size()]); } }
            randomized_vector(fibonacci); return fibonacci;
        }


        vector <ll> get_all_random_numbers(ll low,ll up,int sizee)
        {
            std::cout<< std::fixed; std::cout<< std::setprecision(14); vector <ll> v1;
            ll diff=up-low+1;
            float f1=((diff*1.0)/(sizee*1.0));
            float start=low*1.0;
            ll d1=low; ll d2=up;
            for(int i=0;i<sizee-1;i++)
            {
                start+=f1; d2=floor(start)-1;
                v1.push_back(get_random(d1,d2));
                d1=floor(start);
            }
            d2=up; v1.push_back(get_random(d1,d2));
            randomized_vector(v1);
            return v1;
        }
    };


    class Initializer:public Integer
    {
    private:
        short initializer_pointer=-1;
        vector <pair<int,int>> initializer_details;
        vector <int> initializer_store;
    public:
        void store_initializer_details(int minimum,int maximum) { initializer_details.push_back(make_pair(minimum,maximum)); }
        void set_initializer()
        {
            for(short i=0;i<initializer_details.size();i++)
            {
                initializer_store.push_back(get_random(initializer_details[i].first,initializer_details[i].second));
            }
        }
        int get_initializer(short index)  {  return initializer_store[abs(index+1)];  }
        void reset_initializer()
        {
            initializer_details.clear();
            initializer_store.clear();
            initializer_pointer=-1;
        }
    };


    class Real
    {
    private:
        // function type-> within class use functions
        ll generate_number()
        {
            short countt=0;
            ll a=rand(); ll b=rand(); ll c=rand(); ll d=rand();
            ll store=0;
            while(a!=0) { store=10; store+=(a%10); a/=10; countt++; }
            while(b!=0) { store*=10; store+=(b%10); b/=10; countt++; }
            while(c!=0) { store*=10; store+=(c%10); c/=10; countt++; }
            while(d!=0) { if(countt==18) break; store*=10; store+=(d%10); d/=10; countt++;}
            return store;
        }
        string integer_to_string(ll &num)
        {
            ll copy_num=abs(num);
            string s1;
            while(copy_num!=0) { short a=copy_num%10; copy_num/=10; s1+=a+48; }
            reverse(s1.begin(),s1.end());
            if(num<0) { s1="-"+s1; } return s1;
        }
        string generate_numeric_random_string(short sizee)
        {
            string symbols="1234056789"; string s1="";
            while(sizee--) { ll index=rand()%10; s1+=symbols[index];  }
            return s1;
        }

        public:
        // function type-> used by user data_type object, can be accessed outside the class by its object
        string get_random_real(ll lower_limit,ll upper_limit,short precision)
        {
            ll difference=abs(upper_limit-lower_limit);
            ll number=generate_number()%difference;
            number+=lower_limit;
            string s1=integer_to_string(number);
            if(precision==0) return s1;
            s1+="."; string s2=generate_numeric_random_string(precision); s1+=s2; return s1;
        }
    };


    class Permutation
    {
    private:
        short index_of_string=-1;
        vector <string> store_string;
    public:
        // function type-> used by user data_type object, can be accessed outside the class by its object
        short store_string_for_permutation(string &str)
        {
            store_string.push_back(str);return (++index_of_string);
        }

        vector <string> generate_permutations(short index,int sizee)
        {
            string str=store_string[index];
            vector <string> store_permutations;
            sort(str.begin(),str.end());
            do
            {
                if(store_permutations.size()==sizee) break;
                store_permutations.push_back(str);
            }
            while (next_permutation(str.begin(), str.end()));
            return store_permutations;
        }
    };


    class S_string:public Initializer
    {
    private:
        short pointer_of_default_string=-1;
        short pointer_of_input_string=-1;

        vector <string> default_string_set;
        vector <tuple<string,short,short,int>> input_string_set;

        // function type-> within class use functions
        void randomized_string(string &str)
        {
            for(int index=str.size();index>1;index--) { swap(str[index-1],str[rand()%index]); }
        }

        string generate_repetition_allowed_string(string &str,int &sizee)
        {
            string a; while(a.size()!=sizee) {a+=str[rand()%str.size()]; } return a;
        }

        string generate_unique_symbol_string(string &str,int &sizee)
        {
            randomized_string(str); string s2;int index=-1;
            while(s2.size()!=sizee) { s2+=str[++index]; } return s2;
        }

        string generate_repetition_allowed_palindrome_string(string &str,int &sizee)
        {
            string s1; while(s1.size()!=(sizee/2)) { s1+=str[rand()%str.size()]; } string s2=s1;
            if(sizee&1==1) { s2+=str[rand()%str.size()]; reverse(s1.begin(),s1.end()); s2+=s1; } //odd case
            else { reverse(s1.begin(),s1.end()); s2+=s1; }   // even case
            return s2;
        }

        string generate_unique_symbol_palindrome_string(string &str,int &sizee)
        {
            randomized_string(str); int index=-1; string s1;
            while(s1.size()!=(sizee/2)) { s1+=str[++index]; } string s2=s1;
            if(sizee&1==1) { s2+=str[++index]; reverse(s1.begin(),s1.end()); s2+=s1; } // odd case
            else { reverse(s1.begin(),s1.end()); s2+=s1; }    // even case
            return s2;
        }

    public:
         // function type-> used by user data_type object, can be accessed outside the class by its object
        short store_default_string(string str)
        {
            default_string_set.push_back(str); return (++pointer_of_default_string);
        }

        short store_input_string(string str,short type,short mode,int sizee)
        {
            input_string_set.push_back(make_tuple(str,type,mode,sizee)); return (++pointer_of_input_string);
        }


        string get_default_string(short index)
        {
            return default_string_set[index];
        }


        string get_input_string(short index)
        {
            string str=get<0>(input_string_set[index]);
            short type=get<1>(input_string_set[index]);
            short mode=get<2>(input_string_set[index]);
            int sizee=get<3>(input_string_set[index]);
            if(sizee<0) { sizee=get_initializer(sizee); }
            string to_be_return;
            if(type==4) //palindrome case
            {
                if(mode==1) { to_be_return=generate_repetition_allowed_palindrome_string(str,sizee); return to_be_return; }
                else { to_be_return=generate_unique_symbol_palindrome_string(str,sizee); return to_be_return; }
            }
            else   // all other cases
            {
                if(mode==1) { to_be_return=generate_repetition_allowed_string(str,sizee); }
                else { to_be_return=generate_unique_symbol_string(str,sizee); }
                if(type==2) { sort(to_be_return.begin(),to_be_return.end()); }
                else if(type==3) { sort(to_be_return.begin(),to_be_return.end()); reverse(to_be_return.begin(),to_be_return.end()); }
                return to_be_return;
            }
        }
    };


    class Array:public S_string,public Real,public Permutation
    {
    private:
        // function type-> within class use
        void randomized_string_vector(vector <string> &v1)
        {
            for(int i1=v1.size()-1;i1>0;i1--) { swap(v1[i1],v1[(rand()*rand())%(i1+1)]); }
        }

        public:
            // function type-> used by object, can be accessed outside the class by its object
        vector <ll> get_integer(short mode,ll min_value,ll max_value,ll sizee,short order)
        {
            vector <ll> store_integer;
            if(sizee<0) { sizee=get_initializer(sizee); }
            switch(mode)
                {
                case 1:  // Random Integers
                    {
                        for(int i=0;i<sizee;i++) { store_integer.push_back(get_random(min_value,max_value)); } break;
                    }
                case 2:  // Odd Integers
                    {
                        for(int i=0;i<sizee;i++) { store_integer.push_back(get_odd(min_value,max_value)); } break;
                    }
                case 3:  // Even Integers
                    {
                        for(int i=0;i<sizee;i++) { store_integer.push_back(get_even(min_value,max_value)); } break;
                    }
                case 4:  // Prime Integers
                    {
                        store_integer=get_prime(min_value,max_value,sizee);
                        if(sizee>store_integer.size()) { while(store_integer.size()!=sizee) { store_integer.push_back(store_integer[rand()%store_integer.size()]); } } break;
                    }
                case 5:  // Non prime Integers
                    {
                        for(int i=0;i<sizee;i++) { store_integer.push_back(get_non_prime(min_value,max_value)); } break;
                    }
                case 6:  // Incremented Integers
                    {
                        for(int i=0;i<sizee;i++) { store_integer.push_back(min_value); min_value+=max_value; } break;
                    }
                case 7:  // Fibonacci Integers
                    {
                        store_integer=get_fibonacci(min_value,max_value,sizee);
                        if(sizee>store_integer.size()) { while(store_integer.size()!=sizee) { store_integer.push_back(store_integer[rand()%store_integer.size()]); } } break;
                    }
                }
            if(order==1) { randomized_vector(store_integer); }
            if(order==2) { sort(store_integer.begin(),store_integer.end()); }
            if(order==3) { sort(store_integer.rbegin(),store_integer.rend()); }
            return store_integer;
        }


        vector <string> get_real(short set_precision,ll min_value,ll max_value,ll sizee,short order)
        {
            if(sizee<0) { sizee=get_initializer(sizee); }
            vector <string> store_real;
            for(int i=0;i<sizee;i++) { store_real.push_back(get_random_real(min_value,max_value,set_precision)); }
            if(order==1) { randomized_string_vector(store_real); }
            if(order==2) { sort(store_real.begin(),store_real.end()); }
            if(order==3) { sort(store_real.rbegin(),store_real.rend()); }
            return store_real;
        }


        vector <string> get_input_string_array(short index,int sizee,short order)
        {
            vector <string> store_string;
            if(sizee<0) { sizee=get_initializer(sizee); }
            for(int i=0;i<sizee;i++) { store_string.push_back(get_input_string(index)); }
            if(order==1) { randomized_string_vector(store_string); }
            if(order==2) { sort(store_string.begin(),store_string.end()); }
            if(order==3) { sort(store_string.rbegin(),store_string.rend()); }
            return store_string;
        }


        vector <string> get_all_permutations(short index, int sizee,short order)
        {
            if(sizee<0) { sizee=get_initializer(sizee); }
            vector <string> all_permutations= generate_permutations(index,sizee);
            if(order==1) { randomized_string_vector(all_permutations); }
            if(order==2) { sort(all_permutations.begin(),all_permutations.end()); }
            if(order==3) { sort(all_permutations.rbegin(),all_permutations.rend()); }
            return all_permutations;
        }


        vector <ll> get_all_random_numbers_for_array(ll c_low,ll c_up,int c_sizee,short order)
        {
            if(c_sizee<0) { c_sizee=get_initializer(c_sizee); }
            vector <ll> v1=get_all_random_numbers(c_low,c_up,c_sizee);
            if(order==2) { sort(v1.begin(),v1.end()); }
            if(order==3) { sort(v1.rbegin(),v1.rend()); }
            return v1;
        }
    };


    class Matrix:public Array
    {
    private:
        // function type-> within class use
        void sort_string_row_wise_assending(vector <vector <string>> &v1)
        {
            for(int i=0;i<v1.size();i++) { sort(v1[i].begin(),v1[i].end()); }
        }
        void sort_string_column_wise_assending(vector <vector <string>> &v1)
        {
            int row=v1.size(); int col=v1[0].size();
            for(int i=0;i<col;i++)
            {
                vector <string> v2;
            for(int j=0;j<row;j++) { v2.push_back(v1[j][i]); }
            sort(v2.begin(),v2.end());
            for(int j=0;j<row;j++) { v1[j][i]=v2[j]; }
            }
        }
        void sort_string_row_wise_descending(vector <vector <string>> &v1)
        {
            for(int i=0;i<v1.size();i++) { sort(v1[i].rbegin(),v1[i].rend()); }
        }
        void sort_string_column_wise_descending(vector <vector <string>> &v1)
        {
            int row=v1.size(); int col=v1[0].size();
            for(int i=0;i<col;i++)
            {
                vector <string> v2;
            for(int j=0;j<row;j++) { v2.push_back(v1[j][i]); }
            sort(v2.rbegin(),v2.rend());
            for(int j=0;j<row;j++) { v1[j][i]=v2[j]; }
            }
        }
        void sort_numbers_row_wise_assending(vector <vector <ll>> &v1)
        {
            for(int i=0;i<v1.size();i++) { sort(v1[i].begin(),v1[i].end()); }
        }
        void sort_numbers_column_wise_assending(vector <vector <ll>> &v1)
        {
            int row=v1.size(); int col=v1[0].size();
            for(int i=0;i<col;i++)
            {
                vector <ll> v2;
            for(int j=0;j<row;j++) { v2.push_back(v1[j][i]); }
            sort(v2.begin(),v2.end());
            for(int j=0;j<row;j++) { v1[j][i]=v2[j]; }
            }
        }
        void sort_numbers_row_wise_descending(vector <vector <ll>> &v1)
        {
            for(int i=0;i<v1.size();i++) { sort(v1[i].rbegin(),v1[i].rend()); }
        }
        void sort_numbers_column_wise_descending(vector <vector <ll>> &v1)
        {
            int row=v1.size(); int col=v1[0].size();
            for(int i=0;i<col;i++)
            {
                vector <ll> v2;
            for(int j=0;j<row;j++) { v2.push_back(v1[j][i]); }
            sort(v2.rbegin(),v2.rend());
            for(int j=0;j<row;j++) { v1[j][i]=v2[j]; }
            }
        }

    public:
        // function type-> used by user data_type object, can be accessed outside the class by its object

        vector <vector <ll>> get_integer_matrix(short mode,ll min_value,ll max_value,int row,int col,short order1,short order2)
        {
            int index=-1;
            if(row<0) { row=get_initializer(row); }  if(col<0) { col=get_initializer(col); }
            ll sizee=row*col;
            vector <vector <ll>> matrix;
           vector <ll> v1=get_integer(mode,min_value,max_value,sizee,1);
           for(int i=0;i<row;i++)
           {
               vector <ll> store;
               for(int j=0;j<col;j++) { store.push_back(v1[++index]); }
               matrix.push_back(store);
           }
           if(order1==2) { sort_numbers_row_wise_assending(matrix); }
           if(order1==3) { sort_numbers_row_wise_descending(matrix); }
           if(order2==2) { sort_numbers_column_wise_assending(matrix); }
           if(order2==3) { sort_numbers_column_wise_descending(matrix); }
           return matrix;
        }

        vector <vector <string>> get_real_matrix(short precision,ll min_val,ll max_val,int row,int col,short order1,short order2)
        {
            int index=-1;
            if(row<0) { row=get_initializer(row); }  if(col<0) { col=get_initializer(col); }
            ll sizee=row*col;
            vector <vector <string>> matrix;
           vector <string> v1=get_real(precision,min_val,max_val,sizee,1);
           for(int i=0;i<row;i++)
           {
               vector <string> store;
               for(int j=0;j<col;j++) { store.push_back(v1[++index]); }
               matrix.push_back(store);
           }
           if(order1==2) { sort_string_row_wise_assending(matrix); }
           if(order1==3) { sort_string_row_wise_descending(matrix); }
           if(order2==2) { sort_string_column_wise_assending(matrix); }
           if(order2==3) { sort_string_column_wise_descending(matrix); }
           return matrix;
        }

        vector <vector <string>> get_string_matrix(short index2,int row,int col,short order1,short order2)
        {
            int index=-1;
            if(row<0) { row=get_initializer(row); }  if(col<0) { col=get_initializer(col); }
            ll sizee=row*col;
            vector <vector <string>> matrix;
           vector <string> v1=get_input_string_array(index2,sizee,1);
           for(int i=0;i<row;i++)
           {
               vector <string> store;
               for(int j=0;j<col;j++) { store.push_back(v1[++index]); }
               matrix.push_back(store);
           }
           if(order1==2) { sort_string_row_wise_assending(matrix); }
           if(order1==3) { sort_string_row_wise_descending(matrix); }
           if(order2==2) { sort_string_column_wise_assending(matrix); }
           if(order2==3) { sort_string_column_wise_descending(matrix); }
           return matrix;
        }

        vector <vector <string>> get_permutation_matrix(short index2,int row,int col,short order1,short order2)
        {
            int index=-1;
            if(row<0) { row=get_initializer(row); }  if(col<0) { col=get_initializer(col); }
            ll sizee=row*col;
            vector <vector <string>> matrix;
           vector <string> v1=get_all_permutations(index2,sizee,1);
           for(int i=0;i<row;i++)
           {
               vector <string> store;
               for(int j=0;j<col;j++) { store.push_back(v1[++index]); }
               matrix.push_back(store);
           }
           if(order1==2) { sort_string_row_wise_assending(matrix); }
           if(order1==3) { sort_string_row_wise_descending(matrix); }
           if(order2==2) { sort_string_column_wise_assending(matrix); }
           if(order2==3) { sort_string_column_wise_descending(matrix); }
           return matrix;
        }


        vector <vector <ll>> get_matrix_of_all_unique_numbers(ll low,ll up,int row,int col,short order1,short order2)
        {
            int index=-1;
            if(row<0) { row=get_initializer(row); }  if(col<0) { col=get_initializer(col); }
            ll sizee=row*col;
            vector <vector <ll>> matrix;
           vector <ll> v1=get_all_random_numbers_for_array(low,up,sizee,1);
           for(int i=0;i<row;i++)
           {
               vector <ll> store;
               for(int j=0;j<col;j++) { store.push_back(v1[++index]); }
               matrix.push_back(store);
           }
           if(order1==2) { sort_numbers_row_wise_assending(matrix); }
           if(order1==3) { sort_numbers_row_wise_descending(matrix); }
           if(order2==2) { sort_numbers_column_wise_assending(matrix); }
           if(order2==3) { sort_numbers_column_wise_descending(matrix); }
           return matrix;
        }

    };


    class Custom_data_type:public Matrix
    {
    private:
        short index_of_numbers=-1;
        short index_of_generated_numbers=-1;
        short index_of_generated_strings=-1;
        vector <vector <ll>> store_number_data;
        vector <vector <ll>> generated_numbers;
        vector <vector <string>> generated_strings;
    public:
        // function type-> used by user data_type object, can be accessed outside the class by its object
        void reset_custom_data()
        {
            index_of_generated_numbers=-1;
            index_of_generated_strings=-1;
            generated_numbers.clear();
            generated_strings.clear();
        }
        short store_details_of_numbers_custom(short type,ll min_value,ll max_value,short order)
        {
            vector <ll> v1;  v1.push_back(1);  v1.push_back(type);  v1.push_back(min_value);  v1.push_back(max_value);  v1.push_back(order);
            store_number_data.push_back(v1);  return (++index_of_numbers);
        }
        short store_details_of_real_custom(short precision,ll min_value,ll max_value,short order)
        {
            vector <ll> v1;  v1.push_back(2);  v1.push_back(precision);  v1.push_back(min_value);  v1.push_back(max_value);  v1.push_back(order);
            store_number_data.push_back(v1);  return (++index_of_numbers);
        }
        short store_details_of_default_string_custom(short index)
        {
            vector <ll> v1;  v1.push_back(3);  v1.push_back(1);  v1.push_back(index);
            store_number_data.push_back(v1);  return (++index_of_numbers);
        }
        short store_details_of_input_string_custom(short index,short order)
        {
            vector <ll> v1;  v1.push_back(3);  v1.push_back(2);  v1.push_back(index);  v1.push_back(order);
            store_number_data.push_back(v1);  return (++index_of_numbers);
        }
        short store_details_of_permutation_string_custom(short index,short order)
        {
            vector <ll> v1;  v1.push_back(4);  v1.push_back(index);  v1.push_back(order);
            store_number_data.push_back(v1);  return (++index_of_numbers);
        }
        short store_details_of_unique_numbers_custom(ll min_val,ll max_val,short order)
        {
            vector <ll> v1;  v1.push_back(5);  v1.push_back(min_val);  v1.push_back(max_val);  v1.push_back(order);
            store_number_data.push_back(v1);  return (++index_of_numbers);
        }
        short store_space_in_custom()
        {
            vector <ll> v1;  v1.push_back(6);
            store_number_data.push_back(v1);  return (++index_of_numbers);
        }
        void traverse_custom() // just to check if build properly
        {
            for(int i=0;i<store_number_data.size();i++)
            { for(int j=0;j<store_number_data[i].size();j++) { cout<<store_number_data[i][j]<<" ";  } cout<<"\n"; }
        }
        vector <pair <short,short>> build_custom_data_type(vector <ll> v1)
        {
            vector <pair<short,short>> custom_data;
            int sizee=v1[2];   if(sizee<0) { sizee=get_initializer(sizee); }
            for(short i=3;i<v1.size();i++)
            {
                vector <ll> v2=store_number_data[v1[i]];
                short ch=v2[0];
                switch(ch)
                {
                case 1:
                    {
                        vector <ll> store=get_integer(v2[1],v2[2],v2[3],sizee,v2[4]);  generated_numbers.push_back(store);
                        custom_data.push_back(make_pair(1,++index_of_generated_numbers));  break;
                    }
                case 2:
                    {
                        vector <string> store=get_real(v2[1],v2[2],v2[3],sizee,v2[4]);  generated_strings.push_back(store);
                        custom_data.push_back(make_pair(2,++index_of_generated_strings));  break;
                    }
                case 3:
                    {
                        short choice=v2[1];
                        switch(choice)
                        {
                        case 1:
                            {
                                string str=get_default_string(v2[2]);  vector <string> store(sizee,str);
                                generated_strings.push_back(store);  custom_data.push_back(make_pair(2,++index_of_generated_strings));  break;
                            }
                        case 2:
                            {
                                vector <string> store=get_input_string_array(v2[2],sizee,v2[3]);  generated_strings.push_back(store);
                                custom_data.push_back(make_pair(2,++index_of_generated_strings));  break;
                            }
                        }
                        break;
                    }
                case 4:
                    {
                        vector <string> store=get_all_permutations(v2[1],sizee,v2[2]);   generated_strings.push_back(store);
                        custom_data.push_back(make_pair(2,++index_of_generated_strings));  break;
                    }
                case 5:
                    {
                        vector <ll>store=get_all_random_numbers_for_array(v2[1],v2[2],sizee,v2[3]);  generated_numbers.push_back(store);
                        custom_data.push_back(make_pair(1,++index_of_generated_numbers));  break;
                    }
                case 6:
                    {
                        custom_data.push_back(make_pair(3,3));  break;
                    }
                }
            }
            return custom_data;
        }
         ll get_integer_data_of_custom(int index1,int index2)
        {
            return (generated_numbers[index1][index2]);
        }
        string get_string_data_of_custom(int index1,int index2)
        {
            return (generated_strings[index1][index2]);
        }
    };


    class Tree:public Custom_data_type
    {
    private:
        // function type-> within class use functions
        short get_choice(bool check)
        {
            if(check==false) { return (rand()%3); }
            if(check==true) { return ((rand()%2)+1); }
        }
    public:
        // function type-> used by user data_type object, can be accessed
        vector <pair<ll,ll>> get_binary_rooted_tree(int nodes,ll low,ll up)
        {
            int start=-1;
            vector <pair<ll,ll>> tree;
            vector <ll> v1=get_all_random_numbers(low,up,nodes);
            if(nodes==1) { tree.push_back(make_pair(v1[start],v1[++start])); return tree; }
            deque <pair<ll,short>> dq;
            dq.push_front(make_pair(v1[++start],2));  // root node inserted
            int countt=1;
            while(true)
            {
                if(countt==nodes) break;
                short choice;
                if(dq.size()==1)  { choice=get_choice(1); }  // case when only one unvisited node is left (add 1 or 2 nodes)
                else  { choice=get_choice(0); }              // case when more then one unvisited nodes are left (add 0 or 1 or 2 nodes)
                switch (choice)
                {
                case 0:  // add 0 node
                    {
                        dq.push_front(dq.back());   dq.pop_back(); break;
                    }
                case 1:  // add 1 node
                    {
                        tree.push_back(make_pair(dq.back().first,v1[++start])); countt++;
                        if(countt==nodes) break;
                        dq.push_front(make_pair(v1[start],2));
                        if(dq.back().second==1) { dq.pop_back(); break; }
                        dq.back().second--;
                        dq.push_front(dq.back());   dq.pop_back(); break;
                    }
                case 2:  // add 2 nodes
                    {
                        tree.push_back(make_pair(dq.back().first,v1[++start])); countt++;
                        if(countt==nodes) break;
                        dq.push_front(make_pair(v1[start],2));
                        if(dq.back().second==1) { dq.pop_back(); break; }
                        tree.push_back(make_pair(dq.back().first,v1[++start])); countt++;
                        if(countt==nodes) break;
                        dq.pop_back(); break;
                    }
                 }
            }
            dq.clear();
            return tree;
        }
        //******************************************************************************************************************************
        vector <pair<ll,ll>> get_full_binary_tree(int nodes,ll low,ll up)  // nodes have to be odd in number
        {
            int start=-1;
            vector <pair<ll,ll>> tree;
            vector <ll> v1=get_all_random_numbers(low,up,nodes);
            if(nodes==1) { tree.push_back(make_pair(v1[start],v1[++start])); return tree; }
            deque <pair<ll,short>> dq;
            dq.push_front(make_pair(v1[++start],2));  // // root node inserted
            int countt=1;
            while(true)
            {
                if(countt==nodes) break;
                short choice;
                if(dq.size()==1)  { choice=2; }             // case when only one unvisited node is left (add 2 nodes)
                else  { choice=get_choice(1); }             // case when more then one unvisited nodes are left (add 0  2 nodes)
                switch (choice)
                {
                case 1:  // skip this node
                    {
                        dq.push_front(dq.back());   dq.pop_back(); break;
                    }
                case 2:  // add two nodes
                    {
                        tree.push_back(make_pair(dq.back().first,v1[++start]));
                        dq.push_front(make_pair(v1[start],2));
                        tree.push_back(make_pair(dq.back().first,v1[++start]));
                        dq.push_front(make_pair(v1[start],2));
                        dq.pop_back(); countt+=2; break;
                    }
                }
            }
            dq.clear();
            return tree;
        }
        //******************************************************************************************************************************
        vector <pair<ll,ll>> get_perfect_binary_tree(int nodes,ll low,ll up)  // nodes have to be in form of (2 to the power x) -1, where x is 0,1,2,3,4,5....
        {
            int start=-1;
            vector <pair<ll,ll>> tree;
            vector <ll> v1=get_all_random_numbers(low,up,nodes);
            if(nodes==1) { tree.push_back(make_pair(v1[start],v1[++start])); return tree; }
            deque <pair<ll,short>> dq;
            dq.push_front(make_pair(v1[++start],2));  // root node inserted
            int countt=1;
            while(true)
            {
                if(countt==nodes) break;
                tree.push_back(make_pair(dq.back().first,v1[++start]));
                dq.push_front(make_pair(v1[start],2));
                tree.push_back(make_pair(dq.back().first,v1[++start]));
                dq.push_front(make_pair(v1[start],2));
                dq.pop_back(); countt+=2;
            }
        }
        //******************************************************************************************************************************
        vector <pair<ll,ll>> get_binary_search_tree(int nodes,ll low,ll up)
        {
            int start=-1;
            vector <pair<ll,ll>> tree;
            vector <ll> v1=get_all_random_numbers(low,up,nodes);
            if(nodes==1) { tree.push_back(make_pair(v1[start],v1[++start])); return tree; }
            deque <tuple<ll,short,bool,bool>> dq;
            dq.push_front(make_tuple(v1[++start],2,false,false));  // root node inserted
            bool status=false;
            int countt=1;
            int new_node;
            while(true)
            {
                if(countt==nodes) break;
                if(status==false) { new_node=v1[++start]; status=true; } // get new node
                if(new_node < get<0>(dq[dq.size()-1]))   // left insertion case
                {
                    if(get<2>(dq[dq.size()-1])==false)  // can add to left
                    {
                        tree.push_back(make_pair(get<0>(dq[dq.size()-1]),new_node));
                        dq.push_front(make_tuple(new_node,2,false,false)); countt++;
                        get<2>(dq[dq.size()-1])=true; get<1>(dq[dq.size()-1])--;
                        if(get<1>(dq[dq.size()-1])==0) { dq.pop_back(); }
                        status=false;
                    }
                    else              // no space in left
                    {
                        dq.push_front(dq.back()); dq.pop_back();
                    }
                }
                else                     // right insertion case
                {
                    if(get<3>(dq[dq.size()-1])==false)  // can add to right
                    {
                        tree.push_back(make_pair(get<0>(dq[dq.size()-1]),new_node));
                        dq.push_front(make_tuple(new_node,2,false,false)); countt++;
                        get<3>(dq[dq.size()-1])=true; get<1>(dq[dq.size()-1])--;
                        if(get<1>(dq[dq.size()-1])==0) { dq.pop_back(); }
                        status=false;
                    }
                    else                  // no space left
                    {
                        dq.push_front(dq.back()); dq.pop_back();
                    }
                }
            }
        }
        //******************************************************************************************************************************
        vector <string> get_permutations_for_tree_edges(string str,ll edges,ll sizee)
        {
            short index=store_string_for_permutation(str);
            if(sizee>edges) sizee=edges;
            vector <string> permutations=get_all_permutations(index,sizee,1);
            if(permutations.size()<edges)
            {
                while(permutations.size()!=edges)
                {
                    permutations.push_back(permutations[rand()%permutations.size()]);
                }
            }
            return permutations;
        }
    };



    class Graph:public Tree      // child of Tree class
    {
    private:
        // type-> within class use functions
        ll get_node_connection(ll connection_left)
        {
            if(connection_left==0) return 0;
            return (((rand()*rand())%connection_left)+1);
        }

        void randomized_nodes(vector <pair<ll,ll>> &graph)
        {
            for(int i1=graph.size()-1;i1>0;i1--)
            {
                swap(graph[i1],graph[(rand()*rand())%(i1+1)]);
            }
        }
    public:
        // type-> used by user data_type object
        vector <pair<ll,ll>> get_undirected_graph(int nodes,int edges,ll low,ll up)
        {
            if(edges<0) { edges=get_initializer(edges); }
            vector <ll> v1=get_all_random_numbers(low,up,nodes);
            int connections=nodes-1;  int start=0;
            vector <vector <bool>> status;
            for(int i=0;i<nodes;i++) { vector <bool> v1(nodes,false); status.push_back(v1); }
            deque <pair <int,int>> dq;
            for(int i=0;i<nodes;i++) { dq.push_back(make_pair(i,connections)); }
            vector <pair <ll,ll>> graph;
            while(true)
            {
                if(start==edges) break;
                int node=dq[0].first; int edges_left=dq[0].second;
                dq.pop_front();
                if(edges_left==0) { continue; }
                int new_edges=get_node_connection(edges_left);
                short c=0; short _break=get_node_connection(5);
                while(new_edges!=0)
                {
                    if(start==edges || c==_break) break;
                    if(dq[0].second==0) { dq.pop_front();continue; }
                    if(status[node][dq[0].first]==true)     // already connected
                    {
                        dq.push_back(dq[0]); dq.pop_front(); continue;
                    }
                    status[node][dq[0].first]=true;  // new connection
                    status[dq[0].first][node]=true;
                    graph.push_back(make_pair(v1[node],v1[dq[0].first]));
                    start++;    c++;    dq[0].second--;    new_edges--;
                    if(dq[0].second==0) { dq.pop_front(); }
                    else { dq.push_back(dq[0]); dq.pop_front(); }
                }
                edges_left-=c;
                if(edges_left==0) { continue; }
                dq.push_back(make_pair(node,edges_left));
            }
            dq.clear(); randomized_nodes(graph);
            return graph;
        }
        //*******************************************************************************
        vector <pair<ll,ll>> get_directed_graph(int nodes,int edges,ll low,ll up)
        {
            if(edges<0) { edges=get_initializer(edges); }
            vector <ll> v1=get_all_random_numbers(low,up,nodes);
            int connections=nodes-1;  int start=0;
            vector <vector <bool>> status;
            for(int i=0;i<nodes;i++) { vector <bool> v1(nodes,false); status.push_back(v1); }
            deque <tuple <int,int,int>> dq;
            for(int i=0;i<nodes;i++) { dq.push_back(make_tuple(i,connections,connections)); }
            vector <pair <ll,ll>> graph;
            while(true)
            {
                if(start==edges) break;
                int node=get<0>(dq[0]);
                int outer_edges=get<1>(dq[0]);
                int inner_edges=get<2>(dq[0]);
                dq.pop_front();
                if((inner_edges+outer_edges)==0) { continue; }  //completely filled node
                ll new_edges=get_node_connection(outer_edges);
                short c=0; short _break=get_node_connection(5);
                while(new_edges!=0)
                {
                    if(start==edges || c==_break) break;
                    if( (get<1>(dq[0])+get<2>(dq[0]) ) == 0) { dq.pop_front();continue; }   //completely filled node
                    if(get<2>(dq[0])==0) { dq.push_back(dq[0]); dq.pop_front(); continue; }  // no inner edges
                    if(status[node][get<0>(dq[0])]==true)      { dq.push_back(dq[0]); dq.pop_front(); continue; }  // already connected
                    status[node][get<0>(dq[0])]=true;  // new connection
                    graph.push_back(make_pair(v1[node],v1[get<0>(dq[0])]));
                    start++;    c++;    get<2>(dq[0])--;    new_edges--;
                    if( (get<1>(dq[0])+get<2>(dq[0]) ) == 0) { dq.pop_front();continue; }   //completely filled node}
                    else { dq.push_back(dq[0]); dq.pop_front(); }
                }
                outer_edges-=c;
                if((inner_edges+outer_edges)==0) { continue; }  //completely filled node
                dq.push_back(make_tuple(node,outer_edges,inner_edges));
            }
            randomized_nodes(graph);
            return graph;
        }
    };


    class Child_of_all_test_case_datatype:public Graph
    {
    public:
        void show()
        {
            cout<<"Working\n";
        }
    };
}

#endif // LAKSHYA_STANDARD_ALGORITHM_OF_TEST_CASES_H_INCLUDED
