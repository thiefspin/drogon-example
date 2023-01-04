#pragma once

#include <drogon/HttpSimpleController.h>
#include <string>

using namespace drogon;
using namespace std;

class User {
public:
    int id;
    string name;
    string surname;

    User(int userId) {
        id = userId;
        name = "User_" + to_string(userId);
        surname = "UserSurname_" + to_string(userId);
    }

public:
    Json::Value toJson() {
        Json::Value json;
        json["id"] = id;
        json["name"] = name;
        json["surname"] = surname;
        return json;
    }
};

class UserController : public drogon::HttpSimpleController<UserController> {
public:
    void
    asyncHandleHttpRequest(const HttpRequestPtr &req, std::function<void(const HttpResponsePtr &)> &&callback) override;

    PATH_LIST_BEGIN
        PATH_ADD("/api/users", Get, Post);
    PATH_LIST_END
};
