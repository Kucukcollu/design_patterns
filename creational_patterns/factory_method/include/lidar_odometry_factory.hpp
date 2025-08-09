#include "odometry_factory.hpp"

class LidarOdometryFactory : public OdometryFactory
{
    public:
        std::unique_ptr<Odometry> createOdometry() override;
};