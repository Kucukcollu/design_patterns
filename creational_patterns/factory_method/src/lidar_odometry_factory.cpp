#include "lidar_odometry.hpp"
#include "lidar_odometry_factory.hpp"

std::unique_ptr<Odometry> LidarOdometryFactory::createOdometry()
{
    return std::make_unique<LidarOdometry>();
}