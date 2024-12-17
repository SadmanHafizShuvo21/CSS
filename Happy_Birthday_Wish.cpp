#include<bits/stdc++.h>

void solve(){
    // Generating random number
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1, 100); // Between 1 to 100
    int rendom = dist(gen);

    std::cout<<"Enter you name: "<< std::flush;
    std::string name;
    std::cin>>name;
    
    std::cout<<rendom<<"\n";

    int i=0;
    while(i<rendom){
        std::cout<<"Happy Birthday to you, "<<name<<"\n";
        i++;
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}