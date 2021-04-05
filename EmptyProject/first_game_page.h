#pragma once
#include "page.h"

class FirstGamePage : public Page
{
public:

	FirstGamePage();
	virtual ~FirstGamePage();

	LPDIRECT3DTEXTURE9* backgroundTex;
	LPD3DXSPRITE spr;


	void Update() override;
	void Render() override;


};