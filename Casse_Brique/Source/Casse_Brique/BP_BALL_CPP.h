#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BP_BALL_CPP.generated.h"

class USphereComponent;
class UPaperSpriteComponent;
class UProjectileMovementComponent;

UCLASS()
class CASSE_BRIQUE_API ABP_BALL_CPP : public AActor
{
	GENERATED_BODY()

public:
	ABP_BALL_CPP();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	// --- COMPONENTS ---
	UPROPERTY(VisibleAnywhere)
	USphereComponent* SphereCollision;

	UPROPERTY(VisibleAnywhere)
	UPaperSpriteComponent* Sprite;

	
};
