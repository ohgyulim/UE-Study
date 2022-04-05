// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSHUD.h"
#include <Engine/Canvas.h>

void AFPSHUD::DrawHUD()
{
	Super::DrawHUD();

	if (CroosHairTexture) {
		FVector2D Center(Canvas->ClipX * 0.5f, Canvas->ClipY * 0.5f);
		FVector2D CrosshairDrawPosition(Center.X - (CroosHairTexture->GetSurfaceWidth() * 0.5f), Center.Y - (CroosHairTexture->GetSurfaceHeight() * 0.5f));
		
		FCanvasTileItem TileItem(CrosshairDrawPosition, CroosHairTexture->Resource, FLinearColor::White);
		TileItem.BlendMode = SE_BLEND_Translucent;
		Canvas->DrawItem(TileItem);
	}
}
