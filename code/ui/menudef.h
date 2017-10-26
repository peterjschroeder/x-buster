/*
===========================================================================
Copyright (C) 1999-2005 Id Software, Inc.

This file is part of Quake III Arena source code.

Quake III Arena source code is free software; you can redistribute it
and/or modify it under the terms of the GNU General Public License as
published by the Free Software Foundation; either version 2 of the License,
or (at your option) any later version.

Quake III Arena source code is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Foobar; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
===========================================================================
*/

#define ITEM_TYPE_TEXT 0                  // simple text
#define ITEM_TYPE_BUTTON 1                // button, basically text with a border
#define ITEM_TYPE_RADIOBUTTON 2           // toggle button, may be grouped
#define ITEM_TYPE_CHECKBOX 3              // check box
#define ITEM_TYPE_EDITFIELD 4             // editable text, associated with a cvar
#define ITEM_TYPE_COMBO 5                 // drop down list
#define ITEM_TYPE_LISTBOX 6               // scrollable list
#define ITEM_TYPE_MODEL 7                 // model
#define ITEM_TYPE_OWNERDRAW 8             // owner draw, name specs what it is
#define ITEM_TYPE_NUMERICFIELD 9          // editable text, associated with a cvar
#define ITEM_TYPE_SLIDER 10               // mouse speed, volume, etc.
#define ITEM_TYPE_YESNO 11                // yes no cvar setting
#define ITEM_TYPE_MULTI 12                // multiple list setting, enumerated
#define ITEM_TYPE_BIND 13		              // multiple list setting, enumerated

#define ITEM_ALIGN_LEFT 0                 // left alignment
#define ITEM_ALIGN_CENTER 1               // center alignment
#define ITEM_ALIGN_RIGHT 2                // right alignment

#define ITEM_TEXTSTYLE_NORMAL 0           // normal text
#define ITEM_TEXTSTYLE_BLINK 1            // fast blinking
#define ITEM_TEXTSTYLE_PULSE 2            // slow pulsing
#define ITEM_TEXTSTYLE_SHADOWED 3         // drop shadow ( need a color for this )
#define ITEM_TEXTSTYLE_OUTLINED 4         // drop shadow ( need a color for this )
#define ITEM_TEXTSTYLE_OUTLINESHADOWED 5  // drop shadow ( need a color for this )
#define ITEM_TEXTSTYLE_SHADOWEDMORE 6         // drop shadow ( need a color for this )
// Changed RD
#define ITEM_TEXTSTYLE_NEON 7
// end changed RD

#define WINDOW_BORDER_NONE 0              // no border
#define WINDOW_BORDER_FULL 1              // full border based on border color ( single pixel )
#define WINDOW_BORDER_HORZ 2              // horizontal borders only
#define WINDOW_BORDER_VERT 3              // vertical borders only
#define WINDOW_BORDER_KCGRADIENT 4        // horizontal border using the gradient bars

#define WINDOW_STYLE_EMPTY 0              // no background
#define WINDOW_STYLE_FILLED 1             // filled with background color
#define WINDOW_STYLE_GRADIENT 2           // gradient bar based on background color
#define WINDOW_STYLE_SHADER   3           // gradient bar based on background color
#define WINDOW_STYLE_TEAMCOLOR 4          // team color
#define WINDOW_STYLE_CINEMATIC 5          // cinematic

#define MENU_TRUE 1                       // uh.. true
#define MENU_FALSE 0                      // and false

#define HUD_VERTICAL				0x00
#define HUD_HORIZONTAL				0x01

// list box element types
#define LISTBOX_TEXT  0x00
#define LISTBOX_IMAGE 0x01

