#include "../battleActions.h"
#include "gtest/gtest.h"


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}


//end on Pos Health with pos defense
TEST(battleActionsDefenseTest, posDefensePosHealthPosDmg){
    battleActions item;
    PlayerCharacterStub* charles = new PlayerCharacterStub(5, 1, 0); //attack, defense, weapon

    item.defend(charles, 5);

    EXPECT_EQ(charles->getHealth(), 1);
}

TEST(battleActionsDefenseTest, posDefensePosHealthNegDmg){
    battleActions item;
    PlayerCharacterStub* charles = new PlayerCharacterStub(5, 1, 0);

    item.defend(charles, -5);

    EXPECT_EQ(charles->getHealth(), 1);
}


//end on neg health with pos defense
TEST(battleActionsDefenseTest, posDefenseNegHealthPosDmg){
    battleActions item;
    PlayerCharacterStub* charles = new PlayerCharacterStub(5, 1, 0);

    item.defend(charles, 11);

    EXPECT_EQ(charles->getHealth(), -5);
}

TEST(battleActionsDefenseTest, posDefenseNegHealthNegDmg){
    battleActions item;
    PlayerCharacterStub* charles = new PlayerCharacterStub(5, 1, 0);

    item.defend(charles, -11);

    EXPECT_EQ(charles->getHealth(), -5);
}

//end on pos health with neg defense
TEST(battleActionsDefenseTest, negDefensePosHealthPosDmg){
    battleActions item;
    PlayerCharacterStub* charles = new PlayerCharacterStub(5, -1, 0);

    item.defend(charles, 2);

    EXPECT_EQ(charles->getHealth(), 2);
}

TEST(battleActionsDefenseTest, negDefensePosHealthNegDmg){
    battleActions item;
    PlayerCharacterStub* charles = new PlayerCharacterStub(5, -1, 0);

    item.defend(charles, -2);

    EXPECT_EQ(charles->getHealth(), 2);
}

//end on neg health with neg defense
TEST(battleActionsDefenseTest, negDefenseNegHealthPosDmg){
    battleActions item;
    PlayerCharacterStub* charles = new PlayerCharacterStub(5, -5, 0);

    item.defend(charles, 10);

    EXPECT_EQ(charles->getHealth(), -10);
}

TEST(battleActionsDefenseTest, negDefenseNegHealthNegDmg){
    battleActions item;
    PlayerCharacterStub* charles = new PlayerCharacterStub(5, -5, 0);

    item.defend(charles, -10);

    EXPECT_EQ(charles->getHealth(), -10);
}

//ZeroDefense
TEST(battleActionsDefenseTest, zeroDefensePosDmg){
    battleActions item;
    PlayerCharacterStub* charles = new PlayerCharacterStub(5, 0, 0);

    item.defend(charles, 1);

    EXPECT_EQ(charles->getHealth(), 4);
}

TEST(battleActionsDefenseTest, zeroDefenseNegDmg){
    battleActions item;
    PlayerCharacterStub* charles = new PlayerCharacterStub(5, 0, 0);

    item.defend(charles, -1);

    EXPECT_EQ(charles->getHealth(), 4);
}

//ZeroDmg
TEST(battleActionsDefenseTest, zeroDmgPosDefense){
    battleActions item;
    PlayerCharacterStub* charles = new PlayerCharacterStub(5, 1, 0);

    item.defend(charles, 0);

    EXPECT_EQ(charles->getHealth(), 5);
}

TEST(battleActionsDefenseTest, zeroDmgNegDefense){
    battleActions item;
    PlayerCharacterStub* charles = new PlayerCharacterStub(5, 1, 0);

    item.defend(charles, 0);

    EXPECT_EQ(charles->getHealth(), 5);
}