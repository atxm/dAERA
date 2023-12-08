#include "../../header/battleActions.h"
#include "gtest/gtest.h"


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}


//THESE TESTS TEST THE RAND PORTION OF DMG
TEST(battleActionsAttackTest, testRandNoWeapon){
    EnemyStub* victor = new EnemyStub(5, 5);
    battleActions item;
    PlayerCharacterStub* charles = new PlayerCharacterStub(100, 1, 0); //attack, defense, weapon

    EXPECT_NO_THROW(item.attack(victor, charles));
}

TEST(battleActionsAttackTest, testRandNoAttack){
    EnemyStub* victor = new EnemyStub(5, 5);
    battleActions item;
    PlayerCharacterStub* charles = new PlayerCharacterStub(0, 1, 0); //attack, defense, weapon

    EXPECT_EQ(item.attack(victor, charles), 1);
}




/*
THIS VER. WAS TESTED FOR THE BELOW CODE TO MAKE SURE IT WORKED AS IT SHOULD HAVE

    if(attacker.defense <= attackedEnemy.getEvasion()){
        int addedWeaponDmg = attacker.weaponDmg;
        int totalDamage = addedWeaponDmg + attacker.attack;

        if(totalDamage <= 0){
            totalDamage = 1;
        }

        if(attacker.attack == 100){
            totalDamage *= 2;
        }

        return totalDamage;
    }
    else{
        return 0;
    }



//---TESTING ATTACK FUNCTION---
TEST(battleActionsAttackTest, testMiss){
    battleActions item;
    PlayerCharacterStub charles(4, 100, 5); //attack, defense, weapon
    EnemyStub victor(5, 5);//attack, evasion

    EXPECT_EQ(item.attack(victor, charles), 0);
}

TEST(battleActionsAttackTest, testHit){
    battleActions item;
    PlayerCharacterStub charles(4, 1, 5); //attack, defense, weapon
    EnemyStub victor(5, 5);//attack, evasion

    EXPECT_NE(item.attack(victor, charles), 0);
}

//---------------------------

TEST(battleActionsAttackTest, testPositiveAddedWeaponDMG){
    battleActions item;
    PlayerCharacterStub charles(5, 1, 5); //attack, defense, weapon
    EnemyStub victor(5, 5);//not important anymore

    EXPECT_EQ(item.attack(victor, charles), 10);
}


TEST(battleActionsAttackTest, testNegativeAddedWeaponDMG){
    battleActions item;
    PlayerCharacterStub charles(5, 1, -3); //attack, defense, weapon
    EnemyStub victor(5, 5);

    EXPECT_EQ(item.attack(victor, charles), 2);
}

//---------------------------

TEST(battleActionsAttackTest, testCriticalHitNOWEAPON){
    EnemyStub victor(5, 5);
    battleActions item;
    PlayerCharacterStub charles(100, 1, 0); //attack, defense, weapon

    EXPECT_EQ(item.attack(victor, charles), 200);
}

TEST(battleActionsAttackTest, testNoCriticalHitNOWEAPON){
    EnemyStub victor(5, 5);
    battleActions item;
    PlayerCharacterStub charles(5, 1, 0); //attack, defense, weapon

    EXPECT_EQ(item.attack(victor, charles), 5);
}

//---------------------------

TEST(battleActionsAttackTest, testCriticalHitWEAPON){
    EnemyStub victor(5, 5);
    battleActions item;
    PlayerCharacterStub charles(100, 1, 100); //attack, defense, weapon

    EXPECT_EQ(item.attack(victor, charles), 400);
}

TEST(battleActionsAttackTest, testNoCriticalHitWEAPON){
    EnemyStub victor(5, 5);
    battleActions item;
    PlayerCharacterStub charles(5, 1, 2); //attack, defense, weapon

    EXPECT_EQ(item.attack(victor, charles), 7);
}

//---------------------------

TEST(battleActionsAttackTest, testTotalDamagePosNOWEAPON){
    EnemyStub victor(5, 5);
    battleActions item;
    PlayerCharacterStub charles(5, 1, 0); //attack, defense, weapon

    EXPECT_EQ(item.attack(victor, charles), 5);
}

TEST(battleActionsAttackTest, testTotalDamageNegNOWEAPON){
    EnemyStub victor(5, 5);
    battleActions item;
    PlayerCharacterStub charles(-100, 1, 0); //attack, defense, weapon

    EXPECT_EQ(item.attack(victor, charles), 1);
}

//---------------------------

TEST(battleActionsAttackTest, testTotalDamagePosWEAPON){
    EnemyStub victor(5, 5);
    battleActions item;
    PlayerCharacterStub charles(-5, 1, 7); //attack, defense, weapon

    EXPECT_EQ(item.attack(victor, charles), 2);
}

TEST(battleActionsAttackTest, testTotalDamageNegWEAPON){
    EnemyStub victor(5, 5);
    battleActions item;
    PlayerCharacterStub charles(3, 1, -4); //attack, defense, weapon

    EXPECT_EQ(item.attack(victor, charles), 1);
}
*/