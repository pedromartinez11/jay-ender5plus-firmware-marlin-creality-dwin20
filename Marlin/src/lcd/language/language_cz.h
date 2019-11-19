/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Czech
 * UTF-8 for Graphical Display
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 * Translated by Petr Zahradnik, Computer Laboratory
 * Blog and video blog Zahradnik se bavi
 * http://www.zahradniksebavi.cz
 *
 */

#define DISPLAY_CHARSET_ISO10646_CZ
#define THIS_LANGUAGES_SPECIAL_SYMBOLS      _UxGT("áÁčČďĎéÉěĚíÍňŇóÓřŘšŠťŤúÚůŮýÝžŽ³")
#define CHARSIZE 2

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" připraven.")
#define MSG_YES                             _UxGT("ANO")
#define MSG_NO                              _UxGT("NE")
#define MSG_BACK                            _UxGT("Zpět")
#define MSG_MEDIA_INSERTED                  _UxGT("Karta vložena")
#define MSG_MEDIA_REMOVED                   _UxGT("Karta vyjmuta")
#define MSG_LCD_ENDSTOPS                    _UxGT("Endstopy") // max 8 znaku
#define MSG_LCD_SOFT_ENDSTOPS               _UxGT("Soft Endstopy")
#define MSG_MAIN                            _UxGT("Hlavní nabídka")
#define MSG_ADVANCED_SETTINGS               _UxGT("Další nastavení")
#define MSG_CONFIGURATION                   _UxGT("Konfigurace")
#define MSG_AUTOSTART                       _UxGT("Autostart")
#define MSG_DISABLE_STEPPERS                _UxGT("Uvolnit motory")
#define MSG_DEBUG_MENU                      _UxGT("Nabídka ladění")
#if LCD_WIDTH >= 20
  #define MSG_PROGRESS_BAR_TEST             _UxGT("Test ukaz. průběhu")
#else
  #define MSG_PROGRESS_BAR_TEST             _UxGT("Test uk. průběhu")
#endif
#define MSG_AUTO_HOME                       _UxGT("Domovská pozice")
#define MSG_AUTO_HOME_X                     _UxGT("Domů osa X")
#define MSG_AUTO_HOME_Y                     _UxGT("Domů osa Y")
#define MSG_AUTO_HOME_Z                     _UxGT("Domů osa Z")
#define MSG_AUTO_Z_ALIGN                    _UxGT("Auto srovnání Z")
#define MSG_LEVEL_BED_HOMING                _UxGT("Měření podložky")
#define MSG_LEVEL_BED_WAITING               _UxGT("Kliknutím spusťte")
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("Další bod")
#define MSG_LEVEL_BED_DONE                  _UxGT("Měření hotovo!")
#define MSG_Z_FADE_HEIGHT                   _UxGT("Výška srovnávání")
#define MSG_SET_HOME_OFFSETS                _UxGT("Nastavit ofsety")
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("Ofsety nastaveny")
#define MSG_SET_ORIGIN                      _UxGT("Nastavit počátek")
#define MSG_PREHEAT_1                       _UxGT("Zahřát " PREHEAT_1_LABEL)
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 _UxGT(" vše")
#define MSG_PREHEAT_1_END                   MSG_PREHEAT_1 _UxGT(" hotend")
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 _UxGT(" podlož")
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 _UxGT(" nast")
#define MSG_PREHEAT_2                       _UxGT("Zahřát " PREHEAT_2_LABEL)
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 _UxGT(" vše")
#define MSG_PREHEAT_2_END                   MSG_PREHEAT_2 _UxGT(" hotend")
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 _UxGT(" podlož")
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 _UxGT(" nast")
#define MSG_PREHEAT_CUSTOM                  _UxGT("Zahřát vlastní")
#define MSG_COOLDOWN                        _UxGT("Zchladit")
#define MSG_LASER_MENU                      _UxGT("Ovládání laseru")
#define MSG_LASER_OFF                       _UxGT("Vypnout laser")
#define MSG_LASER_ON                        _UxGT("Zapnout laser")
#define MSG_LASER_POWER                     _UxGT("Výkon laseru")
#define MSG_SPINDLE_REVERSE                 _UxGT("Vřeteno opačně")
#define MSG_SWITCH_PS_ON                    _UxGT("Zapnout napájení")
#define MSG_SWITCH_PS_OFF                   _UxGT("Vypnout napájení")
#define MSG_EXTRUDE                         _UxGT("Vytlačit (extr.)")
#define MSG_RETRACT                         _UxGT("Zatlačit (retr.)")
#define MSG_MOVE_AXIS                       _UxGT("Posunout osy")
#define MSG_BED_LEVELING                    _UxGT("Vyrovnat podložku")
#define MSG_LEVEL_BED                       _UxGT("Vyrovnat podložku")
#define MSG_LEVEL_CORNERS                   _UxGT("Vyrovnat rohy")
#define MSG_NEXT_CORNER                     _UxGT("Další roh")
#define MSG_EDIT_MESH                       _UxGT("Upravit síť bodů")
#define MSG_EDITING_STOPPED                 _UxGT("Konec úprav sítě")
#define MSG_MESH_X                          _UxGT("Index X")
#define MSG_MESH_Y                          _UxGT("Index Y")
#define MSG_MESH_EDIT_Z                     _UxGT("Hodnota Z")

