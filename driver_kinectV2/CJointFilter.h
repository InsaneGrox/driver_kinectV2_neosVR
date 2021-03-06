#pragma once
// Modified joint smoothing code from https://social.msdn.microsoft.com/Forums/en-US/045b058a-ae3a-4d01-beb6-b756631b4b42/joint-smoothing-code?forum=kinectv2sdk

class CJointFilter final
{
    struct FilterData
    {
        glm::vec3 m_rawPosition;
        glm::vec3 m_filteredPosition;
        glm::vec3 m_trend;
        unsigned long m_frameCount;
    };

    float m_smoothing;
    float m_correction;
    float m_prediction;
    float m_jitterRadius;
    float m_maxDeviationRadius;

    FilterData m_history;
    glm::vec3 m_filteredJoint;
public:
    CJointFilter();
    ~CJointFilter();

    void Update(const Joint &f_joint);
    inline const glm::vec3& GetFiltered() const { return m_filteredJoint; }
};
