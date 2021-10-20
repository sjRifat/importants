/**
 * Definition of Interval:
 * classs Interval {
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param intervals: an array of meeting time intervals
     * @return: if a person could attend all meetings
     */
    bool canAttendMeetings(vector<Interval> &intervals) {
        sort(intervals.begin(), intervals.end(), [&](Interval a, Interval b) {
            return a.start == b.start ? a.end < b.end : a.start < b.start;
        });
        int i,n=intervals.size();
        for(i=1;i<n;i++){
            if(intervals[i-1].end>intervals[i].start) return false;
        }
        return true;
    }
};