#define MSG_USER_MENU                       _UxGT("Vlastní příkazy")
#define MSG_IDEX_MENU                       _UxGT("Režim IDEX")
#define MSG_OFFSETS_MENU                    _UxGT("Ofsety nástrojů")
#define MSG_IDEX_MODE_AUTOPARK              _UxGT("Auto-Park")
#define MSG_IDEX_MODE_DUPLICATE             _UxGT("Duplikace")
#define MSG_IDEX_MODE_MIRRORED_COPY         _UxGT("Zrcadlení")
#define MSG_IDEX_MODE_FULL_CTRL             _UxGT("Plná kontrola")
#define MSG_X_OFFSET                        _UxGT("2. tryska X")
#define MSG_Y_OFFSET                        _UxGT("2. tryska Y")
#define MSG_Z_OFFSET                        _UxGT("2. tryska Z")

#define MSG_UBL_DOING_G29                   _UxGT("Provádím G29")
#define MSG_UBL_UNHOMED                     _UxGT("Přejeďte domů")
#define MSG_UBL_TOOLS                       _UxGT("UBL nástroje")
#define MSG_UBL_LEVEL_BED                   _UxGT("Unified Bed Leveling")
#define MSG_UBL_MANUAL_MESH                 _UxGT("Manuální síť bodů")
#define MSG_UBL_BC_INSERT                   _UxGT("Vložte kartu, změřte")
#define MSG_UBL_BC_INSERT2                  _UxGT("Změřte")
#define MSG_UBL_BC_REMOVE                   _UxGT("Odstraňte a změřte")
#define MSG_UBL_MOVING_TO_NEXT              _UxGT("Přesun na další")
#define MSG_UBL_ACTIVATE_MESH               _UxGT("Aktivovat UBL")
#define MSG_UBL_DEACTIVATE_MESH             _UxGT("Deaktivovat UBL")
#define MSG_UBL_SET_TEMP_BED                _UxGT("Teplota podložky")
#define MSG_UBL_BED_TEMP_CUSTOM             MSG_UBL_SET_TEMP_BED
#define MSG_UBL_SET_TEMP_HOTEND             _UxGT("Teplota hotendu")
#define MSG_UBL_HOTEND_TEMP_CUSTOM          MSG_UBL_SET_TEMP_HOTEND
#define MSG_UBL_MESH_EDIT                   _UxGT("Úprava sítě bodů")
#define MSG_UBL_EDIT_CUSTOM_MESH            _UxGT("Upravit vlastní síť")
#define MSG_UBL_FINE_TUNE_MESH              _UxGT("Doladit síť bodů")
#define MSG_UBL_DONE_EDITING_MESH           _UxGT("Konec úprav sítě")
#define MSG_UBL_BUILD_CUSTOM_MESH           _UxGT("Vlastní síť")
#define MSG_UBL_BUILD_MESH_MENU             _UxGT("Vytvořit síť")
#define MSG_UBL_BUILD_MESH_M1               _UxGT("Síť bodů " PREHEAT_1_LABEL)
#define MSG_UBL_BUILD_MESH_M2               _UxGT("Síť bodů " PREHEAT_2_LABEL)
#define MSG_UBL_BUILD_COLD_MESH             _UxGT("Studená síť bodů")
#define MSG_UBL_MESH_HEIGHT_ADJUST          _UxGT("Upravit výšku sítě")
#define MSG_UBL_MESH_HEIGHT_AMOUNT          _UxGT("Výška")
#define MSG_UBL_VALIDATE_MESH_MENU          _UxGT("Zkontrolovat síť")
#define MSG_UBL_VALIDATE_MESH_M1            _UxGT("Kontrola sítě " PREHEAT_1_LABEL)
#define MSG_UBL_VALIDATE_MESH_M2            _UxGT("Kontrola sítě " PREHEAT_2_LABEL)
#define MSG_UBL_VALIDATE_CUSTOM_MESH        _UxGT("Kontrola vlast. sítě")
#define MSG_UBL_CONTINUE_MESH               _UxGT("Pokračovat v síťi")
#define MSG_UBL_MESH_LEVELING               _UxGT("Síťové rovnání")
#define MSG_UBL_3POINT_MESH_LEVELING        _UxGT("3-bodové rovnání")
#define MSG_UBL_GRID_MESH_LEVELING          _UxGT("Mřížkové rovnání")
#define MSG_UBL_MESH_LEVEL                  _UxGT("Srovnat podložku")
#define MSG_UBL_SIDE_POINTS                 _UxGT("Postranní body")
#define MSG_UBL_MAP_TYPE                    _UxGT("Typ sítě bodu")
#define MSG_UBL_OUTPUT_MAP                  _UxGT("Exportovat síť")
#define MSG_UBL_OUTPUT_MAP_HOST             _UxGT("Exportovat do PC")
#define MSG_UBL_OUTPUT_MAP_CSV              _UxGT("Exportovat do CSV")
#define MSG_UBL_OUTPUT_MAP_BACKUP           _UxGT("Záloha do PC")
#define MSG_UBL_INFO_UBL                    _UxGT("Info o UBL do PC")
#define MSG_UBL_FILLIN_AMOUNT               _UxGT("Hustota mřížky")
#define MSG_UBL_MANUAL_FILLIN               _UxGT("Ruční hustota")
#define MSG_UBL_SMART_FILLIN                _UxGT("Chytrá hustota")
#define MSG_UBL_FILLIN_MESH                 _UxGT("Zaplnit mřížku")
#define MSG_UBL_INVALIDATE_ALL              _UxGT("Zrušit všechno")
#define MSG_UBL_INVALIDATE_CLOSEST          _UxGT("Zrušit poslední")
#define MSG_UBL_FINE_TUNE_ALL               _UxGT("Upravit všechny")
#define MSG_UBL_FINE_TUNE_CLOSEST           _UxGT("Upravit poslední")
#define MSG_UBL_STORAGE_MESH_MENU           _UxGT("Uložiště sítí")
#define MSG_UBL_STORAGE_SLOT                _UxGT("Paměťový slot")
#define MSG_UBL_LOAD_MESH                   _UxGT("Načíst síť bodů")
#define MSG_UBL_SAVE_MESH                   _UxGT("Uložit síť bodů")
#define MSG_MESH_LOADED                     _UxGT("Síť %i načtena")
#define MSG_MESH_SAVED                      _UxGT("Síť %i uložena")
#define MSG_UBL_NO_STORAGE                  _UxGT("Nedostatek místa")
#define MSG_UBL_SAVE_ERROR                  _UxGT("Ch.: Uložit UBL")
#define MSG_UBL_RESTORE_ERROR               _UxGT("Ch.: Obnovit UBL")
#define MSG_UBL_Z_OFFSET_STOPPED            _UxGT("Konec Z-Offsetu")
#define MSG_UBL_STEP_BY_STEP_MENU           _UxGT("UBL Postupně")

