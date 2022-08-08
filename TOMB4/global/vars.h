#pragma once
#include "types.h"
#include "math_tbls.h"

#define VAR_U_(address, type)			(*(type*)(address))
#define ARRAY_(address, type, length)	(*(type(*)length)(address))

#define lara	VAR_U_(0x0080DFE0, LARA_INFO)
#define lara_item	VAR_U_(0x0080E13C, ITEM_INFO*)
#define mycoll	VAR_U_(0x0080DEC0, COLL_INFO)
#define lara_coll	VAR_U_(0x004AD9C4, COLL_INFO*)
#define input	VAR_U_(0x00535704, long)
#define linput	VAR_U_(0x005358A8, long)
#define inputBusy	VAR_U_(0x00535600, long)
#define GlobalCounter	VAR_U_(0x004BF3FA, short)
#define cdtrack	VAR_U_(0x004AEC00, short)
#define gfCurrentLevel	VAR_U_(0x007FD290, char)
#define gfLevelComplete	VAR_U_(0x007FD2B0, char)
#define dbinput	VAR_U_(0x005358AC, long)
#define cutseq_trig	VAR_U_(0x004BFC7C, long)
#define cutseq_num	VAR_U_(0x004BFC78, long)
#define GLOBAL_enterinventory	VAR_U_(0x004AE068, long)
#define GLOBAL_inventoryitemchosen	VAR_U_(0x004AE06C, long)
#define GLOBAL_lastinvitem	VAR_U_(0x004AE064, long)
#define Gameflow	VAR_U_(0x007FD278, GAMEFLOW*)
#define gfGameMode	VAR_U_(0x004AF451, char)
#define items	VAR_U_(0x007FE28C, ITEM_INFO*)
#define GotLaraSpheres	VAR_U_(0x007F6EDE, char)
#define NumLaraSpheres	VAR_U_(0x007F7100, long)
#define next_item_active	VAR_U_(0x007FD20A, short)
#define next_item_free	VAR_U_(0x007FD208, short)
#define KillEverythingFlag	VAR_U_(0x004BF364, long)
#define wibble	VAR_U_(0x004BF360, long)
#define SplashCount	VAR_U_(0x004BF36C, long)
#define SmokeCountL	VAR_U_(0x00804E68, long)
#define SmokeCountR	VAR_U_(0x00804E6C, long)
#define SmokeWeapon	VAR_U_(0x00804F20, long)
#define GLOBAL_playing_cutseq	VAR_U_(0x004BFC80, long)
#define gfLevelFlags	VAR_U_(0x007FD260, short)
#define CamRot	VAR_U_(0x007E71C0, PHD_VECTOR)
#define health_bar_timer	VAR_U_(0x004BF680, long)
#define GameTimer	VAR_U_(0x007FD258, ulong)
#define next_fx_active	VAR_U_(0x008012F0, short)
#define next_fx_free	VAR_U_(0x008012E8, short)
#define effects	VAR_U_(0x008012E0, FX_INFO*)
#define meshes	VAR_U_(0x00533A80, short**)
#define bones	VAR_U_(0x00533A88, long*)
#define anims	VAR_U_(0x00533A68, ANIM_STRUCT*)
#define cheat_hit_points	VAR_U_(0x0080DEB8, short)
#define savegame	VAR_U_(0x007F76C0, SAVEGAME_INFO)
#define room	VAR_U_(0x00533A64, ROOM_INFO*)
#define phd_winwidth	VAR_U_(0x00753CF8, long)
#define phd_winheight	VAR_U_(0x00753C48, long)
#define phd_mxptr	VAR_U_(0x007E71D8, long*)
#define GlobalAmbient	VAR_U_(0x005C047C, long)
#define DashTimer	VAR_U_(0x0080E13A, short)
#define font_height	VAR_U_(0x007F5050, long)
#define App	VAR_U_(0x00753980, WINAPP)
#define spriteinfo	VAR_U_(0x00533AC4, SPRITESTRUCT*)
#define current_item    VAR_U_(0x005B74B0, ITEM_INFO*)
#define DestVB  VAR_U_(0x00753910, LPDIRECT3DVERTEXBUFFER)
#define f_left   VAR_U_(0x00753CB8, float)
#define f_top   VAR_U_(0x00753CFC, float)
#define f_right   VAR_U_(0x00753C44, float)
#define f_bottom   VAR_U_(0x007540C8, float)
#define clip_left   VAR_U_(0x0052AA38, float)
#define clip_top   VAR_U_(0x0052AA34, float)
#define clip_right   VAR_U_(0x0052AA30, float)
#define clip_bottom   VAR_U_(0x0052A34C, float)
#define bWaterEffect    VAR_U_(0x0052AA3C, long)
#define clipflags   VAR_U_(0x0075397C, short*)
#define textinfo	VAR_U_(0x00533AC0, TEXTURESTRUCT*)
#define GlobalAlpha	VAR_U_(0x004AD7D4, long)
#define level_items	VAR_U_(0x004BF68C, long)
#define FlashFadeR	VAR_U_(0x004BF386, short)
#define FlashFadeG	VAR_U_(0x004BF388, short)
#define FlashFadeB	VAR_U_(0x004BF38A, short)
#define FlashFader	VAR_U_(0x004BF38C, short)
#define aranges	VAR_U_(0x00753BDC, short*)
#define f_mznear	VAR_U_(0x00753C3C, float)
#define f_mzfar	VAR_U_(0x007540CC, float)
#define f_mpersp	VAR_U_(0x00753C40, float)
#define f_zfar	VAR_U_(0x00753C90, float)
#define f_centerx	VAR_U_(0x00753C94, float)
#define f_centery	VAR_U_(0x00753C98, float)
#define f_moneopersp	VAR_U_(0x00753CBC, float)
#define f_persp	VAR_U_(0x00753CC4, float)
#define f_oneopersp	VAR_U_(0x00753C64, float)
#define one	VAR_U_(0x004B4678, float)
#define mone	VAR_U_(0x004B467C, float)
#define f_znear	VAR_U_(0x00753CB4, float)
#define f_perspoznear	VAR_U_(0x00753CA0, float)
#define LfAspectCorrection	VAR_U_(0x007540C4, float)
#define f_mperspoznear	VAR_U_(0x00753D00, float)
#define FogStart	VAR_U_(0x004B4670, float)
#define FogEnd	VAR_U_(0x004B4674, float)
#define water_color_R	VAR_U_(0x004B25D0, long)
#define water_color_G	VAR_U_(0x004B25D4, long)
#define water_color_B	VAR_U_(0x004B25D8, long)
#define current_room	VAR_U_(0x007FDF6C, long)
#define gfUVRotate	VAR_U_(0x007FD2E9, char)
#define trainmappos	VAR_U_(0x007FD2F0, long)
#define gfStringOffset	VAR_U_(0x007FD274, ushort*)
#define gfStringWad	VAR_U_(0x007FD2B8, char*)
#define gfMirrorRoom	VAR_U_(0x007FD250, uchar)
#define gfMirrorZPlane	VAR_U_(0x007FDF64, long)
#define bDoCredits	VAR_U_(0x004BF669, char)
#define MusicVolume	VAR_U_(0x004B38AC, long)
#define SFXVolume	VAR_U_(0x004B38B0, long)
#define SoundQuality	VAR_U_(0x004B38B4, long)
#define phd_centerx	VAR_U_(0x00753C4C, long)
#define phd_centery	VAR_U_(0x00753C50, long)
#define ControlMethod	VAR_U_(0x005B7494, long)
#define num_fmvs	VAR_U_(0x004BF65D, char)
#define gfScriptOffset	VAR_U_(0x004BF64C, ushort*)
#define gfScriptWad	VAR_U_(0x004BF658, uchar*)
#define gfStatus	VAR_U_(0x004BF650, long)
#define gfLegendTime	VAR_U_(0x004BF668, uchar)
#define gfNumMips	VAR_U_(0x004BF66B, uchar)
#define gfFog	VAR_U_(0x004BF664, CVECTOR)
#define gfInitialiseGame	VAR_U_(0x004AF452, uchar)
#define gfResetHubDest	VAR_U_(0x007FD288, uchar)
#define skipped_level	VAR_U_(0x004BF3CE, char)
#define gfCutNumber	VAR_U_(0x004BF66A, uchar)
#define	gfLayer1Vel	VAR_U_(0x007FD252, char)
#define	gfLayer2Vel	VAR_U_(0x007FD251, char)
#define gfLayer1Col	VAR_U_(0x007FD264, CVECTOR)
#define gfLayer2Col	VAR_U_(0x007FD25C, CVECTOR)
#define gfLegend	VAR_U_(0x007FD2E8, uchar)
#define gfLensFlare	VAR_U_(0x007FD2A0, PHD_VECTOR)
#define gfLensFlareColour	VAR_U_(0x007FD2B4, CVECTOR)
#define load_cam	VAR_U_(0x00533AA8, PHD_VECTOR)
#define load_target	VAR_U_(0x00533AB4, PHD_VECTOR)
#define load_roomnum	VAR_U_(0x004B27A5, uchar)
#define phd_top	VAR_U_(0x00753C30, long)
#define phd_left	VAR_U_(0x00753C78, long)
#define phd_bottom	VAR_U_(0x00753C70, long)
#define phd_right	VAR_U_(0x007540D0, long)
#define phd_winymax	VAR_U_(0x00753CA8, short)
#define phd_winxmax	VAR_U_(0x00753C84, short)
#define phd_winymin	VAR_U_(0x00753C54, short)
#define phd_winxmin	VAR_U_(0x00753C9C, short)
#define phd_znear	VAR_U_(0x00753C88, long)
#define phd_zfar	VAR_U_(0x00753C60, long)
#define CamPos	VAR_U_(0x007E71B0, PHD_VECTOR)
#define cutseq_busy_timeout	VAR_U_(0x004BFC84, char)
#define numnailed	VAR_U_(0x007E71E8, long)
#define GLOBAL_oldcamtype	VAR_U_(0x007E722C, camera_type)
#define GLOBAL_cutme	VAR_U_(0x007E7230, NEW_CUTSCENE*)
#define gfRequiredStartPos	VAR_U_(0x007FD270, uchar)
#define camera_pnodes	VAR_U_(0x007F4F20, PACKNODE*)
#define GLOBAL_cutseq_frame	VAR_U_(0x007F4FD4, long)
#define GLOBAL_numcutseq_frames	VAR_U_(0x007F4FD0, long)
#define LightningCount	VAR_U_(0x007FDF68, short)
#define dLightningRand	VAR_U_(0x007FE14C, short)
#define LightningRand	VAR_U_(0x007FDF5C, short)
#define LightningSFXDelay	VAR_U_(0x004BF624, short)
#define old_lara_holster	VAR_U_(0x007F4FB0, short)
#define lara_chat_cnt	VAR_U_(0x004BFC85, char)
#define actor_chat_cnt	VAR_U_(0x004BFC86, char)
#define SmokeWindZ	VAR_U_(0x00804E64, long)
#define SmokeWindX	VAR_U_(0x00804E60, long)
#define loadbar_pos	VAR_U_(0x00577488, float)
#define loadbar_maxpos	VAR_U_(0x00577458, long)
#define SortCount	VAR_U_(0x00660C88, long)
#define FPCW	VAR_U_(0x0053551C, short)
#define nPolyType	VAR_U_(0x007E71E0, long)
#define f_moneoznear	VAR_U_(0x00753CC0, float)
#define IM_rate	VAR_U_(0x007FE120, long)
#define IM_frac	VAR_U_(0x007FDF54, long)
#define IMptr	VAR_U_(0x007FE124, long*)
#define horus_item_thing	VAR_U_(0x007F4FA8, ITEM_INFO*)
#define GnFrameCounter	VAR_U_(0x007E71DC, long)
#define FXType	VAR_U_(0x007FE7E0, short)
#define PickupY	VAR_U_(0x007FD20C, short)
#define PickupX	VAR_U_(0x007FD20E, short)
#define PickupVel	VAR_U_(0x007FD210, short)
#define CurrentPickup	VAR_U_(0x007FD212, short)
#define nRope	VAR_U_(0x004BF6A8, long)
#define phkResult	VAR_U_(0x00670E3C, HKEY)
#define dwDisposition	VAR_U_(0x00670E40, DWORD)
#define outside	VAR_U_(0x007FD300, long)
#define number_draw_rooms	VAR_U_(0x007FD304, long)
#define camera_underwater	VAR_U_(0x007FE12C, long)
#define room_list_start	VAR_U_(0x004BF628, long)
#define room_list_end	VAR_U_(0x004BF62C, long)
#define outside_top	VAR_U_(0x007FE150, long)
#define outside_left	VAR_U_(0x007FE118, long)
#define outside_right	VAR_U_(0x007FE138, long)
#define outside_bottom	VAR_U_(0x007FDF58, long)
#define SkyPos	VAR_U_(0x007FE128, short)
#define SkyPos2	VAR_U_(0x007FDF5E, short)
#define LaserSightActive	VAR_U_(0x004BF37E, char)
#define f_a	VAR_U_(0x00753C34, float)
#define f_b	VAR_U_(0x00753C38, float)
#define f_boo	VAR_U_(0x00753C8C, float)
#define phd_persp	VAR_U_(0x00753C74, long)
#define Textures	VAR_U_(0x007538F4, TEXTURE*)
#define nTextures	VAR_U_(0x007538F0, long)
#define DrawPrimitiveCnt	VAR_U_(0x00753BD4, long)
#define CutSceneTriggered	VAR_U_(0x007FE7E4, long)
#define nFrames	VAR_U_(0x004AF454, long)
#define DEL_playingamefmv	VAR_U_(0x004BF65C, char)
#define Chris_Menu	VAR_U_(0x004BF66C, char)
#define title_controls_locked_out	VAR_U_(0x007FD268, char)
#define MainThread	VAR_U_(0x00533B08, THREAD)
#define LevelLoadingThread	VAR_U_(0x005333A8, THREAD)
#define gfFilenameWad	VAR_U_(0x007FD28C, char*)
#define gfFilenameOffset	VAR_U_(0x007FD2EC, ushort*)
#define mesh_base	VAR_U_(0x00533A7C, short*)
#define SGcount	VAR_U_(0x004BF6D8, long)
#define SGpoint	VAR_U_(0x004BF6D4, char*)
#define AIObjects	VAR_U_(0x007FD204, AIOBJECT*)
#define baddie_slots	VAR_U_(0x007FD1FC, CREATURE_INFO*)
#define cutseqpakPtr	VAR_U_(0x007F4F1C, char*)
#define lastcamnum	VAR_U_(0x007E7228, long)
#define GLOBAL_resident_depack_buffers	VAR_U_(0x007F4FAC, char*)
#define SenetTargetX	VAR_U_(0x007FE204, long)
#define SenetTargetZ	VAR_U_(0x007FE208, long)
#define piece_moving	VAR_U_(0x004AEBF8, char)
#define last_throw	VAR_U_(0x004BF40C, char)
#define WraithSpeed	VAR_U_(0x004AD6D0, short)
#define next_locust	VAR_U_(0x004BF2E0, long)
#define boxes	VAR_U_(0x007FE9B0, BOX_INFO*)
#define number_rooms	VAR_U_(0x00533A5C, short)
#define gfScriptFile	VAR_U_(0x007FD2AC, uchar*)
#define gfExtensions	VAR_U_(0x004BF654, char*)
#define gfLanguageFile	VAR_U_(0x007FD26C, uchar*)
#define MonoScreenOn	VAR_U_(0x00536F1C, char)
#define nAIObjects	VAR_U_(0x007FD200, short)
#define XATrack	VAR_U_(0x004B22F4, long)
#define XAReqTrack	VAR_U_(0x004BFE6C, long)
#define XAFlag	VAR_U_(0x004B22F8, long)
#define pSortBuffer	VAR_U_(0x00660C8C, char*)
#define pSortList	VAR_U_(0x005C07A8, SORTLIST**)
#define nPolys	VAR_U_(0x00753964, long)
#define NumRPickups	VAR_U_(0x007FD1DC, uchar)
#define LaserSightX	VAR_U_(0x00800168, long)
#define LaserSightY	VAR_U_(0x00800160, long)
#define LaserSightZ	VAR_U_(0x00800164, long)
#define num_level_meshes VAR_U_(0x0052A344, long)
#define mesh_vtxbuf VAR_U_(0x0052A340, MESH_DATA**)
#define dont_exit_jeep	VAR_U_(0x004BFC68, char)
#define targetMeshP	VAR_U_(0x007FE11C, MESH_DATA*)
#define binocsMeshP	VAR_U_(0x007FDF60, MESH_DATA*)
#define CurrentSequence	VAR_U_(0x007F5700, uchar)
#define SequenceUsed	ARRAY_(0x007F5708, uchar, [6])
#define SequenceResults	ARRAY_(0x007F5720, uchar, [3][3][3])
#define Sequences	ARRAY_(0x007F573C, uchar, [3])
#define REG_Setup	VAR_U_(0x00670E44, bool)
#define start_setup	VAR_U_(0x004BFE84, bool)
#define fmvs_disabled	VAR_U_(0x004BFE85, bool)
#define KeyTriggerActive	VAR_U_(0x004BF3F8, char)
#define G_dxptr	VAR_U_(0x007544F4, DXPTR*)
#define G_dxinfo	VAR_U_(0x00754120, DXINFO*)
#define G_ddraw	VAR_U_(0x0075411C, LPDIRECTDRAWX)
#define G_d3d	VAR_U_(0x007541A4, LPDIRECT3DX)
#define G_hwnd	VAR_U_(0x00754118, HWND)
#define joy_fire	VAR_U_(0x0053589C, long)
#define joy_x	VAR_U_(0x005358A0, long)
#define joy_y	VAR_U_(0x005358A4, long)
#define ClipRoomNum	VAR_U_(0x007FDF50, short)
#define cd_drive	VAR_U_(0x005333A0, char)
#define OldPickupPos	VAR_U_(0x007FD1D0, PHD_VECTOR)
#define SaveCounter	VAR_U_(0x005355B4, long)
#define D3DMW2VMatrix	VAR_U_(0x007540D8, D3DMATRIX)
#define nClippedPolys	VAR_U_(0x00753958, long)
#define nDDDevice	VAR_U_(0x004BFE90, long)
#define nD3DDevice	VAR_U_(0x004BFE7C, long)
#define Filter	VAR_U_(0x004B253A, bool)
#define volumetric_fx	VAR_U_(0x004BFE96, bool)
#define BumpMap	VAR_U_(0x004BFE95, bool)
#define TextLow	VAR_U_(0x004BFE94, bool)
#define resChangeCounter	VAR_U_(0x00753BD8, long)
#define level_fp	VAR_U_(0x00533A74, FILE*)
#define CompressedData	VAR_U_(0x00533A58, char*)
#define FileData	VAR_U_(0x005333A4, char*)
#define floor_data	VAR_U_(0x00533A78, short*)
#define changes	VAR_U_(0x00533A6C, CHANGE_STRUCT*)
#define ranges	VAR_U_(0x00533A70, RANGE_STRUCT*)
#define commands	VAR_U_(0x00533A8C, short*)
#define frames	VAR_U_(0x00533A84, short*)
#define number_cameras	VAR_U_(0x007FE940, long)
#define sound_effects	VAR_U_(0x008012EC, OBJECT_VECTOR*)
#define number_sound_effects	VAR_U_(0x008012E4, long)
#define num_boxes	VAR_U_(0x007FE9B4, long)
#define overlap	VAR_U_(0x007FE9A8, ushort*)
#define aranges	VAR_U_(0x00753BDC, short*)
#define nAnimUVRanges	VAR_U_(0x0053339C, long)
#define num_items	VAR_U_(0x00532C90, long)
#define sample_lut	VAR_U_(0x007F76A0, short*)
#define sample_infos	VAR_U_(0x007F76A4, SAMPLE_INFO*)
#define AnimatingTexturesVOffset	VAR_U_(0x00533AC8, short)
#define sound_active	VAR_U_(0x004BF6DC, long)
#define CurrentPendulum	VAR_U_(0x007FD1A0, PENDULUM)
#define next_fire_spark	VAR_U_(0x004ADF5C, long)
#define next_smoke_spark	VAR_U_(0x004BF390, long)
#define next_spark	VAR_U_(0x004BF368, long)
#define next_gunshell	VAR_U_(0x004BF398, long)
#define next_bubble	VAR_U_(0x004BF39C, long)
#define next_drip	VAR_U_(0x004BF3A0, long)
#define next_blood	VAR_U_(0x004BF394, long)
#define ShatterItem	VAR_U_(0x007FE960, SHATTER_ITEM)
#define TorchItem	VAR_U_(0x004BF338, ITEM_INFO*)
#define next_scarab	VAR_U_(0x004BF2F8, long)
#define splash_setup	VAR_U_(0x00804F40, SPLASH_SETUP)
#define slots_used	VAR_U_(0x004BF690, long)
#define ScreenFade	VAR_U_(0x004BF374, short)
#define dScreenFade	VAR_U_(0x004BF376, short)
#define ScreenFadeBack	VAR_U_(0x004BF378, short)
#define	ScreenFadedOut	VAR_U_(0x004BF37A, short)
#define ScreenFading	VAR_U_(0x004BF37C, short)
#define ScreenFadeSpeed	VAR_U_(0x004ADF58, short)
#define FadeScreenHeight	VAR_U_(0x004BF380, short)
#define DestFadeScreenHeight	VAR_U_(0x004BF382, short)
#define FadeClipSpeed	VAR_U_(0x004BF384, short)
#define DoFade	VAR_U_(0x00672E60, long)
#define FadeVal	VAR_U_(0x00672E58, long)
#define FadeStep	VAR_U_(0x00670E48, long)
#define FadeCnt	VAR_U_(0x00670E4C, long)
#define FadeEnd	VAR_U_(0x00670E50, long)



