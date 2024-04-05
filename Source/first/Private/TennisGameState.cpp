// Fill out your copyright notice in the Description page of Project Settings.


#include "TennisGameState.h"

ATennisGameState::ATennisGameState(){
    PlayerScores.Init(0, 2);
}

void ATennisGameState::ScorePointForPlayer(int32 playerIndex){
    if(playerIndex >= 0 && playerIndex < PlayerScores.Num()){
        PlayerScores[playerIndex]++;
    }
    
}

void ATennisGameState::onBallGroundCollision(){
    //TODO: Implement this
    

}