// list feeders
#define FEEDER_HEADS						0x00			// model heads
#define FEEDER_MAPS							0x01			// text maps based on game type
#define FEEDER_SERVERS						0x02			// servers
#define FEEDER_CLANS						0x03			// clan names
#define FEEDER_ALLMAPS						0x04			// all maps available, in graphic format
#define FEEDER_REDTEAM_LIST					0x05			// red team members
#define FEEDER_BLUETEAM_LIST				0x06			// blue team members
#define FEEDER_PLAYER_LIST					0x07			// players
#define FEEDER_TEAM_LIST					0x08			// team members for team voting
#define FEEDER_MODS							0x09			// team members for team voting
#define FEEDER_DEMOS 						0x0a			// team members for team voting
#define FEEDER_SCOREBOARD					0x0b			// team members for team voting
#define FEEDER_Q3HEADS		 				0x0c			// model heads
#define FEEDER_SERVERSTATUS					0x0d			// server status
#define FEEDER_FINDPLAYER					0x0e			// find player
#define FEEDER_CINEMATICS					0x0f			// cinematics
// Changed RD
#define FEEDER_SAVE							0x10			// save games

// Bind Primary or Alternate
#define BIND_BOTH							0x00
#define BIND_PRIMARY						0x01
#define BIND_ALTERNATE						0x02
// end changed RD

// display flags
#define CG_SHOW_BLUE_TEAM_HAS_REDFLAG     0x00000001
#define CG_SHOW_RED_TEAM_HAS_BLUEFLAG     0x00000002
#define CG_SHOW_ANYTEAMGAME               0x00000004
#define CG_SHOW_HARVESTER                 0x00000008
#define CG_SHOW_ONEFLAG                   0x00000010
#define CG_SHOW_CTF                       0x00000020
#define CG_SHOW_OBELISK                   0x00000040
#define CG_SHOW_HEALTHCRITICAL            0x00000080
#define CG_SHOW_SINGLEPLAYER              0x00000100
#define CG_SHOW_TOURNAMENT                0x00000200
#define CG_SHOW_DURINGINCOMINGVOICE       0x00000400
#define CG_SHOW_IF_PLAYER_HAS_FLAG				0x00000800
#define CG_SHOW_LANPLAYONLY								0x00001000
#define CG_SHOW_MINED											0x00002000
#define CG_SHOW_HEALTHOK			            0x00004000
#define CG_SHOW_TEAMINFO			            0x00008000
#define CG_SHOW_NOTEAMINFO		            0x00010000
#define CG_SHOW_OTHERTEAMHASFLAG          0x00020000
#define CG_SHOW_YOURTEAMHASENEMYFLAG      0x00040000
#define CG_SHOW_ANYNONTEAMGAME            0x00080000
#define CG_SHOW_2DONLY										0x10000000


#define UI_SHOW_LEADER				            0x00000001
#define UI_SHOW_NOTLEADER			            0x00000002
#define UI_SHOW_FAVORITESERVERS						0x00000004
#define UI_SHOW_ANYNONTEAMGAME						0x00000008
#define UI_SHOW_ANYTEAMGAME								0x00000010
#define UI_SHOW_NEWHIGHSCORE							0x00000020
#define UI_SHOW_DEMOAVAILABLE							0x00000040
#define UI_SHOW_NEWBESTTIME								0x00000080
#define UI_SHOW_FFA												0x00000100
#define UI_SHOW_NOTFFA										0x00000200
#define UI_SHOW_NETANYNONTEAMGAME	 				0x00000400
#define UI_SHOW_NETANYTEAMGAME		 				0x00000800
#define UI_SHOW_NOTFAVORITESERVERS				0x00001000
// Changed RD
#define UI_BIND2CLICK	0x01000000
// end changed RD





// owner draw types
// ideally these should be done outside of this file but
// this makes it much easier for the macro expansion to
// convert them for the designers ( from the .menu files )
#define CG_OWNERDRAW_BASE 1
#define CG_PLAYER_ARMOR_ICON 1
#define CG_PLAYER_ARMOR_VALUE 2
#define CG_PLAYER_HEAD 3
#define CG_PLAYER_HEALTH 4
#define CG_PLAYER_HEALTH_BAR 5
#define CG_PLAYER_AMMO_BAR 6
#define CG_PLAYER_AMMO_ICON 7
#define CG_PLAYER_AMMO_VALUE 8
#define CG_SELECTEDPLAYER_HEAD 9
#define CG_SELECTEDPLAYER_NAME 10
#define CG_SELECTEDPLAYER_LOCATION 11
#define CG_SELECTEDPLAYER_STATUS 12
#define CG_SELECTEDPLAYER_WEAPON 13
#define CG_SELECTEDPLAYER_POWERUP 14

