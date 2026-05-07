// Function: FUN_01463a60
// Address: 01463a60
// Size: 20480 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01465b51) */
/* WARNING: Removing unreachable block (ram,0x01465b5d) */
/* WARNING: Removing unreachable block (ram,0x01466878) */
/* WARNING: Removing unreachable block (ram,0x01466888) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01463a60(pthread_key_t param_1)

{
  longlong *****ppppplVar1;
  double dVar2;
  double dVar3;
  undefined1 uVar4;
  bool bVar5;
  longlong *******ppppppplVar6;
  char cVar7;
  uint uVar8;
  void *pvVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *******ppppppplVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong *******ppppppplVar16;
  longlong ******pppppplVar17;
  undefined7 uVar18;
  pthread_key_t pVar19;
  longlong *******ppppppplVar20;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong *****ppppplVar24;
  longlong *******unaff_R15;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar30;
  double dVar29;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar31;
  longlong *******local_350;
  char local_348;
  longlong local_340;
  char local_338;
  longlong *******local_330;
  char local_328;
  longlong *******local_320;
  char local_318;
  longlong *******local_310;
  char local_308;
  longlong *******local_300;
  char local_2f8;
  longlong *******local_2f0;
  char local_2e8;
  longlong *******local_2e0;
  char local_2d8;
  longlong *******local_2d0;
  char local_2c8;
  longlong *******local_2c0;
  char local_2b8;
  longlong *******local_2b0;
  char local_2a8;
  longlong *******local_2a0;
  char local_298;
  longlong local_290;
  char local_288;
  longlong *******local_280;
  char local_278;
  longlong local_270;
  char local_268;
  longlong local_260;
  char local_258;
  undefined1 local_250 [8];
  longlong local_248;
  char local_240;
  double local_238;
  double local_230;
  longlong *******local_228;
  char local_220;
  longlong *******local_218;
  char local_210;
  longlong *******local_208;
  char local_200;
  longlong *******local_1f8;
  char local_1f0;
  longlong *******local_1e8;
  char local_1e0;
  longlong *******local_1d8;
  char local_1d0;
  longlong *******local_1c8;
  char local_1c0;
  longlong local_1b8;
  char local_1b0;
  code *local_1a8;
  longlong ******local_1a0;
  undefined8 *local_198;
  longlong *******local_190;
  longlong *local_188;
  longlong *******local_180;
  longlong *******local_178;
  longlong *******local_170;
  longlong *******local_168;
  longlong *******local_160;
  undefined8 local_158;
  undefined8 local_150;
  longlong *******local_148;
  undefined8 uStack_140;
  ulonglong local_130;
  undefined1 local_121;
  longlong *******local_120;
  ulonglong local_118;
  longlong *******local_110;
  longlong *******local_108;
  longlong *******local_100;
  longlong *******local_f8;
  longlong *******local_f0;
  longlong *******local_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  longlong *******local_d0;
  char local_c8;
  longlong *******local_c0;
  longlong *******local_b8;
  longlong *******local_b0;
  longlong *******local_a8;
  double local_a0;
  longlong *******local_98;
  ulonglong local_90;
  longlong *******local_80;
  longlong *******local_78;
  char local_70;
  longlong local_68;
  uint local_60;
  longlong *******local_58;
  longlong *******local_50;
  longlong *******local_48;
  longlong *******local_40;
  undefined8 local_38;
  
  plVar11 = *(longlong **)(unaff_RDI + 0x60);
  pvVar9 = _pthread_getspecific(param_1);
  if (pvVar9 != (void *)0x0) {
    plVar11 = *(longlong **)(unaff_RDI + 0x60);
    lVar10 = FUN_00e8b990();
    if (lVar10 != 0) {
      plVar11 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    }
  }
  local_230 = (double)(**(code **)(*plVar11 + 0x370))();
  pvVar9 = _pthread_getspecific(param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_38 = (longlong *******)FUN_01369cc0();
  plVar11 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar11 + 0x18))();
  local_188 = plVar11;
  puVar12 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  ppppppplVar16 = (longlong *******)&DAT_02572358;
  local_1a0 = (longlong ******)&DAT_02572358;
  *puVar12 = &DAT_02572358;
  local_1a8 = DAT_02572370;
  (*DAT_02572370)();
  local_198 = puVar12;
  pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01328c30();
  local_218 = local_d0;
  local_210 = 0;
  if (local_c8 == '\0') {
    if (local_d0 != (longlong *******)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_c8 = '\0';
  }
  local_210 = '\x01';
  FUN_00352bd0();
  local_168 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != (longlong *******)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
       (local_78 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  if ((local_210 != '\0') && (local_218 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  ppppppplVar13 = (longlong *******)FUN_00e8fc40();
  FUN_00d4ff40();
  *ppppppplVar13 = local_1a0;
  (*local_1a8)();
  local_190 = ppppppplVar13;
  if (0 < *(int *)((longlong)local_168 + 0xc)) {
    lVar10 = 0;
    do {
      unaff_R15 = (longlong *******)local_168[2][lVar10];
      if (unaff_R15 != (longlong *******)0x0) {
        FUN_00d50b00();
      }
      ppppppplVar13 = (longlong *******)FUN_00e8fc40();
      FUN_0006e3a0();
      (*(code *)(*ppppppplVar13)[3])();
      pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bb3e0();
      FUN_012642b0();
      pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bb310();
      FUN_01259540();
      pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
      ppppppplVar20 = unaff_R15;
      if ((pvVar9 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
        ppppppplVar20 = (longlong *******)unaff_R15[(ulonglong)(*(uint *)(lVar14 + 0x154) & 1) + 4];
      }
      (*(code *)(*ppppppplVar20)[0x7c])();
      FUN_012595a0();
      local_70 = '\0';
      local_78 = ppppppplVar13;
      FUN_00d21140();
      if ((local_70 != '\0') && (local_78 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (unaff_R15 != (longlong *******)0x0) {
        FUN_00d50b20();
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)((longlong)local_168 + 0xc));
  }
  ppppppplVar13 = local_168;
  local_118 = 0;
  local_58 = (longlong *******)0x0;
  local_d8 = 0;
  local_48 = (longlong *******)0x0;
  FUN_00d242c0();
  iVar21 = *(int *)((longlong)ppppppplVar13 + 0xc);
  if (0 < iVar21) {
    lVar10 = 0;
    unaff_R15 = (longlong *******)&local_208;
    do {
      ppppplVar24 = local_168[2][lVar10];
      ppppppplVar16 = local_168;
      if (ppppplVar24 != (longlong *****)0x0) {
        FUN_00d50b00();
      }
      pVar19 = (pthread_key_t)ppppppplVar16;
      pvVar9 = _pthread_getspecific(pVar19);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar9 = _pthread_getspecific(pVar19);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014d1d00();
      ppppppplVar16 = local_78;
      local_200 = 0;
      if (local_70 == '\0') {
        if (local_78 != (longlong *******)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      local_200 = '\x01';
      local_208 = ppppppplVar16;
      FUN_0133aef0();
      if ((local_200 != '\0') && (local_208 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      if (ppppplVar24 != (longlong *****)0x0) {
        FUN_00d50b20();
      }
      lVar10 = lVar10 + 1;
      iVar21 = *(int *)((longlong)local_168 + 0xc);
      ppppppplVar16 = local_168;
    } while (lVar10 < iVar21);
  }
  uVar22 = 0;
  if (iVar21 < 1) {
    local_118 = 0;
    local_58 = (longlong *******)0x0;
    local_d8 = 0;
    local_48 = (longlong *******)0x0;
  }
  else {
    local_48 = (longlong *******)0x0;
    local_d8 = 0;
    uVar23 = 0;
    ppppppplVar13 = (longlong *******)0x0;
    do {
      iVar21 = (int)uVar22;
      lVar10 = (longlong)iVar21;
      pppppplVar17 = local_168[2];
      ppppppplVar16 = (longlong *******)pppppplVar17[lVar10];
      if (local_48 == ppppppplVar16) {
        if (((char)local_d8 == '\0') && (local_48 != (longlong *******)0x0)) {
          local_d8 = CONCAT71((int7)(int3)(uVar22 >> 8),1);
          unaff_R15 = (longlong *******)0x0;
          FUN_00d50b00();
        }
      }
      else {
        if (ppppppplVar16 != (longlong *******)0x0) {
          unaff_R15 = (longlong *******)(local_d8 & 0xffffffff);
          lVar10 = FUN_00d50b00();
        }
        if (((char)local_d8 == '\0') || (local_48 == (longlong *******)0x0)) {
          local_d8 = CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
          local_48 = ppppppplVar16;
        }
        else {
          unaff_R15 = (longlong *******)(local_d8 & 0xffffffff);
          local_48 = ppppppplVar16;
          uVar15 = FUN_00d50b20();
          local_d8 = CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
        }
      }
      pvVar9 = _pthread_getspecific((pthread_key_t)pppppplVar17);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc420();
      local_58 = local_78;
      cVar7 = (char)uVar23;
      ppppppplVar16 = local_78;
      ppppppplVar20 = local_78;
      if (local_78 == ppppppplVar13) {
        local_118 = uVar23;
        if ((cVar7 == '\0') && (local_78 != (longlong *******)0x0)) {
          ppppppplVar6 = ppppppplVar13;
          if (local_70 != '\0') goto LAB_014641f6;
          local_118 = CONCAT71((int7)((ulonglong)local_78 >> 8),1);
          FUN_00d50b00();
        }
        pVar19 = (pthread_key_t)ppppppplVar16;
        local_58 = ppppppplVar13;
      }
      else if (local_70 == '\0') {
        uVar15 = 0;
        if (local_78 != (longlong *******)0x0) {
          uVar15 = FUN_00d50b00();
        }
        pVar19 = (pthread_key_t)ppppppplVar16;
        local_118 = CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
        if ((cVar7 != '\0') && (ppppppplVar13 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        ppppppplVar6 = local_58;
        if ((cVar7 != '\0') && (ppppppplVar13 != (longlong *******)0x0)) {
          ppppppplVar16 = (longlong *******)FUN_00d50b20();
          ppppppplVar6 = local_58;
        }
LAB_014641f6:
        local_58 = ppppppplVar6;
        pVar19 = (pthread_key_t)ppppppplVar20;
        local_70 = '\0';
        local_118 = CONCAT71((int7)((ulonglong)ppppppplVar16 >> 8),1);
      }
      if ((local_70 != '\0') && (local_78 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      if (local_58 == (longlong *******)0x0) {
        pvVar9 = _pthread_getspecific(pVar19);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014d1b50();
        local_58 = local_78;
        if (local_78 != (longlong *******)0x0) {
          ppppppplVar16 = local_78;
          ppppppplVar13 = local_78;
          if (((local_70 == '\0') &&
              (ppppppplVar16 = (longlong *******)FUN_00d50b00(), local_70 != '\0')) &&
             (local_78 != (longlong *******)0x0)) {
            ppppppplVar16 = (longlong *******)FUN_00d50b20();
          }
          pVar19 = (pthread_key_t)ppppppplVar13;
          local_118 = CONCAT71((int7)((ulonglong)ppppppplVar16 >> 8),1);
          goto LAB_01464309;
        }
        local_58 = (longlong *******)0x0;
      }
      else {
LAB_01464309:
        pvVar9 = _pthread_getspecific(pVar19);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar9 = _pthread_getspecific(pVar19);
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          pVar19 = (pthread_key_t)local_48;
        }
        FUN_014d1d00();
        ppppppplVar16 = local_78;
        local_1f0 = 0;
        if (local_70 == '\0') {
          if (local_78 != (longlong *******)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_1f0 = '\x01';
        local_1f8 = ppppppplVar16;
        pvVar9 = _pthread_getspecific(pVar19);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014d1d00();
        local_1e8 = local_d0;
        local_1e0 = 0;
        if (local_c8 == '\0') {
          if (local_d0 != (longlong *******)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_c8 = '\0';
        }
        local_1e0 = '\x01';
        uVar8 = FUN_0136bb10(local_250,&local_1e8,1,0);
        if ((local_1e0 != '\0') && (local_1e8 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1f0 != '\0') && (local_1f8 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
        iVar21 = iVar21 - (uVar8 & 0xff);
      }
      uVar22 = (ulonglong)(iVar21 + 1U);
      uVar23 = local_118 & 0xffffffff;
      ppppppplVar16 = local_168;
      ppppppplVar13 = local_58;
    } while ((int)(iVar21 + 1U) < *(int *)((longlong)local_168 + 0xc));
  }
  pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01328c30();
  local_1d8 = local_d0;
  local_1d0 = 0;
  if (local_c8 == '\0') {
    if (local_d0 != (longlong *******)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_c8 = '\0';
  }
  local_1d0 = '\x01';
  uVar25 = FUN_00352bd0();
  ppppppplVar13 = local_78;
  if (local_168 == local_78) {
LAB_01464669:
    if ((local_70 != '\0') && (local_78 != (longlong *******)0x0)) {
      uVar25 = FUN_00d50b20();
    }
  }
  else {
    if (local_70 == '\0') {
      if (local_78 != (longlong *******)0x0) {
        FUN_00d50b00();
      }
      local_168 = ppppppplVar13;
      uVar25 = FUN_00d50b20();
      goto LAB_01464669;
    }
    local_168 = local_78;
    uVar25 = FUN_00d50b20();
    local_70 = '\0';
    local_168 = ppppppplVar13;
  }
  if ((local_1d0 != '\0') && (local_1d8 != (longlong *******)0x0)) {
    uVar25 = FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != (longlong *******)0x0)) {
    uVar25 = FUN_00d50b20();
  }
  FUN_00d242c0(uVar25,0);
  dVar3 = _DAT_0240d7f8 * local_230;
  uVar25 = SUB84(DAT_0240f0f8,0);
  uVar30 = (undefined4)((ulonglong)DAT_0240f0f8 >> 0x20);
  if (DAT_0240f0f8 <= (double)local_38) {
    uVar25 = SUB84(local_38,0);
    uVar30 = (undefined4)((ulonglong)local_38 >> 0x20);
  }
  local_130 = 0;
  local_b0 = (longlong *******)0x0;
  local_158 = 0;
  local_108 = (longlong *******)0x0;
  local_90 = 0;
  local_50 = (longlong *******)0x0;
  local_f8 = (longlong *******)0x0;
  local_98 = (longlong *******)0x0;
  local_100 = (longlong *******)0x0;
  local_a8 = (longlong *******)0x0;
  local_110 = (longlong *******)0x0;
  local_f0 = (longlong *******)0x0;
  local_170 = (longlong *******)0x0;
  local_e8 = (longlong *******)0x0;
  local_150 = 0;
  local_120 = (longlong *******)0x0;
  while( true ) {
    pVar19 = (pthread_key_t)ppppppplVar16;
    local_e0 = local_170;
    if (*(int *)((longlong)local_168 + 0xc) == 0) break;
    pppppplVar17 = local_168[2];
    ppppppplVar16 = (longlong *******)*pppppplVar17;
    if (local_120 == ppppppplVar16) {
      if (((char)local_150 == '\0') && (local_120 != (longlong *******)0x0)) {
        local_150 = CONCAT71((int7)((ulonglong)pppppplVar17 >> 8),1);
        FUN_00d50b00();
      }
    }
    else {
      if (ppppppplVar16 != (longlong *******)0x0) {
        pppppplVar17 = (longlong ******)FUN_00d50b00();
      }
      if (((char)local_150 == '\0') || (local_120 == (longlong *******)0x0)) {
        local_150 = CONCAT71((int7)((ulonglong)pppppplVar17 >> 8),1);
        local_120 = ppppppplVar16;
      }
      else {
        local_120 = ppppppplVar16;
        uVar15 = FUN_00d50b20();
        local_150 = CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
      }
    }
    pvVar9 = _pthread_getspecific(pVar19);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pVar19 = (pthread_key_t)local_120;
    }
    uVar15 = FUN_014d1d00();
    ppppppplVar16 = local_78;
    uVar18 = (undefined7)((ulonglong)uVar15 >> 8);
    if (local_78 == local_e8) {
      local_170 = local_e0;
      ppppppplVar16 = local_e8;
      if (((char)local_e0 == '\0') && (local_78 != (longlong *******)0x0)) {
        local_170 = (longlong *******)CONCAT71(uVar18,1);
        if (local_70 != '\0') goto LAB_014649de;
        local_170 = (longlong *******)CONCAT71(uVar18,1);
        FUN_00d50b00();
        ppppppplVar16 = local_e8;
      }
joined_r0x014649aa:
      local_e8 = ppppppplVar16;
      if ((local_70 != '\0') && (local_78 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_70 == '\0') {
        if (local_78 != (longlong *******)0x0) {
          uVar15 = FUN_00d50b00();
        }
        local_170 = (longlong *******)CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
        if (((char)local_e0 != '\0') && (local_e8 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
        goto joined_r0x014649aa;
      }
      local_170 = (longlong *******)CONCAT71(uVar18,1);
      if (((char)local_e0 == '\0') || (local_e8 == (longlong *******)0x0)) {
        local_e8 = local_78;
      }
      else {
        FUN_00d50b20();
        local_e8 = ppppppplVar16;
      }
    }
LAB_014649de:
    pvVar9 = _pthread_getspecific(pVar19);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar26 = FUN_013de3b0();
    local_38 = (longlong *******)CONCAT44(local_38._4_4_,uVar26);
    ppppppplVar13 = (longlong *******)FUN_00e8fc40();
    FUN_00d4ff40();
    *ppppppplVar13 = local_1a0;
    (*local_1a8)();
    ppppppplVar16 = (longlong *******)*unaff_RSI;
    local_178 = ppppppplVar13;
    if (0 < *(int *)((longlong)ppppppplVar16 + 0xc)) {
      lVar10 = 0;
      do {
        pppppplVar17 = ppppppplVar16[2];
        ppppppplVar13 = (longlong *******)pppppplVar17[lVar10];
        if (local_50 == ppppppplVar13) {
          if (((char)local_90 == '\0') && (local_50 != (longlong *******)0x0)) {
            local_90 = CONCAT71((int7)((ulonglong)pppppplVar17 >> 8),1);
            unaff_R15 = (longlong *******)0x0;
            FUN_00d50b00();
          }
        }
        else {
          if (ppppppplVar13 != (longlong *******)0x0) {
            unaff_R15 = (longlong *******)(local_90 & 0xffffffff);
            pppppplVar17 = (longlong ******)FUN_00d50b00();
          }
          if (((char)local_90 == '\0') || (local_50 == (longlong *******)0x0)) {
            local_90 = CONCAT71((int7)((ulonglong)pppppplVar17 >> 8),1);
            local_50 = ppppppplVar13;
          }
          else {
            unaff_R15 = (longlong *******)(local_90 & 0xffffffff);
            local_50 = ppppppplVar13;
            uVar15 = FUN_00d50b20();
            local_90 = CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
          }
        }
        pVar19 = (pthread_key_t)ppppppplVar16;
        pvVar9 = _pthread_getspecific(pVar19);
        if ((pvVar9 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
          pVar19 = (pthread_key_t)local_50;
        }
        dVar29 = (double)FUN_01264170();
        if (DAT_0241b6a8 <= dVar29) {
          pvVar9 = _pthread_getspecific(pVar19);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar27 = (float)FUN_0125a2c0();
          if ((float)((uint)((float)local_38 - fVar27) & _DAT_02390140) < DAT_02394240) {
            local_78 = local_50;
            local_70 = '\0';
            FUN_00d21140();
            if ((local_70 != '\0') && (local_78 != (longlong *******)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        lVar10 = lVar10 + 1;
        ppppppplVar16 = (longlong *******)*unaff_RSI;
      } while (lVar10 < *(int *)((longlong)ppppppplVar16 + 0xc));
    }
    if (*(int *)((longlong)local_178 + 0xc) != 0) {
      FUN_00d242c0(ppppppplVar16,0);
      ppppppplVar16 = (longlong *******)FUN_00e8fc40();
      FUN_00d4ff40();
      *ppppppplVar16 = local_1a0;
      (*local_1a8)();
      local_160 = ppppppplVar16;
      ppppppplVar16 = (longlong *******)FUN_00e8fc40();
      FUN_00d4ff40();
      *ppppppplVar16 = local_1a0;
      (*local_1a8)();
      local_180 = ppppppplVar16;
      if (1 < *(int *)((longlong)local_178 + 0xc)) {
        dVar29 = 0.0;
        do {
          pppppplVar17 = local_178[2];
          ppppppplVar16 = (longlong *******)pppppplVar17[(longlong)dVar29];
          ppppppplVar13 = local_178;
          if (local_50 == ppppppplVar16) {
            if (((char)local_90 == '\0') && (local_50 != (longlong *******)0x0)) {
              local_90 = CONCAT71((int7)((ulonglong)pppppplVar17 >> 8),1);
              FUN_00d50b00();
            }
          }
          else {
            if (ppppppplVar16 != (longlong *******)0x0) {
              pppppplVar17 = (longlong ******)FUN_00d50b00();
            }
            if (((char)local_90 == '\0') || (local_50 == (longlong *******)0x0)) {
              local_90 = CONCAT71((int7)((ulonglong)pppppplVar17 >> 8),1);
              local_50 = ppppppplVar16;
            }
            else {
              local_50 = ppppppplVar16;
              uVar15 = FUN_00d50b20();
              local_90 = CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
            }
          }
          pppppplVar17 = local_178[2];
          ppppppplVar16 = (longlong *******)pppppplVar17[(longlong)dVar29 + 1];
          if (local_108 == ppppppplVar16) {
            if (((char)local_158 == '\0') && (local_108 != (longlong *******)0x0)) {
              local_158 = CONCAT71((int7)((ulonglong)pppppplVar17 >> 8),1);
              FUN_00d50b00();
            }
LAB_01464e40:
            if (local_b0 != local_50) goto LAB_01464e51;
LAB_01464f51:
            ppppppplVar16 = local_b0;
            if (((char)local_90 == '\0') || ((char)local_130 != '\0')) {
              unaff_R15 = (longlong *******)(local_130 & 0xffffffff);
              iVar21 = *(int *)((longlong)local_160 + 0xc);
              goto joined_r0x01464fd6;
            }
            if (local_b0 != (longlong *******)0x0) {
              unaff_R15 = (longlong *******)CONCAT71((int7)((ulonglong)unaff_R15 >> 8),1);
              local_130 = 0;
              FUN_00d50b00();
              goto LAB_01464ec0;
            }
            unaff_R15 = (longlong *******)(local_130 & 0xffffffff);
            if (*(int *)((longlong)local_160 + 0xc) != 0) goto LAB_01464ed1;
LAB_01465000:
            local_130 = (ulonglong)unaff_R15 & 0xffffffff;
            local_b0 = ppppppplVar16;
          }
          else {
            if (ppppppplVar16 != (longlong *******)0x0) {
              pppppplVar17 = (longlong ******)FUN_00d50b00();
            }
            if (((char)local_158 != '\0') && (local_108 != (longlong *******)0x0)) {
              local_108 = ppppppplVar16;
              uVar15 = FUN_00d50b20();
              local_158 = CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
              goto LAB_01464e40;
            }
            local_158 = CONCAT71((int7)((ulonglong)pppppplVar17 >> 8),1);
            local_108 = ppppppplVar16;
            if (local_b0 == local_50) goto LAB_01464f51;
LAB_01464e51:
            if (((char)local_90 != '\0') && (local_50 != (longlong *******)0x0)) {
              FUN_00d50b00();
            }
            ppppppplVar16 = local_50;
            unaff_R15 = (longlong *******)(local_90 & 0xffffffff);
            if (((char)local_130 != '\0') &&
               (unaff_R15 = (longlong *******)(local_90 & 0xffffffff),
               local_b0 != (longlong *******)0x0)) {
              local_b0 = local_50;
              FUN_00d50b20();
              unaff_R15 = (longlong *******)(local_90 & 0xffffffff);
            }
LAB_01464ec0:
            iVar21 = *(int *)((longlong)local_160 + 0xc);
joined_r0x01464fd6:
            if (iVar21 == 0) goto LAB_01465000;
LAB_01464ed1:
            ppppppplVar20 = (longlong *******)*local_160[2];
            if (ppppppplVar16 == ppppppplVar20) {
              if (((char)unaff_R15 != '\0') || (ppppppplVar16 == (longlong *******)0x0))
              goto LAB_01465000;
              local_130 = CONCAT71((int7)((ulonglong)ppppppplVar20 >> 8),1);
              unaff_R15 = (longlong *******)0x0;
              FUN_00d50b00();
              local_b0 = ppppppplVar16;
            }
            else {
              uVar15 = 0;
              ppppppplVar13 = ppppppplVar20;
              local_b0 = ppppppplVar20;
              if (ppppppplVar20 != (longlong *******)0x0) {
                uVar15 = FUN_00d50b00();
                ppppppplVar13 = ppppppplVar20;
              }
              local_130 = CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
              if (((char)unaff_R15 != '\0') && (ppppppplVar16 != (longlong *******)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar13);
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            ppppppplVar13 = local_108;
          }
          local_38 = (longlong *******)FUN_0125a280();
          pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar13);
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            ppppppplVar13 = local_b0;
          }
          dVar31 = (double)FUN_0125a280();
          if ((double)local_38 - dVar31 < _DAT_0240d7f8) {
            if (*(int *)((longlong)local_160 + 0xc) == 0) {
              local_78 = local_50;
              local_70 = '\0';
              FUN_00d21140();
              if ((local_70 != '\0') && (local_78 != (longlong *******)0x0)) {
                FUN_00d50b20();
              }
            }
            local_78 = local_108;
            local_70 = '\0';
            FUN_00d235a0();
            if ((local_70 != '\0') && (local_78 != (longlong *******)0x0)) {
              FUN_00d50b20();
            }
          }
          if (*(int *)((longlong)local_160 + 0xc) != 0) {
            pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar13);
            if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              ppppppplVar13 = local_108;
            }
            local_38 = (longlong *******)FUN_0125a280();
            pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar13);
            if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              ppppppplVar13 = local_b0;
            }
            dVar31 = (double)FUN_0125a280();
            if ((_DAT_0240d7f8 <= (double)local_38 - dVar31) ||
               (dVar29 == (double)(ulonglong)(*(int *)((longlong)local_178 + 0xc) - 2))) {
              pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar13);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01328ff0();
              local_148 = local_78;
              if ((((local_70 == '\0') && (local_78 != (longlong *******)0x0)) &&
                  (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (longlong *******)0x0)) {
                FUN_00d50b20();
              }
              local_238 = dVar29;
              if (*(int *)((longlong)local_160 + 0xc) < 1) {
                local_e0 = (longlong *******)((ulonglong)local_e0._4_4_ << 0x20);
                local_a0 = 0.0;
                unaff_R15 = (longlong *******)0x0;
                local_38 = (longlong *******)((ulonglong)local_38._4_4_ << 0x20);
LAB_0146569b:
                dVar29 = local_238;
                pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar13);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01329770();
                ppppppplVar16 = local_78;
                if (local_148 == local_78) {
LAB_0146573a:
                  if (local_70 != '\0') {
LAB_01465740:
                    if (local_78 != (longlong *******)0x0) {
                      FUN_00d50b20();
                    }
                  }
                }
                else {
                  if (local_70 == '\0') {
                    if (local_78 != (longlong *******)0x0) {
                      FUN_00d50b00();
                    }
                    if (local_148 != (longlong *******)0x0) {
                      FUN_00d50b20();
                      local_148 = ppppppplVar16;
                      goto LAB_0146573a;
                    }
                    local_148 = ppppppplVar16;
                    if (local_70 == '\0') goto LAB_01465760;
                    goto LAB_01465740;
                  }
                  if (local_148 == (longlong *******)0x0) {
                    local_148 = local_78;
                  }
                  else {
                    FUN_00d50b20();
                    local_148 = ppppppplVar16;
                  }
                }
LAB_01465760:
                if (0 < *(int *)((longlong)local_160 + 0xc)) {
                  ppppppplVar16 = (longlong *******)0x0;
                  local_b8 = (longlong *******)0x0;
                  do {
                    ppppppplVar13 = (longlong *******)local_160[2][(longlong)ppppppplVar16];
                    ppppppplVar20 = local_160;
                    if (ppppppplVar13 != (longlong *******)0x0) {
                      FUN_00d50b00();
                    }
                    local_40 = ppppppplVar13;
                    pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar20);
                    if (pvVar9 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    dVar31 = (double)FUN_0125a280();
                    local_c0 = ppppppplVar16;
                    if (0 < *(int *)((longlong)local_148 + 0xc)) {
                      lVar10 = 0;
                      do {
                        ppppppplVar16 = (longlong *******)local_148[2][lVar10];
                        ppppppplVar20 = local_148;
                        if (ppppppplVar16 != (longlong *******)0x0) {
                          FUN_00d50b00();
                        }
                        pVar19 = (pthread_key_t)ppppppplVar20;
                        pvVar9 = _pthread_getspecific(pVar19);
                        if (pvVar9 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        dVar2 = (double)FUN_014bacf0();
                        if ((double)((ulonglong)(dVar31 - dVar2) & _DAT_023908f0) < DAT_02391030) {
                          pvVar9 = _pthread_getspecific(pVar19);
                          if (pvVar9 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          fVar27 = (float)FUN_014bae60();
                          if ((float)local_e0 < fVar27) {
                            if (unaff_R15 == local_40) {
                              ppppppplVar13 = (longlong *******)((ulonglong)local_38 & 0xffffffff);
                              if (((char)local_38 == '\0') && (local_40 != (longlong *******)0x0)) {
                                ppppppplVar13 =
                                     (longlong *******)
                                     CONCAT71((uint7)(uint3)((ulonglong)local_38 >> 8),1);
                                local_38 = (longlong *******)
                                           ((ulonglong)local_38 & 0xffffffff00000000);
                                FUN_00d50b00();
                              }
                            }
                            else {
                              if (local_40 != (longlong *******)0x0) {
                                FUN_00d50b00();
                              }
                              ppppppplVar13 =
                                   (longlong *******)
                                   CONCAT71((int7)((ulonglong)ppppppplVar13 >> 8),1);
                              if (((char)local_38 != '\0') && (unaff_R15 != (longlong *******)0x0))
                              {
                                FUN_00d50b20();
                              }
                            }
                            uVar18 = (undefined7)((ulonglong)dVar29 >> 8);
                            uVar26 = SUB84(ppppppplVar13,0);
                            if (local_b8 == ppppppplVar16) {
                              if ((local_a0._0_1_ == '\0') && (local_b8 != (longlong *******)0x0)) {
                                dVar29 = (double)CONCAT71(uVar18,1);
                                local_a0 = 0.0;
                                FUN_00d50b00();
                                ppppppplVar20 = local_b8;
                              }
                              else {
                                dVar29 = (double)((ulonglong)local_a0 & 0xffffffff);
                                ppppppplVar20 = local_b8;
                              }
                            }
                            else {
                              if (ppppppplVar16 != (longlong *******)0x0) {
                                FUN_00d50b00();
                              }
                              dVar29 = (double)CONCAT71(uVar18,1);
                              ppppppplVar20 = ppppppplVar16;
                              if ((local_a0._0_1_ != '\0') && (local_b8 != (longlong *******)0x0)) {
                                local_38 = (longlong *******)CONCAT44(local_38._4_4_,uVar26);
                                local_b8 = ppppppplVar16;
                                FUN_00d50b20();
                                ppppppplVar20 = local_b8;
                              }
                            }
                            local_b8 = ppppppplVar20;
                            local_a0 = (double)((ulonglong)dVar29 & 0xffffffff);
                            local_38._0_4_ = (float)uVar26;
                            pvVar9 = _pthread_getspecific(pVar19);
                            if (pvVar9 != (void *)0x0) {
                              local_a0 = (double)((ulonglong)dVar29 & 0xffffffff);
                              local_38._0_4_ = (float)uVar26;
                              FUN_00e8b990();
                            }
                            local_a0 = (double)((ulonglong)dVar29 & 0xffffffff);
                            local_38._0_4_ = (float)uVar26;
                            uVar28 = FUN_014bae60();
                            local_e0 = (longlong *******)CONCAT44(local_e0._4_4_,uVar28);
                            local_38 = (longlong *******)CONCAT44(local_38._4_4_,uVar26);
                            local_a0 = (double)((ulonglong)dVar29 & 0xffffffff);
                            unaff_R15 = local_40;
                          }
                        }
                        if (ppppppplVar16 != (longlong *******)0x0) {
                          FUN_00d50b20();
                        }
                        lVar10 = lVar10 + 1;
                      } while (lVar10 < *(int *)((longlong)local_148 + 0xc));
                    }
                    if (local_40 != (longlong *******)0x0) {
                      FUN_00d50b20();
                    }
                    dVar29 = local_238;
                    ppppppplVar16 = (longlong *******)((longlong)local_c0 + 1);
                  } while ((longlong)ppppppplVar16 < (longlong)*(int *)((longlong)local_160 + 0xc));
                  if (local_b8 != (longlong *******)0x0) {
                    pvVar9 = _pthread_getspecific((pthread_key_t)local_160);
                    if (pvVar9 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_0135de20();
                    goto LAB_01465b70;
                  }
                }
                local_b8 = (longlong *******)0x0;
                if (unaff_R15 == (longlong *******)0x0) goto LAB_01465b85;
LAB_01465ba9:
                iVar21 = *(int *)((longlong)local_160 + 0xc);
              }
              else {
                local_e0 = (longlong *******)((ulonglong)local_e0._4_4_ << 0x20);
                ppppppplVar16 = (longlong *******)0x0;
                local_b8 = (longlong *******)0x0;
                local_a0 = 0.0;
                unaff_R15 = (longlong *******)0x0;
                local_38 = (longlong *******)((ulonglong)local_38._4_4_ << 0x20);
                do {
                  dVar29 = local_238;
                  ppppppplVar13 = (longlong *******)local_160[2][(longlong)ppppppplVar16];
                  ppppppplVar20 = local_160;
                  if (ppppppplVar13 != (longlong *******)0x0) {
                    FUN_00d50b00();
                  }
                  local_40 = ppppppplVar13;
                  pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar20);
                  if (pvVar9 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar31 = (double)FUN_0125a280();
                  local_c0 = ppppppplVar16;
                  if (0 < *(int *)((longlong)local_148 + 0xc)) {
                    lVar10 = 0;
                    do {
                      ppppppplVar13 = (longlong *******)local_148[2][lVar10];
                      ppppppplVar20 = local_148;
                      if (ppppppplVar13 != (longlong *******)0x0) {
                        FUN_00d50b00();
                      }
                      pVar19 = (pthread_key_t)ppppppplVar20;
                      pvVar9 = _pthread_getspecific(pVar19);
                      if (pvVar9 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      dVar2 = (double)FUN_014bacf0();
                      if ((double)((ulonglong)(dVar31 - dVar2) & _DAT_023908f0) < DAT_02391030) {
                        pvVar9 = _pthread_getspecific(pVar19);
                        if (pvVar9 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        fVar27 = (float)FUN_014bae60();
                        if ((float)local_e0 < fVar27) {
                          if (unaff_R15 == local_40) {
                            ppppppplVar16 = (longlong *******)((ulonglong)local_38 & 0xffffffff);
                            if (((char)local_38 == '\0') && (local_40 != (longlong *******)0x0)) {
                              ppppppplVar16 =
                                   (longlong *******)
                                   CONCAT71((uint7)(uint3)((ulonglong)local_38 >> 8),1);
                              local_38 = (longlong *******)
                                         ((ulonglong)local_38 & 0xffffffff00000000);
                              FUN_00d50b00();
                            }
                          }
                          else {
                            if (local_40 != (longlong *******)0x0) {
                              FUN_00d50b00();
                            }
                            ppppppplVar16 =
                                 (longlong *******)CONCAT71((int7)((ulonglong)ppppppplVar16 >> 8),1)
                            ;
                            if (((char)local_38 != '\0') && (unaff_R15 != (longlong *******)0x0)) {
                              FUN_00d50b20();
                            }
                          }
                          uVar18 = (undefined7)((ulonglong)dVar29 >> 8);
                          uVar26 = SUB84(ppppppplVar16,0);
                          if (local_b8 == ppppppplVar13) {
                            if ((local_a0._0_1_ == '\0') && (local_b8 != (longlong *******)0x0)) {
                              dVar29 = (double)CONCAT71(uVar18,1);
                              local_a0 = 0.0;
                              FUN_00d50b00();
                              ppppppplVar20 = local_b8;
                            }
                            else {
                              dVar29 = (double)((ulonglong)local_a0 & 0xffffffff);
                              ppppppplVar20 = local_b8;
                            }
                          }
                          else {
                            if (ppppppplVar13 != (longlong *******)0x0) {
                              FUN_00d50b00();
                            }
                            dVar29 = (double)CONCAT71(uVar18,1);
                            ppppppplVar20 = ppppppplVar13;
                            if ((local_a0._0_1_ != '\0') && (local_b8 != (longlong *******)0x0)) {
                              local_38 = (longlong *******)CONCAT44(local_38._4_4_,uVar26);
                              local_b8 = ppppppplVar13;
                              FUN_00d50b20();
                              ppppppplVar20 = local_b8;
                            }
                          }
                          local_b8 = ppppppplVar20;
                          local_a0 = (double)((ulonglong)dVar29 & 0xffffffff);
                          local_38._0_4_ = (float)uVar26;
                          pvVar9 = _pthread_getspecific(pVar19);
                          if (pvVar9 != (void *)0x0) {
                            local_a0 = (double)((ulonglong)dVar29 & 0xffffffff);
                            local_38._0_4_ = (float)uVar26;
                            FUN_00e8b990();
                          }
                          local_a0 = (double)((ulonglong)dVar29 & 0xffffffff);
                          local_38._0_4_ = (float)uVar26;
                          uVar28 = FUN_014bae60();
                          local_e0 = (longlong *******)CONCAT44(local_e0._4_4_,uVar28);
                          local_38 = (longlong *******)CONCAT44(local_38._4_4_,uVar26);
                          local_a0 = (double)((ulonglong)dVar29 & 0xffffffff);
                          unaff_R15 = local_40;
                        }
                      }
                      if (ppppppplVar13 != (longlong *******)0x0) {
                        FUN_00d50b20();
                      }
                      lVar10 = lVar10 + 1;
                    } while (lVar10 < *(int *)((longlong)local_148 + 0xc));
                  }
                  if (local_40 != (longlong *******)0x0) {
                    FUN_00d50b20();
                  }
                  ppppppplVar16 = (longlong *******)((longlong)local_c0 + 1);
                } while ((longlong)ppppppplVar16 < (longlong)*(int *)((longlong)local_160 + 0xc));
                ppppppplVar13 = local_160;
                dVar29 = local_238;
                if (local_b8 == (longlong *******)0x0) goto LAB_0146569b;
LAB_01465b70:
                if (unaff_R15 != (longlong *******)0x0) goto LAB_01465ba9;
LAB_01465b85:
                unaff_R15 = (longlong *******)*local_160[2];
                if (unaff_R15 != (longlong *******)0x0) {
                  local_38 = (longlong *******)
                             CONCAT44(local_38._4_4_,
                                      (int)CONCAT71((int7)((ulonglong)local_160[2] >> 8),1));
                  FUN_00d50b00();
                  goto LAB_01465ba9;
                }
                unaff_R15 = (longlong *******)0x0;
                iVar21 = *(int *)((longlong)local_160 + 0xc);
              }
              if (0 < iVar21) {
                lVar10 = 0;
                do {
                  ppppppplVar16 = (longlong *******)local_160[2][lVar10];
                  if (ppppppplVar16 != (longlong *******)0x0) {
                    FUN_00d50b00();
                  }
                  if (ppppppplVar16 != unaff_R15) {
                    local_70 = '\0';
                    local_78 = ppppppplVar16;
                    FUN_00d235a0();
                    if ((local_70 != '\0') && (local_78 != (longlong *******)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  if (ppppppplVar16 != (longlong *******)0x0) {
                    FUN_00d50b20();
                  }
                  lVar10 = lVar10 + 1;
                } while (lVar10 < *(int *)((longlong)local_160 + 0xc));
              }
              FUN_00d216c0();
              if (((char)local_38 != '\0') && (unaff_R15 != (longlong *******)0x0)) {
                FUN_00d50b20();
              }
              if ((local_a0._0_1_ != '\0') && (local_b8 != (longlong *******)0x0)) {
                FUN_00d50b20();
              }
              if (local_148 != (longlong *******)0x0) {
                FUN_00d50b20();
              }
            }
          }
          dVar29 = (double)((longlong)dVar29 + 1);
        } while ((longlong)dVar29 < (longlong)*(int *)((longlong)local_178 + 0xc) + -1);
      }
      if (0 < *(int *)((longlong)local_180 + 0xc)) {
        lVar10 = 0;
        do {
          ppppppplVar16 = (longlong *******)local_180[2][lVar10];
          if (ppppppplVar16 != (longlong *******)0x0) {
            FUN_00d50b00();
          }
          local_70 = '\0';
          local_78 = ppppppplVar16;
          FUN_00d23f50();
          if ((local_70 != '\0') && (local_78 != (longlong *******)0x0)) {
            FUN_00d50b20();
          }
          if (ppppppplVar16 != (longlong *******)0x0) {
            FUN_00d50b20();
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)((longlong)local_180 + 0xc));
      }
      ppppppplVar13 = local_e8;
      ppppppplVar16 = local_180;
      if (local_f0 == local_e8) {
        local_80._0_4_ = (uint)local_110;
        if (((char)local_170 == '\0') || ((char)local_110 != '\0')) {
          iVar21 = *(int *)((longlong)local_178 + 0xc);
        }
        else {
          ppppppplVar13 = local_f0;
          if (local_f0 != (longlong *******)0x0) {
            local_80 = (longlong *******)(CONCAT71((int7)((ulonglong)local_f0 >> 8),1) & 0xffffffff)
            ;
            local_110 = (longlong *******)0x0;
            FUN_00d50b00();
            local_38 = ppppppplVar13;
            goto LAB_01465dc7;
          }
          iVar21 = *(int *)((longlong)local_178 + 0xc);
        }
        local_38 = local_f0;
        ppppppplVar13 = (longlong *******)((ulonglong)local_110 & 0xffffffff);
        if (0 < iVar21) goto LAB_01465dd8;
LAB_0146712e:
        ppppppplVar13 = local_38;
        FUN_00d50b20();
        local_f0 = ppppppplVar13;
        local_110 = (longlong *******)(ulonglong)(uint)local_80;
      }
      else {
        if (((char)local_170 != '\0') && (local_e8 != (longlong *******)0x0)) {
          FUN_00d50b00();
        }
        local_80 = (longlong *******)((ulonglong)local_170 & 0xffffffff);
        local_38 = ppppppplVar13;
        if ((char)local_110 != '\0') {
          local_80 = (longlong *******)((ulonglong)local_170 & 0xffffffff);
          local_38 = ppppppplVar13;
          if (local_f0 != (longlong *******)0x0) {
            local_f0 = ppppppplVar13;
            FUN_00d50b20();
            local_80 = (longlong *******)((ulonglong)local_170 & 0xffffffff);
            local_38 = ppppppplVar13;
          }
        }
LAB_01465dc7:
        ppppppplVar13 = local_80;
        if (*(int *)((longlong)local_178 + 0xc) < 1) goto LAB_0146712e;
LAB_01465dd8:
        local_80 = ppppppplVar13;
        local_e0 = (longlong *******)0x0;
        do {
          pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_a0 = (double)FUN_013de8d0();
          pppppplVar17 = local_178[2];
          ppppppplVar13 = (longlong *******)pppppplVar17[(longlong)local_e0];
          ppppppplVar16 = local_e0;
          if (local_50 == ppppppplVar13) {
            if (((char)local_90 == '\0') && (local_50 != (longlong *******)0x0)) {
              local_90 = CONCAT71((int7)((ulonglong)pppppplVar17 >> 8),1);
              FUN_00d50b00();
            }
          }
          else {
            if (ppppppplVar13 != (longlong *******)0x0) {
              pppppplVar17 = (longlong ******)FUN_00d50b00();
            }
            if (((char)local_90 == '\0') || (local_50 == (longlong *******)0x0)) {
              local_90 = CONCAT71((int7)((ulonglong)pppppplVar17 >> 8),1);
              local_50 = ppppppplVar13;
            }
            else {
              local_50 = ppppppplVar13;
              uVar15 = FUN_00d50b20();
              local_90 = CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
            }
          }
          local_228 = local_50;
          local_220 = '\0';
          FUN_0147f040();
          uVar8 = (uint)local_80;
          if (local_78 == (longlong *******)0x0) {
            pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
            if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              ppppppplVar16 = local_50;
            }
            local_148 = (longlong *******)FUN_0125a280();
            pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
            if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              ppppppplVar16 = local_38;
            }
            dVar29 = (double)FUN_013dea30();
            if (dVar29 <= (double)local_148) {
              if ((local_70 != '\0') && (local_78 != (longlong *******)0x0)) {
                FUN_00d50b20();
              }
              if ((local_220 != '\0') && (local_228 != (longlong *******)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01466110;
            }
            pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
            if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              ppppppplVar16 = local_50;
            }
            local_148 = (longlong *******)FUN_01259520();
            if ((local_70 != '\0') && (local_78 != (longlong *******)0x0)) {
              FUN_00d50b20();
            }
            if ((local_220 != '\0') && (local_228 != (longlong *******)0x0)) {
              FUN_00d50b20();
            }
            if ((double)local_148 <= local_a0) goto LAB_01466110;
            pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
            if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              ppppppplVar16 = local_50;
            }
            dVar29 = (double)FUN_0125a280();
            if ((local_a0 <= dVar29) ||
               ((longlong)*(int *)((longlong)local_178 + 0xc) + -1 <= (longlong)local_e0)) {
LAB_0146632a:
              pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
              if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
                ppppppplVar16 = local_50;
              }
              local_a0 = (double)FUN_01259650();
              pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01328ff0();
              ppppppplVar13 = local_78;
              if ((((local_70 == '\0') && (local_78 != (longlong *******)0x0)) &&
                  (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (longlong *******)0x0)) {
                FUN_00d50b20();
              }
              local_b8 = ppppppplVar13;
              if (*(int *)((longlong)ppppppplVar13 + 0xc) < 1) {
                uVar4 = false;
                local_148 = (longlong *******)DAT_02391030;
                uStack_140 = 0;
LAB_014665b7:
                pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01329770();
                local_c0 = local_78;
                ppppppplVar16 = local_b8;
                if (local_b8 == local_78) {
                  local_c0 = local_b8;
LAB_01466651:
                  if ((local_70 != '\0') && (local_78 != (longlong *******)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  if (local_70 == '\0') {
                    if (local_78 != (longlong *******)0x0) {
                      FUN_00d50b00();
                    }
                    FUN_00d50b20();
                    goto LAB_01466651;
                  }
                  FUN_00d50b20();
                }
                if (0 < *(int *)((longlong)local_c0 + 0xc)) {
                  lVar10 = 0;
                  local_40 = (longlong *******)0x0;
                  do {
                    ppppppplVar16 = (longlong *******)local_c0[2][lVar10];
                    ppppppplVar13 = local_c0;
                    if (ppppppplVar16 != (longlong *******)0x0) {
                      FUN_00d50b00();
                    }
                    pVar19 = (pthread_key_t)ppppppplVar13;
                    pvVar9 = _pthread_getspecific(pVar19);
                    if (pvVar9 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    dVar29 = (double)FUN_014bacf0();
                    if ((double)((ulonglong)(local_a0 - dVar29) & _DAT_023908f0) < (double)local_148
                       ) {
                      if (local_40 == ppppppplVar16) {
                        ppppppplVar13 = local_40;
                        bVar5 = (bool)uVar4;
                        if ((!(bool)uVar4) && (local_40 != (longlong *******)0x0)) {
                          FUN_00d50b00();
                          ppppppplVar13 = local_40;
                          bVar5 = true;
                        }
                      }
                      else {
                        if (ppppppplVar16 != (longlong *******)0x0) {
                          FUN_00d50b00();
                        }
                        bVar5 = true;
                        ppppppplVar13 = ppppppplVar16;
                        if (((bool)uVar4) && (local_40 != (longlong *******)0x0)) {
                          local_40 = ppppppplVar16;
                          FUN_00d50b20();
                          ppppppplVar13 = local_40;
                        }
                      }
                      local_40 = ppppppplVar13;
                      pvVar9 = _pthread_getspecific(pVar19);
                      if (pvVar9 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      dVar29 = (double)FUN_014bacf0();
                      local_148 = (longlong *******)((ulonglong)(local_a0 - dVar29) & _DAT_023908f0)
                      ;
                      uStack_140 = 0;
                      uVar4 = bVar5;
                    }
                    if (ppppppplVar16 != (longlong *******)0x0) {
                      FUN_00d50b20();
                    }
                    lVar10 = lVar10 + 1;
                  } while (lVar10 < *(int *)((longlong)local_c0 + 0xc));
                  ppppppplVar16 = local_c0;
                  if (local_40 != (longlong *******)0x0) {
                    pvVar9 = _pthread_getspecific((pthread_key_t)local_c0);
                    if (pvVar9 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_0135de20();
                    goto LAB_01466921;
                  }
                }
                pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01364d50(SUB84(local_a0,0),0);
                local_40 = local_78;
                ppppppplVar16 = local_78;
                if (local_78 != (longlong *******)0x0) {
                  uVar4 = true;
                  if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) &&
                     (local_78 != (longlong *******)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_01466921;
                }
                local_40 = (longlong *******)0x0;
                if (local_98 == (longlong *******)0x0) goto LAB_01466b77;
LAB_0146692f:
                pVar19 = (pthread_key_t)ppppppplVar16;
                if ((char)local_f8 == '\0') {
                  ppppppplVar13 = (longlong *******)0x0;
                }
                else {
                  local_98 = (longlong *******)0x0;
                  FUN_00d50b20();
                  ppppppplVar13 = (longlong *******)0x0;
                }
              }
              else {
                lVar10 = 0;
                local_148 = (longlong *******)DAT_02391030;
                uStack_140 = 0;
                uVar4 = false;
                local_40 = (longlong *******)0x0;
                do {
                  ppppppplVar16 = (longlong *******)local_b8[2][lVar10];
                  ppppppplVar13 = local_b8;
                  if (ppppppplVar16 != (longlong *******)0x0) {
                    FUN_00d50b00();
                  }
                  pVar19 = (pthread_key_t)ppppppplVar13;
                  pvVar9 = _pthread_getspecific(pVar19);
                  if (pvVar9 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar29 = (double)FUN_014bacf0();
                  if ((double)((ulonglong)(local_a0 - dVar29) & _DAT_023908f0) < (double)local_148)
                  {
                    if (local_40 == ppppppplVar16) {
                      ppppppplVar13 = local_40;
                      bVar5 = (bool)uVar4;
                      if ((!(bool)uVar4) && (local_40 != (longlong *******)0x0)) {
                        FUN_00d50b00();
                        ppppppplVar13 = local_40;
                        bVar5 = true;
                      }
                    }
                    else {
                      if (ppppppplVar16 != (longlong *******)0x0) {
                        FUN_00d50b00();
                      }
                      bVar5 = true;
                      ppppppplVar13 = ppppppplVar16;
                      if (((bool)uVar4) && (local_40 != (longlong *******)0x0)) {
                        local_40 = ppppppplVar16;
                        FUN_00d50b20();
                        ppppppplVar13 = local_40;
                      }
                    }
                    local_40 = ppppppplVar13;
                    pvVar9 = _pthread_getspecific(pVar19);
                    if (pvVar9 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    dVar29 = (double)FUN_014bacf0();
                    local_148 = (longlong *******)((ulonglong)(local_a0 - dVar29) & _DAT_023908f0);
                    uStack_140 = 0;
                    uVar4 = bVar5;
                  }
                  if (ppppppplVar16 != (longlong *******)0x0) {
                    FUN_00d50b20();
                  }
                  lVar10 = lVar10 + 1;
                } while (lVar10 < *(int *)((longlong)local_b8 + 0xc));
                local_c0 = local_b8;
                ppppppplVar16 = local_b8;
                if (local_40 == (longlong *******)0x0) goto LAB_014665b7;
LAB_01466921:
                if (local_98 != (longlong *******)0x0) goto LAB_0146692f;
LAB_01466b77:
                pVar19 = (pthread_key_t)ppppppplVar16;
                ppppppplVar13 = local_f8;
              }
              ppppppplVar16 = local_100;
              if (local_a8 != (longlong *******)0x0) {
                if ((char)local_100 == '\0') {
                  local_148 = (longlong *******)0x0;
                  ppppppplVar16 = local_148;
                }
                else {
                  local_98 = (longlong *******)0x0;
                  local_f8 = (longlong *******)((ulonglong)ppppppplVar13 & 0xffffffff);
                  local_a8 = (longlong *******)0x0;
                  FUN_00d50b20();
                  local_148 = (longlong *******)0x0;
                  ppppppplVar16 = local_148;
                }
              }
              local_148 = ppppppplVar16;
              if (local_40 != (longlong *******)0x0) {
                pvVar9 = _pthread_getspecific(pVar19);
                if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
                  pVar19 = (pthread_key_t)local_40;
                }
                local_a0 = (double)FUN_014bacf0();
              }
              local_a8 = (longlong *******)0x0;
              pvVar9 = _pthread_getspecific(pVar19);
              if (pvVar9 != (void *)0x0) {
                local_a8 = (longlong *******)0x0;
                lVar10 = FUN_00e8b990();
                if (lVar10 != 0) {
                  pVar19 = (pthread_key_t)local_38;
                }
              }
              local_a8 = (longlong *******)0x0;
              dVar29 = (double)FUN_013de8d0();
              dVar31 = local_a0 - (double)CONCAT44(uVar30,uVar25);
              lVar10 = (longlong)(local_230 * dVar31);
              if (dVar31 <= dVar29 + _DAT_0240d7f8) {
LAB_01466c1b:
                pvVar9 = _pthread_getspecific(pVar19);
                if ((pvVar9 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                  pVar19 = (pthread_key_t)local_38;
                }
                lVar14 = FUN_013de650();
                pvVar9 = _pthread_getspecific(pVar19);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                lVar10 = lVar10 - lVar14;
                local_338 = '\0';
                local_340 = 0;
                local_330 = local_38;
                local_328 = '\0';
                FUN_0133bd20(lVar10,&local_330,local_250,&local_121,1);
                pVar19 = (pthread_key_t)lVar10;
                if ((local_328 != '\0') && (local_330 != (longlong *******)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_338 != '\0') && (local_340 != 0)) {
                  FUN_00d50b20();
                }
                if (local_38 == (longlong *******)0x0) {
                  local_98 = (longlong *******)0x0;
                  local_a8 = (longlong *******)0x0;
                  local_80._0_4_ = uVar8;
                }
                else {
                  if ((char)local_80 == '\0') {
                    uVar8 = 0;
                    local_80 = (longlong *******)0x0;
                  }
                  else {
                    FUN_00d50b00();
                  }
                  local_a8 = (longlong *******)0x0;
                  ppppppplVar20 = local_38;
                  ppppppplVar13 = local_80;
LAB_01466da5:
                  local_38 = ppppppplVar20;
                  pvVar9 = _pthread_getspecific(pVar19);
                  if (pvVar9 != (void *)0x0) {
                    local_38 = ppppppplVar20;
                    FUN_00e8b990();
                  }
                  local_318 = '\0';
                  local_320 = ppppppplVar20;
                  local_98 = ppppppplVar20;
                  FUN_0133aef0();
                  if ((local_318 != '\0') && (local_320 != (longlong *******)0x0)) {
                    FUN_00d50b20();
                  }
                  ppppppplVar16 = local_98;
                  if (local_40 != (longlong *******)0x0) {
                    local_38 = local_98;
                    pvVar9 = _pthread_getspecific(pVar19);
                    if (pvVar9 != (void *)0x0) {
                      local_38 = ppppppplVar16;
                      FUN_00e8b990();
                    }
                    local_310 = local_40;
                    local_308 = '\0';
                    local_300 = ppppppplVar16;
                    local_2f8 = '\0';
                    FUN_01346520();
                    if ((local_2f8 != '\0') && (local_300 != (longlong *******)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_308 != '\0') && (local_310 != (longlong *******)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  local_78 = local_98;
                  local_70 = '\0';
                  uVar26 = FUN_00d235a0();
                  if ((local_70 != '\0') && (local_78 != (longlong *******)0x0)) {
                    uVar26 = FUN_00d50b20();
                  }
                  local_2f0 = local_98;
                  local_2e8 = '\0';
                  local_2e0 = local_50;
                  local_2d8 = '\0';
                  FUN_0147f0f0(uVar26,&local_2e0);
                  if ((local_2d8 != '\0') && (local_2e0 != (longlong *******)0x0)) {
                    FUN_00d50b20();
                  }
                  local_80._0_4_ = uVar8;
                  if ((local_2e8 != '\0') && (local_2f0 != (longlong *******)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
              else {
                pvVar9 = _pthread_getspecific(pVar19);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_350 = local_38;
                local_348 = '\0';
                lVar14 = lVar10;
                uVar15 = FUN_0135f200(lVar10,&local_350,local_250,&local_121);
                ppppppplVar16 = local_78;
                pVar19 = (pthread_key_t)lVar14;
                if (local_78 == (longlong *******)0x0) {
                  ppppppplVar16 = (longlong *******)0x0;
                }
                else if (local_70 == '\0') {
                  uVar15 = FUN_00d50b00();
                  local_148 = (longlong *******)CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
                  if ((local_70 != '\0') && (local_78 != (longlong *******)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_70 = '\0';
                  local_148 = (longlong *******)CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
                }
                if ((local_348 != '\0') && (local_350 != (longlong *******)0x0)) {
                  FUN_00d50b20();
                }
                if (ppppppplVar16 == (longlong *******)0x0) goto LAB_01466c1b;
                if ((char)local_148 == '\0') {
                  if (local_38 == ppppppplVar16) goto LAB_01466fd8;
LAB_01466fa7:
                  uVar8 = (uint)local_148;
                  ppppppplVar20 = ppppppplVar16;
                  ppppppplVar13 = local_148;
                  local_a8 = ppppppplVar16;
                  if (((char)local_80 != '\0') && (local_38 != (longlong *******)0x0)) {
                    ppppppplVar13 = (longlong *******)((ulonglong)local_148 & 0xffffffff);
                    local_38 = ppppppplVar16;
                    FUN_00d50b20();
                  }
                  goto LAB_01466da5;
                }
                local_a8 = ppppppplVar16;
                FUN_00d50b00();
                if (local_38 != ppppppplVar16) {
                  local_a8 = ppppppplVar16;
                  FUN_00d50b00();
                  goto LAB_01466fa7;
                }
LAB_01466fd8:
                ppppppplVar13 = local_148;
                ppppppplVar20 = local_38;
                if (((char)local_148 != '\0') && ((char)local_80 == '\0')) {
                  uVar8 = (uint)CONCAT71((uint7)(uint3)((ulonglong)local_80 >> 8),1);
                  local_a8 = local_38;
                  FUN_00d50b00();
                  ppppppplVar13 = local_148;
                  ppppppplVar20 = local_38;
                }
                local_148 = ppppppplVar13;
                local_a8 = ppppppplVar16;
                if (ppppppplVar20 != (longlong *******)0x0) goto LAB_01466da5;
                local_98 = (longlong *******)0x0;
                local_38 = ppppppplVar20;
                local_80._0_4_ = uVar8;
              }
              if (((bool)uVar4) && (local_40 != (longlong *******)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
              local_38 = local_98;
              ppppppplVar20 = local_148;
            }
            else {
              ppppppplVar16 = local_e0;
              pvVar9 = _pthread_getspecific((pthread_key_t)local_e0);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_148 = (longlong *******)FUN_0125a280();
              uStack_140 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
              pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
              if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
                ppppppplVar16 = local_50;
              }
              dVar29 = (double)FUN_0125a280();
              if ((double)((ulonglong)(dVar29 - local_a0) & _DAT_023908f0) <=
                  (double)((ulonglong)((double)local_148 - local_a0) & _DAT_023908f0))
              goto LAB_0146632a;
              ppppppplVar20 = (longlong *******)((ulonglong)local_100 & 0xffffffff);
              ppppppplVar13 = local_f8;
            }
          }
          else {
            if (local_70 != '\0') {
              FUN_00d50b20();
            }
            if ((local_220 != '\0') && (local_228 != (longlong *******)0x0)) {
              FUN_00d50b20();
            }
LAB_01466110:
            pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
            if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              ppppppplVar16 = local_50;
            }
            local_a0 = (double)FUN_0125a280();
            pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
            if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              ppppppplVar16 = local_38;
            }
            dVar29 = (double)FUN_013dea30();
            ppppppplVar20 = (longlong *******)((ulonglong)local_100 & 0xffffffff);
            ppppppplVar13 = local_f8;
            if (dVar29 < local_a0) break;
          }
          ppppppplVar16 = (longlong *******)((longlong)local_e0 + 1);
          local_80 = (longlong *******)(ulonglong)(uint)local_80;
          local_100 = (longlong *******)((ulonglong)ppppppplVar20 & 0xffffffff);
          local_f8 = ppppppplVar13;
          local_e0 = ppppppplVar16;
        } while ((longlong)ppppppplVar16 < (longlong)*(int *)((longlong)local_178 + 0xc));
        local_f0 = local_38;
        local_110 = local_80;
        unaff_R15 = local_f8;
        if (local_180 != (longlong *******)0x0) goto LAB_0146712e;
      }
      if (local_160 != (longlong *******)0x0) {
        FUN_00d50b20();
      }
    }
    local_78 = local_120;
    local_70 = '\0';
    FUN_00d23f50();
    if ((local_70 != '\0') && (local_78 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  pvVar9 = _pthread_getspecific(pVar19);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01327a50();
  local_1c8 = local_d0;
  local_1c0 = 0;
  if (local_c8 == '\0') {
    if (local_d0 != (longlong *******)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_c8 = '\0';
  }
  local_1c0 = '\x01';
  FUN_0147ce20();
  local_c0 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != (longlong *******)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
       (local_78 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  if ((local_1c0 != '\0') && (local_1c8 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if (*(int *)((longlong)local_c0 + 0xc) < 1) {
    local_40 = (longlong *******)0x0;
    local_38 = (longlong *******)0x0;
  }
  else {
    lVar10 = 0;
    local_38 = (longlong *******)0x0;
    local_40 = (longlong *******)0x0;
    do {
      uVar22 = local_d8 & 0xffffffff;
      pppppplVar17 = local_c0[2];
      ppppppplVar16 = (longlong *******)pppppplVar17[lVar10];
      ppppppplVar13 = local_c0;
      if (local_38 == ppppppplVar16) {
        if (((char)local_40 == '\0') && (local_38 != (longlong *******)0x0)) {
          local_40 = (longlong *******)CONCAT71((int7)((ulonglong)pppppplVar17 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (ppppppplVar16 != (longlong *******)0x0) {
          pppppplVar17 = (longlong ******)FUN_00d50b00();
        }
        if (((char)local_40 == '\0') || (local_38 == (longlong *******)0x0)) {
          local_40 = (longlong *******)CONCAT71((int7)((ulonglong)pppppplVar17 >> 8),1);
          local_38 = ppppppplVar16;
        }
        else {
          local_38 = ppppppplVar16;
          uVar15 = FUN_00d50b20();
          local_40 = (longlong *******)CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
        }
      }
      pVar19 = (pthread_key_t)ppppppplVar13;
      pvVar9 = _pthread_getspecific(pVar19);
      if ((pvVar9 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
        pVar19 = (pthread_key_t)local_38;
      }
      uVar15 = FUN_013de560();
      ppppppplVar16 = local_78;
      uVar18 = (undefined7)((ulonglong)uVar15 >> 8);
      cVar7 = (char)uVar22;
      if (local_78 == local_48) {
        local_d8 = uVar22;
        ppppppplVar16 = local_48;
        if ((cVar7 == '\0') && (local_78 != (longlong *******)0x0)) {
          local_d8 = CONCAT71(uVar18,1);
          if (local_70 != '\0') goto LAB_014674be;
          local_d8 = CONCAT71(uVar18,1);
          FUN_00d50b00();
          ppppppplVar16 = local_48;
        }
joined_r0x01467489:
        local_48 = ppppppplVar16;
        if ((local_70 != '\0') && (local_78 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_70 == '\0') {
          if (local_78 != (longlong *******)0x0) {
            uVar15 = FUN_00d50b00();
          }
          local_d8 = CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
          if ((cVar7 != '\0') && (local_48 != (longlong *******)0x0)) {
            FUN_00d50b20();
          }
          goto joined_r0x01467489;
        }
        local_d8 = CONCAT71(uVar18,1);
        if ((cVar7 == '\0') || (local_48 == (longlong *******)0x0)) {
          local_48 = local_78;
        }
        else {
          FUN_00d50b20();
          local_48 = ppppppplVar16;
        }
      }
LAB_014674be:
      local_78 = local_38;
      local_70 = '\0';
      cVar7 = FUN_00d23d70();
      if ((local_70 != '\0') && (local_78 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      if (cVar7 == '\0') {
        pvVar9 = _pthread_getspecific(pVar19);
        if ((pvVar9 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
          pVar19 = (pthread_key_t)local_48;
        }
        fVar27 = (float)FUN_014bc1c0();
        if (DAT_0239109c < fVar27) {
          pvVar9 = _pthread_getspecific(pVar19);
          if ((pvVar9 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
            pVar19 = (pthread_key_t)local_48;
          }
          FUN_014bc170(DAT_0239109c);
        }
        pvVar9 = _pthread_getspecific(pVar19);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_2b0 = local_38;
        local_2a8 = '\0';
        FUN_01353c30();
        if ((local_2a8 != '\0') && (local_2b0 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        pvVar9 = _pthread_getspecific(pVar19);
        if ((pvVar9 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
          pVar19 = (pthread_key_t)local_48;
        }
        fVar27 = (float)FUN_014bc1c0();
        if (fVar27 < DAT_02411290) {
          pvVar9 = _pthread_getspecific(pVar19);
          if ((pvVar9 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
            pVar19 = (pthread_key_t)local_48;
          }
          FUN_014bc170(DAT_02411290);
        }
        pvVar9 = _pthread_getspecific(pVar19);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0134a960();
        local_78 = local_48;
        local_70 = '\0';
        cVar7 = FUN_00d24090();
        if ((local_70 != '\0') && (local_78 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
        if (cVar7 != '\0') {
          pvVar9 = _pthread_getspecific(pVar19);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_2d0 = local_48;
          local_2c8 = '\0';
          FUN_0134aad0();
          if ((local_2c8 != '\0') && (local_2d0 != (longlong *******)0x0)) {
            FUN_00d50b20();
          }
        }
        pvVar9 = _pthread_getspecific(pVar19);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0134ae60();
        local_78 = local_38;
        local_70 = '\0';
        cVar7 = FUN_00d24090();
        if ((local_70 != '\0') && (local_78 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
        if (cVar7 == '\0') {
          pvVar9 = _pthread_getspecific(pVar19);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_2c0 = local_38;
          local_2b8 = '\0';
          FUN_0134aea0();
          if ((local_2b8 != '\0') && (local_2c0 != (longlong *******)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      lVar10 = lVar10 + 1;
      ppppppplVar16 = local_c0;
    } while (lVar10 < *(int *)((longlong)local_c0 + 0xc));
  }
  if (local_188 != (longlong *)0x0) {
    local_70 = '\0';
    local_78 = (longlong *******)0x0;
    local_68 = local_188[2];
    local_60 = 0;
    if (0 < *(int *)(local_68 + 0xc)) {
      ppppppplVar16 = (longlong *******)0x0;
      do {
        uVar23 = (ulonglong)local_40 & 0xffffffff;
        uVar22 = local_d8 & 0xffffffff;
        ppppppplVar16 = (longlong *******)(longlong)(int)ppppppplVar16;
        local_78 = *(longlong ********)
                    (*(longlong *)(local_68 + 0x10) + (longlong)ppppppplVar16 * 8);
        uVar15 = FUN_0147f1a0(ppppppplVar16,&local_78);
        ppppppplVar13 = local_d0;
        uVar18 = (undefined7)((ulonglong)uVar15 >> 8);
        cVar7 = (char)uVar23;
        if (local_d0 == local_38) {
          local_40 = (longlong *******)uVar23;
          ppppppplVar13 = local_38;
          if ((cVar7 == '\0') && (local_d0 != (longlong *******)0x0)) {
            local_40 = (longlong *******)CONCAT71(uVar18,1);
            if (local_c8 != '\0') goto LAB_01467ab1;
            local_40 = (longlong *******)CONCAT71(uVar18,1);
            FUN_00d50b00();
            ppppppplVar13 = local_38;
          }
joined_r0x01467a79:
          local_38 = ppppppplVar13;
          if ((local_c8 != '\0') && (local_d0 != (longlong *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_c8 == '\0') {
            if (local_d0 != (longlong *******)0x0) {
              uVar15 = FUN_00d50b00();
            }
            local_40 = (longlong *******)CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
            if ((cVar7 != '\0') && (local_38 != (longlong *******)0x0)) {
              FUN_00d50b20();
            }
            goto joined_r0x01467a79;
          }
          local_40 = (longlong *******)CONCAT71(uVar18,1);
          if ((cVar7 == '\0') || (local_38 == (longlong *******)0x0)) {
            local_38 = local_d0;
          }
          else {
            FUN_00d50b20();
            local_38 = ppppppplVar13;
          }
        }
LAB_01467ab1:
        pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          ppppppplVar16 = local_38;
        }
        uVar15 = FUN_013de560();
        ppppppplVar13 = local_d0;
        uVar18 = (undefined7)((ulonglong)uVar15 >> 8);
        cVar7 = (char)uVar22;
        if (local_d0 == local_48) {
          local_d8 = uVar22;
          ppppppplVar13 = local_48;
          if ((cVar7 == '\0') && (local_d0 != (longlong *******)0x0)) {
            local_d8 = CONCAT71(uVar18,1);
            if (local_c8 != '\0') goto LAB_01467c11;
            local_d8 = CONCAT71(uVar18,1);
            FUN_00d50b00();
            ppppppplVar13 = local_48;
          }
joined_r0x01467bdf:
          local_48 = ppppppplVar13;
          if ((local_c8 != '\0') && (local_d0 != (longlong *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_c8 == '\0') {
            if (local_d0 != (longlong *******)0x0) {
              uVar15 = FUN_00d50b00();
            }
            local_d8 = CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
            if ((cVar7 != '\0') && (local_48 != (longlong *******)0x0)) {
              FUN_00d50b20();
            }
            goto joined_r0x01467bdf;
          }
          local_d8 = CONCAT71(uVar18,1);
          if ((cVar7 == '\0') || (local_48 == (longlong *******)0x0)) {
            local_48 = local_d0;
          }
          else {
            FUN_00d50b20();
            local_48 = ppppppplVar13;
          }
        }
LAB_01467c11:
        pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          ppppppplVar16 = local_48;
        }
        FUN_014bc420();
        ppppppplVar20 = local_58;
        ppppppplVar13 = local_d0;
        uVar18 = (undefined7)(uVar22 >> 8);
        if (local_d0 == local_58) {
          if (((char)local_118 == '\0') && (local_d0 != (longlong *******)0x0)) {
            ppppppplVar13 = local_58;
            if (local_c8 != '\0') goto LAB_01467cab;
            uVar22 = CONCAT71(uVar18,1);
            FUN_00d50b00();
          }
          else {
            uVar22 = local_118 & 0xffffffff;
          }
        }
        else if (local_c8 == '\0') {
          if (local_d0 != (longlong *******)0x0) {
            FUN_00d50b00();
          }
          uVar22 = CONCAT71(uVar18,1);
          ppppppplVar20 = ppppppplVar13;
          if (((char)local_118 != '\0') && (local_58 != (longlong *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (((char)local_118 != '\0') && (local_58 != (longlong *******)0x0)) {
            FUN_00d50b20();
          }
LAB_01467cab:
          local_c8 = '\0';
          uVar22 = CONCAT71(uVar18,1);
          ppppppplVar20 = ppppppplVar13;
        }
        if ((local_c8 != '\0') && (local_d0 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
        if (ppppppplVar20 == (longlong *******)0x0) {
          pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014d1b50();
          local_58 = local_d0;
          if (local_d0 == (longlong *******)0x0) {
            ppppppplVar16 = local_d0;
            pvVar9 = _pthread_getspecific(0);
            pVar19 = (pthread_key_t)ppppppplVar16;
            if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              pVar19 = (pthread_key_t)local_48;
            }
            pvVar9 = _pthread_getspecific(pVar19);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01328c30();
            local_1b8 = local_260;
            local_1b0 = 0;
            if (local_258 == '\0') {
              if (local_260 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_258 = '\0';
            }
            local_1b0 = '\x01';
            FUN_014d3970(0,&local_1b8);
            local_58 = local_d0;
            ppppppplVar16 = local_d0;
            if (local_d0 == (longlong *******)0x0) {
              local_58 = (longlong *******)0x0;
              local_118 = uVar22;
            }
            else if (local_c8 == '\0') {
              uVar15 = FUN_00d50b00();
              local_118 = CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
              if ((local_c8 != '\0') && (local_d0 != (longlong *******)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_c8 = '\0';
              local_118 = CONCAT71((int7)((ulonglong)local_d0 >> 8),1);
            }
            if ((local_1b0 != '\0') && (local_1b8 != 0)) {
              FUN_00d50b20();
            }
            uVar22 = local_118;
            ppppppplVar20 = local_58;
            if ((local_258 != '\0') && (local_260 != 0)) {
              FUN_00d50b20();
              uVar22 = local_118;
              ppppppplVar20 = local_58;
            }
          }
          else {
            ppppppplVar13 = local_d0;
            ppppppplVar16 = local_d0;
            if (((local_c8 == '\0') &&
                (ppppppplVar13 = (longlong *******)FUN_00d50b00(), local_c8 != '\0')) &&
               (local_d0 != (longlong *******)0x0)) {
              ppppppplVar13 = (longlong *******)FUN_00d50b20();
            }
            uVar22 = CONCAT71((int7)((ulonglong)ppppppplVar13 >> 8),1);
            ppppppplVar20 = local_58;
          }
        }
        local_58 = ppppppplVar20;
        local_118 = uVar22;
        pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_a0 = (double)FUN_01259520();
        pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          ppppppplVar16 = local_38;
        }
        dVar29 = (double)FUN_013dea30();
        pVar19 = (pthread_key_t)ppppppplVar16;
        if (dVar29 <= local_a0) {
          if (local_58 == (longlong *******)0x0) {
LAB_014684a0:
            lVar10 = (longlong)(local_a0 * local_230);
          }
          else {
            pvVar9 = _pthread_getspecific(pVar19);
            if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              ppppppplVar16 = local_58;
            }
            dVar29 = (double)FUN_014bb3e0();
            pVar19 = (pthread_key_t)ppppppplVar16;
            if (local_a0 + _DAT_0240d7f8 <= dVar29) goto LAB_014684a0;
            pvVar9 = _pthread_getspecific(pVar19);
            ppppppplVar13 = local_58;
            if ((pvVar9 != (void *)0x0) &&
               (lVar10 = FUN_00e8b990(), ppppppplVar13 = local_58, lVar10 != 0)) {
              ppppppplVar16 = local_58;
              ppppppplVar13 =
                   (longlong *******)local_58[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
            }
            pVar19 = (pthread_key_t)ppppppplVar16;
            lVar10 = (*(code *)(*ppppppplVar13)[0x70])();
          }
          pvVar9 = _pthread_getspecific(pVar19);
          if ((pvVar9 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
            pVar19 = (pthread_key_t)local_48;
          }
          lVar14 = FUN_014bb590();
          pvVar9 = _pthread_getspecific(pVar19);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_2a0 = local_38;
          local_298 = '\0';
          local_290 = 0;
          local_288 = '\0';
          FUN_0133bd20(lVar10 - lVar14,&local_290,local_250,&local_121,1);
          if ((local_288 != '\0') && (local_290 != 0)) {
            FUN_00d50b20();
          }
          if ((local_298 != '\0') && (local_2a0 != (longlong *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar9 = _pthread_getspecific(pVar19);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_238 = (double)FUN_0125a280();
          pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar25 = FUN_0125a2c0();
          local_148 = (longlong *******)CONCAT44(local_148._4_4_,uVar25);
          if (*(int *)((longlong)local_190 + 0xc) < 1) {
            ppppplVar24 = (longlong *****)0x0;
            bVar5 = false;
          }
          else {
            local_160 = (longlong *******)0x0;
            lVar10 = 0;
            bVar5 = false;
            ppppplVar24 = (longlong *****)0x0;
            do {
              ppppplVar1 = local_190[2][lVar10];
              ppppppplVar16 = local_190;
              if (ppppplVar1 != (longlong *****)0x0) {
                FUN_00d50b00();
              }
              pVar19 = (pthread_key_t)ppppppplVar16;
              pvVar9 = _pthread_getspecific(pVar19);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar27 = (float)FUN_0125a2c0();
              if ((float)((uint)(local_148._0_4_ - fVar27) & _DAT_02390140) < DAT_02394240) {
                pvVar9 = _pthread_getspecific(pVar19);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar29 = (double)FUN_0125a280();
                if (dVar29 < local_a0) {
                  pvVar9 = _pthread_getspecific(pVar19);
                  if (pvVar9 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar29 = (double)FUN_01259520();
                  if (local_a0 < dVar29) {
                    pvVar9 = _pthread_getspecific(pVar19);
                    if (pvVar9 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    dVar31 = (double)FUN_0125a280();
                    dVar29 = local_238;
                    if (local_238 < dVar31) {
                      pvVar9 = _pthread_getspecific(pVar19);
                      if (pvVar9 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      dVar29 = (double)FUN_0125a280();
                    }
                    local_b8 = (longlong *******)dVar29;
                    pvVar9 = _pthread_getspecific(pVar19);
                    if (pvVar9 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    dVar31 = (double)FUN_01259520();
                    dVar29 = local_a0;
                    if (dVar31 < local_a0) {
                      pvVar9 = _pthread_getspecific(pVar19);
                      if (pvVar9 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      dVar29 = (double)FUN_01259520();
                    }
                    local_b8 = (longlong *******)(dVar29 - (double)local_b8);
                    if ((double)local_160 < (double)local_b8) {
                      if (ppppplVar24 == ppppplVar1) {
                        if ((bVar5) || (ppppplVar24 == (longlong *****)0x0)) goto LAB_014683bd;
                        bVar5 = true;
                        FUN_00d50b00();
                        local_160 = local_b8;
                      }
                      else {
                        if (ppppplVar1 != (longlong *****)0x0) {
                          FUN_00d50b00();
                        }
                        if ((bVar5) && (ppppplVar24 != (longlong *****)0x0)) {
                          FUN_00d50b20();
                          bVar5 = true;
                          local_160 = local_b8;
                          ppppplVar24 = ppppplVar1;
                        }
                        else {
                          bVar5 = true;
                          ppppplVar24 = ppppplVar1;
LAB_014683bd:
                          local_160 = local_b8;
                        }
                      }
                    }
                  }
                }
              }
              if (ppppplVar1 != (longlong *****)0x0) {
                FUN_00d50b20();
              }
              lVar10 = lVar10 + 1;
              ppppppplVar16 = local_190;
            } while (lVar10 < *(int *)((longlong)local_190 + 0xc));
          }
          pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            ppppppplVar16 = local_38;
          }
          dVar29 = (double)FUN_013dea30();
          if (local_a0 <= dVar29) {
            local_a0 = dVar29;
          }
          if (ppppplVar24 == (longlong *****)0x0) {
LAB_014685b1:
            pVar19 = (pthread_key_t)ppppppplVar16;
            dVar29 = local_a0 * local_230;
          }
          else {
            pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar29 = (double)FUN_01259520();
            if (dVar29 <= local_a0) goto LAB_014685b1;
            pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar29 = (double)FUN_01259520();
            pVar19 = (pthread_key_t)ppppppplVar16;
            dVar29 = dVar29 * local_230;
          }
          lVar10 = (longlong)dVar29;
          if (local_58 != (longlong *******)0x0) {
            pvVar9 = _pthread_getspecific(pVar19);
            ppppppplVar16 = local_58;
            if ((pvVar9 != (void *)0x0) &&
               (lVar14 = FUN_00e8b990(), ppppppplVar16 = local_58, lVar14 != 0)) {
              ppppppplVar16 =
                   (longlong *******)local_58[(ulonglong)(*(uint *)(lVar14 + 0x154) & 1) + 4];
            }
            lVar14 = (*(code *)(*ppppppplVar16)[0x70])();
            ppppppplVar16 = (longlong *******)((longlong)dVar3 + lVar10);
            if (lVar14 < (longlong)ppppppplVar16) {
              pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
              ppppppplVar13 = local_58;
              if ((pvVar9 != (void *)0x0) &&
                 (lVar10 = FUN_00e8b990(), ppppppplVar13 = local_58, lVar10 != 0)) {
                ppppppplVar16 = local_58;
                ppppppplVar13 =
                     (longlong *******)local_58[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
              }
              lVar10 = (*(code *)(*ppppppplVar13)[0x70])();
            }
          }
          pVar19 = (pthread_key_t)ppppppplVar16;
          pvVar9 = _pthread_getspecific(pVar19);
          if ((pvVar9 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
            pVar19 = (pthread_key_t)local_48;
          }
          lVar14 = FUN_014bb590();
          pvVar9 = _pthread_getspecific(pVar19);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_280 = local_38;
          local_278 = '\0';
          local_270 = 0;
          local_268 = '\0';
          FUN_0133bd20(lVar10 - lVar14,&local_270,local_250,&local_121,1);
          if ((local_268 != '\0') && (local_270 != 0)) {
            FUN_00d50b20();
          }
          if ((local_278 != '\0') && (local_280 != (longlong *******)0x0)) {
            FUN_00d50b20();
          }
          if ((bVar5) && (ppppplVar24 != (longlong *****)0x0)) {
            FUN_00d50b20();
          }
        }
        local_60 = local_60 + 1;
        ppppppplVar16 = (longlong *******)(ulonglong)local_60;
      } while ((int)local_60 < *(int *)(local_68 + 0xc));
      if ((local_70 != '\0') && (local_78 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  puVar12 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = local_1a0;
  (*local_1a8)();
  pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01328c30();
  ppppppplVar13 = local_78;
  if ((((local_70 == '\0') && (local_78 != (longlong *******)0x0)) &&
      (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if (0 < *(int *)((longlong)ppppppplVar13 + 0xc)) {
    lVar10 = 0;
    do {
      ppppppplVar20 = (longlong *******)ppppppplVar13[2][lVar10];
      if (ppppppplVar20 != (longlong *******)0x0) {
        FUN_00d50b00();
      }
      local_70 = '\0';
      local_78 = ppppppplVar20;
      FUN_00d21140();
      if ((local_70 != '\0') && (local_78 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      if (ppppppplVar20 != (longlong *******)0x0) {
        FUN_00d50b20();
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)((longlong)ppppppplVar13 + 0xc));
  }
  pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013293b0();
  if (ppppppplVar13 == local_78) {
LAB_01468ad5:
    if ((local_70 != '\0') && (local_78 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    ppppppplVar13 = local_78;
    if (local_70 == '\0') {
      if (local_78 != (longlong *******)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      goto LAB_01468ad5;
    }
    FUN_00d50b20();
  }
  if (0 < *(int *)((longlong)ppppppplVar13 + 0xc)) {
    lVar10 = 0;
    do {
      ppppppplVar20 = (longlong *******)ppppppplVar13[2][lVar10];
      if (ppppppplVar20 != (longlong *******)0x0) {
        FUN_00d50b00();
      }
      local_70 = '\0';
      local_78 = ppppppplVar20;
      FUN_00d21140();
      if ((local_70 != '\0') && (local_78 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      if (ppppppplVar20 != (longlong *******)0x0) {
        FUN_00d50b20();
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)((longlong)ppppppplVar13 + 0xc));
  }
  if (0 < *(int *)((longlong)puVar12 + 0xc)) {
    lVar10 = 0;
    do {
      pvVar9 = _pthread_getspecific((pthread_key_t)ppppppplVar16);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_240 = 0;
      lVar14 = *(longlong *)(unaff_RDI + 0x68);
      if (lVar14 != 0) {
        FUN_00d50b00();
      }
      local_240 = '\x01';
      local_248 = lVar14;
      FUN_014dcf30();
      if ((local_240 != '\0') && (local_248 != 0)) {
        FUN_00d50b20();
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)((longlong)puVar12 + 0xc));
    if (ppppppplVar13 == (longlong *******)0x0) goto LAB_01468c24;
  }
  FUN_00d50b20();
LAB_01468c24:
  FUN_00d50b20();
  if (local_c0 != (longlong *******)0x0) {
    FUN_00d50b20();
  }
  if (local_190 != (longlong *******)0x0) {
    FUN_00d50b20();
  }
  if (local_168 != (longlong *******)0x0) {
    FUN_00d50b20();
  }
  if (local_198 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_188 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_130 != '\0') && (local_b0 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_158 != '\0') && (local_108 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_90 != '\0') && (local_50 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_f8 != '\0') && (local_98 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_100 != '\0') && (local_a8 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_110 != '\0') && (local_f0 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_e0 != '\0') && (local_e8 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_40 != '\0') && (local_38 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_150 != '\0') && (local_120 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_118 != '\0') && (local_58 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_d8 != '\0') && (local_48 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  return;
}


