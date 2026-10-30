class MyCalendarTwo {
public:
    map<int,int> mp;

    MyCalendarTwo() {

    }

    bool book(int start, int end) {
        //diff arary 

        mp[start]++;
        mp[end]--;

        int curr = 0;
//prefix sum
        for(auto &it : mp)
        {
            curr += it.second;
//line sweep condition
            if(curr >= 3)
            {
                mp[start]--;
                mp[end]++;

                if(mp[start] == 0)
                    mp.erase(start);

                if(mp[end] == 0)
                    mp.erase(end);

                return false;
            }
        }

        return true;
    }
};