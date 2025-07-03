#include <userver/engine/run_standalone.hpp>
#include <userver/server/handlers/http_handler_json_base.hpp>
#include <userver/server/handlers/http_handler_base.hpp>
#include <userver/server/handlers/http_handler_static.hpp>
#include <userver/server/server.hpp>

int main(int argc, char* argv[]) {
    return userver::RunStandalone(argc, argv, [] {
        // TODO: Зарегистрировать хендлеры
    });
}
