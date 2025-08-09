#include "lidar_odometry.hpp"

LidarOdometry::LidarOdometry()
{
    position_x_ = 3.3;
    position_y_ = 2.2;
    position_z_ = 4.5;
}

float LidarOdometry::getPoseX()
{
    return position_x_;
}

float LidarOdometry::getPoseY()
{
    return position_y_;
}

float LidarOdometry::getPoseZ()
{
    return position_z_;
}