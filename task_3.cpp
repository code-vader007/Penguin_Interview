#include<stdio.h>
#include<iostream>
#include<vector>
#include<string>


using namespace std;

class Course_Schedule
{
    private:
    vector<string> teachers;
    vector<string> classes;
    vector<vector<int>> routine;
    
    public:
    Course_Schedule():
        teachers({"John Smith", "Lara Gilbert", "Johanna Kabir", "Danniel Robertson", "Larry Cooper"}),
        classes({"English Grammar", "Mathematics", "Physics", "Chemistry", "Biology"}),
        routine(4,vector<int> (3,-1)){};
     
    void set_routine(){
        for(int i=0;i<4;i++){
            int day,times,course;
            cin>>day>>times>>course;
            routine[i][0]=day;
            routine[i][1]=times;
            routine[i][2]=course;
            cout<<i<<endl;
        }
        return;
    
    }
    
    void get_routine(){
        if(routine[0][0]==-1){
            cout<<"Routine not set previously"<<endl;
            return;
        }
        else{
            for(int i = 0;i<4;i++){
                for(int j=0;j<5;j++){
                    if(j==routine[i][2]){
                        cout<<routine[i][0]<<" "<<routine[i][1]<<" "<<classes[j]<<endl; 
                    }
                }
            }
        }
        return;
    }
    void print_list(){
        for(int i=0;i<5;i++){
            cout<<i+1<<". "<<classes[i]<<endl;
        }
    
    return;
    }

};

int main(){
    
    Course_Schedule schedule;
    bool cont=true;
    while(cont){
    string ans;
    cout<<"A. Create Routine"<<endl;
    cout<<"B. Display routine"<<endl;
    cout<<"C. Print list with course"<<endl;
    cin>>ans;
    if(ans=="C"){
        schedule.print_list();
    }
    else if(ans=="B"){
        schedule.get_routine();
    }
    else if(ans=="A"){
        schedule.set_routine();
    }
    else{
        cout<<"Choose one of the options"<<endl;
        cont=false; 
    }
    }
    return 0;
}