#define CG_FLAGCARRIER_HEAD 15
#define CG_FLAGCARRIER_NAME 16
#define CG_FLAGCARRIER_LOCATION 17
#define CG_FLAGCARRIER_STATUS 18
#define CG_FLAGCARRIER_WEAPON 19
#define CG_FLAGCARRIER_POWERUP 20

#define CG_PLAYER_ITEM 21
#define CG_PLAYER_SCORE 22

#define CG_BLUE_FLAGHEAD 23
#define CG_BLUE_FLAGSTATUS 24
#define CG_BLUE_FLAGNAME 25
#define CG_RED_FLAGHEAD 26
#define CG_RED_FLAGSTATUS 27
#define CG_RED_FLAGNAME 28

#define CG_BLUE_SCORE 29
#define CG_RED_SCORE 30
#define CG_RED_NAME 31
#define CG_BLUE_NAME 32
#define CG_HARVESTER_SKULLS 33					// only shows in harvester
#define CG_ONEFLAG_STATUS 34						// only shows in one flag
#define CG_PLAYER_LOCATION 35
#define CG_TEAM_COLOR 36
#define CG_CTF_POWERUP 37

#define CG_AREA_POWERUP	38
#define CG_AREA_LAGOMETER	39            // painted with old system
#define CG_PLAYER_HASFLAG 40
#define CG_GAME_TYPE 41                 // not done

#define CG_SELECTEDPLAYER_ARMOR 42
#define CG_SELECTEDPLAYER_HEALTH 43
#define CG_PLAYER_STATUS 44
#define CG_FRAGGED_MSG 45               // painted with old system
#define CG_PROXMINED_MSG 46             // painted with old system
#define CG_AREA_FPSINFO 47              // painted with old system
#define CG_AREA_SYSTEMCHAT 48           // painted with old system
#define CG_AREA_TEAMCHAT 49             // painted with old system
#define CG_AREA_CHAT 50                 // painted with old system
#define CG_GAME_STATUS 51
#define CG_KILLER 52
#define CG_PLAYER_ARMOR_ICON2D 53
#define CG_PLAYER_AMMO_ICON2D 54
#define CG_ACCURACY 55
#define CG_ASSISTS 56
#define CG_DEFEND 57
#define CG_EXCELLENT 58
#define CG_IMPRESSIVE 59
#define CG_PERFECT 60
#define CG_GAUNTLET 61
#define CG_SPECTATORS 62
#define CG_TEAMINFO 63
#define CG_VOICE_HEAD 64
#define CG_VOICE_NAME 65
#define CG_PLAYER_HASFLAG2D 66
#define CG_HARVESTER_SKULLS2D 67					// only shows in harvester
#define CG_CAPFRAGLIMIT 68
#define CG_1STPLACE 69
#define CG_2NDPLACE 70
#define CG_CAPTURES 71
#define CG_UGCHIPS 72
#define CG_PLAYER_SUBTANK         73
#define CG_PLAYER_SUBTANK_BAR     74

// HUD extensions
#define CG_LOAD_LEVELSHOT         75
#define CG_LOAD_MEDIA             76
#define CG_LOAD_MEDIA_LABEL       77
#define CG_LOAD_LEVELNAME         78
#define CG_LOAD_MOTD              79
#define CG_LOAD_HOSTNAME          80
#define CG_LOAD_SOUND             81
#define CG_LOAD_SOUND_LABEL       82
#define CG_LOAD_GRAPHIC           83
#define CG_LOAD_GRAPHIC_LABEL     84
// end HUD extensions

