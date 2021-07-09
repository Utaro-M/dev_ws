#include "composition/server_component.hpp"

#include <cinttypes>
#include <iostream>
#include <memory>
#include "example_interfaces/src/add_two_ints.hpp"
#include "rclcpp/rclcpp.hpp"

namespace composition
{
  Server::Server(const rclcpp::NodeOptions &options)
    :Node("Server",options)
  {
    
