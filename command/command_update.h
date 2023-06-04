#ifndef MAIN_CPP_COMMAND_UPDATE_H
#define MAIN_CPP_COMMAND_UPDATE_H

#include <iostream>
#include "command.h"
#include "./kursach_puk_puk/logger_singleton.h"

class command_update_data final : public command<std::string>
{
private:
    std::string _pool_name;
    std::string _scheme_name;
    std::string _collection_name;
public:
    bool can_execute(std::string const &request) const noexcept final
    {
        logger_singleton::get_instance()->get_logger()->log("command_update_data::can_execute(std::string const &request) called", logger::severity::trace);
        return false;
    }

    void execute(std::string const &request) const noexcept final
    {
        logger_singleton::get_instance()->get_logger()->log("command_update_data::execute(std::string const &request) called", logger::severity::trace);
    }
};


#endif //MAIN_CPP_COMMAND_UPDATE_H
