#include "paramchecker.h"
#include <gtest/gtest.h>
 
TEST(VitalsTest, BPM) { 
    std::vector<float> vitalList;
    vitalList.push_back(100);
    vitalList.push_back(100);
    vitalList.push_back(50);
    ASSERT_EQ(true, vitalsAreOk(100, 100, 50));
}
 
TEST(VitalsTest, SPO2) {
    std::vector<float> vitalList;
    vitalList.push_back(100);
    vitalList.push_back(40);
    vitalList.push_back(50);
    ASSERT_EQ(false, vitalsAreOk(vitalList));
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