#define MSG_LED_CONTROL                     _UxGT("Nastavení LED")
#define MSG_LEDS                            _UxGT("Světla")
#define MSG_LED_PRESETS                     _UxGT("Světla Předvolby")
#define MSG_SET_LEDS_RED                    _UxGT("Červená")
#define MSG_SET_LEDS_ORANGE                 _UxGT("Oranžová")
#define MSG_SET_LEDS_YELLOW                 _UxGT("Žlutá")
#define MSG_SET_LEDS_GREEN                  _UxGT("Zelená")
#define MSG_SET_LEDS_BLUE                   _UxGT("Modrá")
#define MSG_SET_LEDS_INDIGO                 _UxGT("Indigo")
#define MSG_SET_LEDS_VIOLET                 _UxGT("Fialová")
#define MSG_SET_LEDS_WHITE                  _UxGT("Bílá")
#define MSG_SET_LEDS_DEFAULT                _UxGT("Výchozí")
#define MSG_CUSTOM_LEDS                     _UxGT("Vlastní světla")
#define MSG_INTENSITY_R                     _UxGT("Červená intenzita")
#define MSG_INTENSITY_G                     _UxGT("Zelená intezita")
#define MSG_INTENSITY_B                     _UxGT("Modrá intenzita")
#define MSG_INTENSITY_W                     _UxGT("Bílá intenzita")
#define MSG_LED_BRIGHTNESS                  _UxGT("Jas")

#define MSG_MOVING                          _UxGT("Posouvání...")
#define MSG_FREE_XY                         _UxGT("Uvolnit XY")
#define MSG_MOVE_X                          _UxGT("Posunout X")
#define MSG_MOVE_Y                          _UxGT("Posunout Y")
#define MSG_MOVE_Z                          _UxGT("Posunout Z")
#define MSG_MOVE_E                          _UxGT("Extrudér")
#define MSG_HOTEND_TOO_COLD                 _UxGT("Hotend je studený")
#define MSG_MOVE_Z_DIST                     _UxGT("Posunout o %smm")
#define MSG_MOVE_01MM                       _UxGT("Posunout o 0,1mm")
#define MSG_MOVE_1MM                        _UxGT("Posunout o 1mm")
#define MSG_MOVE_10MM                       _UxGT("Posunout o 10mm")
#define MSG_SPEED                           _UxGT("Rychlost")
#define MSG_BED_Z                           _UxGT("Výška podl.")
#define MSG_NOZZLE                          _UxGT("Tryska")
#define MSG_BED                             _UxGT("Podložka")
#define MSG_CHAMBER                         _UxGT("Komora")
#define MSG_FAN_SPEED                       _UxGT("Rychlost vent.")
#define MSG_EXTRA_FAN_SPEED                 _UxGT("Rychlost ex. vent.")
#define MSG_FLOW                            _UxGT("Průtok")
#define MSG_CONTROL                         _UxGT("Ovládaní")
#define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Min")
#define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Max")
#define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Fakt")
#define MSG_AUTOTEMP                        _UxGT("Autoteplota")
#define MSG_LCD_ON                          _UxGT("Zap")
#define MSG_LCD_OFF                         _UxGT("Vyp")
#define MSG_PID_P                           _UxGT("PID-P")
#define MSG_PID_I                           _UxGT("PID-I")
#define MSG_PID_D                           _UxGT("PID-D")
#define MSG_PID_C                           _UxGT("PID-C")
#define MSG_SELECT                          _UxGT("Vybrat")
#define MSG_ACC                             _UxGT("Zrychl")
#define MSG_JERK                            _UxGT("Jerk")
#if IS_KINEMATIC
  #define MSG_VA_JERK                       _UxGT("Va-jerk")
  #define MSG_VB_JERK                       _UxGT("Vb-jerk")
  #define MSG_VC_JERK                       _UxGT("Vc-jerk")
