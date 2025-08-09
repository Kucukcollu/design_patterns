#include <iostream>
#include <memory>
#include <string>

#include "odometry.hpp"
#include "lidar_odometry.hpp"
#include "visual_odometry.hpp"

#include "odometry_factory.hpp"
#include "lidar_odometry_factory.hpp"
#include "visual_odometry_factory.hpp"

int main(int argc, char **argv)
{
    if (argc < 1)
    {
        std::cerr << "Usage: ./program <odom_type>\n";
        return 1;
    }

    std::string odom_type = argv[1];  // Convert to std::string

    std::unique_ptr<OdometryFactory> odom_factory_;

    if(odom_type == "lidar")
    {
        odom_factory_ = std::make_unique<LidarOdometryFactory>();
    }
    else if (odom_type == "visual")
    {
        odom_factory_ = std::make_unique<VisualOdometryFactory>();
    }
    else
    {
        std::cerr << "Undefined type of odometry!" << std::endl;
        return 1;
    }

    auto odom = odom_factory_->createOdometry();
    
    std::cout << "Odometry ===> X: " << odom->getPoseX() << " Y: " << odom->getPoseY() << " Z: " << odom->getPoseZ() << std::endl;

    return 0;
}