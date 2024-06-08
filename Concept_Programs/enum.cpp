#include<iostream>
#include<stdlib.h>

enum class UserPermission {
    Unknown,
    Connected,
    Disconnected
};

int main() {
    UserPermission s1 =  UserPermission::Connected;
    UserPermission s2variable = UserPermission::Unknown;
}
