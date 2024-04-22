#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Activity {
    int start, finish;
};

bool compareActivities(const Activity& a, const Activity& b) {
    return a.finish < b.finish;
}

int activitySelection(vector<Activity>& activities) {

    sort(activities.begin(), activities.end(), compareActivities);
    
    int n = activities.size();
    int selected = 1; 
    int last_finish_time = activities[0].finish;
    
    for (int i = 1; i < n; ++i) {
        if (activities[i].start > last_finish_time) {
            selected++;
            last_finish_time = activities[i].finish;
        }
    }
    
    return selected;
}

int main() {
    int n; cin>>n;
    vector<Activity> activities;
    for(int i=0; i<n; i++){
        int start, end;
        cin>>start>>end;
        activities.push_back({start, end});
    }

    cout << "Maximum number of activities: " << activitySelection(activities) << endl;

    return 0;
}
