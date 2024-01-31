//
// Created by Annie on 24.1.2024 г..
//

#include "Referee.h"

const string &Referee::getDate() const {
    return date;
}

void Referee::setDate(const string &date) {
    Referee::date = date;
}

const string &Referee::getHour() const {
    return hour;
}

void Referee::setHour(const string &hour) {
    Referee::hour = hour;
}

const string &Referee::getStadium() const {
    return stadium;
}

void Referee::setStadium(const string &stadium) {
    Referee::stadium = stadium;
}

const string &Referee::getCity() const {
    return city;
}

void Referee::setCity(const string &city) {
    Referee::city = city;
}

const string &Referee::getGuestTeam() const {
    return guestTeam;
}

void Referee::setGuestTeam(const string &guestTeam) {
    Referee::guestTeam = guestTeam;
}

const string &Referee::getMainTeam() const {
    return mainTeam;
}

void Referee::setMainTeam(const string &mainTeam) {
    Referee::mainTeam = mainTeam;
}

const string &Referee::getReferee() const {
    return referee;
}

void Referee::setReferee(const string &referee) {
    Referee::referee = referee;
}

Referee::Referee(string name, string password, string date, string hour, string stadium, string city,
                 string guestTeam, string mainTeam, string referee) : User(name, password) {
    setDate(date);
    setHour(hour);
    setStadium(stadium);
    setCity(city);
    setGuestTeam(guestTeam);
    setMainTeam(mainTeam);
    setReferee(referee);
}