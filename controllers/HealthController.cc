#include "HealthController.h"

void HealthController::asyncHandleHttpRequest(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback)
{
    Json::Value ret;
    ret["status"] = "UP";
    auto resp=HttpResponse::newHttpJsonResponse(ret);
    resp->setStatusCode(k200OK);
    resp->setContentTypeCode(drogon::CT_APPLICATION_JSON);
    callback(resp);
}
