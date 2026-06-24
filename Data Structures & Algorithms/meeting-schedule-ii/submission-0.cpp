class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {

        int n = intervals.size();
        vector<int> start(n), end(n);

        for(int i = 0; i < n; i++) {
            start[i] = intervals[i].start;
            end[i] = intervals[i].end;
        }

        sort(start.begin(), start.end());
        sort(end.begin(), end.end());

        int rooms = 0, res = 0;
        int s = 0, e = 0;

        while(s < n) {
            if(start[s] < end[e]) {
                rooms++;
                res = max(res, rooms);
                s++;
            } else {
                rooms--;
                e++;
            }
        }

        return res;
    }
};