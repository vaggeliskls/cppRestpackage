
#include <sqlpp11/select.h>
#include <sqlpp11/postgresql/connection.h>
#include <sqlpp11/postgresql/connection_config.h>


//#include "crow_all.h"

#include <iostream>


// void initiate_Crow(){
//     crow::SimpleApp app;

//     CROW_ROUTE(app, "/")([](){
//         return "Hello world";
//     });


//     CROW_ROUTE(app, "/json")
//     ([]{
//         crow::json::wvalue x;
//         x["message"] = "Hello, World!";
//         return x;
//     });

//     CROW_ROUTE(app, "/execute")
//     .methods("POST"_method)
//     ([](const crow::request& req){
//         auto x = crow::json::load(req.body);
//         if (!x)
//             return crow::response(400);
            
//         int sum = x["a"].i()+x["b"].i();
        
//         crow::json::wvalue res;
//         res["status"] = 200;
//         res["message"] = sum;
//         return crow::response{res};
//     });

//     app.port(18080).multithreaded().run();
// }

int main()
{

    
         
        try
        {
            auto config = std::make_shared<sqlpp::postgresql::connection_config>();
            config->host = "127.0.0.1";
            config->user = "someuser";
            config->password = "some-random-password";
            config->dbname = "somedb";

            sqlpp::postgresql::connection db(config);
        }
        catch (const std::exception& ex)
        {
            std::cout << "Got exception: '" << ex.what() << "'";
            return 0;
        }
    //initiate_Crow();
}