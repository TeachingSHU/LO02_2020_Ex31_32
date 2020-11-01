//
// Created by lunde on 2020/11/1.
//

#ifndef LO02_2020_EX31_TIMING_H
#define LO02_2020_EX31_TIMING_H
#include<string>
#include<cstring>
#include<iostream>


using  namespace  std;

namespace TIME
{
    class Date
    {
    public:
        int year, month, day;
        Date(int y, int m, int d): year(y), month(m), day(d){ }

        string toString() const
        {
            return std::to_string(year)
                   + " "
                   + std::to_string(month)
                   + " "
                   + std::to_string(day);
        }
    };

    inline bool operator<(const Date& d1, const Date& d2) {
        if(d1.year < d2.year) return true;
        if(d1.month < d2.month) return true;
        if(d1.day < d2.day) return true;
        return false;
    }




    class Duree
    {
    public:
        int duree;
        Duree(int d): duree(d){
        }

        string toString() const
        {
            return std::to_string(duree);
        }

    };

    class Horaire
    {
    public:
        int hour, minute;
        Horaire(int h, int m):hour(h), minute(m){
        }

        string toString() const
        {
            return std::to_string(hour)
                   + " "
                   + std::to_string(minute);
        }
    };

    inline bool operator<(const Horaire& d1, const Horaire& d2) {
        if(d1.hour < d2.hour) return true;
        if(d1.minute < d2.minute) return true;
        return false;
    }


    inline std::ostream & operator<<(std::ostream & F, const Date & d) {
        string s = std::to_string(d.year)
                   + "/"
                   + std::to_string(d.month)
                   + "/"
                   + std::to_string(d.day);
        F << s;
        return F;
    }

    inline std::ostream & operator<<(std::ostream & F, const Duree & d) {
        string s = std::to_string(d.duree) + " minutes";
        F << s;
        return F;
    }

    inline std::ostream & operator<<(std::ostream & F, const Horaire & h) {
        string s = std::to_string(h.hour)
                   + ":"
                   + std::to_string(h.minute);
        F << s;
        return F;
    }
}
#endif //LO02_2020_EX31_TIMING_H
