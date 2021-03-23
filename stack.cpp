#include <bits/stdc++.h>

using namespace std;

int main() {

    int duration;
    int num_of_intersections;
    int num_of_streets;
    int num_of_cars;
    int bonos_pts;

    cin >> duration;
    cin >> num_of_intersections;
    cin >> num_of_streets;
    cin >> num_of_cars;
    cin >> bonos_pts;

    vector<string>street_discp_name;
    
    int start;
    int end;
    string street_discp;
    int time_taken;

    for(int i = 0; i < num_of_streets; i++)
    {
        cin >> start;
        cin >> end;
        cin >> street_discp;
        street_discp_name[i] = street_discp;
        cin >> time_taken;

    }

    int P; //- the number of streets that the car wants to travel
    for(int i = 0; i < num_of_cars; i++)
    {
     cin >> P;
     vector<string>street_names;
     string names;
     for(int j = 0; j < P; j++)
     {
         cin >> names;
         street_names[i] = names;
     }    
    }






    
    return 0;
}