// Function: FUN_0184b210
// Address: 0184b210
// Size: 19999 bytes
// Class: MUScaleRegion


/* WARNING: Removing unreachable block (ram,0x0185016b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0184b210(undefined8 **param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  undefined8 **ppuVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  bool bVar14;
  bool bVar15;
  undefined8 **ppuVar16;
  char cVar17;
  undefined4 uVar18;
  uint uVar19;
  int iVar20;
  pthread_key_t pVar21;
  void *pvVar22;
  longlong lVar23;
  undefined8 *puVar24;
  undefined8 **ppuVar25;
  longlong *plVar26;
  ulonglong uVar27;
  undefined1 uVar28;
  int iVar29;
  undefined8 **ppuVar30;
  undefined8 **ppuVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  ulonglong uVar35;
  undefined4 unaff_ESI;
  int iVar36;
  uint uVar37;
  longlong unaff_RDI;
  ulonglong uVar38;
  ulonglong uVar39;
  char cVar40;
  ulonglong uVar41;
  int *piVar42;
  int iVar43;
  longlong lVar44;
  bool bVar45;
  bool bVar46;
  float fVar47;
  float fVar48;
  undefined8 uVar49;
  double dVar50;
  float fVar53;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined4 in_XMM4_Da;
  undefined4 in_XMM5_Da;
  undefined1 local_258 [16];
  float local_248;
  double local_1b8;
  double local_1b0;
  undefined8 local_198;
  char local_190;
  undefined8 local_188;
  undefined8 **local_180;
  undefined8 *local_178;
  undefined8 **local_170;
  undefined8 *local_168;
  undefined8 uStack_160;
  ulonglong local_158;
  undefined8 uStack_150;
  undefined8 local_140;
  int *local_138;
  code *local_130;
  undefined8 *local_128;
  undefined8 **local_120;
  undefined8 *local_118;
  char local_110;
  pthread_key_t local_104;
  longlong local_100;
  undefined8 *local_f8;
  undefined8 **local_f0;
  undefined8 *local_e8;
  char local_e0;
  undefined1 local_d8 [24];
  uint *local_c0;
  float local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int local_a0;
  undefined4 uStack_9c;
  char local_98;
  undefined8 **local_90;
  undefined8 **local_88;
  char local_80 [8];
  undefined8 **local_78;
  undefined8 local_70;
  int local_68;
  undefined8 local_58;
  char local_50;
  undefined1 local_48 [24];
  undefined8 extraout_XMM0_Qb;
  
  if (*(int *)(*(longlong *)(unaff_RDI + 0x18) + 0xc) == 0) {
    return;
  }
  _DAT_027d6820 = param_4;
  _DAT_027d6824 = in_XMM4_Da;
  _DAT_027d6828 = in_XMM5_Da;
  _DAT_02802f68 = unaff_ESI;
  FUN_00d23310();
  ppuVar25 = local_88;
  local_198 = (undefined8 *)CONCAT71(local_198._1_7_,local_80[0]);
  ppuVar31 = (undefined8 **)local_80;
  if (local_80[0] == '\0') {
    ppuVar31 = (undefined8 **)&local_198;
  }
  *(undefined1 *)ppuVar31 = 0;
  if ((local_80[0] != '\0') && (ppuVar25 != (undefined8 **)0x0)) {
    FUN_00d50b20();
  }
  pvVar22 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar22 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01267000();
  if (local_58 == (undefined8 **)0x0) {
    bVar45 = false;
  }
  else {
    FUN_00d23310();
    ppuVar31 = local_88;
    local_118 = (undefined8 *)CONCAT71(local_118._1_7_,local_80[0]);
    ppuVar30 = &local_118;
    if (local_80[0] != '\0') {
      ppuVar30 = (undefined8 **)local_80;
    }
    *(undefined1 *)ppuVar30 = 0;
    if ((local_80[0] != '\0') && (ppuVar31 != (undefined8 **)0x0)) {
      FUN_00d50b20();
    }
    pvVar22 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar22 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01267000();
    pvVar22 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar22 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    bVar45 = CONCAT44(uStack_9c,local_a0) != 0;
    if ((local_98 != '\0') && (CONCAT44(uStack_9c,local_a0) != 0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_118 != '\0') && (ppuVar31 != (undefined8 **)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_50 != '\0') && (local_58 != (undefined8 **)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_198 != '\0') && (ppuVar25 != (undefined8 **)0x0)) {
    FUN_00d50b20();
  }
  if (bVar45) {
    FUN_00d23310();
    ppuVar25 = local_88;
    local_e8 = (undefined8 *)CONCAT71(local_e8._1_7_,local_80[0]);
    ppuVar31 = &local_e8;
    if (local_80[0] != '\0') {
      ppuVar31 = (undefined8 **)local_80;
    }
    *(undefined1 *)ppuVar31 = 0;
    if ((local_80[0] != '\0') && (ppuVar25 != (undefined8 **)0x0)) {
      FUN_00d50b20();
    }
    pvVar22 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar22 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01267000();
    pvVar22 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar22 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    ppuVar31 = *(undefined8 ***)(unaff_RDI + 0x20);
    if (ppuVar31 != local_58) {
      param_1 = ppuVar31;
      if (local_50 == '\0') {
        if (local_58 == (undefined8 **)0x0) {
          ppuVar31 = (undefined8 **)0x0;
        }
        else {
          FUN_00d50b00();
          ppuVar31 = local_58;
          param_1 = *(undefined8 ***)(unaff_RDI + 0x20);
        }
      }
      else {
        local_50 = '\0';
        ppuVar31 = local_58;
      }
      *(undefined8 ***)(unaff_RDI + 0x20) = ppuVar31;
      if (param_1 != (undefined8 **)0x0) {
        FUN_00d50b20();
        ppuVar31 = local_58;
      }
    }
    pVar21 = (pthread_key_t)param_1;
    if ((local_50 != '\0') && (ppuVar31 != (undefined8 **)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (CONCAT44(uStack_9c,local_a0) != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_e8 != '\0') && (ppuVar25 != (undefined8 **)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_016c0a70();
    ppuVar25 = *(undefined8 ***)(unaff_RDI + 0x20);
    if (ppuVar25 != local_88) {
      param_1 = ppuVar25;
      if (local_80[0] == '\0') {
        if (local_88 == (undefined8 **)0x0) {
          ppuVar25 = (undefined8 **)0x0;
        }
        else {
          FUN_00d50b00();
          ppuVar25 = local_88;
          param_1 = *(undefined8 ***)(unaff_RDI + 0x20);
        }
      }
      else {
        local_80[0] = '\0';
        ppuVar25 = local_88;
      }
      *(undefined8 ***)(unaff_RDI + 0x20) = ppuVar25;
      if (param_1 != (undefined8 **)0x0) {
        FUN_00d50b20();
        ppuVar25 = local_88;
      }
    }
    pVar21 = (pthread_key_t)param_1;
    if ((local_80[0] != '\0') && (ppuVar25 != (undefined8 **)0x0)) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0x28) != 0) {
    *(undefined8 *)(unaff_RDI + 0x28) = 0;
    FUN_00d50b20();
  }
  FUN_00d23310();
  ppuVar25 = local_88;
  ppuVar31 = (undefined8 **)&local_198;
  if (local_80[0] != '\0') {
    ppuVar31 = (undefined8 **)local_80;
  }
  local_198 = (undefined8 *)CONCAT71(local_198._1_7_,local_80[0]);
  *(undefined1 *)ppuVar31 = 0;
  if ((local_80[0] != '\0') && (ppuVar25 != (undefined8 **)0x0)) {
    FUN_00d50b20();
  }
  pvVar22 = _pthread_getspecific(pVar21);
  if (pvVar22 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0128c200();
  if (local_58 == (undefined8 **)0x0) {
    bVar45 = false;
  }
  else {
    FUN_00d23310();
    ppuVar31 = local_88;
    local_118 = (undefined8 *)CONCAT71(local_118._1_7_,local_80[0]);
    ppuVar30 = &local_118;
    if (local_80[0] != '\0') {
      ppuVar30 = (undefined8 **)local_80;
    }
    *(undefined1 *)ppuVar30 = 0;
    if ((local_80[0] != '\0') && (ppuVar31 != (undefined8 **)0x0)) {
      FUN_00d50b20();
    }
    pvVar22 = _pthread_getspecific(pVar21);
    if (pvVar22 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0128c200();
    pvVar22 = _pthread_getspecific(pVar21);
    if (pvVar22 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01508450();
    bVar45 = CONCAT44(uStack_9c,local_a0) != 0;
    if ((local_98 != '\0') && (CONCAT44(uStack_9c,local_a0) != 0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_118 != '\0') && (ppuVar31 != (undefined8 **)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_50 != '\0') && (local_58 != (undefined8 **)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_198 != '\0') && (ppuVar25 != (undefined8 **)0x0)) {
    FUN_00d50b20();
  }
  if (bVar45) {
    FUN_00d23310();
    ppuVar31 = local_88;
    ppuVar25 = &local_e8;
    ppuVar30 = (undefined8 **)local_80;
    if (local_80[0] == '\0') {
      ppuVar30 = ppuVar25;
    }
    local_e8 = (undefined8 *)CONCAT71(local_e8._1_7_,local_80[0]);
    *(undefined1 *)ppuVar30 = 0;
    if ((local_80[0] != '\0') && (ppuVar31 != (undefined8 **)0x0)) {
      FUN_00d50b20();
    }
    pvVar22 = _pthread_getspecific((pthread_key_t)ppuVar25);
    if (pvVar22 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0128c200();
    pvVar22 = _pthread_getspecific((pthread_key_t)ppuVar25);
    if (pvVar22 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01508450();
    ppuVar30 = local_58;
    if (local_50 == '\0') {
      if (((local_58 != (undefined8 **)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
         (local_58 != (undefined8 **)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = '\0';
    }
    if ((local_98 != '\0') && (CONCAT44(uStack_9c,local_a0) != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_e8 != '\0') && (ppuVar31 != (undefined8 **)0x0)) {
      FUN_00d50b20();
    }
    pVar21 = (pthread_key_t)ppuVar25;
    if (ppuVar30 != (undefined8 **)0x0) {
      pvVar22 = _pthread_getspecific(pVar21);
      if (pvVar22 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01510d50();
      ppuVar31 = *(undefined8 ***)(unaff_RDI + 0x28);
      if (ppuVar31 != local_88) {
        ppuVar25 = ppuVar31;
        if (local_80[0] == '\0') {
          if (local_88 == (undefined8 **)0x0) {
            ppuVar31 = (undefined8 **)0x0;
          }
          else {
            FUN_00d50b00();
            ppuVar31 = local_88;
            ppuVar25 = *(undefined8 ***)(unaff_RDI + 0x28);
          }
        }
        else {
          local_80[0] = '\0';
          ppuVar31 = local_88;
        }
        *(undefined8 ***)(unaff_RDI + 0x28) = ppuVar31;
        if (ppuVar25 != (undefined8 **)0x0) {
          FUN_00d50b20();
          ppuVar31 = local_88;
        }
      }
      pVar21 = (pthread_key_t)ppuVar25;
      if ((local_80[0] != '\0') && (ppuVar31 != (undefined8 **)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  local_d8._0_8_ = DAT_023b4830;
  local_b8 = (float)DAT_023b2568;
  uStack_b4 = (undefined4)((ulonglong)DAT_023b2568 >> 0x20);
  if (*(undefined8 ***)(unaff_RDI + 0x18) != (undefined8 **)0x0) {
    local_80[0] = '\0';
    local_88 = (undefined8 **)0x0;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_70._4_4_ = 0;
    local_78 = *(undefined8 ***)(unaff_RDI + 0x18);
    while( true ) {
      if (local_70._4_4_ != 0) {
        if (local_70._4_4_ < 1) {
          iVar36 = -local_70._4_4_;
        }
        else {
          iVar36 = (int)local_70 - local_70._4_4_;
          local_70 = CONCAT44(local_70._4_4_,iVar36);
          FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar36 = 0;
        }
        local_70 = CONCAT44(iVar36,(int)local_70);
      }
      lVar23 = (longlong)(int)local_70;
      iVar36 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar36);
      if (*(int *)((longlong)local_78 + 0xc) <= iVar36) break;
      puVar24 = local_78[2];
      local_88 = (undefined8 **)puVar24[lVar23 + 1];
      pvVar22 = _pthread_getspecific((pthread_key_t)puVar24);
      pVar21 = (pthread_key_t)puVar24;
      if (pvVar22 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar50 = (double)FUN_0125a280();
      if (dVar50 < (double)CONCAT44(uStack_b4,local_b8)) {
        pvVar22 = _pthread_getspecific(pVar21);
        if (pvVar22 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar49 = FUN_0125a280();
        local_b8 = (float)uVar49;
        uStack_b4 = (undefined4)((ulonglong)uVar49 >> 0x20);
      }
    }
    ppuVar25 = local_78;
    FUN_001159b0();
    pVar21 = (pthread_key_t)ppuVar25;
    if (*(undefined8 ***)(unaff_RDI + 0x18) != (undefined8 **)0x0) {
      local_80[0] = '\0';
      local_88 = (undefined8 **)0x0;
      local_70 = 0xffffffff;
      local_68 = 0;
      local_d8._0_8_ = DAT_023b4830;
      local_70._4_4_ = 0;
      local_78 = *(undefined8 ***)(unaff_RDI + 0x18);
      while( true ) {
        if (local_70._4_4_ != 0) {
          if (local_70._4_4_ < 1) {
            iVar36 = -local_70._4_4_;
          }
          else {
            iVar36 = (int)local_70 - local_70._4_4_;
            local_70 = CONCAT44(local_70._4_4_,iVar36);
            FUN_00d23690();
            local_68 = local_68 + local_70._4_4_;
            iVar36 = 0;
          }
          local_70 = CONCAT44(iVar36,(int)local_70);
        }
        lVar23 = (longlong)(int)local_70;
        iVar36 = (int)local_70 + 1;
        local_70 = CONCAT44(local_70._4_4_,iVar36);
        if (*(int *)((longlong)local_78 + 0xc) <= iVar36) break;
        puVar24 = local_78[2];
        local_88 = (undefined8 **)puVar24[lVar23 + 1];
        pvVar22 = _pthread_getspecific((pthread_key_t)puVar24);
        pVar21 = (pthread_key_t)puVar24;
        if (pvVar22 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar50 = (double)FUN_01259520();
        if ((double)local_d8._0_8_ < dVar50) {
          pvVar22 = _pthread_getspecific(pVar21);
          if (pvVar22 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar49 = FUN_01259520();
          local_d8._0_8_ = uVar49;
        }
      }
      ppuVar25 = local_78;
      FUN_001159b0();
      pVar21 = (pthread_key_t)ppuVar25;
    }
  }
  pvVar22 = _pthread_getspecific(pVar21);
  if (pvVar22 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar21 = 0;
  FUN_016cb690(CONCAT44(uStack_b4,local_b8),0);
  pvVar22 = _pthread_getspecific(pVar21);
  if (pvVar22 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016cb690(local_d8._0_8_,0);
  local_100 = unaff_RDI + 0x20;
  pvVar22 = _pthread_getspecific((pthread_key_t)(unaff_RDI + 0x20));
  if (pvVar22 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar49 = FUN_016caaa0();
  *(undefined8 *)(unaff_RDI + 0x3c) = uVar49;
  lVar23 = unaff_RDI;
  pvVar22 = _pthread_getspecific((pthread_key_t)unaff_RDI);
  pVar21 = (pthread_key_t)lVar23;
  if (pvVar22 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_178 = (undefined8 *)(unaff_RDI + 0x3c);
  FUN_016caaa0();
  pvVar22 = _pthread_getspecific(pVar21);
  if (pvVar22 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar24 = local_178;
  pVar21 = 0;
  uVar49 = FUN_016c4630(0,1);
  *puVar24 = uVar49;
  pvVar22 = _pthread_getspecific(pVar21);
  if (pvVar22 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_88 = (undefined8 **)FUN_016c4630(0,2);
  FUN_00e7b970();
  uVar18 = FUN_00e7cea0();
  *(undefined4 *)(unaff_RDI + 0x34) = uVar18;
  *(undefined4 *)(unaff_RDI + 0x30) = 8;
  local_140 = (undefined8 *)FUN_00e7bcc0();
  *(int *)(unaff_RDI + 0x38) = *(int *)(unaff_RDI + 0x30) * *(int *)(unaff_RDI + 0x34);
  puVar24 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  local_128 = (undefined8 *)&DAT_02572358;
  *puVar24 = &DAT_02572358;
  local_130 = DAT_02572370;
  (*DAT_02572370)();
  lVar23 = *(longlong *)(unaff_RDI + 0x48);
  *(undefined8 **)(unaff_RDI + 0x48) = puVar24;
  if (lVar23 != 0) {
    FUN_00d50b20();
  }
  if (0 < *(int *)(unaff_RDI + 0x38)) {
    iVar36 = 0;
    do {
      ppuVar25 = (undefined8 **)FUN_00e8fc40();
      FUN_00d4ff40();
      *ppuVar25 = local_128;
      (*local_130)();
      local_80[0] = '\0';
      local_88 = ppuVar25;
      FUN_00d21140();
      if ((local_80[0] != '\0') && (local_88 != (undefined8 **)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      iVar36 = iVar36 + 1;
    } while (iVar36 < *(int *)(unaff_RDI + 0x38));
  }
  FUN_00c8e690();
  ppuVar25 = local_88;
  if ((((local_80[0] == '\0') && (local_88 != (undefined8 **)0x0)) &&
      (FUN_00d50b00(), local_80[0] != '\0')) && (local_88 != (undefined8 **)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  local_180 = ppuVar25;
  ___bzero();
  puVar24 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar24 = local_128;
  (*local_130)();
  local_c0 = (uint *)(unaff_RDI + 0x34);
  local_138 = (int *)(unaff_RDI + 0x30);
  iVar36 = 0;
  local_f8 = puVar24;
  do {
    ppuVar25 = (undefined8 **)FUN_00e8fc40();
    FUN_00d4ff40();
    *ppuVar25 = local_128;
    (*local_130)();
    FUN_00d227d0();
    FUN_00d21370();
    if (0 < *(int *)(unaff_RDI + 0x38)) {
      iVar29 = 0;
      do {
        local_88 = (undefined8 **)0x0;
        local_80[0] = '\0';
        FUN_00d21140();
        if ((local_80[0] != '\0') && (local_88 != (undefined8 **)0x0)) {
          FUN_00d50b20();
        }
        iVar29 = iVar29 + 1;
      } while (iVar29 < *(int *)(unaff_RDI + 0x38));
    }
    local_80[0] = '\0';
    local_88 = ppuVar25;
    FUN_00d21140();
    if ((local_80[0] != '\0') && (local_88 != (undefined8 **)0x0)) {
      FUN_00d50b20();
    }
    if (ppuVar25 != (undefined8 **)0x0) {
      FUN_00d50b20();
    }
    iVar36 = iVar36 + 1;
  } while (iVar36 != 0x80);
  plVar26 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar26 + 0x18))();
  lVar23 = *(longlong *)(unaff_RDI + 0x18);
  if (lVar23 != 0) {
    FUN_00d50b00();
  }
  uVar49 = FUN_00243390();
  ppuVar25 = local_88;
  if (local_80[0] == '\0') {
    if (((local_88 != (undefined8 **)0x0) && (uVar49 = FUN_00d50b00(), local_80[0] != '\0')) &&
       (local_88 != (undefined8 **)0x0)) {
      uVar49 = FUN_00d50b20();
    }
  }
  else {
    local_80[0] = '\0';
  }
  if (lVar23 != 0) {
    uVar49 = FUN_00d50b20();
  }
  FUN_00d242c0(uVar49,0);
  if (ppuVar25 != (undefined8 **)0x0) {
    local_80[0] = '\0';
    local_88 = (undefined8 **)0x0;
    local_78 = ppuVar25;
    local_70 = 0xffffffff;
    local_68 = 0;
    while( true ) {
      if (local_70._4_4_ != 0) {
        if (local_70._4_4_ < 1) {
          iVar36 = -local_70._4_4_;
        }
        else {
          local_70 = CONCAT44(local_70._4_4_,(int)local_70 - local_70._4_4_);
          FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar36 = 0;
        }
        local_70 = CONCAT44(iVar36,(int)local_70);
      }
      lVar23 = (longlong)(int)local_70;
      iVar36 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar36);
      if (*(int *)((longlong)local_78 + 0xc) <= iVar36) break;
      puVar24 = local_78[2];
      local_88 = (undefined8 **)puVar24[lVar23 + 1];
      pvVar22 = _pthread_getspecific((pthread_key_t)puVar24);
      pVar21 = (pthread_key_t)puVar24;
      if (pvVar22 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      if (local_58 != (undefined8 **)0x0) {
        pvVar22 = _pthread_getspecific(pVar21);
        if (pvVar22 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar17 = FUN_01263cf0();
        if ((local_50 != '\0') && (local_58 != (undefined8 **)0x0)) {
          FUN_00d50b20();
        }
        if (cVar17 == '\0') {
          pvVar22 = _pthread_getspecific(pVar21);
          if (pvVar22 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar22 = _pthread_getspecific(pVar21);
          if (pvVar22 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          ppuVar31 = local_58;
          if (local_50 == '\0') {
            if (((local_58 != (undefined8 **)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
               (local_58 != (undefined8 **)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_50 = '\0';
          }
          if ((local_98 != '\0') && (CONCAT44(uStack_9c,local_a0) != 0)) {
            FUN_00d50b20();
          }
          pvVar22 = _pthread_getspecific(pVar21);
          if (pvVar22 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar19 = FUN_01508300();
          if (uVar19 < 0x80) {
            local_120 = ppuVar31;
            pvVar22 = _pthread_getspecific(pVar21);
            if (pvVar22 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e7c0();
            if (local_58 == (undefined8 **)0x0) {
              bVar45 = false;
            }
            else {
              pvVar22 = _pthread_getspecific(pVar21);
              if (pvVar22 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125e7c0();
              pvVar22 = _pthread_getspecific(pVar21);
              if (pvVar22 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_013dfcb0();
              if (CONCAT44(uStack_9c,local_a0) == 0) {
                bVar45 = false;
                lVar23 = 0;
              }
              else {
                pvVar22 = _pthread_getspecific(pVar21);
                if (pvVar22 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125e7c0();
                pvVar22 = _pthread_getspecific(pVar21);
                if (pvVar22 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013de560();
                bVar45 = local_198 != (undefined8 *)0x0;
                if ((local_190 != '\0') && (local_198 != (undefined8 *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_110 != '\0') && (local_118 != (undefined8 *)0x0)) {
                  FUN_00d50b20();
                }
                lVar23 = CONCAT44(uStack_9c,local_a0);
              }
              if ((local_98 != '\0') && (lVar23 != 0)) {
                FUN_00d50b20();
              }
              if ((local_e0 != '\0') && (local_e8 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
            }
            if ((local_50 != '\0') && (local_58 != (undefined8 **)0x0)) {
              FUN_00d50b20();
            }
            if (bVar45) {
              pvVar22 = _pthread_getspecific(pVar21);
              if (pvVar22 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125e7c0();
              pvVar22 = _pthread_getspecific(pVar21);
              if (pvVar22 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_013de560();
              local_f0 = local_58;
              ppuVar31 = local_58;
              if (local_58 == (undefined8 **)0x0) {
                local_f0 = (undefined8 **)0x0;
                bVar14 = false;
              }
              else if (local_50 == '\0') {
                FUN_00d50b00();
                bVar14 = true;
                if ((local_50 != '\0') && (local_58 != (undefined8 **)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_50 = '\0';
                bVar14 = true;
              }
              if ((local_98 != '\0') && (CONCAT44(uStack_9c,local_a0) != 0)) {
                FUN_00d50b20();
              }
              pvVar22 = _pthread_getspecific((pthread_key_t)ppuVar31);
              if ((pvVar22 != (void *)0x0) && (lVar23 = FUN_00e8b990(), lVar23 != 0)) {
                ppuVar31 = local_f0;
              }
              FUN_014c2a40();
              ppuVar30 = local_58;
              if (local_58 == (undefined8 **)0x0) {
                ppuVar30 = (undefined8 **)0x0;
                bVar45 = false;
              }
              else {
                bVar45 = true;
                if (((local_50 == '\0') && (FUN_00d50b00(), local_50 != '\0')) &&
                   (local_58 != (undefined8 **)0x0)) {
                  FUN_00d50b20();
                }
              }
              iVar36 = *(int *)((longlong)ppuVar30 + 0xc);
              local_90 = ppuVar30;
              pvVar22 = _pthread_getspecific((pthread_key_t)ppuVar31);
              if (pvVar22 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125e7c0();
              pvVar22 = _pthread_getspecific((pthread_key_t)ppuVar31);
              if (pvVar22 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_1b8 = (double)FUN_013de9b0();
              pvVar22 = _pthread_getspecific((pthread_key_t)ppuVar31);
              if (pvVar22 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar49 = FUN_01264170();
              local_b8 = (float)uVar49;
              uStack_b4 = (undefined4)((ulonglong)uVar49 >> 0x20);
              if ((local_50 != '\0') && (local_58 != (undefined8 **)0x0)) {
                FUN_00d50b20();
              }
              pvVar22 = _pthread_getspecific((pthread_key_t)ppuVar31);
              ppuVar30 = local_f0;
              if ((pvVar22 != (void *)0x0) &&
                 (lVar23 = FUN_00e8b990(), ppuVar30 = local_f0, lVar23 != 0)) {
                ppuVar31 = local_f0;
                ppuVar30 = (undefined8 **)local_f0[(ulonglong)(*(uint *)(lVar23 + 0x154) & 1) + 4];
              }
              pVar21 = (pthread_key_t)ppuVar31;
              (*(code *)(*ppuVar30)[0x6f])();
              ppuVar31 = local_58;
              if (local_58 == (undefined8 **)0x0) {
                ppuVar31 = (undefined8 **)0x0;
                bVar15 = false;
              }
              else {
                bVar15 = true;
                if (((local_50 == '\0') && (FUN_00d50b00(), local_50 != '\0')) &&
                   (local_58 != (undefined8 **)0x0)) {
                  FUN_00d50b20();
                }
              }
              local_170 = ppuVar31;
              pvVar22 = _pthread_getspecific(pVar21);
              if (pvVar22 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0132d790();
              ppuVar31 = local_58;
              if (((local_50 == '\0') && (local_58 != (undefined8 **)0x0)) &&
                 ((FUN_00d50b00(), local_50 != '\0' && (local_58 != (undefined8 **)0x0)))) {
                FUN_00d50b20();
              }
              iVar29 = *(int *)(ppuVar31 + 6);
              pvVar22 = _pthread_getspecific(pVar21);
              if (pvVar22 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01320d00();
              ppuVar31 = local_58;
              pvVar22 = _pthread_getspecific(pVar21);
              ppuVar30 = local_58;
              if ((pvVar22 != (void *)0x0) &&
                 (lVar23 = FUN_00e8b990(), ppuVar31 = ppuVar30, lVar23 != 0)) {
                ppuVar31 = (undefined8 **)ppuVar30[(ulonglong)(*(uint *)(lVar23 + 0x154) & 1) + 4];
              }
              uVar49 = (*(code *)(*ppuVar31)[0x6e])();
              local_d8._0_8_ = uVar49;
              if ((local_50 != '\0') && (local_58 != (undefined8 **)0x0)) {
                FUN_00d50b20();
              }
              pvVar22 = _pthread_getspecific(pVar21);
              if (pvVar22 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar20 = FUN_01326de0();
              bVar46 = true;
              if (iVar20 != 1) {
                pvVar22 = _pthread_getspecific(pVar21);
                if (pvVar22 != (void *)0x0) {
                  FUN_00e8b990();
                }
                iVar20 = FUN_01326de0();
                bVar46 = iVar20 == 3;
              }
              FUN_00d50b20();
              if (bVar46) {
                local_1b8 = local_1b8 / (double)CONCAT44(uStack_b4,local_b8);
                local_1b0 = (double)iVar29 / (double)local_d8._0_8_;
                goto LAB_0184cc38;
              }
              ppuVar31 = local_120;
              if (bVar15) goto LAB_0184d54f;
            }
            else {
              iVar36 = 0;
              local_1b0 = DAT_0238fee8;
              local_1b8 = DAT_0238fee8;
              local_f0 = (undefined8 **)0x0;
              bVar14 = false;
              local_90 = (undefined8 **)0x0;
              bVar45 = false;
              local_170 = (undefined8 **)0x0;
              bVar15 = false;
LAB_0184cc38:
              pvVar22 = _pthread_getspecific(pVar21);
              if (pvVar22 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar50 = (double)FUN_0125a280();
              pvVar22 = _pthread_getspecific(pVar21);
              if (pvVar22 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar49 = FUN_01259520();
              local_b8 = (float)uVar49;
              uStack_b4 = (undefined4)((ulonglong)uVar49 >> 0x20);
              pvVar22 = _pthread_getspecific(pVar21);
              if (pvVar22 != (void *)0x0) {
                FUN_00e8b990();
              }
              pVar21 = 0;
              local_e8 = (undefined8 *)FUN_016cb910(dVar50,0);
              pvVar22 = _pthread_getspecific(pVar21);
              if (pvVar22 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_198 = (undefined8 *)FUN_016cb910(CONCAT44(uStack_b4,local_b8),0);
              local_58 = (undefined8 **)local_198;
              FUN_00e7b970();
              local_118 = local_58;
              if ((((ulonglong)local_58 >> 0x20 != 0) && (local_140._4_4_ != 0)) &&
                 (cVar17 = FUN_00e7c020(), cVar17 != '\0')) {
                local_118 = local_140;
                local_58 = (undefined8 **)local_e8;
                FUN_00e7b820();
                local_198 = local_58;
              }
              local_188 = local_e8;
              fVar47 = (float)(int)uVar19 * DAT_023908e0;
              local_258 = ZEXT816(0);
              uVar28 = 1;
              do {
                local_58 = (undefined8 **)local_188;
                FUN_00e7b970();
                FUN_00e7c2a0();
                pVar21 = FUN_00e7cea0();
                local_104 = pVar21;
                if ((-1 < (int)pVar21) && ((int)pVar21 < *(int *)(unaff_RDI + 0x38))) {
                  puVar24 = (undefined8 *)FUN_00e8fc40();
                  FUN_00d4ff40();
                  *puVar24 = &DAT_0260ce98;
                  *(undefined4 *)((longlong)puVar24 + 0xc) = 0;
                  *(undefined1 *)(puVar24 + 2) = 0;
                  *(undefined8 *)((longlong)puVar24 + 0x14) = 0;
                  *(undefined8 *)((longlong)puVar24 + 0x1c) = 0;
                  *(undefined8 *)((longlong)puVar24 + 0x24) = 0;
                  *(undefined8 *)((longlong)puVar24 + 0x2c) = 0;
                  *(undefined8 *)((longlong)puVar24 + 0x34) = 0;
                  *(undefined8 *)((longlong)puVar24 + 0x3c) = 0;
                  *(undefined4 *)((longlong)puVar24 + 0x44) = 0;
                  FUN_00d500e0();
                  ppuVar31 = (undefined8 **)puVar24[8];
                  if (ppuVar31 != local_88) {
                    if (local_80[0] == '\0') {
                      if (local_88 == (undefined8 **)0x0) {
                        puVar24[8] = 0;
                      }
                      else {
                        FUN_00d50b00();
                        ppuVar31 = (undefined8 **)puVar24[8];
                        puVar24[8] = local_88;
                      }
                    }
                    else {
                      local_80[0] = '\0';
                      puVar24[8] = local_88;
                    }
                    if (ppuVar31 != (undefined8 **)0x0) {
                      FUN_00d50b20();
                    }
                  }
                  *(uint *)((longlong)puVar24 + 0xc) = uVar19;
                  *(undefined1 *)(puVar24 + 2) = uVar28;
                  *(float *)((longlong)puVar24 + 0x2c) = fVar47;
                  *(float *)((longlong)puVar24 + 0x24) = fVar47;
                  *(float *)(puVar24 + 7) = fVar47;
                  *(undefined8 *)((longlong)puVar24 + 0x1c) = 0x3f8000003f800000;
                  *(undefined4 *)(puVar24 + 5) = 0x3f800000;
                  *(undefined4 *)(puVar24 + 6) = 0x3f800000;
                  if ((local_90 != (undefined8 **)0x0) && (*(int *)((longlong)local_90 + 0xc) != 0))
                  {
                    pvVar22 = _pthread_getspecific(pVar21);
                    if (pvVar22 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    pVar21 = 0;
                    uVar49 = FUN_016c46a0(0,0);
                    local_b8 = (float)uVar49;
                    uStack_b4 = (undefined4)((ulonglong)uVar49 >> 0x20);
                    pvVar22 = _pthread_getspecific(pVar21);
                    if (pvVar22 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    local_58 = (undefined8 **)local_188;
                    FUN_00e7b820();
                    uVar49 = FUN_016c46a0(0,0);
                    local_d8._0_8_ = uVar49;
                    iVar29 = FUN_00e7d850((((double)CONCAT44(uStack_b4,local_b8) - dVar50) *
                                          local_1b8) / local_1b0);
                    iVar20 = FUN_00e7d850((((double)local_d8._0_8_ - dVar50) * local_1b8) /
                                          local_1b0);
                    if (iVar29 < 0) {
                      iVar29 = 0;
                    }
                    if (iVar20 < 1) {
                      iVar20 = 1;
                    }
                    if (iVar36 <= iVar29) {
                      iVar29 = iVar36 + -1;
                    }
                    if (iVar36 < iVar20) {
                      iVar20 = iVar36;
                    }
                    iVar43 = iVar20 - iVar29;
                    if (iVar43 != 0 && iVar29 <= iVar20) {
                      if (iVar43 == 0 || iVar20 < iVar29) {
                        auVar61 = ZEXT816(0);
                        fVar48 = 0.0;
                        auVar62 = ZEXT816(0);
                        fVar54 = 0.0;
                      }
                      else {
                        lVar23 = (longlong)iVar29;
                        local_d8._0_16_ = ZEXT816(0);
                        local_b8 = 0.0;
                        uStack_b4 = 0;
                        uStack_b0 = 0;
                        uStack_ac = 0;
                        local_168 = (undefined8 *)0x0;
                        uStack_160 = 0;
                        local_158 = 0;
                        uStack_150 = 0;
                        fVar60 = 0.0;
                        iVar29 = iVar43;
                        local_48._0_16_ = ZEXT816(0);
                        do {
                          lVar44 = local_90[2][lVar23];
                          if (lVar44 != 0) {
                            FUN_00d50b00();
                          }
                          fVar48 = *(float *)(lVar44 + 0x10);
                          if (!NAN(fVar48)) {
                            fVar54 = DAT_02390124;
                            if (fVar48 <= DAT_02390124) {
                              fVar54 = fVar48;
                            }
                            fVar48 = DAT_0239425c;
                            if (DAT_0239425c <= fVar54) {
                              fVar48 = fVar54;
                            }
                            local_168 = (undefined8 *)
                                        CONCAT44(local_168._4_4_,local_168._0_4_ + fVar48 * fVar48);
                          }
                          local_b8 = local_b8 + *(float *)(lVar44 + 0x28);
                          fVar48 = *(float *)(lVar44 + 0x14);
                          fVar64 = *(float *)(lVar44 + 0x40);
                          fVar7 = *(float *)(lVar44 + 0x4c);
                          fVar54 = (float)*(undefined8 *)(lVar44 + 0x44);
                          auVar55._0_4_ = local_d8._0_4_ + fVar54;
                          fVar53 = (float)((ulonglong)*(undefined8 *)(lVar44 + 0x44) >> 0x20);
                          auVar55._4_4_ = local_d8._4_4_ + fVar53;
                          auVar55._8_4_ = local_d8._8_4_ + 0.0;
                          auVar55._12_4_ = local_d8._12_4_ + 0.0;
                          auVar61._4_4_ = -(uint)(!NAN(fVar53) && !NAN(_UNK_0238ff04));
                          auVar61._0_4_ = -(uint)(!NAN(fVar54) && !NAN(_DAT_0238ff00));
                          auVar61._8_4_ = -(uint)!NAN(_UNK_0238ff08);
                          auVar61._12_4_ = -(uint)!NAN(_UNK_0238ff0c);
                          local_d8._0_16_ = blendvps(local_d8._0_16_,auVar55,auVar61);
                          FUN_00d50b20();
                          fVar48 = (float)(~-(uint)(!NAN(fVar48) && !NAN(fVar48)) & (uint)fVar47 |
                                          (uint)fVar48 & -(uint)(!NAN(fVar48) && !NAN(fVar48)));
                          fVar54 = (float)local_158 + fVar48;
                          local_158 = CONCAT44(local_158._4_4_,fVar54);
                          fVar60 = fVar60 + (float)(-(uint)(!NAN(fVar64) && !NAN(fVar64)) &
                                                    (uint)fVar64 |
                                                   ~-(uint)(!NAN(fVar64) && !NAN(fVar64)) &
                                                   (uint)fVar48);
                          auVar62._4_12_ = local_48._4_12_;
                          auVar62._0_4_ =
                               local_48._0_4_ +
                               (float)(-(uint)(!NAN(fVar7) && !NAN(fVar7)) & (uint)fVar7 |
                                      ~-(uint)(!NAN(fVar7) && !NAN(fVar7)) & (uint)fVar48);
                          lVar23 = lVar23 + 1;
                          iVar29 = iVar29 + -1;
                          local_48._0_16_ = auVar62;
                        } while (iVar29 != 0);
                        fVar48 = local_d8._4_4_;
                        auVar10._4_4_ = uStack_b4;
                        auVar10._0_4_ = local_b8;
                        auVar10._8_4_ = uStack_b0;
                        auVar10._12_4_ = uStack_ac;
                        auVar61 = insertps(auVar10,local_168._0_4_,0x10);
                        auVar61 = insertps(auVar61,fVar60,0x20);
                        auVar61 = insertps(auVar61,local_d8._0_16_,0x30);
                      }
                      auVar56._0_4_ = (float)iVar43;
                      *(float *)((longlong)puVar24 + 0x2c) = fVar54 / auVar56._0_4_;
                      *(float *)(puVar24 + 7) = auVar62._0_4_ / auVar56._0_4_;
                      auVar56._4_4_ = auVar56._0_4_;
                      auVar56._8_4_ = auVar56._0_4_;
                      auVar56._12_4_ = auVar56._0_4_;
                      auVar62 = divps(auVar61,auVar56);
                      *(undefined1 (*) [16])((longlong)puVar24 + 0x1c) = auVar62;
                      *(float *)(puVar24 + 6) = fVar48 / auVar56._0_4_;
                      bVar46 = (float)local_258._0_4_ < auVar62._0_4_;
                      if (bVar46) {
                        local_258 = auVar62;
                      }
                    }
                  }
                  local_50 = '\0';
                  local_58 = (undefined8 **)puVar24;
                  FUN_00d21140();
                  if ((local_50 != '\0') && (local_58 != (undefined8 **)0x0)) {
                    FUN_00d50b20();
                  }
                  local_50 = '\0';
                  local_58 = (undefined8 **)puVar24;
                  FUN_00d233f0();
                  if ((local_50 != '\0') && (local_58 != (undefined8 **)0x0)) {
                    FUN_00d50b20();
                  }
                  *(undefined1 *)((longlong)local_180[2] + (ulonglong)uVar19) = 1;
                  FUN_00d50b20();
                  uVar28 = 0;
                }
                if (*(int *)(unaff_RDI + 0x38) <= (int)local_104) break;
                FUN_00e7b820();
              } while (((local_188._4_4_ == 0) || (local_198._4_4_ == 0)) ||
                      (cVar17 = FUN_00e7c020(), cVar17 != '\0'));
              uVar19 = -(uint)(local_258._0_4_ == DAT_0239424c);
              uVar49 = FUN_00d46dc0(~uVar19 & (uint)local_258._0_4_ | uVar19 & (uint)DAT_02390124);
              lVar23 = CONCAT44(uStack_9c,local_a0);
              if (local_98 == '\0') {
                if (lVar23 != 0) {
                  uVar49 = FUN_00d50b00();
                }
              }
              else {
                local_98 = '\0';
              }
              ppuVar31 = local_120;
              local_58 = local_88;
              local_50 = '\0';
              FUN_00ca0840(uVar49,&local_58);
              if ((local_50 != '\0') && (local_58 != (undefined8 **)0x0)) {
                FUN_00d50b20();
              }
              if (lVar23 != 0) {
                FUN_00d50b20();
              }
              if ((local_98 != '\0') && (CONCAT44(uStack_9c,local_a0) != 0)) {
                FUN_00d50b20();
              }
              if (bVar15) {
LAB_0184d54f:
                if (local_170 != (undefined8 **)0x0) {
                  FUN_00d50b20();
                }
              }
            }
            if ((bVar45) && (local_90 != (undefined8 **)0x0)) {
              FUN_00d50b20();
            }
            if ((bVar14) && (local_f0 != (undefined8 **)0x0)) {
              FUN_00d50b20();
            }
            if (ppuVar31 != (undefined8 **)0x0) {
              FUN_00d50b20();
            }
          }
          else if (ppuVar31 != (undefined8 **)0x0) {
            FUN_00d50b20();
          }
        }
      }
    }
    FUN_001159b0();
  }
  local_a0 = 0;
  FUN_00c8e690();
  ppuVar31 = local_88;
  if ((((local_80[0] == '\0') && (local_88 != (undefined8 **)0x0)) &&
      (FUN_00d50b00(), local_80[0] != '\0')) && (local_88 != (undefined8 **)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  if (0 < *(int *)(unaff_RDI + 0x38)) {
    lVar23 = 0;
    do {
      lVar44 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + lVar23 * 8);
      if (lVar44 != 0) {
        FUN_00d50b00();
      }
      if (0 < *(int *)(lVar44 + 0xc)) {
        lVar32 = 0;
        do {
          lVar34 = *(longlong *)(*(longlong *)(lVar44 + 0x10) + lVar32 * 8);
          if (lVar34 != 0) {
            FUN_00d50b00();
          }
          iVar36 = FUN_00e7d780();
          puVar24 = ppuVar31[2];
          *(float *)((longlong)puVar24 + (longlong)(iVar36 % 100) * 4) =
               SQRT(*(float *)(lVar34 + 0x20) * *(float *)(lVar34 + 0x28)) +
               *(float *)((longlong)puVar24 + (longlong)(iVar36 % 100) * 4);
          FUN_00d50b20();
          lVar32 = lVar32 + 1;
        } while (lVar32 < *(int *)(lVar44 + 0xc));
      }
      FUN_00d50b20();
      lVar23 = lVar23 + 1;
    } while (lVar23 < *(int *)(unaff_RDI + 0x38));
  }
  puVar24 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar24 = &DAT_025f0d98;
  puVar24[2] = 0;
  puVar24[3] = 0;
  puVar24[4] = 0;
  puVar24[5] = 0;
  puVar24[6] = 0;
  puVar24[7] = 0;
  (*DAT_025f0db0)();
  local_168 = puVar24;
  FUN_015c15b0(6,100);
  FUN_015b32a0();
  if (0x32 < local_a0) {
    local_a0 = local_a0 + -100;
  }
  *(float *)(unaff_RDI + 0x44) = (float)local_a0;
  uVar27 = (ulonglong)*(uint *)(unaff_RDI + 0x38);
  if (0 < (int)*(uint *)(unaff_RDI + 0x38)) {
    lVar23 = 0;
    do {
      lVar44 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + lVar23 * 8);
      if (lVar44 != 0) {
        FUN_00d50b00();
      }
      if (0 < *(int *)(lVar44 + 0xc)) {
        lVar32 = 0;
        do {
          lVar34 = *(longlong *)(*(longlong *)(lVar44 + 0x10) + lVar32 * 8);
          if (lVar34 != 0) {
            FUN_00d50b00();
          }
          fVar47 = *(float *)(lVar34 + 0x24) - *(float *)(unaff_RDI + 0x44);
          fVar48 = fVar47 / DAT_023908e0;
          auVar62 = ZEXT416((uint)fVar48 & _DAT_023945e0) | _DAT_023945f0;
          auVar63._4_12_ = auVar62._4_12_;
          auVar63._0_4_ = auVar62._0_4_ + fVar48;
          auVar57._0_12_ = ZEXT812(0);
          auVar57._12_4_ = 0;
          auVar62 = roundss(auVar57,auVar63,0xb);
          uVar18 = FUN_015b4e00((float)((uint)(fVar47 - auVar62._0_4_ * DAT_023908e0) &
                                       _DAT_02390140) / DAT_0241b660 + DAT_02390124);
          *(undefined4 *)(lVar34 + 0x34) = uVar18;
          FUN_00d50b20();
          lVar32 = lVar32 + 1;
        } while (lVar32 < *(int *)(lVar44 + 0xc));
      }
      FUN_00d50b20();
      lVar23 = lVar23 + 1;
      uVar27 = (ulonglong)*(int *)(unaff_RDI + 0x38);
    } while (lVar23 < (longlong)uVar27);
  }
  lVar23 = 0;
  local_248 = DAT_02390124;
  do {
    if ((*(char *)((longlong)local_180[2] + lVar23) != '\0') && (-1 < (int)uVar27)) {
      uVar38 = 0;
      uVar41 = 0xffffffff;
      do {
        iVar36 = (int)uVar41;
        if (((longlong)uVar38 < (longlong)(int)uVar27) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(local_f8[2] + lVar23 * 8) + 0x10) + uVar38 * 8) != 0)) {
          uVar35 = uVar38 & 0xffffffff;
          if (iVar36 != -1) {
            uVar35 = uVar41;
          }
        }
        else {
          uVar35 = 0xffffffff;
          if (iVar36 != -1) {
            local_88 = (undefined8 **)FUN_00e7bcc0();
            fVar48 = (float)FUN_00e7c810();
            fVar47 = DAT_02390124;
            if (fVar48 * DAT_0239426c <= DAT_02390124) {
              fVar47 = fVar48 * DAT_0239426c;
            }
            uVar27 = (ulonglong)iVar36;
            if ((longlong)uVar27 < (longlong)uVar38) {
              uVar19 = -(uint)(fVar47 <= DAT_02394270) & DAT_023b3e04 |
                       ~-(uint)(fVar47 <= DAT_02394270) & (uint)SQRT(fVar47) & _DAT_02390140;
              lVar44 = *(longlong *)(*(longlong *)(local_f8[2] + lVar23 * 8) + 0x10);
              uVar37 = (int)uVar38 - iVar36;
              uVar41 = ~uVar27;
              uVar39 = (ulonglong)uVar37 & 7;
              if ((uVar37 & 7) != 0) {
                do {
                  *(uint *)(*(longlong *)(lVar44 + uVar27 * 8) + 0x18) = uVar19;
                  uVar27 = uVar27 + 1;
                  uVar39 = uVar39 - 1;
                } while (uVar39 != 0);
              }
              if (6 < uVar41 + uVar38) {
                do {
                  *(uint *)(*(longlong *)(lVar44 + uVar27 * 8) + 0x18) = uVar19;
                  *(uint *)(*(longlong *)(lVar44 + 8 + uVar27 * 8) + 0x18) = uVar19;
                  *(uint *)(*(longlong *)(lVar44 + 0x10 + uVar27 * 8) + 0x18) = uVar19;
                  *(uint *)(*(longlong *)(lVar44 + 0x18 + uVar27 * 8) + 0x18) = uVar19;
                  *(uint *)(*(longlong *)(lVar44 + 0x20 + uVar27 * 8) + 0x18) = uVar19;
                  *(uint *)(*(longlong *)(lVar44 + 0x28 + uVar27 * 8) + 0x18) = uVar19;
                  *(uint *)(*(longlong *)(lVar44 + 0x30 + uVar27 * 8) + 0x18) = uVar19;
                  *(uint *)(*(longlong *)(lVar44 + 0x38 + uVar27 * 8) + 0x18) = uVar19;
                  uVar27 = uVar27 + 8;
                } while (uVar38 != uVar27);
              }
            }
            uVar27 = (ulonglong)*(uint *)(unaff_RDI + 0x38);
          }
        }
        bVar45 = (longlong)uVar38 < (longlong)(int)uVar27;
        uVar38 = uVar38 + 1;
        uVar41 = uVar35;
      } while (bVar45);
    }
    lVar23 = lVar23 + 1;
  } while (lVar23 != 0x80);
  lVar23 = 0;
  do {
    local_d8._0_8_ = lVar23;
    if ((*(char *)((longlong)local_180[2] + lVar23) != '\0') && (-1 < (int)uVar27)) {
      uVar41 = 0xffffffff;
      iVar36 = 0;
      uVar38 = 0;
      do {
        iVar29 = (int)uVar41;
        if (((longlong)uVar38 < (longlong)(int)uVar27) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(local_f8[2] + local_d8._0_8_ * 8) + 0x10) + uVar38 * 8) !=
            0)) {
          uVar27 = uVar38 & 0xffffffff;
          if (iVar29 != -1) {
            uVar27 = uVar41;
          }
        }
        else {
          uVar27 = 0xffffffff;
          if (iVar29 != -1) {
            uVar19 = (int)uVar38 - iVar29;
            FUN_00c8e690();
            ppuVar30 = local_88;
            local_48._0_8_ = uVar38;
            if ((((local_80[0] == '\0') && (local_88 != (undefined8 **)0x0)) &&
                (FUN_00d50b00(), local_80[0] != '\0')) && (local_88 != (undefined8 **)0x0)) {
              FUN_00d50b20();
            }
            FUN_00c92170();
            FUN_00c92160();
            local_b8 = SUB84(ppuVar30,0);
            uStack_b4 = (undefined4)((ulonglong)ppuVar30 >> 0x20);
            lVar23 = (longlong)iVar29;
            local_158 = (ulonglong)uVar19;
            cVar40 = (char)uVar41;
            cVar17 = (char)iVar36;
            uVar38 = local_48._0_8_;
            if (0 < (int)uVar19) {
              lVar44 = *(longlong *)(*(longlong *)(local_f8[2] + local_d8._0_8_ * 8) + 0x10);
              puVar24 = ppuVar30[2];
              if (local_158 - 1 < 3) {
                uVar27 = 0;
              }
              else {
                lVar32 = lVar44 + lVar23 * 8;
                uVar27 = 0;
                do {
                  *(undefined4 *)((longlong)puVar24 + uVar27 * 4) =
                       *(undefined4 *)(*(longlong *)(lVar32 + uVar27 * 8) + 0x28);
                  *(undefined4 *)((longlong)puVar24 + uVar27 * 4 + 4) =
                       *(undefined4 *)(*(longlong *)(lVar32 + 8 + uVar27 * 8) + 0x28);
                  *(undefined4 *)((longlong)puVar24 + uVar27 * 4 + 8) =
                       *(undefined4 *)(*(longlong *)(lVar32 + 0x10 + uVar27 * 8) + 0x28);
                  *(undefined4 *)((longlong)puVar24 + uVar27 * 4 + 0xc) =
                       *(undefined4 *)(*(longlong *)(lVar32 + 0x18 + uVar27 * 8) + 0x28);
                  uVar27 = uVar27 + 4;
                } while ((iVar36 - iVar29 & 0xfffffffc) != uVar27);
              }
              if ((uVar19 & 3) != 0) {
                uVar41 = 0;
                do {
                  *(undefined4 *)((longlong)puVar24 + uVar41 * 4 + uVar27 * 4) =
                       *(undefined4 *)
                        (*(longlong *)(lVar44 + (uVar27 + lVar23) * 8 + uVar41 * 8) + 0x28);
                  uVar41 = uVar41 + 1;
                } while (((byte)(cVar17 - cVar40) & 3) != uVar41);
              }
            }
            FUN_015c15b0(1,uVar19);
            if (0 < (int)uVar19) {
              lVar44 = *(longlong *)(CONCAT44(uStack_b4,local_b8) + 0x10);
              lVar32 = *(longlong *)(*(longlong *)(local_f8[2] + local_d8._0_8_ * 8) + 0x10);
              if (local_158 - 1 < 3) {
                uVar27 = 0;
              }
              else {
                lVar34 = lVar32 + lVar23 * 8;
                uVar27 = 0;
                do {
                  *(undefined4 *)(*(longlong *)(lVar34 + uVar27 * 8) + 0x28) =
                       *(undefined4 *)(lVar44 + uVar27 * 4);
                  *(undefined4 *)(*(longlong *)(lVar34 + 8 + uVar27 * 8) + 0x28) =
                       *(undefined4 *)(lVar44 + 4 + uVar27 * 4);
                  *(undefined4 *)(*(longlong *)(lVar34 + 0x10 + uVar27 * 8) + 0x28) =
                       *(undefined4 *)(lVar44 + 8 + uVar27 * 4);
                  *(undefined4 *)(*(longlong *)(lVar34 + 0x18 + uVar27 * 8) + 0x28) =
                       *(undefined4 *)(lVar44 + 0xc + uVar27 * 4);
                  uVar27 = uVar27 + 4;
                } while ((iVar36 - iVar29 & 0xfffffffc) != uVar27);
              }
              if ((local_158 & 3) != 0) {
                uVar38 = 0;
                do {
                  *(undefined4 *)(*(longlong *)(lVar32 + (uVar27 + lVar23) * 8 + uVar38 * 8) + 0x28)
                       = *(undefined4 *)(lVar44 + uVar27 * 4 + uVar38 * 4);
                  uVar38 = uVar38 + 1;
                } while (((byte)(cVar17 - cVar40) & 3) != uVar38);
              }
              lVar44 = *(longlong *)(*(longlong *)(local_f8[2] + local_d8._0_8_ * 8) + 0x10);
              lVar32 = *(longlong *)(CONCAT44(uStack_b4,local_b8) + 0x10);
              if (local_158 - 1 < 3) {
                uVar27 = 0;
              }
              else {
                lVar34 = lVar44 + lVar23 * 8;
                uVar27 = 0;
                do {
                  *(undefined4 *)(lVar32 + uVar27 * 4) =
                       *(undefined4 *)(*(longlong *)(lVar34 + uVar27 * 8) + 0x30);
                  *(undefined4 *)(lVar32 + 4 + uVar27 * 4) =
                       *(undefined4 *)(*(longlong *)(lVar34 + 8 + uVar27 * 8) + 0x30);
                  *(undefined4 *)(lVar32 + 8 + uVar27 * 4) =
                       *(undefined4 *)(*(longlong *)(lVar34 + 0x10 + uVar27 * 8) + 0x30);
                  *(undefined4 *)(lVar32 + 0xc + uVar27 * 4) =
                       *(undefined4 *)(*(longlong *)(lVar34 + 0x18 + uVar27 * 8) + 0x30);
                  uVar27 = uVar27 + 4;
                } while ((iVar36 - iVar29 & 0xfffffffc) != uVar27);
              }
              uVar38 = local_48._0_8_;
              if ((local_158 & 3) != 0) {
                uVar41 = 0;
                do {
                  *(undefined4 *)(lVar32 + uVar27 * 4 + uVar41 * 4) =
                       *(undefined4 *)
                        (*(longlong *)(lVar44 + (uVar27 + lVar23) * 8 + uVar41 * 8) + 0x30);
                  uVar41 = uVar41 + 1;
                } while (((byte)(cVar17 - cVar40) & 3) != uVar41);
              }
            }
            FUN_015c15b0(1,uVar19);
            if (0 < (int)uVar19) {
              lVar44 = *(longlong *)(CONCAT44(uStack_b4,local_b8) + 0x10);
              lVar32 = *(longlong *)(*(longlong *)(local_f8[2] + local_d8._0_8_ * 8) + 0x10);
              if (local_158 - 1 < 3) {
                uVar27 = 0;
              }
              else {
                lVar34 = lVar32 + lVar23 * 8;
                uVar27 = 0;
                do {
                  *(undefined4 *)(*(longlong *)(lVar34 + uVar27 * 8) + 0x30) =
                       *(undefined4 *)(lVar44 + uVar27 * 4);
                  *(undefined4 *)(*(longlong *)(lVar34 + 8 + uVar27 * 8) + 0x30) =
                       *(undefined4 *)(lVar44 + 4 + uVar27 * 4);
                  *(undefined4 *)(*(longlong *)(lVar34 + 0x10 + uVar27 * 8) + 0x30) =
                       *(undefined4 *)(lVar44 + 8 + uVar27 * 4);
                  *(undefined4 *)(*(longlong *)(lVar34 + 0x18 + uVar27 * 8) + 0x30) =
                       *(undefined4 *)(lVar44 + 0xc + uVar27 * 4);
                  uVar27 = uVar27 + 4;
                } while ((iVar36 - iVar29 & 0xfffffffc) != uVar27);
              }
              if ((local_158 & 3) != 0) {
                uVar38 = 0;
                do {
                  *(undefined4 *)(*(longlong *)(lVar32 + (uVar27 + lVar23) * 8 + uVar38 * 8) + 0x30)
                       = *(undefined4 *)(lVar44 + uVar27 * 4 + uVar38 * 4);
                  uVar38 = uVar38 + 1;
                } while (((byte)(cVar17 - cVar40) & 3) != uVar38);
              }
              lVar44 = *(longlong *)(*(longlong *)(local_f8[2] + local_d8._0_8_ * 8) + 0x10);
              lVar32 = *(longlong *)(CONCAT44(uStack_b4,local_b8) + 0x10);
              if (local_158 - 1 < 3) {
                uVar27 = 0;
              }
              else {
                lVar34 = lVar44 + lVar23 * 8;
                uVar27 = 0;
                do {
                  *(undefined4 *)(lVar32 + uVar27 * 4) =
                       *(undefined4 *)(*(longlong *)(lVar34 + uVar27 * 8) + 0x2c);
                  *(undefined4 *)(lVar32 + 4 + uVar27 * 4) =
                       *(undefined4 *)(*(longlong *)(lVar34 + 8 + uVar27 * 8) + 0x2c);
                  *(undefined4 *)(lVar32 + 8 + uVar27 * 4) =
                       *(undefined4 *)(*(longlong *)(lVar34 + 0x10 + uVar27 * 8) + 0x2c);
                  *(undefined4 *)(lVar32 + 0xc + uVar27 * 4) =
                       *(undefined4 *)(*(longlong *)(lVar34 + 0x18 + uVar27 * 8) + 0x2c);
                  uVar27 = uVar27 + 4;
                } while ((iVar36 - iVar29 & 0xfffffffc) != uVar27);
              }
              uVar38 = local_48._0_8_;
              if ((local_158 & 3) != 0) {
                uVar41 = 0;
                do {
                  *(undefined4 *)(lVar32 + uVar27 * 4 + uVar41 * 4) =
                       *(undefined4 *)
                        (*(longlong *)(lVar44 + (uVar27 + lVar23) * 8 + uVar41 * 8) + 0x2c);
                  uVar41 = uVar41 + 1;
                } while (((byte)(cVar17 - cVar40) & 3) != uVar41);
              }
            }
            FUN_015c15b0(1,uVar19);
            if (0 < (int)uVar19) {
              lVar44 = *(longlong *)(CONCAT44(uStack_b4,local_b8) + 0x10);
              lVar32 = *(longlong *)(*(longlong *)(local_f8[2] + local_d8._0_8_ * 8) + 0x10);
              if (local_158 - 1 < 3) {
                uVar27 = 0;
              }
              else {
                lVar34 = lVar32 + lVar23 * 8;
                uVar27 = 0;
                do {
                  *(undefined4 *)(*(longlong *)(lVar34 + uVar27 * 8) + 0x2c) =
                       *(undefined4 *)(lVar44 + uVar27 * 4);
                  *(undefined4 *)(*(longlong *)(lVar34 + 8 + uVar27 * 8) + 0x2c) =
                       *(undefined4 *)(lVar44 + 4 + uVar27 * 4);
                  *(undefined4 *)(*(longlong *)(lVar34 + 0x10 + uVar27 * 8) + 0x2c) =
                       *(undefined4 *)(lVar44 + 8 + uVar27 * 4);
                  *(undefined4 *)(*(longlong *)(lVar34 + 0x18 + uVar27 * 8) + 0x2c) =
                       *(undefined4 *)(lVar44 + 0xc + uVar27 * 4);
                  uVar27 = uVar27 + 4;
                } while ((iVar36 - iVar29 & 0xfffffffc) != uVar27);
              }
              uVar38 = local_48._0_8_;
              if ((local_158 & 3) != 0) {
                uVar41 = 0;
                do {
                  *(undefined4 *)(*(longlong *)(lVar32 + (lVar23 + uVar27) * 8 + uVar41 * 8) + 0x2c)
                       = *(undefined4 *)(lVar44 + uVar27 * 4 + uVar41 * 4);
                  uVar41 = uVar41 + 1;
                } while (((byte)(cVar17 - cVar40) & 3) != uVar41);
              }
            }
            uVar27 = 0xffffffff;
            if (CONCAT44(uStack_b4,local_b8) != 0) {
              FUN_00d50b20();
            }
          }
        }
        uVar41 = uVar27;
        uVar27 = (ulonglong)*(int *)(unaff_RDI + 0x38);
        iVar36 = iVar36 + 1;
        bVar45 = (longlong)uVar38 < (longlong)uVar27;
        uVar38 = uVar38 + 1;
      } while (bVar45);
    }
    lVar23 = local_d8._0_8_ + 1;
  } while (lVar23 != 0x80);
  if (0 < (int)uVar27) {
    lVar23 = 0;
    do {
      local_48._0_8_ = lVar23;
      lVar23 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + lVar23 * 8);
      if (lVar23 != 0) {
        FUN_00d50b00();
      }
      if (0 < *(int *)(lVar23 + 0xc)) {
        lVar44 = 0;
        do {
          lVar32 = *(longlong *)(*(longlong *)(lVar23 + 0x10) + lVar44 * 8);
          if (lVar32 != 0) {
            FUN_00d50b00();
          }
          *(undefined4 *)(lVar32 + 0x14) = *(undefined4 *)(lVar32 + 0x18);
          lVar34 = *(longlong *)(lVar32 + 0x40);
          if (lVar34 != 0) {
            FUN_00d50b00();
          }
          FUN_007a2fc0();
          local_b8 = (float)FUN_00d459e0();
          if ((local_80[0] != '\0') && (local_88 != (undefined8 **)0x0)) {
            FUN_00d50b20();
          }
          if (lVar34 != 0) {
            FUN_00d50b20();
          }
          local_d8._0_4_ = *(undefined4 *)(lVar32 + 0x30);
          auVar51._0_8_ = _powf(*(float *)(lVar32 + 0x1c) / local_b8);
          auVar51._8_8_ = extraout_XMM0_Qb;
          auVar52._4_12_ = auVar51._4_12_;
          auVar52._0_4_ = (float)auVar51._0_8_ * (float)local_d8._0_4_ * *(float *)(lVar32 + 0x28);
          fVar47 = (float)_powf(auVar52._0_8_);
          *(float *)(lVar32 + 0x14) = fVar47 * *(float *)(lVar32 + 0x14) * *(float *)(lVar32 + 0x34)
          ;
          FUN_00d50b20();
          lVar44 = lVar44 + 1;
        } while (lVar44 < *(int *)(lVar23 + 0xc));
      }
      FUN_00d50b20();
      lVar23 = local_48._0_8_ + 1;
    } while (lVar23 < *(int *)(unaff_RDI + 0x38));
    if (0 < *(int *)(unaff_RDI + 0x38)) {
      lVar23 = 0;
      do {
        lVar44 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + lVar23 * 8);
        if (lVar44 != 0) {
          FUN_00d50b00();
        }
        uVar27 = (ulonglong)*(uint *)(lVar44 + 0xc);
        if (0 < (int)*(uint *)(lVar44 + 0xc)) {
          lVar32 = 0;
          do {
            lVar34 = *(longlong *)(*(longlong *)(lVar44 + 0x10) + lVar32 * 8);
            if (lVar34 != 0) {
              FUN_00d50b00();
              uVar27 = (ulonglong)*(uint *)(lVar44 + 0xc);
            }
            if (0 < (int)uVar27) {
              local_b8 = *(float *)(lVar34 + 0x2c);
              lVar33 = 0;
              do {
                if (lVar32 != lVar33) {
                  fVar47 = local_b8 -
                           *(float *)(*(longlong *)(*(longlong *)(lVar44 + 0x10) + lVar33 * 8) +
                                     0x38);
                  fVar48 = (float)((uint)(fVar47 + _DAT_02417210) & _DAT_02390140);
                  fVar47 = fVar47 + _DAT_02417214;
                  if (fVar48 < DAT_023908ec) {
                    local_d8._0_16_ = ZEXT416((uint)fVar47);
                    uVar18 = FUN_015b4e00(fVar48 / DAT_02394248 + DAT_02390124);
                    local_48._0_4_ = uVar18;
                    fVar47 = (float)FUN_015b4e00();
                    *(float *)(lVar34 + 0x14) =
                         (DAT_02390124 - (float)local_48._0_4_ * fVar47) * *(float *)(lVar34 + 0x14)
                    ;
                    fVar47 = (float)local_d8._0_4_;
                  }
                  if ((float)((uint)fVar47 & _DAT_02390140) < DAT_023908ec) {
                    uVar18 = FUN_015b4e00();
                    local_d8._0_4_ = uVar18;
                    fVar47 = (float)FUN_015b4e00();
                    *(float *)(lVar34 + 0x14) =
                         (DAT_02390124 - (float)local_d8._0_4_ * fVar47) * *(float *)(lVar34 + 0x14)
                    ;
                  }
                }
                lVar33 = lVar33 + 1;
                uVar27 = (ulonglong)*(int *)(lVar44 + 0xc);
              } while (lVar33 < (longlong)uVar27);
            }
            if (lVar34 != 0) {
              FUN_00d50b20();
              uVar27 = (ulonglong)*(uint *)(lVar44 + 0xc);
            }
            lVar32 = lVar32 + 1;
          } while (lVar32 < (int)uVar27);
        }
        FUN_00d50b20();
        lVar23 = lVar23 + 1;
      } while (lVar23 < *(int *)(unaff_RDI + 0x38));
    }
  }
  puVar24 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar24 = local_128;
  (*local_130)();
  lVar23 = *(longlong *)(unaff_RDI + 0x50);
  *(undefined8 **)(unaff_RDI + 0x50) = puVar24;
  if (lVar23 != 0) {
    FUN_00d50b20();
  }
  if (0 < (int)*local_c0) {
    iVar36 = 0;
    do {
      ppuVar30 = (undefined8 **)FUN_00e8fc40();
      FUN_00d4ff40();
      *ppuVar30 = local_128;
      (*local_130)();
      local_80[0] = '\0';
      local_88 = ppuVar30;
      FUN_00d21140();
      if ((local_80[0] != '\0') && (local_88 != (undefined8 **)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      iVar36 = iVar36 + 1;
    } while (iVar36 < (int)*local_c0);
  }
  lVar23 = 0;
  do {
    if (*(char *)((longlong)local_180[2] + lVar23) != '\0') {
      lVar44 = *(longlong *)(local_f8[2] + lVar23 * 8);
      if (lVar44 != 0) {
        FUN_00d50b00();
      }
      if ((0 < (int)*local_c0) && (0 < *local_138)) {
        local_158 = 0;
        do {
          if (0 < *local_138) {
            iVar36 = *local_138 * (int)(float)local_158;
            local_b8 = 0.0;
            lVar32 = 0;
            iVar29 = 0;
            bVar45 = false;
            auVar11._12_4_ = 0;
            auVar11._0_12_ = local_48._4_12_;
            local_48._0_16_ = auVar11 << 0x20;
            auVar12._12_4_ = 0;
            auVar12._0_12_ = local_d8._4_12_;
            local_d8._0_16_ = auVar12 << 0x20;
            do {
              lVar34 = *(longlong *)
                        (*(longlong *)(lVar44 + 0x10) + (longlong)iVar36 * 8 + lVar32 * 8);
              if (lVar34 != 0) {
                FUN_00d50b00();
                local_d8._0_4_ = (float)local_d8._0_4_ + *(float *)(lVar34 + 0x14);
                local_48._0_4_ = (float)local_48._0_4_ + *(float *)(lVar34 + 0x2c);
                local_b8 = local_b8 + *(float *)(lVar34 + 0x38);
                FUN_00d50b20();
                iVar29 = iVar29 + 1;
                bVar45 = true;
              }
              lVar32 = lVar32 + 1;
              iVar20 = *local_138;
            } while (lVar32 < iVar20);
            if (bVar45) {
              ppuVar30 = (undefined8 **)FUN_00e8fc40();
              FUN_00d4ff40();
              *ppuVar30 = (undefined8 *)&DAT_0260ce98;
              *(undefined4 *)((longlong)ppuVar30 + 0xc) = 0;
              *(undefined1 *)(ppuVar30 + 2) = 0;
              *(undefined8 *)((longlong)ppuVar30 + 0x14) = 0;
              *(undefined8 *)((longlong)ppuVar30 + 0x1c) = 0;
              *(undefined8 *)((longlong)ppuVar30 + 0x24) = 0;
              *(undefined8 *)((longlong)ppuVar30 + 0x2c) = 0;
              *(undefined8 *)((longlong)ppuVar30 + 0x34) = 0;
              *(undefined8 *)((longlong)ppuVar30 + 0x3c) = 0;
              *(undefined4 *)((longlong)ppuVar30 + 0x44) = 0;
              FUN_00d500e0();
              *(int *)((longlong)ppuVar30 + 0xc) = (int)lVar23;
              *(float *)((longlong)ppuVar30 + 0x2c) = (float)local_48._0_4_ / (float)iVar29;
              *(float *)(ppuVar30 + 7) = local_b8 / (float)iVar29;
              *(float *)((longlong)ppuVar30 + 0x14) = (float)local_d8._0_4_ / (float)iVar20;
              *(undefined4 *)((longlong)ppuVar30 + 0x3c) = 0;
              local_80[0] = '\0';
              local_88 = ppuVar30;
              FUN_00d21140();
              if ((local_80[0] != '\0') && (local_88 != (undefined8 **)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
          }
          local_158 = local_158 + 1;
        } while ((longlong)local_158 < (longlong)(int)*local_c0);
      }
      if (lVar44 != 0) {
        FUN_00d50b20();
      }
    }
    lVar23 = lVar23 + 1;
  } while (lVar23 != 0x80);
  if (0 < (int)*local_c0) {
    auVar13._12_4_ = 0;
    auVar13._0_12_ = local_d8._4_12_;
    local_d8._0_16_ = auVar13 << 0x20;
    lVar23 = 0;
    local_b8 = 0.0;
    do {
      piVar42 = *(int **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + lVar23 * 8);
      if (piVar42 != (int *)0x0) {
        FUN_00d50b00();
      }
      uVar19 = piVar42[3];
      if (0 < (int)uVar19) {
        lVar44 = *(longlong *)(piVar42 + 4);
        local_158 = (ulonglong)uVar19;
        local_138 = piVar42;
        if (uVar19 == 1) {
          uVar27 = 0;
        }
        else {
          uVar27 = 0;
          do {
            lVar32 = *(longlong *)(lVar44 + 8 + uVar27 * 8);
            local_48._0_4_ = *(float *)(*(longlong *)(lVar44 + uVar27 * 8) + 0x14);
            fVar47 = (float)_powf();
            local_48._0_4_ = (float)local_48._0_4_ * fVar47 + local_b8;
            local_b8 = *(float *)(lVar32 + 0x14);
            local_d8._0_4_ = (float)local_d8._0_4_ + fVar47;
            fVar47 = (float)_powf();
            local_d8._0_4_ = (float)local_d8._0_4_ + fVar47;
            local_b8 = local_b8 * fVar47 + (float)local_48._0_4_;
            uVar27 = uVar27 + 2;
          } while ((uVar19 & 0xfffffffe) != uVar27);
        }
        piVar42 = local_138;
        if ((local_158 & 1) != 0) {
          local_48._0_4_ = *(undefined4 *)(*(longlong *)(lVar44 + uVar27 * 8) + 0x14);
          fVar47 = (float)_powf();
          local_b8 = local_b8 + (float)local_48._0_4_ * fVar47;
          local_d8._0_4_ = (float)local_d8._0_4_ + fVar47;
        }
      }
      if (piVar42 != (int *)0x0) {
        FUN_00d50b20();
      }
      lVar23 = lVar23 + 1;
    } while (lVar23 < (int)*local_c0);
    if (0 < (int)*local_c0) {
      local_b8 = local_b8 / (float)local_d8._0_4_;
      lVar23 = 0;
      do {
        lVar44 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + lVar23 * 8);
        if (lVar44 != 0) {
          FUN_00d50b00();
        }
        uVar19 = *(uint *)(lVar44 + 0xc);
        if (0 < (int)uVar19) {
          lVar32 = (ulonglong)uVar19 + 1;
          do {
            uVar19 = uVar19 - 1;
            uVar18 = FUN_015b4e00();
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(lVar44 + 0x10) + (ulonglong)uVar19 * 8) + 0x14) = uVar18;
            lVar32 = lVar32 + -1;
          } while (1 < lVar32);
        }
        FUN_00d50b20();
        lVar23 = lVar23 + 1;
      } while (lVar23 < (int)*local_c0);
    }
  }
  puVar24 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar24 = local_128;
  (*local_130)();
  lVar23 = *(longlong *)(unaff_RDI + 0x60);
  *(undefined8 **)(unaff_RDI + 0x60) = puVar24;
  if (lVar23 != 0) {
    FUN_00d50b20();
  }
  if (0 < (int)*local_c0) {
    iVar36 = 0;
    do {
      FUN_00c8e690();
      ppuVar30 = local_88;
      if ((((local_80[0] == '\0') && (local_88 != (undefined8 **)0x0)) &&
          (FUN_00d50b00(), local_80[0] != '\0')) && (local_88 != (undefined8 **)0x0)) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      local_80[0] = '\0';
      local_88 = ppuVar30;
      FUN_00d21140();
      if ((local_80[0] != '\0') && (local_88 != (undefined8 **)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      iVar36 = iVar36 + 1;
    } while (iVar36 < (int)*local_c0);
    if (0 < (int)*local_c0) {
      lVar23 = 0;
      do {
        lVar44 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + lVar23 * 8);
        if (lVar44 != 0) {
          FUN_00d50b00();
        }
        lVar32 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x60) + 0x10) + lVar23 * 8);
        if (lVar32 != 0) {
          FUN_00d50b00();
        }
        if (0 < *(int *)(lVar44 + 0xc)) {
          lVar34 = 0;
          do {
            lVar33 = *(longlong *)(*(longlong *)(lVar44 + 0x10) + lVar34 * 8);
            if (lVar33 != 0) {
              FUN_00d50b00();
            }
            iVar36 = *(int *)(lVar33 + 0xc);
            fVar47 = *(float *)(lVar33 + 0x14);
            lVar33 = (longlong)
                     (int)(iVar36 + (((uint)(iVar36 / 6 + (iVar36 >> 0x1f)) >> 1) - (iVar36 >> 0x1f)
                                    ) * -0xc);
            pfVar1 = (float *)(*(longlong *)(lVar32 + 0x10) + lVar33 * 4);
            if (*pfVar1 <= fVar47 && fVar47 != *pfVar1) {
              *(float *)(*(longlong *)(lVar32 + 0x10) + lVar33 * 4) = fVar47;
            }
            FUN_00d50b20();
            lVar34 = lVar34 + 1;
          } while (lVar34 < *(int *)(lVar44 + 0xc));
        }
        if (lVar32 != 0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        lVar23 = lVar23 + 1;
      } while (lVar23 < (int)*local_c0);
    }
  }
  puVar24 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar24 = local_128;
  (*local_130)();
  lVar23 = *(longlong *)(unaff_RDI + 0x68);
  *(undefined8 **)(unaff_RDI + 0x68) = puVar24;
  if (lVar23 != 0) {
    FUN_00d50b20();
  }
  if (0 < (int)*local_c0) {
    iVar36 = 0;
    do {
      FUN_00c8e690();
      ppuVar30 = local_88;
      if (((local_80[0] == '\0') && (local_88 != (undefined8 **)0x0)) &&
         ((FUN_00d50b00(), local_80[0] != '\0' && (local_88 != (undefined8 **)0x0)))) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      local_80[0] = '\0';
      local_88 = ppuVar30;
      FUN_00d21140();
      if ((local_80[0] != '\0') && (local_88 != (undefined8 **)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      iVar36 = iVar36 + 1;
    } while (iVar36 < (int)*local_c0);
  }
  FUN_00c8e690();
  ppuVar30 = local_88;
  if ((((local_80[0] == '\0') && (local_88 != (undefined8 **)0x0)) &&
      (FUN_00d50b00(), local_80[0] != '\0')) && (local_88 != (undefined8 **)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_d8._0_8_ = ppuVar30;
  uVar27 = (ulonglong)*local_c0;
  lVar23 = 0;
  do {
    uVar19 = (uint)uVar27;
    if (0 < (int)uVar19) {
      lVar44 = *(longlong *)(*(longlong *)(unaff_RDI + 0x60) + 0x10);
      lVar32 = *(longlong *)(local_d8._0_8_ + 0x10);
      if (uVar27 - 1 < 3) {
        uVar27 = 0;
      }
      else {
        uVar27 = 0;
        do {
          *(undefined4 *)(lVar32 + uVar27 * 4) =
               *(undefined4 *)
                (*(longlong *)(*(longlong *)(lVar44 + uVar27 * 8) + 0x10) + lVar23 * 4);
          *(undefined4 *)(lVar32 + 4 + uVar27 * 4) =
               *(undefined4 *)
                (*(longlong *)(*(longlong *)(lVar44 + 8 + uVar27 * 8) + 0x10) + lVar23 * 4);
          *(undefined4 *)(lVar32 + 8 + uVar27 * 4) =
               *(undefined4 *)
                (*(longlong *)(*(longlong *)(lVar44 + 0x10 + uVar27 * 8) + 0x10) + lVar23 * 4);
          *(undefined4 *)(lVar32 + 0xc + uVar27 * 4) =
               *(undefined4 *)
                (*(longlong *)(*(longlong *)(lVar44 + 0x18 + uVar27 * 8) + 0x10) + lVar23 * 4);
          uVar27 = uVar27 + 4;
        } while ((uVar19 & 0xfffffffc) != uVar27);
      }
      if ((ulonglong)(uVar19 & 3) != 0) {
        uVar38 = 0;
        do {
          *(undefined4 *)(lVar32 + uVar27 * 4 + uVar38 * 4) =
               *(undefined4 *)
                (*(longlong *)(*(longlong *)(lVar44 + uVar27 * 8 + uVar38 * 8) + 0x10) + lVar23 * 4)
          ;
          uVar38 = uVar38 + 1;
        } while ((uVar19 & 3) != uVar38);
      }
    }
    puVar24 = (undefined8 *)0x0;
    FUN_015c15b0();
    uVar19 = *local_c0;
    uVar27 = (ulonglong)uVar19;
    if (0 < (int)uVar19) {
      puVar24 = *(undefined8 **)(local_d8._0_8_ + 0x10);
      lVar44 = *(longlong *)(*(longlong *)(unaff_RDI + 0x68) + 0x10);
      if (uVar27 - 1 < 3) {
        uVar38 = 0;
      }
      else {
        uVar38 = 0;
        do {
          *(undefined4 *)(*(longlong *)(*(longlong *)(lVar44 + uVar38 * 8) + 0x10) + lVar23 * 4) =
               *(undefined4 *)((longlong)puVar24 + uVar38 * 4);
          *(undefined4 *)(*(longlong *)(*(longlong *)(lVar44 + 8 + uVar38 * 8) + 0x10) + lVar23 * 4)
               = *(undefined4 *)((longlong)puVar24 + uVar38 * 4 + 4);
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(lVar44 + 0x10 + uVar38 * 8) + 0x10) + lVar23 * 4) =
               *(undefined4 *)((longlong)puVar24 + uVar38 * 4 + 8);
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(lVar44 + 0x18 + uVar38 * 8) + 0x10) + lVar23 * 4) =
               *(undefined4 *)((longlong)puVar24 + uVar38 * 4 + 0xc);
          uVar38 = uVar38 + 4;
        } while ((uVar19 & 0xfffffffc) != uVar38);
      }
      if ((ulonglong)(uVar19 & 3) != 0) {
        puVar24 = (undefined8 *)((longlong)puVar24 + uVar38 * 4);
        uVar41 = 0;
        do {
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(lVar44 + uVar38 * 8 + uVar41 * 8) + 0x10) + lVar23 * 4) =
               *(undefined4 *)((longlong)puVar24 + uVar41 * 4);
          uVar41 = uVar41 + 1;
        } while ((uVar19 & 3) != uVar41);
      }
    }
    lVar23 = lVar23 + 1;
  } while (lVar23 != 0xc);
  FUN_00c8e690();
  ppuVar30 = local_88;
  if (((local_80[0] == '\0') && (local_88 != (undefined8 **)0x0)) &&
     ((FUN_00d50b00(), local_80[0] != '\0' && (local_88 != (undefined8 **)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  ppuVar8 = *(undefined8 ***)(unaff_RDI + 0x58);
  if (ppuVar8 == ppuVar30) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 ***)(unaff_RDI + 0x58) = ppuVar30;
    if (ppuVar8 != (undefined8 **)0x0) {
      FUN_00d50b20();
    }
  }
  uVar19 = *local_c0;
  if (1 < (int)uVar19) {
    lVar23 = 1;
    do {
      lVar44 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x60) + 0x10) + lVar23 * 8);
      if (lVar44 != 0) {
        FUN_00d50b00();
      }
      local_50 = '\0';
      local_58 = (undefined8 **)lVar44;
      FUN_00c8e4f0();
      ppuVar30 = local_88;
      if (local_80[0] == '\0') {
        if (((local_88 != (undefined8 **)0x0) && (FUN_00d50b00(), local_80[0] != '\0')) &&
           (local_88 != (undefined8 **)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_80[0] = '\0';
      }
      if ((local_50 != '\0') && (local_58 != (undefined8 **)0x0)) {
        FUN_00d50b20();
      }
      local_b8 = SUB84(ppuVar30,0);
      uStack_b4 = (undefined4)((ulonglong)ppuVar30 >> 0x20);
      FUN_00c92170();
      FUN_00c92160();
      if (lVar44 != 0) {
        FUN_00d50b20();
      }
      ppuVar8 = *(undefined8 ***)
                 (*(longlong *)(*(longlong *)(unaff_RDI + 0x60) + 0x10) + -8 + lVar23 * 8);
      if (ppuVar8 != (undefined8 **)0x0) {
        FUN_00d50b00();
      }
      local_50 = '\0';
      local_58 = ppuVar8;
      FUN_00c8e4f0();
      ppuVar16 = local_88;
      if (local_80[0] == '\0') {
        if (((local_88 != (undefined8 **)0x0) && (FUN_00d50b00(), local_80[0] != '\0')) &&
           (local_88 != (undefined8 **)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_80[0] = '\0';
      }
      if ((local_50 != '\0') && (local_58 != (undefined8 **)0x0)) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      if (ppuVar8 != (undefined8 **)0x0) {
        FUN_00d50b20();
      }
      puVar9 = ppuVar30[2];
      puVar24 = ppuVar16[2];
      lVar44 = 0;
      do {
        fVar47 = *(float *)((longlong)puVar9 + lVar44 * 4) -
                 *(float *)((longlong)puVar24 + lVar44 * 4);
        if (0.0 < fVar47) {
          lVar32 = *(longlong *)(*(longlong *)(unaff_RDI + 0x58) + 0x10);
          fVar48 = fVar47 * DAT_02394288 + *(float *)(lVar32 + lVar23 * 4);
          *(float *)(lVar32 + lVar23 * 4) = fVar48;
          uVar27 = 0;
          if (lVar44 + 1U != 0xc) {
            uVar27 = lVar44 + 1U & 0xffffffff;
          }
          fVar54 = *(float *)((longlong)puVar9 + uVar27 * 4);
          fVar64 = *(float *)((longlong)puVar24 + uVar27 * 4) - fVar54;
          fVar60 = *(float *)((longlong)puVar9 + lVar44 * 4);
          if ((0.0 < fVar64) && (fVar54 = fVar60 - fVar54, 0.0 < fVar54)) {
            fVar48 = fVar48 + fVar64 * fVar54 * fVar47;
            *(float *)(lVar32 + lVar23 * 4) = fVar48;
            fVar60 = *(float *)((longlong)puVar9 + lVar44 * 4);
          }
          iVar36 = (int)lVar44;
          uVar27 = (ulonglong)(((iVar36 + 2U) / 0xc) * -0xc + iVar36 + 2);
          fVar54 = *(float *)((longlong)puVar9 + uVar27 * 4);
          fVar64 = *(float *)((longlong)puVar24 + uVar27 * 4) - fVar54;
          if ((0.0 < fVar64) && (fVar54 = fVar60 - fVar54, 0.0 < fVar54)) {
            fVar48 = fVar48 + fVar64 * fVar54 * fVar47;
            *(float *)(lVar32 + lVar23 * 4) = fVar48;
            fVar60 = *(float *)((longlong)puVar9 + lVar44 * 4);
          }
          uVar27 = (ulonglong)((iVar36 + 3U) % 0xc);
          fVar54 = *(float *)((longlong)puVar9 + uVar27 * 4);
          fVar64 = *(float *)((longlong)puVar24 + uVar27 * 4) - fVar54;
          if ((0.0 < fVar64) && (fVar54 = fVar60 - fVar54, 0.0 < fVar54)) {
            fVar48 = fVar48 + fVar64 * fVar54 * fVar47;
            *(float *)(lVar32 + lVar23 * 4) = fVar48;
            fVar60 = *(float *)((longlong)puVar9 + lVar44 * 4);
          }
          uVar27 = (ulonglong)((iVar36 + 4U) % 0xc);
          fVar54 = *(float *)((longlong)puVar9 + uVar27 * 4);
          fVar64 = *(float *)((longlong)puVar24 + uVar27 * 4) - fVar54;
          if ((0.0 < fVar64) && (fVar54 = fVar60 - fVar54, 0.0 < fVar54)) {
            fVar48 = fVar48 + fVar64 * fVar54 * fVar47;
            *(float *)(lVar32 + lVar23 * 4) = fVar48;
            fVar60 = *(float *)((longlong)puVar9 + lVar44 * 4);
          }
          uVar27 = (ulonglong)((iVar36 + 5U) % 0xc);
          fVar54 = *(float *)((longlong)puVar9 + uVar27 * 4);
          fVar64 = *(float *)((longlong)puVar24 + uVar27 * 4) - fVar54;
          if ((0.0 < fVar64) && (fVar54 = fVar60 - fVar54, 0.0 < fVar54)) {
            fVar48 = fVar48 + fVar64 * fVar54 * fVar47;
            *(float *)(lVar32 + lVar23 * 4) = fVar48;
            fVar60 = *(float *)((longlong)puVar9 + lVar44 * 4);
          }
          uVar27 = (ulonglong)((iVar36 + 6U) % 0xc);
          fVar54 = *(float *)((longlong)puVar9 + uVar27 * 4);
          fVar64 = *(float *)((longlong)puVar24 + uVar27 * 4) - fVar54;
          if ((0.0 < fVar64) && (fVar54 = fVar60 - fVar54, 0.0 < fVar54)) {
            fVar48 = fVar48 + fVar64 * fVar54 * fVar47;
            *(float *)(lVar32 + lVar23 * 4) = fVar48;
            fVar60 = *(float *)((longlong)puVar9 + lVar44 * 4);
          }
          uVar27 = (ulonglong)((iVar36 + 7U) % 0xc);
          fVar54 = *(float *)((longlong)puVar9 + uVar27 * 4);
          fVar64 = *(float *)((longlong)puVar24 + uVar27 * 4) - fVar54;
          if ((0.0 < fVar64) && (fVar54 = fVar60 - fVar54, 0.0 < fVar54)) {
            fVar48 = fVar48 + fVar64 * fVar54 * fVar47;
            *(float *)(lVar32 + lVar23 * 4) = fVar48;
            fVar60 = *(float *)((longlong)puVar9 + lVar44 * 4);
          }
          uVar27 = (ulonglong)((iVar36 + 8U) % 0xc);
          fVar54 = *(float *)((longlong)puVar9 + uVar27 * 4);
          fVar64 = *(float *)((longlong)puVar24 + uVar27 * 4) - fVar54;
          if ((0.0 < fVar64) && (fVar54 = fVar60 - fVar54, 0.0 < fVar54)) {
            fVar48 = fVar48 + fVar64 * fVar54 * fVar47;
            *(float *)(lVar32 + lVar23 * 4) = fVar48;
            fVar60 = *(float *)((longlong)puVar9 + lVar44 * 4);
          }
          uVar27 = (ulonglong)((iVar36 + 9U) % 0xc);
          fVar54 = *(float *)((longlong)puVar9 + uVar27 * 4);
          fVar64 = *(float *)((longlong)puVar24 + uVar27 * 4) - fVar54;
          if ((0.0 < fVar64) && (fVar54 = fVar60 - fVar54, 0.0 < fVar54)) {
            fVar48 = fVar48 + fVar64 * fVar54 * fVar47;
            *(float *)(lVar32 + lVar23 * 4) = fVar48;
            fVar60 = *(float *)((longlong)puVar9 + lVar44 * 4);
          }
          uVar27 = (ulonglong)((iVar36 + 10U) % 0xc);
          fVar54 = *(float *)((longlong)puVar9 + uVar27 * 4);
          fVar64 = *(float *)((longlong)puVar24 + uVar27 * 4) - fVar54;
          if ((0.0 < fVar64) && (fVar54 = fVar60 - fVar54, 0.0 < fVar54)) {
            fVar48 = fVar48 + fVar64 * fVar54 * fVar47;
            *(float *)(lVar32 + lVar23 * 4) = fVar48;
            fVar60 = *(float *)((longlong)puVar9 + lVar44 * 4);
          }
          ppuVar30 = (undefined8 **)CONCAT44(uStack_b4,local_b8);
          uVar27 = (ulonglong)((iVar36 + 0xbU) % 0xc);
          fVar54 = *(float *)((longlong)puVar9 + uVar27 * 4);
          fVar64 = *(float *)((longlong)puVar24 + uVar27 * 4) - fVar54;
          if ((0.0 < fVar64) && (fVar60 = fVar60 - fVar54, 0.0 < fVar60)) {
            *(float *)(lVar32 + lVar23 * 4) = fVar64 * fVar47 * fVar60 + fVar48;
          }
        }
        lVar44 = lVar44 + 1;
      } while (lVar44 != 0xc);
      if (ppuVar16 != (undefined8 **)0x0) {
        FUN_00d50b20();
      }
      if (ppuVar30 != (undefined8 **)0x0) {
        FUN_00d50b20();
      }
      lVar23 = lVar23 + 1;
      uVar19 = *local_c0;
    } while (lVar23 < (int)uVar19);
  }
  if (0 < (int)uVar19) {
    lVar23 = 0;
    do {
      pVar21 = (pthread_key_t)puVar24;
      local_88 = (undefined8 **)FUN_00e7bcc0();
      FUN_00e7b820();
      local_58 = local_88;
      pvVar22 = _pthread_getspecific(pVar21);
      if (pvVar22 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar24 = (undefined8 *)0x0;
      local_88 = (undefined8 **)FUN_016c4630(0,1);
      if ((((local_58._4_4_ != 0) && ((ulonglong)local_88 >> 0x20 != 0)) &&
          (cVar17 = FUN_00e7c000(), cVar17 != '\0')) &&
         (lVar44 = *(longlong *)(*(longlong *)(unaff_RDI + 0x58) + 0x10),
         pfVar1 = (float *)(lVar44 + lVar23 * 4), *pfVar1 <= DAT_02390124 && DAT_02390124 != *pfVar1
         )) {
        *(undefined4 *)(lVar44 + lVar23 * 4) = 0x3f800000;
      }
      lVar23 = lVar23 + 1;
    } while (lVar23 < (int)*local_c0);
  }
  lVar23 = *(longlong *)(unaff_RDI + 0x58);
  if (lVar23 != 0) {
    FUN_00d50b00();
  }
  local_50 = '\0';
  local_58 = (undefined8 **)lVar23;
  FUN_00c8e4f0();
  ppuVar30 = local_88;
  if (local_80[0] == '\0') {
    if (((local_88 != (undefined8 **)0x0) && (FUN_00d50b00(), local_80[0] != '\0')) &&
       (local_88 != (undefined8 **)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80[0] = '\0';
  }
  if ((local_50 != '\0') && (local_58 != (undefined8 **)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (lVar23 != 0) {
    FUN_00d50b20();
  }
  fVar60 = _UNK_02411e1c;
  fVar54 = _UNK_02411e18;
  fVar48 = _UNK_02411e14;
  fVar47 = _DAT_02411e10;
  if (2 < (int)*local_c0) {
    puVar24 = ppuVar30[2];
    lVar23 = *(longlong *)(*(longlong *)(unaff_RDI + 0x58) + 0x10);
    uVar19 = *local_c0 - 1;
    uVar41 = (ulonglong)uVar19;
    uVar27 = uVar41 - 1;
    uVar38 = 1;
    if ((7 < uVar27) &&
       (((longlong)puVar24 + uVar41 * 4 + 4 <= lVar23 + 4U ||
        ((undefined8 *)(lVar23 + uVar41 * 4) <= puVar24)))) {
      uVar39 = uVar27 & 0xfffffffffffffff8;
      uVar38 = uVar39 + 1;
      uVar35 = 0;
      do {
        pfVar2 = (float *)((longlong)puVar24 + uVar35 * 4 + 0x14);
        pfVar1 = (float *)((longlong)puVar24 + uVar35 * 4);
        pfVar3 = (float *)((longlong)puVar24 + uVar35 * 4 + 4);
        pfVar4 = (float *)((longlong)puVar24 + uVar35 * 4 + 8);
        pfVar5 = (float *)((longlong)puVar24 + uVar35 * 4 + 0x10);
        pfVar6 = (float *)((longlong)puVar24 + uVar35 * 4 + 0x18);
        auVar65._0_4_ = *pfVar3 - (*pfVar4 + *pfVar1) * fVar47;
        auVar65._4_4_ = pfVar3[1] - (pfVar4[1] + pfVar1[1]) * fVar48;
        auVar65._8_4_ = pfVar3[2] - (pfVar4[2] + pfVar1[2]) * fVar54;
        auVar65._12_4_ = pfVar3[3] - (pfVar4[3] + pfVar1[3]) * fVar60;
        auVar58._0_4_ = *pfVar2 - (*pfVar6 + *pfVar5) * fVar47;
        auVar58._4_4_ = pfVar2[1] - (pfVar6[1] + pfVar5[1]) * fVar48;
        auVar58._8_4_ = pfVar2[2] - (pfVar6[2] + pfVar5[2]) * fVar54;
        auVar58._12_4_ = pfVar2[3] - (pfVar6[3] + pfVar5[3]) * fVar60;
        auVar62 = maxps(ZEXT816(0),auVar65);
        auVar61 = maxps(ZEXT816(0),auVar58);
        *(undefined1 (*) [16])(lVar23 + 4 + uVar35 * 4) = auVar62;
        *(undefined1 (*) [16])(lVar23 + 0x14 + uVar35 * 4) = auVar61;
        uVar35 = uVar35 + 8;
      } while (uVar39 != uVar35);
      if (uVar27 == uVar39) goto LAB_0184fa77;
    }
    uVar27 = ~uVar38;
    if ((uVar19 & 1) == 0) {
      fVar48 = (*(float *)((longlong)puVar24 + uVar38 * 4 + -4) +
               *(float *)((longlong)puVar24 + uVar38 * 4 + 4)) * DAT_02390118 +
               *(float *)((longlong)puVar24 + uVar38 * 4);
      fVar47 = 0.0;
      if (0.0 <= fVar48) {
        fVar47 = fVar48;
      }
      *(float *)(lVar23 + uVar38 * 4) = fVar47;
      uVar38 = uVar38 + 1;
    }
    fVar47 = DAT_0239011c;
    if (uVar27 + uVar41 != 0) {
      do {
        fVar54 = *(float *)((longlong)puVar24 + uVar38 * 4) -
                 (*(float *)((longlong)puVar24 + uVar38 * 4 + -4) +
                 *(float *)((longlong)puVar24 + uVar38 * 4 + 4)) * fVar47;
        fVar48 = 0.0;
        if (0.0 <= fVar54) {
          fVar48 = fVar54;
        }
        *(float *)(lVar23 + uVar38 * 4) = fVar48;
        fVar54 = *(float *)((longlong)puVar24 + uVar38 * 4 + 4) -
                 (*(float *)((longlong)puVar24 + uVar38 * 4) +
                 *(float *)((longlong)puVar24 + uVar38 * 4 + 8)) * fVar47;
        fVar48 = 0.0;
        if (0.0 <= fVar54) {
          fVar48 = fVar54;
        }
        *(float *)(lVar23 + 4 + uVar38 * 4) = fVar48;
        uVar38 = uVar38 + 2;
      } while (uVar41 != uVar38);
    }
  }
LAB_0184fa77:
  if (ppuVar30 != (undefined8 **)0x0) {
    FUN_00d50b20();
  }
  lVar23 = *(longlong *)(unaff_RDI + 0x58);
  if (lVar23 != 0) {
    FUN_00d50b00();
  }
  local_50 = '\0';
  local_58 = (undefined8 **)lVar23;
  FUN_00c8e4f0();
  ppuVar30 = local_88;
  if (local_80[0] == '\0') {
    if (((local_88 != (undefined8 **)0x0) && (FUN_00d50b00(), local_80[0] != '\0')) &&
       (local_88 != (undefined8 **)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80[0] = '\0';
  }
  if ((local_50 != '\0') && (local_58 != (undefined8 **)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (lVar23 != 0) {
    FUN_00d50b20();
  }
  fVar60 = _UNK_02411e1c;
  fVar54 = _UNK_02411e18;
  fVar48 = _UNK_02411e14;
  fVar47 = _DAT_02411e10;
  uVar19 = *local_c0;
  if (2 < (int)uVar19) {
    puVar9 = ppuVar30[2];
    puVar24 = *(undefined8 **)(*(longlong *)(unaff_RDI + 0x58) + 0x10);
    uVar41 = (ulonglong)(uVar19 - 1);
    uVar27 = uVar41 - 1;
    uVar38 = 1;
    if ((7 < uVar27) &&
       (((longlong)puVar9 + uVar41 * 4 + 4 <= (longlong)puVar24 + 4U ||
        ((undefined8 *)((longlong)puVar24 + uVar41 * 4) <= puVar9)))) {
      uVar39 = uVar27 & 0xfffffffffffffff8;
      uVar38 = uVar39 + 1;
      uVar35 = 0;
      do {
        pfVar2 = (float *)((longlong)puVar9 + uVar35 * 4 + 0x14);
        pfVar1 = (float *)((longlong)puVar9 + uVar35 * 4);
        pfVar3 = (float *)((longlong)puVar9 + uVar35 * 4 + 4);
        pfVar4 = (float *)((longlong)puVar9 + uVar35 * 4 + 8);
        pfVar5 = (float *)((longlong)puVar9 + uVar35 * 4 + 0x10);
        pfVar6 = (float *)((longlong)puVar9 + uVar35 * 4 + 0x18);
        auVar66._0_4_ = *pfVar3 - (*pfVar4 + *pfVar1) * fVar47;
        auVar66._4_4_ = pfVar3[1] - (pfVar4[1] + pfVar1[1]) * fVar48;
        auVar66._8_4_ = pfVar3[2] - (pfVar4[2] + pfVar1[2]) * fVar54;
        auVar66._12_4_ = pfVar3[3] - (pfVar4[3] + pfVar1[3]) * fVar60;
        auVar59._0_4_ = *pfVar2 - (*pfVar6 + *pfVar5) * fVar47;
        auVar59._4_4_ = pfVar2[1] - (pfVar6[1] + pfVar5[1]) * fVar48;
        auVar59._8_4_ = pfVar2[2] - (pfVar6[2] + pfVar5[2]) * fVar54;
        auVar59._12_4_ = pfVar2[3] - (pfVar6[3] + pfVar5[3]) * fVar60;
        auVar62 = maxps(ZEXT816(0),auVar66);
        auVar61 = maxps(ZEXT816(0),auVar59);
        *(undefined1 (*) [16])((longlong)puVar24 + uVar35 * 4 + 4) = auVar62;
        *(undefined1 (*) [16])((longlong)puVar24 + uVar35 * 4 + 0x14) = auVar61;
        uVar35 = uVar35 + 8;
      } while (uVar39 != uVar35);
      if (uVar27 == uVar39) goto LAB_0184fc67;
    }
    uVar27 = ~uVar38;
    if ((uVar19 - 1 & 1) == 0) {
      fVar48 = (*(float *)((longlong)puVar9 + uVar38 * 4 + -4) +
               *(float *)((longlong)puVar9 + uVar38 * 4 + 4)) * DAT_02390118 +
               *(float *)((longlong)puVar9 + uVar38 * 4);
      fVar47 = 0.0;
      if (0.0 <= fVar48) {
        fVar47 = fVar48;
      }
      *(float *)((longlong)puVar24 + uVar38 * 4) = fVar47;
      uVar38 = uVar38 + 1;
    }
    fVar47 = DAT_0239011c;
    if (uVar27 + uVar41 != 0) {
      do {
        fVar54 = *(float *)((longlong)puVar9 + uVar38 * 4) -
                 (*(float *)((longlong)puVar9 + uVar38 * 4 + -4) +
                 *(float *)((longlong)puVar9 + uVar38 * 4 + 4)) * fVar47;
        fVar48 = 0.0;
        if (0.0 <= fVar54) {
          fVar48 = fVar54;
        }
        *(float *)((longlong)puVar24 + uVar38 * 4) = fVar48;
        fVar54 = *(float *)((longlong)puVar9 + uVar38 * 4 + 4) -
                 (*(float *)((longlong)puVar9 + uVar38 * 4) +
                 *(float *)((longlong)puVar9 + uVar38 * 4 + 8)) * fVar47;
        fVar48 = 0.0;
        if (0.0 <= fVar54) {
          fVar48 = fVar54;
        }
        *(float *)((longlong)puVar24 + uVar38 * 4 + 4) = fVar48;
        uVar38 = uVar38 + 2;
      } while (uVar41 != uVar38);
    }
  }
LAB_0184fc67:
  if (ppuVar30 != (undefined8 **)0x0) {
    FUN_00d50b20();
    uVar19 = *local_c0;
  }
  if (0 < (int)uVar19) {
    lVar23 = 0;
    do {
      pVar21 = (pthread_key_t)puVar24;
      local_88 = (undefined8 **)FUN_00e7bcc0();
      FUN_00e7b820();
      local_58 = local_88;
      pvVar22 = _pthread_getspecific(pVar21);
      if (pvVar22 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar24 = (undefined8 *)0x0;
      local_88 = (undefined8 **)FUN_016c4630(0,1);
      if ((((local_58._4_4_ != 0) && ((ulonglong)local_88 >> 0x20 != 0)) &&
          (cVar17 = FUN_00e7c000(), cVar17 != '\0')) &&
         (lVar44 = *(longlong *)(*(longlong *)(unaff_RDI + 0x58) + 0x10),
         pfVar1 = (float *)(lVar44 + lVar23 * 4), *pfVar1 <= DAT_02390124 && DAT_02390124 != *pfVar1
         )) {
        *(undefined4 *)(lVar44 + lVar23 * 4) = 0x3f800000;
      }
      lVar44 = *(longlong *)(*(longlong *)(unaff_RDI + 0x58) + 0x10);
      if (DAT_02394298 < *(float *)(lVar44 + lVar23 * 4)) {
        *(undefined4 *)(lVar44 + lVar23 * 4) = 0x40400000;
      }
      lVar23 = lVar23 + 1;
    } while (lVar23 < (int)*local_c0);
  }
  FUN_00c8e690();
  ppuVar30 = local_88;
  if (((local_80[0] == '\0') && (local_88 != (undefined8 **)0x0)) &&
     ((FUN_00d50b00(), local_80[0] != '\0' && (local_88 != (undefined8 **)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  uVar19 = *local_c0;
  uVar27 = (ulonglong)uVar19;
  if (0 < (int)uVar19) {
    lVar23 = 0;
    do {
      pVar21 = (pthread_key_t)uVar27;
      local_88 = (undefined8 **)FUN_00e7bcc0();
      FUN_00e7b820();
      local_58 = local_88;
      pvVar22 = _pthread_getspecific(pVar21);
      if (pvVar22 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_88 = (undefined8 **)FUN_016c4630(0,1);
      if (((local_58._4_4_ != 0) && ((ulonglong)local_88 >> 0x20 != 0)) &&
         (cVar17 = FUN_00e7c000(), cVar17 != '\0')) {
        local_248 = *(float *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x58) + 0x10) + lVar23 * 4);
      }
      *(float *)((longlong)ppuVar30[2] + lVar23 * 4) = local_248;
      lVar23 = lVar23 + 1;
      uVar19 = *local_c0;
      uVar27 = (ulonglong)(int)uVar19;
    } while (lVar23 < (longlong)uVar27);
  }
  FUN_015c15b0(1,uVar19);
  uVar19 = *local_c0;
  uVar27 = (ulonglong)uVar19;
  if ((int)uVar19 < 1) goto LAB_018500c9;
  puVar24 = ppuVar30[2];
  uVar38 = *(ulonglong *)(*(longlong *)(unaff_RDI + 0x58) + 0x10);
  if ((uVar19 < 4) ||
     ((uVar38 < (longlong)puVar24 + uVar27 * 4 && (puVar24 < (undefined8 *)(uVar38 + uVar27 * 4)))))
  {
    uVar41 = 0;
  }
  else {
    uVar41 = (ulonglong)(uVar19 & 0xfffffffc);
    uVar35 = (uVar41 - 4 >> 2) + 1;
    if (uVar41 - 4 == 0) {
      lVar23 = 0;
LAB_018500b1:
      auVar62 = divps(*(undefined1 (*) [16])(uVar38 + lVar23 * 4),
                      *(undefined1 (*) [16])((longlong)puVar24 + lVar23 * 4));
      *(undefined1 (*) [16])(uVar38 + lVar23 * 4) = auVar62;
    }
    else {
      lVar44 = -(uVar35 & 0xfffffffffffffffe);
      lVar23 = 0;
      do {
        auVar62 = divps(*(undefined1 (*) [16])(uVar38 + lVar23 * 4),
                        *(undefined1 (*) [16])((longlong)puVar24 + lVar23 * 4));
        *(undefined1 (*) [16])(uVar38 + lVar23 * 4) = auVar62;
        auVar62 = divps(*(undefined1 (*) [16])(uVar38 + 0x10 + lVar23 * 4),
                        *(undefined1 (*) [16])((longlong)puVar24 + lVar23 * 4 + 0x10));
        *(undefined1 (*) [16])(uVar38 + 0x10 + lVar23 * 4) = auVar62;
        lVar23 = lVar23 + 8;
        lVar44 = lVar44 + 2;
      } while (lVar44 != 0);
      if ((uVar35 & 1) != 0) goto LAB_018500b1;
    }
    if (uVar41 == uVar27) goto LAB_018500c9;
  }
  uVar35 = ~uVar41;
  if ((uVar19 & 1) != 0) {
    *(float *)(uVar38 + uVar41 * 4) =
         *(float *)(uVar38 + uVar41 * 4) / *(float *)((longlong)puVar24 + uVar41 * 4);
    uVar41 = uVar41 | 1;
  }
  if (uVar35 + uVar27 != 0) {
    do {
      *(float *)(uVar38 + uVar41 * 4) =
           *(float *)(uVar38 + uVar41 * 4) / *(float *)((longlong)puVar24 + uVar41 * 4);
      *(float *)(uVar38 + 4 + uVar41 * 4) =
           *(float *)(uVar38 + 4 + uVar41 * 4) / *(float *)((longlong)puVar24 + uVar41 * 4 + 4);
      uVar41 = uVar41 + 2;
    } while (uVar27 != uVar41);
  }
LAB_018500c9:
  if (ppuVar30 != (undefined8 **)0x0) {
    FUN_00d50b20();
  }
  if (local_d8._0_8_ != 0) {
    FUN_00d50b20();
  }
  if (local_168 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (ppuVar31 != (undefined8 **)0x0) {
    FUN_00d50b20();
  }
  if (ppuVar25 != (undefined8 **)0x0) {
    FUN_00d50b20();
  }
  if (plVar26 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_f8 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_180 != (undefined8 **)0x0) {
    FUN_00d50b20();
  }
  return;
}


