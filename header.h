#define home_x 0
#define home_y 0

class RoboticArm
{
    public:
        int waypoint_x,waypoint_y;

    RoboticArm(int waypoint_xx,int waypoint_yy)
    {
        waypoint_x = waypoint_xx;
        waypoint_y = waypoint_yy;
    };

    virtual void gotopoint(int x,int y);
    float distance(int x,int y);
    bool finishedProcess(int x,int y);
};

float RoboticArm::distance(int x,int y)
{
    return x + y + home_x + home_y;
}

bool RoboticArm::finishedProcess(int x,int y)
{
    return true;
}

