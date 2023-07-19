#include<iostream>
#include<string>
#include<stack>
using namespace std;

struct webPage
{
    string url;
    string title;
};

stack<webPage> mystack;

void new_page(string url, string title){
    webPage page_n;
    page_n.title = title;
    page_n.url = url;
    mystack.push(page_n);
}

void view_page(){
    if (!mystack.empty())
    {
        cout << mystack.top().title << endl;
        cout << mystack.top().url << endl;
        cout<<"----------------------------------"<<endl;    
        }
    else
    {
        cout << "NO Browser History Select option 2\n"<< endl;
        cout << "----------------------------------" << endl;
    }
}

int main(){

int choice;
while(choice !=4){
    cout<<"Select 1: to view the page\nSelect 2: to move forward\nSelect 3: to move backward\nSelect 4: to exit\n"<<endl;

    cin>>choice;

    if(choice==1){
        view_page();
    }
    else if (choice==2){
        string url; string title;
        cout<<"Enter Page url you want to vist: "<<endl;
        cin>>url;
        cout<<"Enter Page title: "<<endl;
        cin>>title;
        cout<<"----------------------------------"<<endl;
        new_page(url, title);

    }
    else if(choice == 3){
        if(mystack.empty()){
            cout<<"No Browser History go to second option\n"<<endl;
            cout << "----------------------------------" << endl;
        }
        else{
            mystack.pop();
        }
    }
    else if(choice >4 || choice<1)
    cout<<"Invalid choice"<<endl;

}
    return 0;
}