// Fill out your copyright notice in the Description page of Project Settings.


#include "OurBullet.h"

// Sets default values
AOurBullet::AOurBullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BulletMesh = CreateDefaultSubobject<UStaticMeshComponent>("BulletMesh");
	SetRootComponent(BulletMesh);

}

// Called when the game starts or when spawned
void AOurBullet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOurBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

