#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

void printList(list<string> s){
    list<string>::iterator i;
    for( i = s.begin(); i != s.end(); i++){
        cout << *i << " ";
    }		
    cout << "\n";	
}

int main(){
    
    list<string> line_up;
    list<string>::iterator loc;
    
    line_up.push_back("Alice");
    line_up.push_back("Bob");
    
    loc = find(line_up.begin(),line_up.end(),"Bob");
    line_up.insert(loc,"Oscar");
    
    //Write your code here
    line_up.push_back("Luffy");
    loc = find(line_up.begin(),line_up.end(),"Alice");
    
    // Remove all existing names
    line_up.clear();
    
    // Add the desired names
    line_up.push_back("NarutU");
    line_up.push_back("Sanji");
    line_up.push_back("Nami");
    
    printList(line_up);
        
    return 0;
}