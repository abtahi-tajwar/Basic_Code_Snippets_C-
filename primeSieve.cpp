Skip to content

 
  
Pull requests 
Issues 
Marketplace 
Explore 


 
 
 



 Watch 
1 
 Star 
3 
 Fork 
2 

raihan02/My_Profile- 
 Code 
 Issues 0 
 Pull requests 0 
 Actions 
 Projects 0 
 Wiki 
 Security 
 Insights 
Branch: master 
My_Profile-/Sieve.cpp 
Find file 
Copy path 
 raihan02 Create Sieve.cpp 
85aa556 on Nov 14 2016 
1 contributor 
35 lines (30 sloc) 590 Bytes 
Raw
Blame
History
   

#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int prime[3000000] , nPrime;

int mark[10000002];

void sieve(int n)

{

    int i , j , limit = sqrt(n * 1.) + 2;

    mark[1] = 1;

    for(int i = 4; i <= n; i += 2)

        mark[i] = 1;

    prime[nPrime++] = 2;



    for(i = 3; i <= n; i++)

    {

        if(!mark[i])

        {

            prime[nPrime++] = i;

            if(i <= limit)

            {

                for(j = i * i; j <= n; j+= i * 2)

                {

                    mark[j] = 1;

                }

            }

        }

    }

}

int main()

{







}

© 2019 GitHub, Inc.
Terms
Privacy
Security
Status
Help
 
Contact GitHub
Pricing
API
Training
Blog
About