#else
  #define MSG_VA_JERK                       _UxGT("Vx-jerk")
  #define MSG_VB_JERK                       _UxGT("Vy-jerk")
  #define MSG_VC_JERK                       _UxGT("Vz-jerk")
#endif
#define MSG_VE_JERK                         _UxGT("Ve-jerk")
#define MSG_JUNCTION_DEVIATION              _UxGT("Odchylka spoje")
#define MSG_VELOCITY                        _UxGT("Rychlost")
#define MSG_VMAX                            _UxGT("Vmax ")
#define MSG_VMIN                            _UxGT("Vmin")
#define MSG_VTRAV_MIN                       _UxGT("VTrav min")
#define MSG_ACCELERATION                    _UxGT("Akcelerace")
#define MSG_AMAX                            _UxGT("Amax ")
#define MSG_A_RETRACT                       _UxGT("A-retrakt")
#define MSG_A_TRAVEL                        _UxGT("A-přejezd")
#define MSG_STEPS_PER_MM                    _UxGT("Kroků/mm")
#if IS_KINEMATIC
  #define MSG_ASTEPS                        _UxGT("Akroků/mm")
  #define MSG_BSTEPS                        _UxGT("Bkroků/mm")
  #define MSG_CSTEPS                        _UxGT("Ckroků/mm")
#else
  #define MSG_ASTEPS                        _UxGT("Xkroků/mm")
  #define MSG_BSTEPS                        _UxGT("Ykroků/mm")
  #define MSG_CSTEPS                        _UxGT("Zkroků/mm")
#endif
#define MSG_ESTEPS                          _UxGT("Ekroků/mm")
#define MSG_E1STEPS                         _UxGT("E1kroků/mm")
#define MSG_E2STEPS                         _UxGT("E2kroků/mm")
#define MSG_E3STEPS                         _UxGT("E3kroků/mm")
#define MSG_E4STEPS                         _UxGT("E4kroků/mm")
#define MSG_E5STEPS                         _UxGT("E5kroků/mm")
#define MSG_E6STEPS                         _UxGT("E6kroků/mm")
#define MSG_TEMPERATURE                     _UxGT("Teplota")
#define MSG_MOTION                          _UxGT("Pohyb")
#define MSG_FILAMENT                        _UxGT("Filament")
#define MSG_VOLUMETRIC_ENABLED              _UxGT("E na mm3")
#define MSG_FILAMENT_DIAM                   _UxGT("Fil. Prum.")
#define MSG_FILAMENT_UNLOAD                 _UxGT("Vysunout mm")
#define MSG_FILAMENT_LOAD                   _UxGT("Zavést mm")
#define MSG_ADVANCE_K                       _UxGT("K pro posun")
#define MSG_CONTRAST                        _UxGT("Kontrast LCD")
#define MSG_STORE_EEPROM                    _UxGT("Uložit nastavení")
#define MSG_LOAD_EEPROM                     _UxGT("Načíst nastavení")
#define MSG_RESTORE_FAILSAFE                _UxGT("Obnovit výchozí")
#define MSG_INIT_EEPROM                     _UxGT("Inic. EEPROM")
#define MSG_MEDIA_UPDATE                    _UxGT("Aktualizace z SD")
#define MSG_RESET_PRINTER                   _UxGT("Reset tiskárny")
#define MSG_REFRESH                         _UxGT("Obnovit")
#define MSG_WATCH                           _UxGT("Info obrazovka")
#define MSG_PREPARE                         _UxGT("Připrava tisku")
#define MSG_TUNE                            _UxGT("Doladění tisku")
#define MSG_START_PRINT                     _UxGT("Spustit tisk")
#define MSG_BUTTON_PRINT                    _UxGT("Tisk")
#define MSG_BUTTON_CANCEL                   _UxGT("Zrušit")
#define MSG_PAUSE_PRINT                     _UxGT("Pozastavit tisk")
#define MSG_RESUME_PRINT                    _UxGT("Obnovit tisk")
#define MSG_STOP_PRINT                      _UxGT("Zastavit tisk")
#define MSG_OUTAGE_RECOVERY                 _UxGT("Obnova výpadku")
#define MSG_MEDIA_MENU                      _UxGT("Tisknout z SD")
#define MSG_NO_MEDIA                        _UxGT("Žádná SD karta")
#define MSG_DWELL                           _UxGT("Uspáno...")
#define MSG_USERWAIT                        _UxGT("Čekání na uživ...")
#define MSG_PRINT_PAUSED                    _UxGT("Tisk pozastaven")
#define MSG_PRINTING                        _UxGT("Tisknu...")
#define MSG_PRINT_ABORTED                   _UxGT("Tisk zrušen")
#define MSG_NO_MOVE                         _UxGT("Žádný pohyb.")
#define MSG_KILLED                          _UxGT("PŘERUSENO. ")
#define MSG_STOPPED                         _UxGT("ZASTAVENO. ")
#define MSG_CONTROL_RETRACT                 _UxGT("Retrakt mm")
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("Výměna Re.mm")
#define MSG_CONTROL_RETRACTF                _UxGT("Retraktovat  V")
#define MSG_CONTROL_RETRACT_ZHOP            _UxGT("Zvednuti Z mm")
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("UnRet mm")
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("S UnRet mm")
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("UnRet  V")
#define MSG_CONTROL_RETRACT_RECOVER_SWAPF   _UxGT("S UnRet V")
#define MSG_AUTORETRACT                     _UxGT("AutoRetr.")
#define MSG_FILAMENT_SWAP_LENGTH            _UxGT("Délka retrakce")
#define MSG_TOOL_CHANGE                     _UxGT("Výměna nástroje")
#define MSG_TOOL_CHANGE_ZLIFT               _UxGT("Zdvih Z")
#define MSG_SINGLENOZZLE_PRIME_SPD          _UxGT("Rychlost primár.")
#define MSG_SINGLENOZZLE_RETRACT_SPD        _UxGT("Rychlost retrak.")
#define MSG_NOZZLE_STANDBY                  _UxGT("Tryska standby")
#define MSG_FILAMENTCHANGE                  _UxGT("Vyměnit filament")
#define MSG_FILAMENTLOAD                    _UxGT("Zavést filament")
#define MSG_FILAMENTUNLOAD                  _UxGT("Vysunout filament")
#define MSG_FILAMENTUNLOAD_ALL              _UxGT("Vysunout vše")

