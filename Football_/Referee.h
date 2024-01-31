//
// Created by Annie on 24.1.2024 г..
//

#ifndef FOOTBALL_REFEREE_H
#define FOOTBALL_REFEREE_H
#include <iostream>
#include <string>
#include "User.h"

using namespace std;

class Referee : public User {

public:

    Referee(string, string, string, string, string, string, string, string, string);

    const string &getDate() const;

    void setDate(const string &date);

    const string &getHour() const;

    void setHour(const string &hour);

    const string &getStadium() const;

    void setStadium(const string &stadium);

    const string &getCity() const;

    void setCity(const string &city);

    const string &getGuestTeam() const;

    void setGuestTeam(const string &guestTeam);

    const string &getMainTeam() const;

    void setMainTeam(const string &mainTeam);

    const string &getReferee() const;

    void setReferee(const string &referee);

private:
    string date;
    string hour;
    string stadium;
    string city;
    string guestTeam;
    string mainTeam;
    string referee;

};


#endif //FOOTBALL_REFEREE_H
