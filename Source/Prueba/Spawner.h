
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemy.h"
#include "Spawner.generated.h"

UCLASS()
class PRUEBA_API ASpawner : public AActor
{
	GENERATED_BODY()

public:

	//Enemy class to spawn
	UPROPERTY(EditAnywhere)
		TArray < TSubclassOf<AEnemy> > ArrayEnemyClass;

	UFUNCTION()
	void SpawnEnemy();

protected:
	
	virtual void BeginPlay() override;

};