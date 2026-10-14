//#define IMAGE_PNG_ONLY

#include "/home/codeleaded/System/Static/Library/PPTX_Controller.h"
#include "/home/codeleaded/System/Static/Library/PS4_Controller.h"
#include "/home/codeleaded/System/Static/Library/WindowEngine.h"

PS4_Controller ps4c;
PPTX_Controller pptx;

void Setup(AlxWindow* w){
	SetAlxFont(Sprite_Load("./assets/Alx_Font_Yanis.png"),16,16,8,8);
	AlxFont_Resize(&window.font,48,48);

	pptx = PPTX_Controller_New("/dev/input/by-id/usb-XinChip_Wireless_Presenter_20221123001F-event-kbd");
	ps4c = PS4_Controller_New("/dev/input/by-id/usb-Sony_Interactive_Entertainment_Wireless_Controller-if03-event-joystick");
}
void Update(AlxWindow* w){
	PPTX_Controller_Update(&pptx);
	PS4_Controller_Update(&ps4c);

	Clear(BLACK);

	CStr_RenderAlxFontf(
		WINDOW_STD_ARGS,
		GetAlxFont(),
		0.0f,0 * GetAlxFont()->CharSizeY,RED,
		"Active: %d",
		(Number)ps4c.active
	);
	CStr_RenderAlxFontf(
		WINDOW_STD_ARGS,
		GetAlxFont(),
		0.0f,1 * GetAlxFont()->CharSizeY,RED,
		"LX: %d, LY: %d",
		(Number)ps4c.abs[PS4_CONTROLLER_LX],
		(Number)ps4c.abs[PS4_CONTROLLER_LY]
	);
	CStr_RenderAlxFontf(
		WINDOW_STD_ARGS,
		GetAlxFont(),
		0.0f,2 * GetAlxFont()->CharSizeY,RED,
		"RX: %d, RY: %d",
		(Number)ps4c.abs[PS4_CONTROLLER_RX],
		(Number)ps4c.abs[PS4_CONTROLLER_RY]
	);
	CStr_RenderAlxFontf(
		WINDOW_STD_ARGS,
		GetAlxFont(),
		0.0f,3 * GetAlxFont()->CharSizeY,RED,
		"HX: %d, HY: %d",
		(Number)ps4c.abs[PS4_CONTROLLER_HAT0X],
		(Number)ps4c.abs[PS4_CONTROLLER_HAT0Y]
	);

	CStr_RenderAlxFontf(
		WINDOW_STD_ARGS,
		GetAlxFont(),
		0.0f,4 * GetAlxFont()->CharSizeY,RED,
		"X: D%d P%d R%d",
		(Number)ps4c.keys[PS4_CONTROLLER_X].DOWN,
		(Number)ps4c.keys[PS4_CONTROLLER_X].PRESSED,
		(Number)ps4c.keys[PS4_CONTROLLER_X].RELEASED
	);
	CStr_RenderAlxFontf(
		WINDOW_STD_ARGS,
		GetAlxFont(),
		0.0f,5 * GetAlxFont()->CharSizeY,RED,
		"[]: D%d P%d R%d",
		(Number)ps4c.keys[PS4_CONTROLLER_QUD].DOWN,
		(Number)ps4c.keys[PS4_CONTROLLER_QUD].PRESSED,
		(Number)ps4c.keys[PS4_CONTROLLER_QUD].RELEASED
	);
	CStr_RenderAlxFontf(
		WINDOW_STD_ARGS,
		GetAlxFont(),
		0.0f,6 * GetAlxFont()->CharSizeY,RED,
		"/\\: D%d P%d R%d",
		(Number)ps4c.keys[PS4_CONTROLLER_TRI].DOWN,
		(Number)ps4c.keys[PS4_CONTROLLER_TRI].PRESSED,
		(Number)ps4c.keys[PS4_CONTROLLER_TRI].RELEASED
	);
	CStr_RenderAlxFontf(
		WINDOW_STD_ARGS,
		GetAlxFont(),
		0.0f,7 * GetAlxFont()->CharSizeY,RED,
		"O: D%d P%d R%d",
		(Number)ps4c.keys[PS4_CONTROLLER_O].DOWN,
		(Number)ps4c.keys[PS4_CONTROLLER_O].PRESSED,
		(Number)ps4c.keys[PS4_CONTROLLER_O].RELEASED
	);
	
	CStr_RenderAlxFontf(
		WINDOW_STD_ARGS,
		GetAlxFont(),
		0.0f,8 * GetAlxFont()->CharSizeY,RED,
		"Home: D%d P%d R%d",
		(Number)ps4c.keys[PS4_CONTROLLER_HOME].DOWN,
		(Number)ps4c.keys[PS4_CONTROLLER_HOME].PRESSED,
		(Number)ps4c.keys[PS4_CONTROLLER_HOME].RELEASED
	);
	CStr_RenderAlxFontf(
		WINDOW_STD_ARGS,
		GetAlxFont(),
		0.0f,9 * GetAlxFont()->CharSizeY,RED,
		"Share: D%d P%d R%d",
		(Number)ps4c.keys[PS4_CONTROLLER_SHARE].DOWN,
		(Number)ps4c.keys[PS4_CONTROLLER_SHARE].PRESSED,
		(Number)ps4c.keys[PS4_CONTROLLER_SHARE].RELEASED
	);
	CStr_RenderAlxFontf(
		WINDOW_STD_ARGS,
		GetAlxFont(),
		0.0f,10 * GetAlxFont()->CharSizeY,RED,
		"Options: D%d P%d R%d",
		(Number)ps4c.keys[PS4_CONTROLLER_OPTIONS].DOWN,
		(Number)ps4c.keys[PS4_CONTROLLER_OPTIONS].PRESSED,
		(Number)ps4c.keys[PS4_CONTROLLER_OPTIONS].RELEASED
	);

	CStr_RenderAlxFontf(
		WINDOW_STD_ARGS,
		GetAlxFont(),
		0.0f,11 * GetAlxFont()->CharSizeY,RED,
		"L1: D%d P%d R%d",
		(Number)ps4c.keys[PS4_CONTROLLER_L1].DOWN,
		(Number)ps4c.keys[PS4_CONTROLLER_L1].PRESSED,
		(Number)ps4c.keys[PS4_CONTROLLER_L1].RELEASED
	);
	CStr_RenderAlxFontf(
		WINDOW_STD_ARGS,
		GetAlxFont(),
		0.0f,12 * GetAlxFont()->CharSizeY,RED,
		"L2: D%d P%d R%d",
		(Number)ps4c.keys[PS4_CONTROLLER_L2].DOWN,
		(Number)ps4c.keys[PS4_CONTROLLER_L2].PRESSED,
		(Number)ps4c.keys[PS4_CONTROLLER_L2].RELEASED
	);
	CStr_RenderAlxFontf(
		WINDOW_STD_ARGS,
		GetAlxFont(),
		0.0f,13 * GetAlxFont()->CharSizeY,RED,
		"L3: D%d P%d R%d",
		(Number)ps4c.keys[PS4_CONTROLLER_STICKL].DOWN,
		(Number)ps4c.keys[PS4_CONTROLLER_STICKL].PRESSED,
		(Number)ps4c.keys[PS4_CONTROLLER_STICKL].RELEASED
	);

	CStr_RenderAlxFontf(
		WINDOW_STD_ARGS,
		GetAlxFont(),
		0.0f,14 * GetAlxFont()->CharSizeY,RED,
		"R1: D%d P%d R%d",
		(Number)ps4c.keys[PS4_CONTROLLER_R1].DOWN,
		(Number)ps4c.keys[PS4_CONTROLLER_R1].PRESSED,
		(Number)ps4c.keys[PS4_CONTROLLER_R1].RELEASED
	);
	CStr_RenderAlxFontf(
		WINDOW_STD_ARGS,
		GetAlxFont(),
		0.0f,15 * GetAlxFont()->CharSizeY,RED,
		"R2: D%d P%d R%d",
		(Number)ps4c.keys[PS4_CONTROLLER_R2].DOWN,
		(Number)ps4c.keys[PS4_CONTROLLER_R2].PRESSED,
		(Number)ps4c.keys[PS4_CONTROLLER_R2].RELEASED
	);
	CStr_RenderAlxFontf(
		WINDOW_STD_ARGS,
		GetAlxFont(),
		0.0f,16 * GetAlxFont()->CharSizeY,RED,
		"R3: D%d P%d R%d",
		(Number)ps4c.keys[PS4_CONTROLLER_STICKR].DOWN,
		(Number)ps4c.keys[PS4_CONTROLLER_STICKR].PRESSED,
		(Number)ps4c.keys[PS4_CONTROLLER_STICKR].RELEASED
	);


	CStr_RenderAlxFontf(
		WINDOW_STD_ARGS,
		GetAlxFont(),
		GetWidth() / 2,0 * GetAlxFont()->CharSizeY,YELLOW,
		"U: %d, D: %d",
		(Number)PPTX_Controller_Key(&pptx,PPTX_CONTROLLER_UP).DOWN,
		(Number)PPTX_Controller_Key(&pptx,PPTX_CONTROLLER_DOWN).DOWN
	);
	CStr_RenderAlxFontf(
		WINDOW_STD_ARGS,
		GetAlxFont(),
		GetWidth() / 2,1 * GetAlxFont()->CharSizeY,YELLOW,
		"PU: %d, PD: %d",
		(Number)PPTX_Controller_Key(&pptx,PPTX_CONTROLLER_PAGEUP).DOWN,
		(Number)PPTX_Controller_Key(&pptx,PPTX_CONTROLLER_PAGEDOWN).DOWN
	);

	CStr_RenderAlxFontf(
		WINDOW_STD_ARGS,
		GetAlxFont(),
		GetWidth() / 2,2 * GetAlxFont()->CharSizeY,YELLOW,
		"ESC: %d, LALT: %d",
		(Number)PPTX_Controller_Key(&pptx,PPTX_CONTROLLER_ESC).DOWN,
		(Number)PPTX_Controller_Key(&pptx,PPTX_CONTROLLER_LALT).DOWN
	);
	CStr_RenderAlxFontf(
		WINDOW_STD_ARGS,
		GetAlxFont(),
		GetWidth() / 2,3 * GetAlxFont()->CharSizeY,YELLOW,
		"B: %d",
		(Number)PPTX_Controller_Key(&pptx,PPTX_CONTROLLER_B).DOWN
	);
}
void Delete(AlxWindow* w){
	PS4_Controller_Free(&ps4c);
	PPTX_Controller_Free(&pptx);
}

int main(){
    if(Create("Controllers",1920,1080,1,1,Setup,Update,Delete))
        Start();
    return 0;
}