//
// Created by Annie on 27.1.2024 г..
//

#ifndef DATA_HOMEWORK_DATA_H
#define DATA_HOMEWORK_DATA_H


class Data {

public:

    Data(int);

    Data operator++();  //prefix

    Data operator++(int);   //postfix

    int getValue() const;

private:

    int value;

};


#endif //DATA_HOMEWORK_DATA_H
