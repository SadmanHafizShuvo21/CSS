#include<bits/stdc++.h>

void solve(){
    // Generating random number
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1, 100); // Between 1 to 100
    int random = dist(gen);

    std::cout<<"Enter you name: "<< std::flush;
    std::string name;
    std::getline(std::cin, name);
    
    std::cout<<"The numbers of time Shuvo will wish "<<name<<" is "<<random<<"\n";

    int i=0;
    while(i<random){
        std::cout<<"Happy Birthday to you, "<<name<<"\n";
        i++;
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}