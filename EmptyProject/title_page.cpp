#include "DXUT.h"
#include "title_page.h"
#include "global.h"


#define BUTTON_WIDTH 160
#define BUTTON_HEIGHT 50

#define BUTTON_Y 320
#define BUTTON_GAP BUTTON_HEIGHT + 20

TitlePage::TitlePage()
{

	startButtonState = 0;
	introButtonState = 0;
	manualButtonState = 0;
	rankingButtonState = 0;
	exitButtonState = 0;


	backgroundTex = new LPDIRECT3DTEXTURE9();
	D3DXCreateTextureFromFileExA(
		DXUTGetD3D9Device()
		, "resource/image/title_background.png"
		, D3DX_DEFAULT_NONPOW2
		, D3DX_DEFAULT_NONPOW2
		, 0, 0
		, D3DFMT_UNKNOWN
		, D3DPOOL_MANAGED
		, D3DX_DEFAULT
		, D3DX_DEFAULT
		, 0, nullptr, nullptr
		, backgroundTex);






	startButtonTex1 = new LPDIRECT3DTEXTURE9();
	D3DXCreateTextureFromFileExA(
		DXUTGetD3D9Device()
		, "resource/image/startButton1.png"
		, D3DX_DEFAULT_NONPOW2
		, D3DX_DEFAULT_NONPOW2
		, 0, 0
		, D3DFMT_UNKNOWN
		, D3DPOOL_MANAGED
		, D3DX_DEFAULT
		, D3DX_DEFAULT
		, 0, nullptr, nullptr
		, startButtonTex1);


	startButtonTex2 = new LPDIRECT3DTEXTURE9();
	D3DXCreateTextureFromFileExA(
		DXUTGetD3D9Device()
		, "resource/image/startButton2.png"
		, D3DX_DEFAULT_NONPOW2
		, D3DX_DEFAULT_NONPOW2
		, 0, 0
		, D3DFMT_UNKNOWN
		, D3DPOOL_MANAGED
		, D3DX_DEFAULT
		, D3DX_DEFAULT
		, 0, nullptr, nullptr
		, startButtonTex2);


	introButtonTex1 = new LPDIRECT3DTEXTURE9();
	D3DXCreateTextureFromFileExA(
		DXUTGetD3D9Device()
		, "resource/image/introButton1.png"
		, D3DX_DEFAULT_NONPOW2
		, D3DX_DEFAULT_NONPOW2
		, 0, 0
		, D3DFMT_UNKNOWN
		, D3DPOOL_MANAGED
		, D3DX_DEFAULT
		, D3DX_DEFAULT
		, 0, nullptr, nullptr
		, introButtonTex1);


	introButtonTex2 = new LPDIRECT3DTEXTURE9();
	D3DXCreateTextureFromFileExA(
		DXUTGetD3D9Device()
		, "resource/image/introButton2.png"
		, D3DX_DEFAULT_NONPOW2
		, D3DX_DEFAULT_NONPOW2
		, 0, 0
		, D3DFMT_UNKNOWN
		, D3DPOOL_MANAGED
		, D3DX_DEFAULT
		, D3DX_DEFAULT
		, 0, nullptr, nullptr
		, introButtonTex2);


	manualButtonTex1 = new LPDIRECT3DTEXTURE9();
	D3DXCreateTextureFromFileExA(
		DXUTGetD3D9Device()
		, "resource/image/manualButton1.png"
		, D3DX_DEFAULT_NONPOW2
		, D3DX_DEFAULT_NONPOW2
		, 0, 0
		, D3DFMT_UNKNOWN
		, D3DPOOL_MANAGED
		, D3DX_DEFAULT
		, D3DX_DEFAULT
		, 0, nullptr, nullptr
		, manualButtonTex1);


	manualButtonTex2 = new LPDIRECT3DTEXTURE9();
	D3DXCreateTextureFromFileExA(
		DXUTGetD3D9Device()
		, "resource/image/manualButton2.png"
		, D3DX_DEFAULT_NONPOW2
		, D3DX_DEFAULT_NONPOW2
		, 0, 0
		, D3DFMT_UNKNOWN
		, D3DPOOL_MANAGED
		, D3DX_DEFAULT
		, D3DX_DEFAULT
		, 0, nullptr, nullptr
		, manualButtonTex2);


	rankingButtonTex1 = new LPDIRECT3DTEXTURE9();
	D3DXCreateTextureFromFileExA(
		DXUTGetD3D9Device()
		, "resource/image/rankingButton1.png"
		, D3DX_DEFAULT_NONPOW2
		, D3DX_DEFAULT_NONPOW2
		, 0, 0
		, D3DFMT_UNKNOWN
		, D3DPOOL_MANAGED
		, D3DX_DEFAULT
		, D3DX_DEFAULT
		, 0, nullptr, nullptr
		, rankingButtonTex1);


	rankingButtonTex2 = new LPDIRECT3DTEXTURE9();
	D3DXCreateTextureFromFileExA(
		DXUTGetD3D9Device()
		, "resource/image/rankingButton2.png"
		, D3DX_DEFAULT_NONPOW2
		, D3DX_DEFAULT_NONPOW2
		, 0, 0
		, D3DFMT_UNKNOWN
		, D3DPOOL_MANAGED
		, D3DX_DEFAULT
		, D3DX_DEFAULT
		, 0, nullptr, nullptr
		, rankingButtonTex2);


	exitButtonTex1 = new LPDIRECT3DTEXTURE9();
	D3DXCreateTextureFromFileExA(
		DXUTGetD3D9Device()
		, "resource/image/exitButton1.png"
		, D3DX_DEFAULT_NONPOW2
		, D3DX_DEFAULT_NONPOW2
		, 0, 0
		, D3DFMT_UNKNOWN
		, D3DPOOL_MANAGED
		, D3DX_DEFAULT
		, D3DX_DEFAULT
		, 0, nullptr, nullptr
		, exitButtonTex1);


	exitButtonTex2 = new LPDIRECT3DTEXTURE9();
	D3DXCreateTextureFromFileExA(
		DXUTGetD3D9Device()
		, "resource/image/exitButton2.png"
		, D3DX_DEFAULT_NONPOW2
		, D3DX_DEFAULT_NONPOW2
		, 0, 0
		, D3DFMT_UNKNOWN
		, D3DPOOL_MANAGED
		, D3DX_DEFAULT
		, D3DX_DEFAULT
		, 0, nullptr, nullptr
		, exitButtonTex2);


	D3DXCreateSprite(DXUTGetD3D9Device(), &spr);







}