// Hud groups
#define CG_PLAYER_CROSSHAIRNAMES  90
#define CG_FPS                    91
#define CG_FPS_FIXED              92
#define CG_TIMER                  93
#define CG_TIMER_MINS             94
#define CG_TIMER_SECS             95
#define CG_SNAPSHOT               96
#define CG_LAGOMETER              97
#define CG_CONSOLE                98
#define CG_WEAPONSELECT           99
#define CG_CENTERPRINT           100
// end Hud groups

#define UI_OWNERDRAW_BASE 200
#define UI_HANDICAP 200
#define UI_EFFECTS 201
#define UI_PLAYERMODEL 202
#define UI_CLANNAME 203
#define UI_CLANLOGO 204
#define UI_GAMETYPE 205
#define UI_MAPPREVIEW 206
#define UI_SKILL 207
#define UI_BLUETEAMNAME 208
#define UI_REDTEAMNAME 209
#define UI_BLUETEAM1 210
#define UI_BLUETEAM2 211
#define UI_BLUETEAM3 212
#define UI_BLUETEAM4 213
#define UI_BLUETEAM5 214
#define UI_REDTEAM1 215
#define UI_REDTEAM2 216
#define UI_REDTEAM3 217
#define UI_REDTEAM4 218
#define UI_REDTEAM5 219
#define UI_NETSOURCE 220
#define UI_NETMAPPREVIEW 221
#define UI_NETFILTER 222
#define UI_TIER 223
#define UI_OPPONENTMODEL 224
#define UI_TIERMAP1 225
#define UI_TIERMAP2 226
#define UI_TIERMAP3 227
#define UI_PLAYERLOGO 228
#define UI_OPPONENTLOGO 229
#define UI_PLAYERLOGO_METAL 230
#define UI_OPPONENTLOGO_METAL 231
#define UI_PLAYERLOGO_NAME 232
#define UI_OPPONENTLOGO_NAME 233
#define UI_TIER_MAPNAME 234
#define UI_TIER_GAMETYPE 235
#define UI_ALLMAPS_SELECTION 236
#define UI_OPPONENT_NAME 237
#define UI_VOTE_KICK 238
#define UI_BOTNAME 239
#define UI_BOTSKILL 240
#define UI_REDBLUE 241
#define UI_CROSSHAIR 242
#define UI_SELECTEDPLAYER 243
#define UI_MAPCINEMATIC 244
#define UI_NETGAMETYPE 245
#define UI_NETMAPCINEMATIC 246
#define UI_SERVERREFRESHDATE 247
#define UI_SERVERMOTD 248
#define UI_GLINFO  249
#define UI_KEYBINDSTATUS 250
#define UI_CLANCINEMATIC 251
#define UI_MAP_TIMETOBEAT 252
#define UI_JOINGAMETYPE 253
#define UI_PREVIEWCINEMATIC 254
#define UI_STARTMAPCINEMATIC 255
#define UI_MAPS_SELECTION 256
#define UI_HEAD1 257
#define UI_HEAD1_DESC 258
#define UI_HEAD2 259
#define UI_HEAD2_DESC 260
#define UI_HEAD3 261
#define UI_HEAD3_DESC 262
#define UI_BACK1 263
#define UI_BACK1_DESC 264
#define UI_BACK2 265
#define UI_BACK2_DESC 266
#define UI_BACK3 267
#define UI_BACK3_DESC 268
#define UI_BODY1 269
#define UI_BODY1_DESC 270
#define UI_BODY2 271
#define UI_BODY2_DESC 272
#define UI_BODY3 273
#define UI_BODY3_DESC 274
#define UI_BUSTER1 275
#define UI_BUSTER1_DESC 276
#define UI_BUSTER2 277
#define UI_BUSTER2_DESC 278
#define UI_BUSTER3 279
#define UI_BUSTER3_DESC 280
#define UI_LEGS1 281
#define UI_LEGS1_DESC 282
#define UI_LEGS2 283
#define UI_LEGS2_DESC 284
#define UI_LEGS3 285
#define UI_LEGS3_DESC 286
#define UI_UGPRICE 287
#define UI_SVOLUME 288


