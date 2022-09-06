
#ifndef SERVER_1_WEBFILESERVER_H
#define SERVER_1_WEBFILESERVER_H

#include "FileResource.h"

//------------------------------------------------------------------------------

inline void resource_access_log(const std::string&);

inline void resource_error_log(const std::string&);

//------------------------------------------------------------------------------

class WebFileServer {
private:
    httpserver::webserver ws_;
    FileResource file_resources_;
public:
    WebFileServer() = delete;
    WebFileServer(const unsigned short, const std::string&, const std::string&);
};

//------------------------------------------------------------------------------


#endif //SERVER_1_WEBFILESERVER_H