TitlePage::~TitlePage()
{
	(*backgroundTex)->Release();
	(*startButtonTex1)->Release();
	(*startButtonTex2)->Release();
	(*introButtonTex1)->Release();
	(*introButtonTex2)->Release();
	(*manualButtonTex1)->Release();
	(*manualButtonTex2)->Release();
	(*rankingButtonTex1)->Release();
	(*rankingButtonTex2)->Release();
	(*exitButtonTex1)->Release();
	(*exitButtonTex2)->Release();
	spr->Release();
}

void TitlePage::Update()
{


	POINT pt;
	GetCursorPos(&pt);
	ScreenToClient(DXUTGetHWND(), &pt);

	if (pt.x > (WINDOW_WIDTH - BUTTON_WIDTH) / 2
		&& pt.x < (WINDOW_WIDTH + BUTTON_WIDTH) / 2)
	{
		if (pt.y > BUTTON_Y + (BUTTON_HEIGHT + 20) * 0
			&& pt.y < BUTTON_Y + (BUTTON_HEIGHT + 20) * 1)
		{
			startButtonState = 1;
		}
		else
		{
			startButtonState = 0;
		}


		if (pt.y > BUTTON_Y + (BUTTON_HEIGHT + 20) * 1
			&& pt.y < BUTTON_Y + (BUTTON_HEIGHT + 20) * 2)
		{
			introButtonState = 1;
		}
		else
		{
			introButtonState = 0;
		}


		if (pt.y > BUTTON_Y + (BUTTON_HEIGHT + 20) * 2
			&& pt.y < BUTTON_Y + (BUTTON_HEIGHT + 20) * 3)
		{
			manualButtonState = 1;
		}
		else
		{
			manualButtonState = 0;
		}


		if (pt.y > BUTTON_Y + (BUTTON_HEIGHT + 20) * 3
			&& pt.y < BUTTON_Y + (BUTTON_HEIGHT + 20) * 4)
		{
			rankingButtonState = 1;
		}
		else
		{
			rankingButtonState = 0;
		}


		if (pt.y > BUTTON_Y + (BUTTON_HEIGHT + 20) * 4
			&& pt.y < BUTTON_Y + (BUTTON_HEIGHT + 20) * 5)
		{
			exitButtonState = 1;
		}
		else
		{
			exitButtonState = 0;
		}
	}
	else
	{
		startButtonState = 0;
		introButtonState = 0;
		manualButtonState = 0;
		rankingButtonState = 0;
		exitButtonState = 0;
	}

	if ((GetAsyncKeyState(VK_LBUTTON) & 0x8000) != 0)
	{
		if (startButtonState == 1)
		{
			pageManager.CreateFirstGamePage();
		}
		else if (introButtonState == 1)
		{
			pageManager.CreateIntroPage();
		}
		else if (manualButtonState == 1)
		{
			pageManager.CreateManualPage();
		}
		else if (rankingButtonState == 1)
		{
			pageManager.CreateRankingPage();
		}
		else if (exitButtonState == 1)
		{
			PostQuitMessage(0);
		}

	}
}