#define MSG_INIT_MEDIA                      _UxGT("Načíst SD kartu")
#define MSG_CHANGE_MEDIA                    _UxGT("Vyměnit SD kartu")
#define MSG_ZPROBE_OUT                      _UxGT("Sonda Z mimo podl")
#define MSG_SKEW_FACTOR                     _UxGT("Faktor zkosení")
#define MSG_BLTOUCH                         _UxGT("BLTouch")
#define MSG_BLTOUCH_SELFTEST                _UxGT("BLTouch self-test")
#define MSG_BLTOUCH_RESET                   _UxGT("BLTouch reset")
#define MSG_BLTOUCH_DEPLOY                  _UxGT("BLTouch vysunout")
#define MSG_BLTOUCH_SW_MODE                 _UxGT("SW výsun BLTouch")
#define MSG_BLTOUCH_5V_MODE                 _UxGT("BLTouch 5V režim")
#define MSG_BLTOUCH_OD_MODE                 _UxGT("BLTouch OD režim")
#define MSG_BLTOUCH_STOW                    _UxGT("BLTouch zasunout")
#define MSG_MANUAL_DEPLOY                   _UxGT("Vysunout Z-sondu")
#define MSG_MANUAL_STOW                     _UxGT("Zasunout Z-sondu")
#define MSG_HOME                            _UxGT("Domů")  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           _UxGT("první")
#define MSG_zprobe_zoffset                  _UxGT("Z ofset")
#define MSG_BABYSTEP_X                      _UxGT("Babystep X")
#define MSG_BABYSTEP_Y                      _UxGT("Babystep Y")
#define MSG_BABYSTEP_Z                      _UxGT("Babystep Z")
#define MSG_BABYSTEP_TOTAL                  _UxGT("Celkem")
#define MSG_ENDSTOP_ABORT                   _UxGT("Endstop abort")
#define MSG_HEATING_FAILED_LCD              _UxGT("Chyba zahřívání")
#define MSG_HEATING_FAILED_LCD_BED          _UxGT("Chyba zahř.podl.")
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("REDUND. TEPLOTA")
#define MSG_THERMAL_RUNAWAY                 _UxGT("TEPLOTNÍ ÚNIK")
#define MSG_THERMAL_RUNAWAY_BED             _UxGT("TEPL. ÚNIK PODL.")
#define MSG_ERR_MAXTEMP                     _UxGT("VYSOKÁ TEPLOTA")
#define MSG_ERR_MINTEMP                     _UxGT("NÍZKA TEPLOTA")
#define MSG_ERR_MAXTEMP_BED                 _UxGT("VYS. TEPL. PODL.")
#define MSG_ERR_MINTEMP_BED                 _UxGT("NÍZ. TEPL. PODL.")
#define MSG_ERR_MAXTEMP_CHAMBER             _UxGT("Err: MAXTEMP KOMORA")
#define MSG_ERR_MINTEMP_CHAMBER             _UxGT("Err: MINTEMP KOMORA")
#define MSG_ERR_Z_HOMING                    MSG_HOME _UxGT(" ") MSG_X MSG_Y _UxGT(" ") MSG_FIRST
#define MSG_HALTED                          _UxGT("TISK. ZASTAVENA")
#define MSG_PLEASE_RESET                    _UxGT("Proveďte reset")
#define MSG_SHORT_DAY                       _UxGT("d")
#define MSG_SHORT_HOUR                      _UxGT("h")
#define MSG_SHORT_MINUTE                    _UxGT("m")
#define MSG_HEATING                         _UxGT("Zahřívání...")
#define MSG_COOLING                         _UxGT("Chlazení...")
#if LCD_WIDTH >= 20
  #define MSG_BED_HEATING                   _UxGT("Zahřívání podložky")
