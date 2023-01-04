#include "UserController.h"

void UserController::asyncHandleHttpRequest(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback)
{
    Json::Value ret;
//    ret["status"] = "UP";
    for (int i = 0; i < 4; ++i) {
        User user(i + 1);
        ret.append(user.toJson());
    }
    auto resp=HttpResponse::newHttpJsonResponse(ret);
    resp->setStatusCode(k200OK);
    resp->setContentTypeCode(drogon::CT_APPLICATION_JSON);
    callback(resp);
}
