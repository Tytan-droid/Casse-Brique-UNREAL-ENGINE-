#include "BP_BALL_CPP.h"
#include "PaperSpriteComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"


ABP_BALL_CPP::ABP_BALL_CPP()
{
    PrimaryActorTick.bCanEverTick = true;

    // Collision sphérique
    SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
    SphereCollision->SetSimulatePhysics(false);
    RootComponent = SphereCollision;

    SphereCollision->SetSphereRadius(16.0f);
    SphereCollision->SetCollisionProfileName(TEXT("BlockAllDynamic"));
    SphereCollision->SetNotifyRigidBodyCollision(true);

    // Sprite
    Sprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Sprite"));
    Sprite->SetupAttachment(RootComponent);
    Sprite->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    
}

void ABP_BALL_CPP::BeginPlay()
{
    Super::BeginPlay();
}

void ABP_BALL_CPP::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    
}