#else
  #define MSG_BED_HEATING                   _UxGT("Zahřívání podl.")
#endif
#if LCD_WIDTH >= 20
  #define MSG_BED_COOLING                   _UxGT("Chlazení podložky")
#else
  #define MSG_BED_COOLING                   _UxGT("Chlazení podl.")
#endif
#define MSG_DELTA_CALIBRATE                 _UxGT("Delta Kalibrace")
#define MSG_DELTA_CALIBRATE_X               _UxGT("Kalibrovat X")
#define MSG_DELTA_CALIBRATE_Y               _UxGT("Kalibrovat Y")
#define MSG_DELTA_CALIBRATE_Z               _UxGT("Kalibrovat Z")
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("Kalibrovat Střed")
#define MSG_DELTA_SETTINGS                  _UxGT("Delta nastavení")
#define MSG_DELTA_AUTO_CALIBRATE            _UxGT("Autokalibrace")
#define MSG_DELTA_HEIGHT_CALIBRATE          _UxGT("Nast.výšku delty")
#define MSG_DELTA_Z_OFFSET_CALIBRATE        _UxGT("Nast. Z-ofset")
#define MSG_DELTA_DIAG_ROD                  _UxGT("Diag rameno")
#define MSG_DELTA_HEIGHT                    _UxGT("Výška")
#define MSG_DELTA_RADIUS                    _UxGT("Poloměr")
#define MSG_INFO_MENU                       _UxGT("O tiskárně")
#define MSG_INFO_PRINTER_MENU               _UxGT("Info o tiskárně")
#define MSG_3POINT_LEVELING                 _UxGT("3-bodové rovnání")
#define MSG_LINEAR_LEVELING                 _UxGT("Lineárni rovnání")
#define MSG_BILINEAR_LEVELING               _UxGT("Bilineární rovnání")
#define MSG_UBL_LEVELING                    _UxGT("Unified Bed Leveling")
#define MSG_MESH_LEVELING                   _UxGT("Mřížkové rovnání")
#define MSG_INFO_STATS_MENU                 _UxGT("Statistika")
#define MSG_INFO_BOARD_MENU                 _UxGT("Info o desce")
#define MSG_INFO_THERMISTOR_MENU            _UxGT("Termistory")
#define MSG_INFO_EXTRUDERS                  _UxGT("Extrudéry")
#define MSG_INFO_BAUDRATE                   _UxGT("Rychlost")
#define MSG_INFO_PROTOCOL                   _UxGT("Protokol")
#define MSG_CASE_LIGHT                      _UxGT("Osvětlení")
#define MSG_CASE_LIGHT_BRIGHTNESS           _UxGT("Jas světla")

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              _UxGT("Počet tisků")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Dokončeno")
  #define MSG_INFO_PRINT_TIME               _UxGT("Celkový čas")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("Nejdelší tisk")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Celkem vytlačeno")
#else
  #define MSG_INFO_PRINT_COUNT              _UxGT("Tisky")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Hotovo")
  #define MSG_INFO_PRINT_TIME               _UxGT("Čas")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("Nejdelší")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Vytlačeno")
#endif

#define MSG_INFO_MIN_TEMP                   _UxGT("Teplota min")
#define MSG_INFO_MAX_TEMP                   _UxGT("Teplota max")
#define MSG_INFO_PSU                        _UxGT("Nap. zdroj")
#define MSG_DRIVE_STRENGTH                  _UxGT("Buzení motorů")
#define MSG_DAC_PERCENT                     _UxGT("Motor %")
#define MSG_DAC_EEPROM_WRITE                _UxGT("Uložit do EEPROM")
#define MSG_FILAMENT_CHANGE_HEADER_PAUSE    _UxGT("TISK POZASTAVEN")
#define MSG_FILAMENT_CHANGE_HEADER_LOAD     _UxGT("ZAVEDENÍ FILAMENTU")
#define MSG_FILAMENT_CHANGE_HEADER_UNLOAD   _UxGT("VYSUNUTÍ FILAMENTU")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("MOŽNOSTI OBNOVENÍ:")
#define MSG_FILAMENT_CHANGE_OPTION_PURGE    _UxGT("Vytlačit víc")
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("Obnovit tisk")
#define MSG_FILAMENT_CHANGE_NOZZLE          _UxGT("  Tryska: ")
#define MSG_RUNOUT_SENSOR                   _UxGT("Senzor filamentu")
#define MSG_ERR_HOMING_FAILED               _UxGT("Parkování selhalo")
#define MSG_ERR_PROBING_FAILED              _UxGT("Kalibrace selhala")
#define MSG_M600_TOO_COLD                   _UxGT("M600: Moc studený")

