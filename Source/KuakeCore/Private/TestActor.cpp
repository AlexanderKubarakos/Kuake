#include "TestActor.h"

#include "Log.h"
#include "Components/SceneComponent.h"
#include "Components/BillboardComponent.h"


ATestActor::ATestActor(const FObjectInitializer& ObjectInitializer)
 	: Super(ObjectInitializer)
 {
 	Value = 42;

	RootComponent = ObjectInitializer.CreateDefaultSubobject<USceneComponent>(this, TEXT("RootComponent"));

	Sprite = ObjectInitializer.CreateDefaultSubobject<UBillboardComponent>(this, TEXT("Sprite"));
	Sprite->SetupAttachment(RootComponent);
		
 }

 void ATestActor::BeginPlay()
 {
 	Super::BeginPlay();

	UE_LOG(LogKuakeCore, Log, TEXT("This is making a message"));
 }