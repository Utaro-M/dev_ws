#include <memory>

// #include "composition/client_component.cpp"
#include "composition/talker_component.hpp"
#include "composition/listener_component.hpp"
#include "rclcpp/rclcpp.hpp"

int main(int argc, char * argv[])
{
  setvbuf(stdout,NULL,_IONBF,BUFSIZ);
  rclcpp::init(argc,argv);

  rclcpp::executors::SingleThreadedExecutor exec;
  rclcpp::NodeOptions options;

  auto talker = std::make_shared<composition::Talker>(options);
  exec.add_node(talker);
  auto listener = std::make_shared<composition::Listener>(options);
  exec.add_node(listener);

  exec.spin();
  rclcpp::shutdown();

  return 0;
}