#define lpClass	ARRAY_(0x004BFE78, CHAR, [4])
#define keymap	ARRAY_(0x007542EC, char, [256])
#define keymap2	ARRAY_(0x007543EC, char, [256])
#define static_objects	ARRAY_(0x005333C0, STATIC_INFO, [60])
#define Lightning	ARRAY_(0x007FFB20, LIGHTNING_STRUCT, [16])
#define w2v_matrix	ARRAY_(0x00753CC8, long, [12])
#define dels_handy_train_map	ARRAY_(0x004AFF9C, short, [512])
#define sfx_frequencies	ARRAY_(0x004B38A0, long, [3])
#define GermanKeyboard	ARRAY_(0x004B2BF4, char*, [272])
#define KeyboardButtons	ARRAY_(0x004B3034, char*, [272])
#define layout	ARRAY_(0x004B2BAC, short, [2][18])
#define fmv_to_play	ARRAY_(0x004BF660, char, [2])
#define gfResidentCut	ARRAY_(0x007FD254, char, [4])
#define	LightningRGBs	ARRAY_(0x007FE130, ushort, [3])
#define LightningRGB	ARRAY_(0x007FD2F8, ushort, [3])
#define gfMips	ARRAY_(0x007FD280, char, [8])
#define cutseq_meshswapbits	ARRAY_(0x007F4F80, ulong, [10])
#define cutseq_meshbits	ARRAY_(0x007F4F40, ulong, [10])
#define cutseq_control_routines	ARRAY_(0x004B01B0, CUTSEQ_ROUTINES, [31])
#define actor_pnodes	ARRAY_(0x007E7200, PACKNODE*, [10])
#define temp_rotation_buffer	ARRAY_(0x007E7240, short, [160])
#define duff_item	ARRAY_(0x007E7380, ITEM_INFO, [10])
#define old_status_flags	ARRAY_(0x007F4FC0, char, [16])
#define SortList	ARRAY_(0x00660C94, SORTLIST*, [16384])
#define SortBuffer	ARRAY_(0x005C07AC, char, [65536])
#define IMstack	ARRAY_(0x007FD320, long, [768])
#define vert_wibble_table	ARRAY_(0x00535520, float, [32])
#define unused_vert_wibble_table	ARRAY_(0x0053511C, float, [256])
#define WaterTable	ARRAY_(0x00533B1C, WATERTAB, [22][64])
#define no_rotation	ARRAY_(0x004BF630, short, [12])
#define tsv_buffer	ARRAY_(0x00804F80, char, [16384])
#define scratchpad	ARRAY_(0x0080D7C0, char, [1024])
#define RopeList	ARRAY_(0x007FB4C0, ROPE_STRUCT, [5])
#define pickups	ARRAY_(0x007FD220, DISPLAYPU, [8])
#define Gunshells	ARRAY_(0x007FF680, GUNSHELL_STRUCT, [24])
#define EnemyBites	ARRAY_(0x004AED00, BITE_INFO, [])
#define draw_room_list	ARRAY_(0x004BF424, long, [128])
#define draw_rooms	ARRAY_(0x007FDF80, short, [100])
#define Bucket	ARRAY_(0x004BFEA0, TEXTUREBUCKET, [20])
#define title_string	ARRAY_(0x004AFAA4, char, [8])
#define	gfLevelNames	ARRAY_(0x007FD2C0, uchar, [40])
#define Drips	ARRAY_(0x00800DC0, DRIP_STRUCT, [32])
#define GlobalCollisionBounds	ARRAY_(0x007FE7F0, short, [6])
#define Slist	ARRAY_(0x007F6EE0, SPHERE, [34])
#define LaraSpheres	ARRAY_(0x007F7120, SPHERE, [15])
#define senet_item	ARRAY_(0x004BF400, short, [6])
#define senet_board	ARRAY_(0x007FE340, char, [17])
#define senet_piece	ARRAY_(0x007FE158, char, [6])
#define LibraryTab	ARRAY_(0x004BF2FC, char, [8])
#define spark	ARRAY_(0x00801400, SPARKS, [256])
#define smoke_spark	ARRAY_(0x007FF100, SMOKE_SPARKS, [32])
#define objects	ARRAY_(0x0052B850, OBJECT_INFO, [465])
#define Locusts	ARRAY_(0x0080FA00, LOCUST_STRUCT, [64])
#define ground_zone	ARRAY_(0x007FE980, short*, [5][2])
#define MonoScreen	ARRAY_(0x00577460, MONOSCREEN_STRUCT, [5])
#define XYUVClipperBuffer	ARRAY_(0x006607B0, D3DTLBUMPVERTEX, [20])
#define zClipperBuffer	ARRAY_(0x005C0488, D3DTLBUMPVERTEX, [20])
#define RPickups	ARRAY_(0x007FD1C0, uchar, [16])
#define jroomies	ARRAY_(0x007F4FE0, short, [22])
#define conflict	ARRAY_(0x005355B8, long, [18])
#define flipmap	ARRAY_(0x007FE220, long, [10])
#define SaveGames	ARRAY_(0x00536F28, SAVEFILE_INFO, [15])
#define matrix_stack	ARRAY_(0x00753D04, long, [12])
#define AnimatingTexturesV	ARRAY_(0x00532D9C, float, [16][8][3])
#define AnimatingWaterfalls	ARRAY_(0x007FD1E0, TEXTURESTRUCT*, [3])
#define AnimatingWaterfallsV	ARRAY_(0x007FD1F0, long, [3])
#define source_pcm_format	ARRAY_(0x004B263C, char, [50])
#define source_wav_format	ARRAY_(0x004B22C0, char, [50])
#define Bubbles	ARRAY_(0x00800920, BUBBLE_STRUCT, [40])
#define ShockWaves	ARRAY_(0x007FF960, SHOCKWAVE_STRUCT, [16])
#define splashes	ARRAY_(0x00804E80, SPLASH_STRUCT, [4])
#define ripples	ARRAY_(0x00801300, RIPPLE_STRUCT, [16])
#define fire_spark	ARRAY_(0x00800600, FIRE_SPARKS, [20])
#define blood	ARRAY_(0x00800180, BLOOD_STRUCT, [32])
#define uwdust	ARRAY_(0x00670E58, WATER_DUST, [256])
#define Gunflashes	ARRAY_(0x00800CE0, GUNFLASH_STRUCT, [4])
#define fires	ARRAY_(0x007FFF60, FIRE_LIST, [32])
#define LaSlot	ARRAY_(0x007F7220, SoundSlot, [32])
#define	weapons	ARRAY_(0x004AD848, WEAPON_INFO, [9])
#define Scarabs	ARRAY_(0x0080ED00, SCARAB_STRUCT, [128])
#define Map	ARRAY_(0x006734A8, MAP_STRUCT, [255])
#define DeadlyBounds	ARRAY_(0x00804840, long, [6])
#define spark_dynamics	ARRAY_(0x00804800, SP_DYNAMIC, [8])

