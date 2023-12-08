#include "../../header/battleActions.h"
#include "gtest/gtest.h"


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}


//---TESTING USEITEM FUNCTION---
TEST(battleActionsUseItemTest, GainHealth){
    battleActions item;
    PlayerCharacterStub* charles = new PlayerCharacterStub(5, 5, 0); //attack, defense, weapon
    HelpItemStub thing(5, "health");

    item.useItem(thing, charles);

    EXPECT_EQ(charles->getHealth(), 10);
}

TEST(battleActionsUseItemTest, LoseHealth){
    battleActions item;
    PlayerCharacterStub* charles = new PlayerCharacterStub(5, 5, 0); //attack, defense, weapon
    HelpItemStub thing(-5, "health");

    item.useItem(thing, charles);

    EXPECT_EQ(charles->getHealth(), 0);
}

TEST(battleActionsUseItemTest, GainDefense){
    battleActions item;
    PlayerCharacterStub* charles = new PlayerCharacterStub(5, 5, 0); //attack, defense, weapon
    HelpItemStub thing(5, "defense");

    item.useItem(thing, charles);

    EXPECT_EQ(charles->getDefense(), 10);
}

TEST(battleActionsUseItemTest, LoseDefense){
    battleActions item;
    PlayerCharacterStub* charles = new PlayerCharacterStub(5, 5, 0); //attack, defense, weapon
    HelpItemStub thing(-5, "defense");

    item.useItem(thing, charles);

    EXPECT_EQ(charles->getDefense(), 0);
}

TEST(battleActionsUseItemTest, GainAttack){
    battleActions item;
    PlayerCharacterStub* charles = new PlayerCharacterStub(5, 5, 0); //attack, defense, weapon
    HelpItemStub thing(5, "attack");

    item.useItem(thing, charles);

    EXPECT_EQ(charles->getAttack(), 10);
}

TEST(battleActionsUseItemTest, LoseAttack){
    battleActions item;
    PlayerCharacterStub* charles = new PlayerCharacterStub(5, 5, 0); //attack, defense, weapon
    HelpItemStub thing(-5, "attack");

    item.useItem(thing, charles);

    EXPECT_EQ(charles->getAttack(), 0);
}

TEST(battleActionsUseItemTest, NoTypePos){
    battleActions item;
    PlayerCharacterStub* charles = new PlayerCharacterStub(5, 5, 0); //attack, defense, weapon
    HelpItemStub thing(5, "oopsies");

    item.useItem(thing, charles);

    EXPECT_EQ(charles->getAttack(), 10);
}

TEST(battleActionsUseItemTest, NoTypeNeg){
    battleActions item;
    PlayerCharacterStub* charles = new PlayerCharacterStub(5, 5, 0); //attack, defense, weapon
    HelpItemStub thing(-5, "oopsies");

    item.useItem(thing, charles);

    EXPECT_EQ(charles->getAttack(), 0);
}