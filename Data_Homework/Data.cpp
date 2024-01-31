//
// Created by Annie on 27.1.2024 г..
//

#include "Data.h"

Data::Data(int value) : value(value) {

}

Data Data::operator++() {
    value++;
    return *this;
}

Data Data::operator++(int) {
    Data d(*this);
    value++;
    return d;
}

int Data::getValue() const {
    return this->value;
}
