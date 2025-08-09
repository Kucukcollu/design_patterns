#pragma once

// product
class Odometry
{
    public:
        virtual ~Odometry() = default;

        virtual float getPoseX() = 0;
        virtual float getPoseY() = 0;
        virtual float getPoseZ() = 0;

    private:
        float position_x_=0.0;
        float position_y_=0.0;
        float position_z_=0.0;
    
    friend class LidarOdometry;
    friend class VisualOdometry;
};