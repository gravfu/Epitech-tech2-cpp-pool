
#include <iostream>
#include <stdexcept>
#include "Errors.hpp"
#include "CommunicationDevice.hpp"

CommunicationDevice::CommunicationDevice(std::istream &input,
                                         std::ostream &output)  
try : _api(input, output)
{
}
catch(const std::exception& e)
{
    std::string tmp = "Error: ";
    throw CommunicationError(tmp + e.what());
}

CommunicationDevice::~CommunicationDevice()
{
    
}

void
CommunicationDevice::startMission(std::string const &missionName,
                                  std::string *users,
                                  size_t nbUsers)
{
    try {
        for (size_t i = 0; i < nbUsers; ++i)
            _api.addUser(users[i]);
        _api.startMission(missionName);
    } catch (const std::logic_error& e){
        std::string tmp1 = "LogicError: ";
        throw CommunicationError(tmp1 + e.what());
    } catch (const std::runtime_error& e) {
        std::string tmp2 = "RuntimeError: ";
        throw CommunicationError(tmp2 + e.what());
    } catch (const std::exception& e) {
        std::string tmp3 = "Error: ";
        throw CommunicationError(tmp3 + e.what());
    }
}

void
CommunicationDevice::send(std::string const &user,
                          std::string const &message) const
{
    try
    {
        _api.sendMessage(user, message);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

#include <cstring>

void
CommunicationDevice::receive(std::string const &user,
                             std::string &message) const
{
    try
    {
        _api.receiveMessage(user, message);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cerr << "INVALID MESSAGE";
    }
}
