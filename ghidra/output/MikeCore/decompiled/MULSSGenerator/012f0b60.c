// Function: FUN_012f0b60
// Address: 012f0b60
// Size: 9863 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x012f0bca) */
/* WARNING: Removing unreachable block (ram,0x012f0bd6) */
/* WARNING: Removing unreachable block (ram,0x012f0d89) */
/* WARNING: Removing unreachable block (ram,0x012f0d95) */
/* WARNING: Removing unreachable block (ram,0x012f0dc5) */
/* WARNING: Removing unreachable block (ram,0x012f0dd1) */

undefined8 *
FUN_012f0b60(undefined8 ******param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
            longlong *param_5)

{
  undefined8 *puVar1;
  undefined8 ******ppppppuVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  longlong lVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined7 uVar15;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 ******ppppppuVar12;
  longlong lVar13;
  longlong lVar14;
  pthread_key_t pVar16;
  char *pcVar17;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  char local_res8;
  char local_res10;
  char local_res18;
  undefined8 *local_res20;
  longlong local_398;
  char local_390;
  undefined8 ****local_340;
  char local_338;
  undefined8 *****local_330;
  char local_328;
  undefined8 *****local_320;
  char local_318;
  undefined8 *****local_310;
  char local_308;
  undefined8 *****local_300;
  char local_2f8;
  longlong local_2f0;
  char local_2e8;
  undefined8 *****local_2e0;
  char local_2d8;
  undefined8 *****local_2d0;
  char local_2c8;
  longlong local_2c0;
  char local_2b8;
  longlong local_2b0;
  char local_2a8;
  longlong local_2a0;
  char local_298;
  longlong local_290;
  char local_288;
  undefined8 *****local_280;
  char local_278;
  undefined8 *****local_270;
  char local_268;
  undefined8 *****local_260;
  char local_258;
  undefined8 *****local_250;
  char local_248;
  longlong local_240;
  char local_238;
  undefined8 *****local_230;
  char local_228;
  undefined8 *****local_220;
  char local_218;
  undefined8 *****local_210;
  char local_208;
  undefined8 *****local_200;
  char local_1f8;
  longlong local_1f0;
  char local_1e8;
  undefined8 ****local_1e0;
  char local_1d8;
  int local_1cc;
  longlong local_1c8;
  char local_1c0;
  longlong local_1b8;
  char local_1b0;
  undefined4 local_1a4;
  undefined8 ****local_1a0;
  char local_198;
  undefined8 ****local_190;
  char local_188;
  undefined8 ****local_180;
  char local_178;
  undefined8 ****local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  undefined8 ****local_140;
  char local_138;
  longlong local_130;
  char local_128;
  undefined8 ****local_120;
  char local_118;
  undefined8 *****local_110;
  char local_108;
  undefined7 uStack_107;
  char local_100;
  longlong local_f8;
  longlong local_f0;
  char local_e8;
  undefined8 *****local_d8;
  char local_d0 [72];
  undefined8 ****local_88;
  char local_80;
  undefined8 local_78;
  double local_70;
  longlong local_68;
  char local_60;
  undefined8 *****local_58;
  undefined8 *****local_50;
  undefined8 *****local_48;
  undefined8 ****local_40;
  char local_38;
  
  pppppuVar3 = local_d8;
  local_58 = (undefined8 *****)CONCAT44(local_58._4_4_,param_3);
  pVar16 = 0;
  local_1a4 = param_4;
  local_48 = param_1;
  local_f8 = FUN_012912a0(0,0,0);
  pvVar8 = _pthread_getspecific(pVar16);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132b1c0(local_f8);
  local_110 = local_d8;
  if (local_d0[0] == '\0') {
    if ((undefined8 ******)local_d8 == (undefined8 ******)0x0) goto LAB_012f30c6;
    FUN_00d50b00();
    if ((local_d0[0] != '\0') && ((undefined8 ******)local_d8 != (undefined8 ******)0x0)) {
      FUN_00d50b20();
    }
  }
  else if ((undefined8 ******)local_d8 == (undefined8 ******)0x0) goto LAB_012f30c6;
  if (*param_5 == 0) {
    FUN_012e7fb0();
    ppppppuVar12 = (undefined8 ******)*param_5;
    if (ppppppuVar12 == (undefined8 ******)local_d8) {
      if (((char)param_5[1] != '\0') || ((undefined8 ******)local_d8 == (undefined8 ******)0x0))
      goto LAB_012f0d44;
      if (local_d0[0] == '\0') {
        FUN_00d50b00();
        goto LAB_012f0d38;
      }
    }
    else {
      lVar14 = param_5[1];
      if (local_d0[0] == '\0') {
        if ((undefined8 ******)local_d8 != (undefined8 ******)0x0) {
          FUN_00d50b00();
        }
        *param_5 = (longlong)local_d8;
        if (((char)lVar14 != '\0') && (ppppppuVar12 != (undefined8 ******)0x0)) {
          FUN_00d50b20();
        }
LAB_012f0d38:
        *(undefined1 *)(param_5 + 1) = 1;
LAB_012f0d44:
        if ((local_d0[0] != '\0') && ((undefined8 ******)local_d8 != (undefined8 ******)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_012f0d5e;
      }
      *param_5 = (longlong)local_d8;
      if (((char)lVar14 != '\0') && (ppppppuVar12 != (undefined8 ******)0x0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(param_5 + 1) = 1;
  }
LAB_012f0d5e:
  local_50 = (undefined8 *****)FUN_01266200();
  local_70 = (double)FUN_012664b0();
  local_68 = DAT_02709968;
  local_60 = 0;
  if (DAT_02709968 != 0) {
    FUN_00d50b00();
  }
  pppppuVar4 = DAT_027295d0;
  local_60 = '\x01';
  local_80 = 0;
  if (DAT_027295d0 != (undefined8 *****)0x0) {
    FUN_00d50b00();
  }
  local_88 = pppppuVar4;
  local_80 = '\x01';
  FUN_012f4890(param_2,&local_68,&local_88);
  FUN_000b4da0();
  ppppuVar6 = local_40;
  if (local_38 == '\0') {
    if ((((undefined8 *****)local_40 != (undefined8 *****)0x0) && (FUN_00d50b00(), local_38 != '\0')
        ) && ((undefined8 *****)local_40 != (undefined8 *****)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_002d10d0();
  if ((local_80 != '\0') && ((undefined8 *****)local_88 != (undefined8 *****)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  lVar14 = DAT_027e1368;
  if (DAT_027e1368 != 0) {
    FUN_00d50b00();
  }
  local_1c0 = 0;
  if (unaff_RSI != 0) {
    FUN_00d50b00();
  }
  local_1c0 = '\x01';
  local_338 = '\0';
  ppppppuVar12 = (undefined8 ******)&local_340;
  local_340 = ppppuVar6;
  local_1c8 = unaff_RSI;
  FUN_00d40470(ppppppuVar12,&local_1c8,3,3);
  if ((local_338 != '\0') && ((undefined8 *****)local_340 != (undefined8 *****)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1c0 != '\0') && (local_1c8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar14 != 0) {
    FUN_00d50b20();
  }
  if ((local_d0[0] != '\0') && ((undefined8 ******)local_d8 != (undefined8 ******)0x0)) {
    FUN_00d50b20();
  }
  if ((*param_2 != 0) && (*(int *)(*param_2 + 0xc) != 0)) {
    FUN_012edae0();
  }
  local_d8 = pppppuVar3;
  if ((char)local_58 != '\0') {
    FUN_012ead00(local_50,local_70 - (double)local_50);
    if (local_d0[0] == '\0') {
      if ((undefined8 ******)local_d8 != (undefined8 ******)0x0) {
        FUN_00d50b00();
        goto LAB_012f1002;
      }
      if (local_res20 == (undefined8 *)0x0) goto LAB_012f1158;
LAB_012f100b:
      puVar9 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      ppppppuVar12 = (undefined8 ******)&DAT_02572358;
      *puVar9 = &DAT_02572358;
      (*DAT_02572370)();
      puVar1 = (undefined8 *)*local_res20;
      if (puVar1 == puVar9) {
        if (*(char *)(local_res20 + 1) == '\0') goto LAB_012f10b0;
        FUN_00d50b20();
        ppppppuVar2 = (undefined8 ******)*param_2;
      }
      else {
        *local_res20 = puVar9;
        if ((*(char *)(local_res20 + 1) != '\0') && (puVar1 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
LAB_012f10b0:
        *(undefined1 *)(local_res20 + 1) = 1;
        ppppppuVar2 = (undefined8 ******)*param_2;
      }
      if (ppppppuVar2 != (undefined8 ******)0x0) {
        local_d0[0] = '\0';
        FUN_00d23480();
        local_d8 = ppppppuVar2;
        if ((local_d0[0] != '\0') && (ppppppuVar2 != (undefined8 ******)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((undefined8 ******)pppppuVar3 == (undefined8 ******)0x0) goto LAB_012f1158;
      local_d0[0] = '\0';
      FUN_00d23480();
      if ((local_d0[0] != '\0') && ((undefined8 ******)pppppuVar3 != (undefined8 ******)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
LAB_012f1002:
      if (local_res20 != (undefined8 *)0x0) goto LAB_012f100b;
      if ((undefined8 ******)local_d8 == (undefined8 ******)0x0) goto LAB_012f1158;
    }
    FUN_012edae0();
    FUN_00d50b20();
    local_d8 = pppppuVar3;
  }
LAB_012f1158:
  lVar14 = *(longlong *)(unaff_RSI + 0xb0);
  if (lVar14 != 0) {
    FUN_00d50b00();
  }
  local_1cc = *(int *)(lVar14 + 0xc);
  FUN_00d50b20();
  uVar15 = (undefined7)((ulonglong)local_d8 >> 8);
  if ((char)local_1a4 == '\0') {
LAB_012f1261:
    local_70 = 0.0;
    local_58 = (undefined8 ******)0x0;
  }
  else {
    pvVar8 = _pthread_getspecific((pthread_key_t)ppppppuVar12);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d610();
    pVar16 = (pthread_key_t)ppppppuVar12;
    if (local_d0[0] == '\0') {
      if ((undefined8 ******)local_d8 == (undefined8 ******)0x0) goto LAB_012f1261;
      local_50 = local_d8;
      FUN_00d50b00();
      if ((local_d0[0] != '\0') && ((undefined8 ******)local_d8 != (undefined8 ******)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = local_d8;
      if ((undefined8 ******)local_d8 == (undefined8 ******)0x0) goto LAB_012f1261;
    }
    FUN_012e8920();
    lVar14 = local_68;
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cade0();
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01505900();
    if (local_d0[0] == '\0') {
      if ((((undefined8 ******)local_d8 != (undefined8 ******)0x0) &&
          (FUN_00d50b00(), local_d0[0] != '\0')) &&
         ((undefined8 ******)local_d8 != (undefined8 ******)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_d0[0] = '\0';
    }
    if ((local_38 != '\0') && ((undefined8 *****)local_40 != (undefined8 *****)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (lVar14 != 0)) {
      FUN_00d50b20();
    }
    local_330 = local_50;
    local_328 = '\0';
    FUN_016cbba0();
    if (local_d0[0] == '\0') {
      if ((((undefined8 ******)local_d8 != (undefined8 ******)0x0) &&
          (FUN_00d50b00(), local_d0[0] != '\0')) &&
         ((undefined8 ******)local_d8 != (undefined8 ******)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_d0[0] = '\0';
    }
    if ((local_328 != '\0') && ((undefined8 ******)local_330 != (undefined8 ******)0x0)) {
      FUN_00d50b20();
    }
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c1150();
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016ea7c0(local_f8);
    FUN_012e8920();
    ppppuVar7 = local_40;
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cade0();
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_320 = local_d8;
    local_318 = '\0';
    FUN_015056c0();
    if ((local_318 != '\0') && ((undefined8 ******)local_320 != (undefined8 ******)0x0)) {
      FUN_00d50b20();
    }
    if ((local_d0[0] != '\0') && ((undefined8 ******)local_d8 != (undefined8 ******)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && ((undefined8 *****)ppppuVar7 != (undefined8 *****)0x0)) {
      FUN_00d50b20();
    }
    FUN_012e8920();
    lVar14 = local_68;
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7210();
    local_58 = local_d8;
    if ((undefined8 ******)local_d8 == (undefined8 ******)0x0) {
      local_58 = (undefined8 ******)0x0;
      local_70 = 0.0;
      ppppppuVar12 = (undefined8 ******)local_d8;
    }
    else {
      local_70 = (double)CONCAT71(uVar15,1);
      ppppppuVar12 = (undefined8 ******)local_d8;
      if (local_d0[0] == '\0') {
        FUN_00d50b00();
      }
    }
    if ((local_38 != '\0') && ((undefined8 *****)local_40 != (undefined8 *****)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (lVar14 != 0)) {
      FUN_00d50b20();
    }
    pVar16 = (pthread_key_t)ppppppuVar12;
    if ((local_res8 == '\0') && ((undefined8 ******)local_d8 != (undefined8 ******)0x0)) {
      pvVar8 = _pthread_getspecific(pVar16);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150fe30();
      pvVar8 = _pthread_getspecific(pVar16);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar8 = _pthread_getspecific(pVar16);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150fe30();
      local_1a0 = local_40;
      local_198 = 0;
      if (local_38 == '\0') {
        if ((undefined8 *****)local_40 != (undefined8 *****)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_198 = '\x01';
      local_310 = local_d8;
      local_308 = '\0';
      local_300 = local_d8;
      local_2f8 = '\0';
      uVar10 = FUN_00e7bdb0();
      uVar11 = FUN_00e7bdb0();
      local_2e8 = '\0';
      local_2f0 = 0;
      ppppppuVar12 = &local_300;
      FUN_01516650(0,&local_310,uVar10,uVar11);
      if ((local_2e8 != '\0') && (local_2f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_2f8 != '\0') && ((undefined8 ******)local_300 != (undefined8 ******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_308 != '\0') && ((undefined8 ******)local_310 != (undefined8 ******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_198 != '\0') && ((undefined8 *****)local_1a0 != (undefined8 *****)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && ((undefined8 *****)local_40 != (undefined8 *****)0x0)) {
        FUN_00d50b20();
      }
      if ((local_d0[0] != '\0') && ((undefined8 ******)local_d8 != (undefined8 ******)0x0)) {
        FUN_00d50b20();
      }
    }
    pVar16 = (pthread_key_t)ppppppuVar12;
    if ((local_res10 == '\0') && ((undefined8 ******)local_d8 != (undefined8 ******)0x0)) {
      pvVar8 = _pthread_getspecific(pVar16);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150fe30();
      pvVar8 = _pthread_getspecific(pVar16);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar8 = _pthread_getspecific(pVar16);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150fe30();
      local_190 = local_40;
      local_188 = 0;
      if (local_38 == '\0') {
        if ((undefined8 *****)local_40 != (undefined8 *****)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_188 = '\x01';
      local_2e0 = local_d8;
      local_2d8 = '\0';
      local_2d0 = local_d8;
      local_2c8 = '\0';
      uVar10 = FUN_00e7bdb0();
      uVar11 = FUN_00e7bdb0();
      local_2b8 = '\0';
      local_2c0 = 0;
      ppppppuVar12 = &local_2d0;
      FUN_01516720(0,&local_2e0,uVar10,uVar11);
      if ((local_2b8 != '\0') && (local_2c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_2c8 != '\0') && ((undefined8 ******)local_2d0 != (undefined8 ******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_2d8 != '\0') && ((undefined8 ******)local_2e0 != (undefined8 ******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_188 != '\0') && ((undefined8 *****)local_190 != (undefined8 *****)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && ((undefined8 *****)local_40 != (undefined8 *****)0x0)) {
        FUN_00d50b20();
      }
      if ((local_d0[0] != '\0') && ((undefined8 ******)local_d8 != (undefined8 ******)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((undefined8 ******)local_d8 != (undefined8 ******)0x0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (local_res8 == '\0') {
LAB_012f1dc4:
    local_78 = 0;
    local_50 = (undefined8 ******)0x0;
  }
  else {
    pvVar8 = _pthread_getspecific((pthread_key_t)ppppppuVar12);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d610();
    if ((local_d0[0] != '\0') && ((undefined8 ******)local_d8 != (undefined8 ******)0x0)) {
      FUN_00d50b20();
    }
    if ((undefined8 ******)local_d8 == (undefined8 ******)0x0) goto LAB_012f1dc4;
    pvVar8 = _pthread_getspecific((pthread_key_t)ppppppuVar12);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d900();
    pvVar8 = _pthread_getspecific((pthread_key_t)ppppppuVar12);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    if ((local_d0[0] != '\0') && ((undefined8 ******)local_d8 != (undefined8 ******)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && ((undefined8 *****)local_40 != (undefined8 *****)0x0)) {
      FUN_00d50b20();
    }
    pVar16 = (pthread_key_t)ppppppuVar12;
    if ((undefined8 ******)local_d8 == (undefined8 ******)0x0) goto LAB_012f1dc4;
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150fe30();
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d900();
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150fe30();
    local_170 = local_88;
    local_168 = 0;
    if (local_80 == '\0') {
      if ((undefined8 *****)local_88 != (undefined8 *****)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    local_168 = '\x01';
    pVar16 = 1;
    FUN_01519670(1,&local_170);
    local_180 = local_40;
    local_178 = 0;
    if (local_38 == '\0') {
      if ((undefined8 *****)local_40 != (undefined8 *****)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_178 = '\x01';
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d610();
    local_160 = local_f0;
    local_158 = 0;
    if (local_e8 == '\0') {
      if (local_f0 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_e8 = '\0';
    }
    local_158 = '\x01';
    FUN_012e8920();
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cade0();
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01505900();
    local_148 = 0;
    local_150 = CONCAT71(uStack_107,local_108);
    if (local_100 == '\0') {
      if (local_150 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_100 = '\0';
    }
    local_148 = '\x01';
    uVar10 = FUN_00e7bdb0();
    uVar11 = FUN_00e7bdb0();
    local_298 = '\0';
    local_2a0 = 0;
    pVar16 = (pthread_key_t)&local_150;
    FUN_01516650(local_f8,&local_160,uVar10,uVar11);
    if ((local_298 != '\0') && (local_2a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_148 != '\0') && (local_150 != 0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (CONCAT71(uStack_107,local_108) != 0)) {
      FUN_00d50b20();
    }
    if ((local_2a8 != '\0') && (local_2b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_390 != '\0') && (local_398 != 0)) {
      FUN_00d50b20();
    }
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_178 != '\0') && ((undefined8 *****)local_180 != (undefined8 *****)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && ((undefined8 *****)local_40 != (undefined8 *****)0x0)) {
      FUN_00d50b20();
    }
    if ((local_168 != '\0') && ((undefined8 *****)local_170 != (undefined8 *****)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && ((undefined8 *****)local_88 != (undefined8 *****)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0[0] != '\0') && ((undefined8 ******)local_d8 != (undefined8 ******)0x0)) {
      FUN_00d50b20();
    }
    FUN_012e8920();
    lVar14 = local_68;
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7210();
    local_50 = local_d8;
    if ((undefined8 ******)local_d8 == (undefined8 ******)0x0) {
      local_50 = (undefined8 ******)0x0;
      local_78 = 0;
      ppppppuVar12 = (undefined8 ******)local_d8;
    }
    else {
      local_78 = CONCAT71(uVar15,1);
      ppppppuVar12 = (undefined8 ******)local_d8;
      if (local_d0[0] == '\0') {
        FUN_00d50b00();
      }
    }
    if ((local_38 != '\0') && ((undefined8 *****)local_40 != (undefined8 *****)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (lVar14 != 0)) {
      FUN_00d50b20();
    }
  }
  if (local_res10 != '\0') {
    pvVar8 = _pthread_getspecific((pthread_key_t)ppppppuVar12);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d610();
    if ((local_d0[0] != '\0') && ((undefined8 ******)local_d8 != (undefined8 ******)0x0)) {
      FUN_00d50b20();
    }
    if ((undefined8 ******)local_d8 != (undefined8 ******)0x0) {
      pvVar8 = _pthread_getspecific((pthread_key_t)ppppppuVar12);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d900();
      pvVar8 = _pthread_getspecific((pthread_key_t)ppppppuVar12);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01510280();
      if ((local_d0[0] != '\0') && ((undefined8 ******)local_d8 != (undefined8 ******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && ((undefined8 *****)local_40 != (undefined8 *****)0x0)) {
        FUN_00d50b20();
      }
      pVar16 = (pthread_key_t)ppppppuVar12;
      if ((undefined8 ******)local_d8 != (undefined8 ******)0x0) {
        pvVar8 = _pthread_getspecific(pVar16);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0150fe30();
        pvVar8 = _pthread_getspecific(pVar16);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar8 = _pthread_getspecific(pVar16);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0132d900();
        local_140 = local_40;
        local_138 = 0;
        if (local_38 == '\0') {
          if ((undefined8 *****)local_40 != (undefined8 *****)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_138 = '\x01';
        pvVar8 = _pthread_getspecific(pVar16);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0132d610();
        local_130 = local_68;
        local_128 = 0;
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        local_128 = '\x01';
        FUN_012e8920();
        lVar14 = CONCAT71(uStack_107,local_108);
        pvVar8 = _pthread_getspecific(pVar16);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cade0();
        pvVar8 = _pthread_getspecific(pVar16);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01505900();
        local_120 = local_88;
        local_118 = 0;
        if (local_80 == '\0') {
          if ((undefined8 *****)local_88 != (undefined8 *****)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_118 = '\x01';
        uVar10 = FUN_00e7bdb0();
        uVar11 = FUN_00e7bdb0();
        local_288 = '\0';
        local_290 = 0;
        ppppppuVar12 = (undefined8 ******)&local_120;
        FUN_01516720(local_f8,&local_130,uVar10,uVar11);
        if ((local_288 != '\0') && (local_290 != 0)) {
          FUN_00d50b20();
        }
        if ((local_118 != '\0') && ((undefined8 *****)local_120 != (undefined8 *****)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && ((undefined8 *****)local_88 != (undefined8 *****)0x0)) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (local_f0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_100 != '\0') && (lVar14 != 0)) {
          FUN_00d50b20();
        }
        if ((local_128 != '\0') && (local_130 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_138 != '\0') && ((undefined8 *****)local_140 != (undefined8 *****)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && ((undefined8 *****)local_40 != (undefined8 *****)0x0)) {
          FUN_00d50b20();
        }
        if ((local_d0[0] != '\0') && ((undefined8 ******)local_d8 != (undefined8 ******)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  if ((local_res18 != '\0') && ((char)local_1a4 == '\0')) {
    pvVar8 = _pthread_getspecific((pthread_key_t)ppppppuVar12);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d610();
    if ((((local_d0[0] == '\0') && ((undefined8 ******)local_d8 != (undefined8 ******)0x0)) &&
        (FUN_00d50b00(), local_d0[0] != '\0')) &&
       ((undefined8 ******)local_d8 != (undefined8 ******)0x0)) {
      FUN_00d50b20();
    }
    FUN_012e8920();
    lVar14 = local_68;
    pvVar8 = _pthread_getspecific((pthread_key_t)ppppppuVar12);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cade0();
    pvVar8 = _pthread_getspecific((pthread_key_t)ppppppuVar12);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01505900();
    if (local_d0[0] == '\0') {
      if ((((undefined8 ******)local_d8 != (undefined8 ******)0x0) &&
          (FUN_00d50b00(), local_d0[0] != '\0')) &&
         ((undefined8 ******)local_d8 != (undefined8 ******)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_d0[0] = '\0';
    }
    if ((local_38 != '\0') && ((undefined8 *****)local_40 != (undefined8 *****)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (lVar14 != 0)) {
      FUN_00d50b20();
    }
    pVar16 = (pthread_key_t)ppppppuVar12;
    if (((undefined8 ******)local_d8 != (undefined8 ******)0x0) &&
       ((undefined8 ******)local_d8 != (undefined8 ******)0x0)) {
      local_280 = local_d8;
      local_278 = '\0';
      FUN_016cbba0();
      if (local_d0[0] == '\0') {
        if ((((undefined8 ******)local_d8 != (undefined8 ******)0x0) &&
            (FUN_00d50b00(), local_d0[0] != '\0')) &&
           ((undefined8 ******)local_d8 != (undefined8 ******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_d0[0] = '\0';
      }
      if ((local_278 != '\0') && ((undefined8 ******)local_280 != (undefined8 ******)0x0)) {
        FUN_00d50b20();
      }
      pvVar8 = _pthread_getspecific(pVar16);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016ea7c0(local_f8);
      local_270 = local_110;
      local_268 = '\0';
      local_260 = local_d8;
      local_258 = '\0';
      local_250 = local_d8;
      local_248 = '\0';
      ppppppuVar12 = (undefined8 ******)FUN_00e7bdb0();
      local_238 = '\0';
      local_240 = 0;
      FUN_012910e0(DAT_0238fee8,&local_250,&local_240);
      if ((local_238 != '\0') && (local_240 != 0)) {
        FUN_00d50b20();
      }
      if ((local_248 != '\0') && ((undefined8 ******)local_250 != (undefined8 ******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_258 != '\0') && ((undefined8 ******)local_260 != (undefined8 ******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_268 != '\0') && ((undefined8 ******)local_270 != (undefined8 ******)0x0)) {
        FUN_00d50b20();
      }
      if ((undefined8 ******)local_d8 != (undefined8 ******)0x0) {
        FUN_00d50b20();
      }
    }
    if ((undefined8 ******)local_d8 != (undefined8 ******)0x0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  FUN_012e6c30();
  pvVar8 = _pthread_getspecific((pthread_key_t)ppppppuVar12);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_230 = local_110;
  local_228 = '\0';
  FUN_0150ddd0();
  if ((local_228 != '\0') && ((undefined8 ******)local_230 != (undefined8 ******)0x0)) {
    FUN_00d50b20();
  }
  local_220 = local_110;
  local_218 = '\0';
  FUN_00e7bdb0();
  FUN_01287c80();
  if ((local_218 != '\0') && ((undefined8 ******)local_220 != (undefined8 ******)0x0)) {
    FUN_00d50b20();
  }
  if ((undefined8 ******)local_58 != (undefined8 ******)0x0) {
    local_210 = local_58;
    local_208 = '\0';
    FUN_00e7bdb0();
    FUN_01287c80();
    if ((local_208 != '\0') && ((undefined8 ******)local_210 != (undefined8 ******)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((undefined8 ******)local_50 != (undefined8 ******)0x0) {
    local_200 = local_50;
    local_1f8 = '\0';
    FUN_012879b0();
    if ((local_1f8 != '\0') && ((undefined8 ******)local_200 != (undefined8 ******)0x0)) {
      FUN_00d50b20();
    }
  }
  pvVar8 = _pthread_getspecific((pthread_key_t)ppppppuVar12);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013d9040();
  if ((local_d0[0] != '\0') && ((undefined8 ******)local_d8 != (undefined8 ******)0x0)) {
    FUN_00d50b20();
  }
  if ((undefined8 ******)local_d8 != (undefined8 ******)0x0) {
    pvVar8 = _pthread_getspecific((pthread_key_t)ppppppuVar12);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013d9040();
    pvVar8 = _pthread_getspecific((pthread_key_t)ppppppuVar12);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar8 = _pthread_getspecific((pthread_key_t)ppppppuVar12);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    lVar14 = local_68;
    pvVar8 = _pthread_getspecific((pthread_key_t)ppppppuVar12);
    lVar5 = local_68;
    if ((pvVar8 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar14 = lVar5, lVar13 != 0)) {
      lVar14 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
    }
    lVar14 = *(longlong *)(lVar14 + 0xa8);
    if (lVar14 != 0) {
      FUN_00d50b00();
    }
    local_f8 = lVar14;
    FUN_00d23310();
    pVar16 = (pthread_key_t)CONCAT71((int7)((ulonglong)ppppppuVar12 >> 8),local_d0[0]);
    pcVar17 = &local_108;
    if (local_d0[0] != '\0') {
      pcVar17 = local_d0;
    }
    local_108 = local_d0[0];
    *pcVar17 = '\0';
    if ((local_d0[0] != '\0') && ((undefined8 ******)local_d8 != (undefined8 ******)0x0)) {
      FUN_00d50b20();
    }
    local_48 = local_d8;
    pvVar8 = _pthread_getspecific(pVar16);
    if ((pvVar8 == (void *)0x0) || (lVar14 = FUN_00e8b990(), lVar14 == 0)) {
      pppppuVar3 = (undefined8 *****)local_d8[0x17];
    }
    else {
      pppppuVar3 = (undefined8 *****)local_d8[(ulonglong)(*(uint *)(lVar14 + 0x154) & 1) + 4][0x17];
    }
    if (pppppuVar3 != (undefined8 *****)0x0) {
      FUN_00d50b00();
    }
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    ppppuVar7 = local_40;
    if (local_38 == '\0') {
      if ((undefined8 *****)local_40 != (undefined8 *****)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if (*(undefined8 ******)(unaff_RSI + 0xb8) != (undefined8 *****)ppppuVar7) {
      FUN_00d64850();
      pppppuVar4 = *(undefined8 ******)(unaff_RSI + 0xb8);
      if (pppppuVar4 != (undefined8 *****)ppppuVar7) {
        if ((undefined8 *****)ppppuVar7 != (undefined8 *****)0x0) {
          FUN_00d50b00();
        }
        *(undefined8 *****)(unaff_RSI + 0xb8) = ppppuVar7;
        if (pppppuVar4 != (undefined8 *****)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    if ((undefined8 *****)ppppuVar7 != (undefined8 *****)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && ((undefined8 *****)local_40 != (undefined8 *****)0x0)) {
      FUN_00d50b20();
    }
    lVar14 = local_f8;
    if (pppppuVar3 != (undefined8 *****)0x0) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && ((undefined8 ******)local_48 != (undefined8 ******)0x0)) {
      FUN_00d50b20();
    }
    if (lVar14 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && ((undefined8 *****)local_88 != (undefined8 *****)0x0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_1cc == 0) && (*(char *)(unaff_RSI + 0x88) == '\0')) {
    FUN_00d64850();
    *(undefined1 *)(unaff_RSI + 0x88) = 1;
    FUN_00d64910();
  }
  FUN_00d403d0();
  local_1f0 = DAT_02702db8;
  if (DAT_02702db8 != 0) {
    FUN_00d50b00();
  }
  local_1e8 = '\x01';
  local_1b0 = 0;
  if (unaff_RSI != 0) {
    FUN_00d50b00();
  }
  local_1b0 = '\x01';
  local_1d8 = '\0';
  local_1e0 = ppppuVar6;
  local_1b8 = unaff_RSI;
  FUN_00d40470(&local_1e0,&local_1b8,1,0);
  if ((local_1d8 != '\0') && ((undefined8 *****)local_1e0 != (undefined8 *****)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1b0 != '\0') && (local_1b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0[0] != '\0') && ((undefined8 ******)local_d8 != (undefined8 ******)0x0)) {
    FUN_00d50b20();
  }
  if ((undefined8 *****)ppppuVar6 != (undefined8 *****)0x0) {
    FUN_00d50b20();
  }
  if ((local_70._0_1_ != '\0') && ((undefined8 ******)local_58 != (undefined8 ******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_78 != '\0') && ((undefined8 ******)local_50 != (undefined8 ******)0x0)) {
    FUN_00d50b20();
  }
LAB_012f30c6:
  *unaff_RDI = local_110;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