/*VonCroy stuff*/
#define bVoncroyCutScene	VAR_U_(0x007FE288, char)
#define actualCameraPos	VAR_U_(0x0080ECF0, PHD_VECTOR)
#define actualCameraTarget	VAR_U_(0x0080ECE0, PHD_VECTOR)
#define actualFOV	VAR_U_(0x0080ECD8, long)
#define actualRoomNumber	VAR_U_(0x0080ECD4, long)

#define VonCroyCutIndices	ARRAY_(0x004AD4D4, uchar, [68])				//indices for VonCroyCutscenes depending on lara.locationPad
#define VonCroyCutscenes	ARRAY_(0x004AD518, VonCroyCutData, [15])
#define VonCroyCutFlags	ARRAY_(0x007FE2A0, uchar, [64])					//flags cuts played
#define VonCroyCutTracks	ARRAY_(0x004AD458, short, [62])


/*Bink bs*/
#define BinkSurfaceType	VAR_U_(0x007E6E00, long)
#define BinkSurface	VAR_U_(0x007E6E04, LPDIRECTDRAWSURFACEX)
#define Bink	VAR_U_(0x007E6E08, BINK_STRUCT*)

#define NO_HEIGHT	-32512
#define NO_ITEM	-1
#define FVF (D3DFVF_TEX2 | D3DFVF_SPECULAR | D3DFVF_DIFFUSE | D3DFVF_XYZRHW)
#define WINDOW_STYLE	(WS_OVERLAPPED | WS_BORDER | WS_CAPTION)
#define W2V_SHIFT	14
#define MAX_SAMPLES	370
#ifdef GENERAL_FIXES
#define MAX_DYNAMICS	64
#else
#define MAX_DYNAMICS	32
#endif

#ifdef GENERAL_FIXES
#define MALLOC_SIZE	15000000	//15MB
#else
#define MALLOC_SIZE	5000000		//5MB
#endif