#define MSG_MMU2_FILAMENT_CHANGE_HEADER     _UxGT("VÝMĚNA FILAMENTU")
#define MSG_MMU2_CHOOSE_FILAMENT_HEADER     _UxGT("VYBERTE FILAMENT")
#define MSG_MMU2_MENU                       _UxGT("MMU")
#define MSG_MMU2_WRONG_FIRMWARE             _UxGT("Aktual. MMU firmware!")
#define MSG_MMU2_NOT_RESPONDING             _UxGT("MMU potř. pozornost.")
#define MSG_MMU2_RESUME                     _UxGT("Obnovit tisk")
#define MSG_MMU2_RESUMING                   _UxGT("Obnovování...")
#define MSG_MMU2_LOAD_FILAMENT              _UxGT("Zavést filament")
#define MSG_MMU2_LOAD_ALL                   _UxGT("Zavést všechny")
#define MSG_MMU2_LOAD_TO_NOZZLE             _UxGT("Zavést do trysky")
#define MSG_MMU2_EJECT_FILAMENT             _UxGT("Vysunout filament")
#define MSG_MMU2_EJECT_FILAMENT0            _UxGT("Vysun. filament 1")
#define MSG_MMU2_EJECT_FILAMENT1            _UxGT("Vysun. filament 2")
#define MSG_MMU2_EJECT_FILAMENT2            _UxGT("Vysun. filament 3")
#define MSG_MMU2_EJECT_FILAMENT3            _UxGT("Vysun. filament 4")
#define MSG_MMU2_EJECT_FILAMENT4            _UxGT("Vysun. filament 5")
#define MSG_MMU2_UNLOAD_FILAMENT            _UxGT("Vytáhnout filament")
#define MSG_MMU2_LOADING_FILAMENT           _UxGT("Zavádění fil. %i...")
#define MSG_MMU2_EJECTING_FILAMENT          _UxGT("Vytahování fil. ...")
#define MSG_MMU2_UNLOADING_FILAMENT         _UxGT("Vysouvání fil....")
#define MSG_MMU2_ALL                        _UxGT("Všechny")
#define MSG_MMU2_FILAMENT0                  _UxGT("Filament 1")
#define MSG_MMU2_FILAMENT1                  _UxGT("Filament 2")
#define MSG_MMU2_FILAMENT2                  _UxGT("Filament 3")
#define MSG_MMU2_FILAMENT3                  _UxGT("Filament 4")
#define MSG_MMU2_FILAMENT4                  _UxGT("Filament 5")
#define MSG_MMU2_RESET                      _UxGT("Resetovat MMU")
#define MSG_MMU2_RESETTING                  _UxGT("Resetování MMU...")
#define MSG_MMU2_EJECT_RECOVER              _UxGT("Vytáhněte, klikněte")

#define MSG_MIX                             _UxGT("Mix")
#define MSG_MIX_COMPONENT                   _UxGT("Komponenta")
#define MSG_MIXER                           _UxGT("Mixér")
#define MSG_GRADIENT                        _UxGT("Přechod")
#define MSG_FULL_GRADIENT                   _UxGT("Celý přechod")
#define MSG_TOGGLE_MIX                      _UxGT("Přepnout mix")
#define MSG_CYCLE_MIX                       _UxGT("Střídat mix")
#define MSG_GRADIENT_MIX                    _UxGT("Přechod mix")
#define MSG_REVERSE_GRADIENT                _UxGT("Opačný přechod")
#if LCD_WIDTH >= 20
  #define MSG_ACTIVE_VTOOL                    _UxGT("Aktivní V-nástroj")
  #define MSG_START_VTOOL                     _UxGT("Spustit V-nástroj")
  #define MSG_END_VTOOL                       _UxGT("Ukončit V-nástroj")
  #define MSG_GRADIENT_ALIAS                  _UxGT("Alias V-nástroje")
  #define MSG_RESET_VTOOLS                    _UxGT("Resetovat V-nástroj")
  #define MSG_COMMIT_VTOOL                    _UxGT("Uložit V-nástroj mix")
  #define MSG_VTOOLS_RESET                    _UxGT("V-nástroj resetovat")
#else
  #define MSG_ACTIVE_VTOOL                    _UxGT("Aktivní V-nástr.")
  #define MSG_START_VTOOL                     _UxGT("Spustit V-nástr.")
  #define MSG_END_VTOOL                       _UxGT("Ukončit V-nástr.")
  #define MSG_GRADIENT_ALIAS                  _UxGT("Alias V-nástr.")
  #define MSG_RESET_VTOOLS                    _UxGT("Reset. V-nástr.")
  #define MSG_COMMIT_VTOOL                    _UxGT("Uložit V-nás. mix")
  #define MSG_VTOOLS_RESET                    _UxGT("V-nástr. reset.")
#endif
#define MSG_START_Z                         _UxGT("Počáteční Z")
#define MSG_END_Z                           _UxGT("  Koncové Z")
#define MSG_BRICKOUT                        _UxGT("Brickout")
#define MSG_INVADERS                        _UxGT("Invaders")
#define MSG_SNAKE                           _UxGT("Sn4k3")
#define MSG_MAZE                            _UxGT("Bludiště")