void TitlePage::Render()
{
	D3DXVECTOR3 pos;
	D3DXVECTOR3 cen;

	spr->Begin(D3DXSPRITE_ALPHABLEND);

	spr->Draw(*backgroundTex, nullptr, nullptr, nullptr, D3DCOLOR_ARGB(255, 255, 255, 255));


	pos = { (WINDOW_WIDTH - BUTTON_WIDTH) / 2, BUTTON_Y, 0 };
	if(startButtonState == 0)
		spr->Draw(*startButtonTex1, nullptr, nullptr, &pos, D3DCOLOR_ARGB(255, 255, 255, 255));
	else
		spr->Draw(*startButtonTex2, nullptr, nullptr, &pos, D3DCOLOR_ARGB(255, 255, 255, 255));

	pos = { (WINDOW_WIDTH - BUTTON_WIDTH) / 2, BUTTON_Y + ((BUTTON_HEIGHT + 20) * 1), 0 };
	if (introButtonState == 0)
		spr->Draw(*introButtonTex1, nullptr, nullptr, &pos, D3DCOLOR_ARGB(255, 255, 255, 255));
	else
		spr->Draw(*introButtonTex2, nullptr, nullptr, &pos, D3DCOLOR_ARGB(255, 255, 255, 255));

	pos = { (WINDOW_WIDTH - BUTTON_WIDTH) / 2, BUTTON_Y + ((BUTTON_HEIGHT + 20) * 2), 0 };
	if (manualButtonState == 0)
		spr->Draw(*manualButtonTex1, nullptr, nullptr, &pos, D3DCOLOR_ARGB(255, 255, 255, 255));
	else
		spr->Draw(*manualButtonTex2, nullptr, nullptr, &pos, D3DCOLOR_ARGB(255, 255, 255, 255));

	pos = { (WINDOW_WIDTH - BUTTON_WIDTH) / 2, BUTTON_Y + ((BUTTON_HEIGHT + 20) * 3), 0 };
	if (rankingButtonState == 0)
		spr->Draw(*rankingButtonTex1, nullptr, nullptr, &pos, D3DCOLOR_ARGB(255, 255, 255, 255));
	else
		spr->Draw(*rankingButtonTex2, nullptr, nullptr, &pos, D3DCOLOR_ARGB(255, 255, 255, 255));

	pos = { (WINDOW_WIDTH - BUTTON_WIDTH) / 2, BUTTON_Y + ((BUTTON_HEIGHT + 20) * 4), 0 };
	if (exitButtonState == 0)
		spr->Draw(*exitButtonTex1, nullptr, nullptr, &pos, D3DCOLOR_ARGB(255, 255, 255, 255));
	else
		spr->Draw(*exitButtonTex2, nullptr, nullptr, &pos, D3DCOLOR_ARGB(255, 255, 255, 255));



	spr->End();
}
