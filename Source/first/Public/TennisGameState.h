// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "TennisGameState.generated.h"

/**
 * 
 */
UCLASS()
class FIRST_API ATennisGameState : public AGameStateBase
{
	GENERATED_BODY()
	
};

public:
	ATennisGameState();

	UFUNCTION(BlueprintCallable)
	void ScorePointForPlayer(int32 playerIndex);

	UFUNCTION(BlueprintCallable)
	void onBallGroundCollision();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Game State")
	TArray<int32> PlayerScores;

	bool isBallGroundCollision() const;

