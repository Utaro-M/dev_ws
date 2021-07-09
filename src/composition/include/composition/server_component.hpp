#ifndef COMPOSITION__SERVER_COMPONEMT_HPP_
#define COMPOSITION__SERVER_COMPONEMT_HPP_

#include "composition/visibility_control.h"
#include "example_interfaces/srv/add_two_ints.hpp"
#include "rclcpp/rclcpp.hpp"

namespace composition
{
  class Server : public rclcpp::Node
  {
  public:
    COMPOSITION_PUBLIC
    explicit Server(const rclcpp::NodeOptions &options);
  privete:
    rclcpp::Service<example_interfaces::sev::AddTwoInts>::SharedPtr srv_;
  };
}
#endif
