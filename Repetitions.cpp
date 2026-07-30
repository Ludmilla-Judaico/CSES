#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string dna; cin>>dna;
    long long ini=0, fim=1;
    long long maior = 0;
    while(fim>=ini){
        if(fim==dna.size()+1 || ini==dna.size()+1) break;
        if(dna[ini] == dna[fim]) fim++;
        else{
            if(maior < fim-ini) maior = fim-ini;
            ini++;
        } 
    }

    cout << maior << '\n';
    return 0;
}