#define MSG_EXPECTED_PRINTER                _UxGT("Nesprávná tiskárna")

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_ADVANCED_PAUSE_WAITING_1      _UxGT("Stikněte tlačítko")
  #define MSG_ADVANCED_PAUSE_WAITING_2      _UxGT("pro obnovení tisku")
  #define MSG_PAUSE_PRINT_INIT_1            _UxGT("Parkování...")
  #define MSG_FILAMENT_CHANGE_INIT_1        _UxGT("Čekejte prosím")
  #define MSG_FILAMENT_CHANGE_INIT_2        _UxGT("na zahájení")
  #define MSG_FILAMENT_CHANGE_INIT_3        _UxGT("výměny filamentu")
  #define MSG_FILAMENT_CHANGE_INSERT_1      _UxGT("Vložte filament")
  #define MSG_FILAMENT_CHANGE_INSERT_2      _UxGT("a stiskněte")
  #define MSG_FILAMENT_CHANGE_INSERT_3      _UxGT("tlačítko...")
  #define MSG_FILAMENT_CHANGE_HEAT_1        _UxGT("Klikněte pro")
  #define MSG_FILAMENT_CHANGE_HEAT_2        _UxGT("nahřátí trysky")
  #define MSG_FILAMENT_CHANGE_HEATING_1     _UxGT("Čekejte prosím")
  #define MSG_FILAMENT_CHANGE_HEATING_2     _UxGT("na nahřátí tr.")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      _UxGT("Čekejte prosím")
  #define MSG_FILAMENT_CHANGE_UNLOAD_2      _UxGT("na vysunuti")
  #define MSG_FILAMENT_CHANGE_UNLOAD_3      _UxGT("filamentu")
  #define MSG_FILAMENT_CHANGE_LOAD_1        _UxGT("Čekejte prosím")
  #define MSG_FILAMENT_CHANGE_LOAD_2        _UxGT("na zavedení")
  #define MSG_FILAMENT_CHANGE_LOAD_3        _UxGT("filamentu")
  #define MSG_FILAMENT_CHANGE_PURGE_1       _UxGT("Vyčkejte na")
  #define MSG_FILAMENT_CHANGE_PURGE_2       _UxGT("vytlačení")
  #define MSG_FILAMENT_CHANGE_CONT_PURGE_1  _UxGT("Klikněte pro")
  #define MSG_FILAMENT_CHANGE_CONT_PURGE_2  _UxGT("ukončení")
  #define MSG_FILAMENT_CHANGE_CONT_PURGE_3  _UxGT("vytlačování")
  #define MSG_FILAMENT_CHANGE_RESUME_1      _UxGT("Čekejte prosím")
  #define MSG_FILAMENT_CHANGE_RESUME_2      _UxGT("na pokračování")
  #define MSG_FILAMENT_CHANGE_RESUME_3      _UxGT("tisku")
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_ADVANCED_PAUSE_WAITING_1      _UxGT("Stikněte tlač.")
  #define MSG_ADVANCED_PAUSE_WAITING_2      _UxGT("pro obnovení")
  #define MSG_PAUSE_PRINT_INIT_1            _UxGT("Parkování...")
  #define MSG_FILAMENT_CHANGE_INIT_1        _UxGT("Čekejte...")
  #define MSG_FILAMENT_CHANGE_INSERT_1      _UxGT("Vložte, klikněte")
  #define MSG_FILAMENT_CHANGE_HEAT_1        _UxGT("Klikněte pro")
  #define MSG_FILAMENT_CHANGE_HEAT_2        _UxGT("nahřátí")
  #define MSG_FILAMENT_CHANGE_HEATING_1     _UxGT("Nahřívání...")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      _UxGT("Vysouvání...")
  #define MSG_FILAMENT_CHANGE_LOAD_1        _UxGT("Zavádění...")
  #define MSG_FILAMENT_CHANGE_PURGE_1       _UxGT("Vytlačování...")
  #define MSG_FILAMENT_CHANGE_CONT_PURGE_1  _UxGT("Klikněte pro")
  #define MSG_FILAMENT_CHANGE_CONT_PURGE_2  _UxGT("ukončení")
  #define MSG_FILAMENT_CHANGE_RESUME_1      _UxGT("Pokračování...")
#endif // LCD_HEIGHT < 4

#define MSG_TMC_DRIVERS                     _UxGT("TMC budiče")
#define MSG_TMC_CURRENT                     _UxGT("Proud budičů")
#define MSG_TMC_HYBRID_THRS                 _UxGT("Hybridní práh")
#define MSG_TMC_HOMING_THRS                 _UxGT("Domů bez senzorů")
#define MSG_TMC_STEPPING_MODE               _UxGT("Režim kroků")
#define MSG_TMC_STEALTH_ENABLED             _UxGT("StealthChop povolen")
#define MSG_SERVICE_RESET                   _UxGT("Reset")
#define MSG_SERVICE_IN                      _UxGT(" za:")
#define MSG_BACKLASH                        _UxGT("Vůle")
#define MSG_BACKLASH_CORRECTION             _UxGT("Korekce")
#define MSG_BACKLASH_SMOOTHING              _UxGT("Vyhlazení")
