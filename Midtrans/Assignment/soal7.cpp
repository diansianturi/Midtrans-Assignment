#include<bits/stdc++.h>

using namespace std;

vector<string> kata;

void add(string input){
    kata.push_back(input);
}

int find(string input){
    int jmlh = 0;
    bool cek;
    for(int i=0; i<kata.size(); i++){
        string temp = kata[i];
        cek = true;
        for(int j=0; j<input.length(); j++){
            if(input[j]!=temp[j]){
                cek = false;
                break;
            }
        }
        if(cek){
            jmlh++;
        }
    }
    return jmlh;
}

int main(){
    int angka;
    string operation, input;
    cin>>angka;
    while(angka--){
        cin>>operation>>input;
        if(operation=="add"){
            add(input);
        }else{
            int jmlh = find(input);
            cout<<jmlh<<" # because there are "<<jmlh<<" names started with "<<"'"<<input<<"'"<<endl;
        }
    }
    return 0;
}
