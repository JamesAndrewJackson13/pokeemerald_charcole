#ifndef GUARD_MAIN_MENU_H
#define GUARD_MAIN_MENU_H

void CB2_InitMainMenu(void);
void CreateYesNoMenuParameterized(u8 a, u8 b, u16 c, u16 d, u8 e, u8 f);

#ifdef FEATURE_DEBUGMENU
void NewGameBirchSpeech_SetDefaultPlayerName(u8);
#endif

#endif // GUARD_MAIN_MENU_H
