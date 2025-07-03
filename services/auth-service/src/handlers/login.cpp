#include <userver/server/handlers/http_handler_json_base.hpp>

class LoginHandler final : public userver::server::handlers::HttpHandlerJsonBase {
public:
    static constexpr std::string_view kName = "login-handler";

    LoginHandler(const userver::server::handlers::ComponentConfig& config,
                 const userver::server::handlers::HandlerConfig& handler_config)
        : HttpHandlerJsonBase(config, handler_config) {}

    userver::server::handlers::HttpResponseJson HandleRequestJsonThrow(
        const userver::server::http::HttpRequest& request,
        const userver::formats::json::Value& json,
        userver::server::request::RequestContext& context) const override {

        // TODO: Реализовать логику логина
        return userver::server::handlers::HttpResponseJson{
            userver::formats::json::MakeObject("status", "ok")};
    }
};
