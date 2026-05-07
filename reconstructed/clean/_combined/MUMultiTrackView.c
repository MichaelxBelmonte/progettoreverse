// ===================================================================
// MUMultiTrackView — Complete reconstructed pseudocode
// 14 functions
// ===================================================================

// Registered properties (2):
//   MUFollowCursorState _followCursorState
//   MUMultiTrackDisplayMode _displayMode


// ============================================================
// 00652d70
// ============================================================
// Function: FUN_00652d70
// Address: 00652d70
// Size: 2650 bytes
// Class: MUMultiTrackView
// === MUMultiTrackView properties ===
//   MUFollowCursorState _followCursorState
//   MUMultiTrackDisplayMode _displayMode


void FUN_00652d70(void)

{
  code *pcVar1;
  int64_t lVar2;
  int64_t *plVar3;
  void*puVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  void*puVar8;
  uint64_t uVar9;
  int64_t *this_ptr;
  uint64_t uVar10;
  bool bVar11;
  uint64_t uVar12;
  double dVar13;
  void*local_c0;
  char local_b8;
  void*local_b0;
  char local_a8;
  void*local_a0;
  char local_98;
  void*local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  void*local_70;
  uint64_t local_68;
  void*local_60;
  int64_t *local_58;
  uint64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x5d8))();
  plVar3 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00637870();
    plVar3 = local_40;
    if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0')
        ) && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_58 = plVar3;
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &g_02572358;
    pcVar1 = g_02572370;
    (*g_02572370)();
    local_60 = puVar8;
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &g_02572358;
    (*pcVar1)();
    uVar10 = g_026f6fd0;
    local_70 = puVar8;
    if (g_026f6fd0 != 0) {
      FUN_00d50b00();
    }
    local_68 = uVar10;
    FUN_00e7d6f0();
    uVar12 = FUN_0071a120();
    if (((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
       ((uVar12 = FUN_00d50b00(), local_38 != '\0' && (local_40 != (int64_t *)0x0)))) {
      uVar12 = FUN_00d50b20();
    }
    local_50 = uVar10;
    local_48 = '\0';
    FUN_000175c0(uVar12,&local_50);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      local_38 = '\0';
      local_40 = plVar3;
      uVar7 = FUN_00c70bc0();
      uVar10 = (uint64_t)uVar7;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if (((plVar3 != (int64_t *)0x0 & (byte)uVar10) == 0) && (cVar5 = FUN_00645730(), cVar5 != '\0')
       ) {
      FUN_00645a20();
    }
    uVar10 = g_026e1800;
    if (g_026e1800 != 0) {
      FUN_00d50b00();
    }
    dVar13 = (double)FUN_00e7d6f0();
    uVar9 = (uint64_t)(dVar13 * g_023907c0);
    dVar13 = dVar13 * g_023907c0 - g_023907c8;
    uVar12 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
        (uVar12 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    bVar6 = (byte)(((int64_t)dVar13 & (int64_t)uVar9 >> 0x3f | uVar9) / 3);
    local_50 = uVar10;
    local_48 = '\0';
    FUN_000175c0(uVar12,&local_50);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      local_38 = '\0';
      local_40 = plVar3;
      bVar6 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (uVar10 != 0) {
      FUN_00d50b20();
    }
    if ((plVar3 != (int64_t *)0x0 & bVar6) == 0) {
      cVar5 = FUN_006e2020();
      if (cVar5 != '\0') {
        FUN_006470d0();
        cVar5 = FUN_0063f180();
        if (cVar5 == '\0') {
          FUN_00642f60();
        }
      }
      plVar3 = g_027259d0;
      if (g_027259d0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_40 = plVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    uVar10 = g_02708e90;
    if (g_02708e90 != 0) {
      FUN_00d50b00();
    }
    dVar13 = (double)FUN_00e7d6f0();
    uVar9 = (uint64_t)(dVar13 * g_023907c0);
    dVar13 = dVar13 * g_023907c0 - g_023907c8;
    uVar12 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
        (uVar12 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    bVar6 = (byte)(((int64_t)dVar13 & (int64_t)uVar9 >> 0x3f | uVar9) / 3);
    local_50 = uVar10;
    local_48 = '\0';
    FUN_000175c0(uVar12,&local_50);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      local_38 = '\0';
      local_40 = plVar3;
      bVar6 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (uVar10 != 0) {
      FUN_00d50b20();
    }
    if ((plVar3 != (int64_t *)0x0 & bVar6) != 0) {
      FUN_01f27fe0();
      cVar5 = (**(code **)(*local_40 + 0x450))();
      if (cVar5 == '\0') {
        bVar11 = *(int64_t *)(this_ptr[0x10] + 0x308) != 0;
      }
      else {
        bVar11 = false;
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar11) {
        FUN_006447a0();
      }
      lVar2 = g_026fba80;
      if (g_026fba80 != 0) {
        FUN_00d50b00();
      }
      local_40 = (int64_t *)lVar2;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_026fba80;
      if (g_026fba80 != 0) {
        FUN_00d50b00();
      }
      local_40 = (int64_t *)lVar2;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      plVar3 = g_027259d0;
      if (g_027259d0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_40 = plVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    plVar3 = g_026fce40;
    if (this_ptr[0x10] != 0) {
      if (*(int64_t *)(this_ptr[0x10] + 0x308) != 0) {
        if (g_026fce40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_40 = plVar3;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        plVar3 = g_026fce40;
        if (g_026fce40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_40 = plVar3;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      plVar3 = g_027259d0;
      if (g_027259d0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_40 = plVar3;
      local_38 = '\0';
      FUN_00d235a0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    uVar10 = g_026d85b0;
    if (g_026d85b0 != 0) {
      FUN_00d50b00();
    }
    dVar13 = (double)FUN_00e7d6f0();
    uVar9 = (uint64_t)(dVar13 * g_023907c0);
    dVar13 = dVar13 * g_023907c0 - g_023907c8;
    uVar12 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
        (uVar12 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    bVar6 = (byte)(((int64_t)dVar13 & (int64_t)uVar9 >> 0x3f | uVar9) / 3);
    local_50 = uVar10;
    local_48 = '\0';
    FUN_000175c0(uVar12,&local_50);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      local_38 = '\0';
      local_40 = plVar3;
      bVar6 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (uVar10 != 0) {
      FUN_00d50b20();
    }
    if ((plVar3 != (int64_t *)0x0 & bVar6) == 0) {
      FUN_00644460();
    }
    FUN_00643150();
    uVar12 = FUN_00652bd0();
    plVar3 = local_58;
    puVar4 = local_60;
    puVar8 = local_70;
    if (this_ptr[0x18] != 0) {
      local_c0 = local_60;
      local_b8 = '\0';
      uVar12 = FUN_0009ea90(uVar12,&local_c0);
      if ((local_b8 != '\0') && (local_c0 != (void*)0x0)) {
        uVar12 = FUN_00d50b20();
      }
      local_b0 = puVar8;
      local_a8 = '\0';
      uVar12 = FUN_0009ea90(uVar12,&local_b0);
      if ((local_a8 != '\0') && (local_b0 != (void*)0x0)) {
        uVar12 = FUN_00d50b20();
      }
    }
    if (this_ptr[0x19] != 0) {
      local_a0 = puVar4;
      local_98 = '\0';
      uVar12 = FUN_0009ea90(uVar12,&local_a0);
      if ((local_98 != '\0') && (local_a0 != (void*)0x0)) {
        uVar12 = FUN_00d50b20();
      }
      local_90 = puVar8;
      local_88 = '\0';
      FUN_0009ea90(uVar12,&local_90);
      if ((local_88 != '\0') && (local_90 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    local_78 = '\0';
    local_80 = 0;
    (**(code **)(*this_ptr + 0x668))();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_00d50b20();
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 0032b5c0
// ============================================================
// Function: FUN_0032b5c0
// Address: 0032b5c0
// Size: 1209 bytes
// Class: MUMultiTrackView
// String references:
//   "MUMultiTrackView"
// === MUMultiTrackView properties ===
//   MUFollowCursorState _followCursorState
//   MUMultiTrackDisplayMode _displayMode


uint64_t FUN_0032b5c0(uint32_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  bool bVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  char cVar8;
  int iVar9;
  void *pvVar10;
  void* pVar11;
  uint64_t in_RCX;
  char *pcVar12;
  int64_t *this_ptr;
  int64_t **pplVar13;
  bool bVar14;
  uint32_t uVar15;
  uint64_t uVar16;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  float fVar18;
  uint32_t in_XMM1_Dd;
  uint8_t auVar17 [16];
  double dVar19;
  uint8_t auVar20 [16];
  uint32_t local_88;
  float fStack_84;
  uint32_t uStack_7c;
  int64_t *local_78;
  char local_70;
  uint64_t local_68;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  int64_t *local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  fVar18 = (float)((uint64_t)param_2 >> 0x20);
  pVar11 = (void*)in_RCX;
  if ((char)this_ptr[0x3a] == '\0') {
LAB_0032b839:
    if (this_ptr[0x2a] == 0) {
      if ((int64_t *)this_ptr[0x28] == (int64_t *)0x0) goto LAB_0032b994;
      local_68 = (double)(**(code **)(*(int64_t *)this_ptr[0x28] + 0xc0))(param_1);
      dVar19 = (double)(**(code **)(*(int64_t *)this_ptr[0x28] + 0xd0))();
      lVar1 = this_ptr[0x28];
    }
    else {
      pvVar10 = _pthread_getspecific(pVar11);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_68 = (double)FUN_013201a0();
      pvVar10 = _pthread_getspecific(pVar11);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar19 = (double)FUN_01320130();
      lVar1 = this_ptr[0x28];
    }
    uVar15 = SUB84(local_68,0);
    if (lVar1 != 0) {
      fVar18 = 0.0;
      in_XMM1_Dd = 0;
      uVar15 = SUB84(local_68 + 0.0,0);
      dVar19 = dVar19 + 0.0;
    }
    local_88 = SUB84(dVar19,0);
    uVar16 = (**(code **)(*(int64_t *)this_ptr[0x2d] + 0x390))(uVar15);
    uStack_60 = extraout_XMM0_Dc;
    uStack_5c = extraout_XMM0_Dd;
    local_68 = (double)uVar16;
    uVar16 = (**(code **)(*(int64_t *)this_ptr[0x2d] + 0x390))(local_88);
    FUN_01e3f820();
    auVar2._8_4_ = extraout_XMM0_Dc_00;
    auVar2._0_8_ = uVar16;
    auVar2._12_4_ = extraout_XMM0_Dd_00;
    auVar3._8_4_ = uStack_60;
    auVar3._0_8_ = local_68;
    auVar3._12_4_ = uStack_5c;
    auVar17._4_12_ = auVar2._4_12_;
    auVar17._0_4_ = (float)uVar16 - (float)local_68;
    auVar20._4_4_ = fVar18;
    auVar20._0_4_ = fVar18 + g_023b2664;
    auVar20._8_4_ = in_XMM1_Dd;
    auVar20._12_4_ = in_XMM1_Dd;
    auVar20 = insertps(auVar3,auVar20,0x10);
    local_68._0_4_ = auVar20._0_4_;
    local_68._4_4_ = auVar20._4_4_;
    blendps(auVar17,g_023907b0,0xe);
  }
  else {
    FUN_01e42030();
    plVar7 = local_48;
    if (local_40[0] == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0032b626;
      }
    }
    else if (local_48 != (int64_t *)0x0) {
LAB_0032b626:
      local_50 = plVar7;
      (**(code **)(*this_ptr + 0x7b8))();
      plVar7 = local_48;
      pVar11 = (void*)CONCAT71((int7)((uint64_t)in_RCX >> 8),local_40[0]);
      pcVar12 = local_38;
      if (local_40[0] != '\0') {
        pcVar12 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar12 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 == (int64_t *)0x0) {
LAB_0032b781:
        pplVar13 = &local_48;
        FUN_01d8b220();
        plVar6 = local_48;
        if ((g_026fe4d0 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
          g_02726438 = FUN_0006d940();
          g_02726420 = "MUMultiTrackView";
          g_02726428 = 0x228;
          pVar11 = 0x82de0;
          g_02726430 = FUN_00082de0;
          g_02726440 = 0;
          ram_0000000002726448 = 0;
          g_02726450 = 0;
          g_027264c8 = 0;
          ram_00000000027264d0 = 0;
          g_027264d8 = 0;
          g_027264da = 1;
          g_02726458 = 0;
          ram_0000000002726460 = 0;
          g_02726468 = 0;
          ram_0000000002726470 = 0;
          g_02726478 = 0;
          ram_0000000002726480 = 0;
          g_02726488 = 0;
          ram_0000000002726490 = 0;
          g_02726498 = 0;
          ram_00000000027264a0 = 0;
          g_027264a8 = 0;
          ram_00000000027264b0 = 0;
          g_027264b8 = 0;
          ram_00000000027264c0 = 0;
          g_027264e3 = 0;
          g_027264db = 0;
          ___cxa_guard_release();
        }
        plVar5 = g_02802688;
        if (plVar6 != (int64_t *)0x0) {
          (**(code **)(*plVar6 + 0x360))();
          cVar8 = FUN_00e85ea0();
          if (cVar8 == '\0') {
            pplVar13 = &g_02802688;
          }
          plVar5 = *pplVar13;
        }
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar5 == (int64_t *)0x0) goto LAB_0032b758;
LAB_0032b80a:
        bVar4 = true;
        bVar14 = true;
        in_XMM1_Dd = uStack_7c;
        fVar18 = fStack_84;
      }
      else {
        FUN_01d97850();
        if (local_48 == (int64_t *)0x0) {
          bVar14 = false;
        }
        else {
          pplVar13 = &local_78;
          FUN_01d97850();
          plVar6 = local_78;
          FUN_000914a0();
          if (plVar6 == (int64_t *)0x0) {
LAB_0032b6bf:
            pplVar13 = &g_02802688;
          }
          else {
            (**(code **)(*plVar6 + 0x360))();
            cVar8 = FUN_00e85ea0();
            if (cVar8 == '\0') goto LAB_0032b6bf;
          }
          bVar14 = *pplVar13 != (int64_t *)0x0;
          if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (!bVar14) goto LAB_0032b781;
        FUN_01d8b220();
        FUN_01d97850();
        plVar6 = local_48;
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar6 == local_78) goto LAB_0032b80a;
LAB_0032b758:
        local_68._0_4_ = (float)g_023dccec;
        local_68._4_4_ = (uint32_t)((uint64_t)g_023dccec >> 0x20);
        uStack_60 = 0;
        uStack_5c = 0;
        fStack_84 = (float)((uint64_t)g_023dccf4 >> 0x20);
        uStack_7c = 0;
        bVar4 = false;
        bVar14 = false;
        in_XMM1_Dd = uStack_7c;
        fVar18 = fStack_84;
      }
      if ((local_38[0] != '\0') && (bVar14 = bVar4, plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      param_1 = (float)local_68;
      if (!bVar14) goto LAB_0032b9a4;
      goto LAB_0032b839;
    }
LAB_0032b994:
    local_68._0_4_ = (float)g_023dccec;
    local_68._4_4_ = (uint32_t)((uint64_t)g_023dccec >> 0x20);
  }
LAB_0032b9a4:
  return CONCAT44(local_68._4_4_,(float)local_68);
}



// ============================================================
// 00650980
// ============================================================
// Function: FUN_00650980
// Address: 00650980
// Size: 2430 bytes
// Class: MUMultiTrackView
// String references:
//   "MUMultiTrackView"
// === MUMultiTrackView properties ===
//   MUFollowCursorState _followCursorState
//   MUMultiTrackDisplayMode _displayMode


void FUN_00650980(void)

{
  bool bVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  int64_t *this_ptr;
  bool bVar6;
  int64_t local_120;
  char local_118;
  int64_t local_90;
  char local_88;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int local_48;
  
  plVar2 = local_60;
  FUN_00637870();
  if ((local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  cVar3 = FUN_00637950();
  if ((cVar3 != '\0') &&
     ((cVar3 = FUN_0063f180(), cVar3 != '\0' || (cVar3 = FUN_006443a0(), cVar3 != '\0')))) {
    FUN_006c5ea0();
    if (local_58 == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_006e28a0();
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  cVar3 = FUN_0063f180();
  if (((cVar3 != '\0') && (cVar3 = FUN_006443a0(), cVar3 != '\0')) && (this_ptr[0x2c] != 0)) {
    FUN_006c5ea0();
    if (local_58 == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_006e3800();
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01bd0b60();
    if (local_58 == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_006e3b90();
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (this_ptr[0x18] != 0) {
    FUN_0009edf0();
    if (local_58 == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_006e2b20();
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_000a05d0();
    if (local_58 == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_006e22f0();
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (this_ptr[0x19] != 0) {
    FUN_0009edf0();
    if (local_58 == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_006e2e20();
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_000a05d0();
    if (local_58 == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_006e2520();
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00643590();
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_00650e4e;
    }
  }
  else if (local_60 != (int64_t *)0x0) {
LAB_00650e4e:
    local_58 = '\0';
    local_60 = (int64_t *)0x0;
    local_48 = -1;
    while( true ) {
      lVar5 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)((int64_t)plVar2 + 0xc) <= local_48) break;
      local_60 = *(int64_t **)(plVar2[2] + 8 + lVar5 * 8);
      cVar3 = FUN_00212c70();
      if (cVar3 == '\0') {
        FUN_0025c360();
        FUN_0021e4e0();
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if (local_90 != 0) {
          FUN_0021e4e0();
          FUN_01c446f0();
        }
        FUN_006e30e0();
        if (((local_90 != 0) && (local_118 != '\0')) && (local_120 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_0065ca40();
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x5d8))();
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_00650fd8;
    }
LAB_00651025:
    bVar1 = true;
  }
  else {
    if (local_60 == (int64_t *)0x0) goto LAB_00651025;
LAB_00650fd8:
    cVar3 = FUN_00651a90();
    if (cVar3 == '\0') {
      FUN_006fc300();
      if (local_58 == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      FUN_006e3aa0();
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_006e3aa0();
    }
    bVar1 = false;
  }
  FUN_01e561b0();
  if (local_60 == (int64_t *)0x0) {
    bVar6 = false;
  }
  else {
    FUN_01e561b0();
    FUN_01d8b220();
    bVar6 = local_90 != 0;
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar6) goto LAB_0065120d;
  FUN_01e561b0();
  FUN_01d8b220();
  local_70 = local_60;
  if (local_58 == '\0') {
    if (local_60 == (int64_t *)0x0) {
      local_70 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
    }
  }
  else {
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((g_026fe4d0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_02726438 = FUN_0006d940();
    g_02726420 = "MUMultiTrackView";
    g_02726428 = 0x228;
    g_02726430 = FUN_00082de0;
    g_02726440 = 0;
    ram_0000000002726448 = 0;
    g_02726450 = 0;
    g_027264c8 = 0;
    ram_00000000027264d0 = 0;
    g_027264d8 = 0;
    g_027264da = 1;
    g_02726458 = 0;
    ram_0000000002726460 = 0;
    g_02726468 = 0;
    ram_0000000002726470 = 0;
    g_02726478 = 0;
    ram_0000000002726480 = 0;
    g_02726488 = 0;
    ram_0000000002726490 = 0;
    g_02726498 = 0;
    ram_00000000027264a0 = 0;
    g_027264a8 = 0;
    ram_00000000027264b0 = 0;
    g_027264b8 = 0;
    ram_00000000027264c0 = 0;
    g_027264e3 = 0;
    g_027264db = 0;
    ___cxa_guard_release();
  }
  if (local_70 == (int64_t *)0x0) {
LAB_0065119e:
    if (g_02802688 != 0) goto LAB_006511ab;
LAB_006511f2:
    FUN_006e3fc0();
  }
  else {
    (**(code **)(*local_70 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0065119e;
    if (local_70 == (int64_t *)0x0) goto LAB_006511f2;
LAB_006511ab:
    FUN_006e3fc0();
  }
  if (local_70 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_0065120d:
  if (!bVar1) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00651de0
// ============================================================
// Function: FUN_00651de0
// Address: 00651de0
// Size: 1019 bytes
// Class: MUMultiTrackView
// === MUMultiTrackView properties ===
//   MUFollowCursorState _followCursorState
//   MUMultiTrackDisplayMode _displayMode


void FUN_00651de0(void)

{
  int64_t *plVar1;
  char cVar2;
  char *pcVar3;
  int64_t lVar4;
  int iVar5;
  int64_t this_ptr;
  uint64_t uVar6;
  int64_t local_88;
  char local_80;
  int64_t local_70;
  char local_68 [8];
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  if (*(int *)(this_ptr + 0x10c) < 1) {
    FUN_00631670();
    local_48[0] = local_68[0];
    pcVar3 = local_48;
    if (local_68[0] != '\0') {
      pcVar3 = local_68;
    }
    *pcVar3 = '\0';
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (local_70 == 0) {
      *(void*)(this_ptr + 0x10c) = 10;
    }
    else {
      FUN_006f3f00();
      local_40[0] = local_68[0];
      pcVar3 = local_40;
      if (local_68[0] != '\0') {
        pcVar3 = local_68;
      }
      *pcVar3 = '\0';
      if ((local_68[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (local_70 == 0) {
        *(void*)(this_ptr + 0x10c) = 10;
      }
      else {
        FUN_00756eb0();
        pcVar3 = local_68;
        if (local_68[0] == '\0') {
          pcVar3 = local_38;
        }
        local_38[0] = local_68[0];
        *pcVar3 = '\0';
        if ((local_68[0] != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if (local_70 == 0) {
          *(void*)(this_ptr + 0x10c) = 10;
        }
        else {
          uVar6 = (**(code **)(*(int64_t *)(local_70 + 0x10) + 0x70))();
          if (*(int64_t *)(this_ptr + 0x100) != 0) {
            local_68[0] = '\0';
            local_58 = 0xffffffff;
            local_50 = 0;
            local_60 = *(int64_t *)(this_ptr + 0x100);
LAB_00651f45:
            lVar4 = (int64_t)(int)local_58;
            iVar5 = (int)local_58 + 1;
            local_58 = CONCAT44(local_58._4_4_,iVar5);
            if (iVar5 < *(int *)(local_60 + 0xc)) {
              lVar4 = *(int64_t *)(*(int64_t *)(local_60 + 0x10) + 8 + lVar4 * 8);
              cVar2 = FUN_00212c70();
              if (cVar2 == '\0') goto code_r0x00651f72;
              FUN_0065ca40();
              FUN_006f4810();
              if (lVar4 == 0) {
                cVar2 = '\0';
              }
              else {
                FUN_006f4810();
                cVar2 = FUN_01e42170();
                if ((local_80 != '\0') && (local_88 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_68[0] != '\0') && (lVar4 != 0)) {
                FUN_00d50b20();
              }
              if (cVar2 == '\0') {
                if (*(int64_t *)(this_ptr + 0x100) != 0) {
                  local_68[0] = '\0';
                  local_58 = 0xffffffff;
                  local_50 = 0;
                  local_60 = *(int64_t *)(this_ptr + 0x100);
                  while( true ) {
                    iVar5 = (int)local_58 + 1;
                    local_58 = CONCAT44(local_58._4_4_,iVar5);
                    if (*(int *)(local_60 + 0xc) <= iVar5) break;
                    FUN_00235240(uVar6);
                    if (local_58._4_4_ != 0) {
                      if (local_58._4_4_ < 1) {
                        iVar5 = -local_58._4_4_;
                      }
                      else {
                        local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
                        FUN_00d23690();
                        local_50 = local_50 + local_58._4_4_;
                        iVar5 = 0;
                      }
                      local_58 = CONCAT44(iVar5,(int)local_58);
                    }
                  }
                  goto LAB_0065215c;
                }
              }
              else {
                FUN_006fdae0(uVar6);
              }
              goto LAB_00652165;
            }
            FUN_0065ca40();
          }
          FUN_006fdae0(uVar6);
          if (*(int64_t *)(this_ptr + 0x100) != 0) {
            local_68[0] = '\0';
            local_58 = 0xffffffff;
            local_50 = 0;
            local_60 = *(int64_t *)(this_ptr + 0x100);
            while( true ) {
              iVar5 = (int)local_58 + 1;
              local_58 = CONCAT44(local_58._4_4_,iVar5);
              if (*(int *)(local_60 + 0xc) <= iVar5) break;
              FUN_00235240(uVar6);
              if (local_58._4_4_ != 0) {
                if (local_58._4_4_ < 1) {
                  iVar5 = -local_58._4_4_;
                }
                else {
                  local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
                  FUN_00d23690();
                  local_50 = local_50 + local_58._4_4_;
                  iVar5 = 0;
                }
                local_58 = CONCAT44(iVar5,(int)local_58);
              }
            }
LAB_0065215c:
            FUN_0065ca40();
          }
LAB_00652165:
          if (*(int64_t *)(this_ptr + 0x140) != 0) {
            FUN_00d50b00();
            FUN_00d50b20();
            plVar1 = *(int64_t **)(this_ptr + 0x140);
            if (plVar1 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            (**(code **)(*plVar1 + 0x5d0))(uVar6);
            FUN_00d50b20();
          }
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
        }
        if (local_40[0] != '\0') {
          FUN_00d50b20();
        }
      }
      if (local_48[0] != '\0') {
        FUN_00d50b20();
      }
    }
  }
  else {
    *(int *)(this_ptr + 0x10c) = *(int *)(this_ptr + 0x10c) + -1;
  }
  return;
code_r0x00651f72:
  if (local_58._4_4_ != 0) {
    if (local_58._4_4_ < 1) {
      iVar5 = -local_58._4_4_;
    }
    else {
      local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
      FUN_00d23690();
      local_50 = local_50 + local_58._4_4_;
      iVar5 = 0;
    }
    local_58 = CONCAT44(iVar5,(int)local_58);
  }
  goto LAB_00651f45;
}



// ============================================================
// 000ea4c0
// ============================================================
// Function: FUN_000ea4c0
// Address: 000ea4c0
// Size: 992 bytes
// Class: MUMultiTrackView
// String references:
//   "MUMultiTrackView"
// === MUMultiTrackView properties ===
//   MUFollowCursorState _followCursorState
//   MUMultiTrackDisplayMode _displayMode


void FUN_000ea4c0(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  int64_t **pplVar7;
  uint64_t uVar8;
  int64_t this_ptr;
  int64_t *plVar9;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  uint64_t local_48;
  int64_t *local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0xb8) == 0) {
    return;
  }
  FUN_01e561b0();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_000ea524;
    }
LAB_000ea57a:
    bVar2 = true;
    local_48 = 0;
  }
  else {
    if (local_40 == (int64_t *)0x0) goto LAB_000ea57a;
LAB_000ea524:
    FUN_01d8b220();
    plVar9 = local_40;
    local_50 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        local_50 = (int64_t *)0x0;
        plVar9 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
    }
    uVar10 = FUN_000914a0();
    if (plVar9 == (int64_t *)0x0) {
LAB_000ea567:
      if (g_02802688 != (int64_t *)0x0) goto LAB_000ea609;
LAB_000ea5bd:
      if ((g_026fe4d0 == '\0') &&
         (iVar6 = ___cxa_guard_acquire(), uVar10 = extraout_XMM0_Da_01, iVar6 != 0)) {
        g_02726438 = FUN_0006d940();
        g_02726420 = "MUMultiTrackView";
        g_02726428 = 0x228;
        g_02726430 = FUN_00082de0;
        g_02726440 = 0;
        ram_0000000002726448 = 0;
        g_02726450 = 0;
        g_027264c8 = 0;
        ram_00000000027264d0 = 0;
        g_027264d8 = 0;
        g_027264da = 1;
        g_02726458 = 0;
        ram_0000000002726460 = 0;
        g_02726468 = 0;
        ram_0000000002726470 = 0;
        g_02726478 = 0;
        ram_0000000002726480 = 0;
        g_02726488 = 0;
        ram_0000000002726490 = 0;
        g_02726498 = 0;
        ram_00000000027264a0 = 0;
        g_027264a8 = 0;
        ram_00000000027264b0 = 0;
        g_027264b8 = 0;
        ram_00000000027264c0 = 0;
        g_027264e3 = 0;
        g_027264db = 0;
        uVar10 = ___cxa_guard_release();
      }
      plVar4 = g_02802688;
      if (plVar9 != (int64_t *)0x0) {
        (**(code **)(*plVar9 + 0x360))();
        cVar5 = FUN_00e85ea0();
        uVar10 = extraout_XMM0_Da_00;
        plVar4 = g_02802688;
        if (cVar5 != '\0') {
          plVar4 = local_50;
        }
      }
      plVar9 = local_50;
      local_50 = plVar9;
      if (plVar4 != (int64_t *)0x0) goto LAB_000ea609;
      if (plVar9 != (int64_t *)0x0) {
        plVar9 = (int64_t *)0x0;
        uVar8 = 0;
        goto LAB_000ea6f1;
      }
      local_48 = 0;
    }
    else {
      (**(code **)(*plVar9 + 0x360))();
      cVar5 = FUN_00e85ea0();
      uVar10 = extraout_XMM0_Da;
      if (cVar5 == '\0') goto LAB_000ea567;
      if (local_50 == (int64_t *)0x0) goto LAB_000ea5bd;
LAB_000ea609:
      lVar1 = g_026defa8;
      if (g_026defa8 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_80 = lVar1;
      local_78 = '\x01';
      pplVar7 = &local_40;
      (**(code **)(*plVar9 + 0x88))(uVar10,&local_80);
      plVar9 = local_40;
      FUN_00083c20();
      if (plVar9 == (int64_t *)0x0) {
LAB_000ea669:
        pplVar7 = &g_02802688;
      }
      else {
        (**(code **)(*plVar9 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_000ea669;
      }
      plVar9 = *pplVar7;
      if (plVar9 == (int64_t *)0x0) {
        uVar8 = 0;
        plVar9 = (int64_t *)0x0;
      }
      else {
        if (*(char *)(pplVar7 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(void*)(pplVar7 + 1) = 0;
        }
        uVar8 = CONCAT71((int7)((uint64_t)pplVar7 >> 8),1);
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
LAB_000ea6f1:
      FUN_00d50b20();
      local_48 = uVar8;
      if (plVar9 != (int64_t *)0x0) {
        local_68 = 0;
        lVar1 = *(int64_t *)(this_ptr + 0xd0);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_68 = '\x01';
        local_70 = lVar1;
        FUN_01e058f0();
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        bVar3 = false;
        bVar2 = false;
        goto LAB_000ea7aa;
      }
    }
    bVar2 = false;
  }
  local_58 = 0;
  lVar1 = *(int64_t *)(this_ptr + 200);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_58 = '\x01';
  local_60 = lVar1;
  FUN_01e058f0();
  bVar3 = true;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
LAB_000ea7aa:
  if (!bVar2) {
    FUN_00d50b20();
  }
  if ((char)local_48 != '\0' && !bVar3) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01bf4a10
// ============================================================
// Function: FUN_01bf4a10
// Address: 01bf4a10
// Size: 946 bytes
// Class: MUMultiTrackView
// String references:
//   "MUMultiTrackView"
// === MUMultiTrackView properties ===
//   MUFollowCursorState _followCursorState
//   MUMultiTrackDisplayMode _displayMode


uint32_t FUN_01bf4a10(uint32_t param_1,int64_t *param_2,uint32_t param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  uint32_t in_ECX;
  int64_t **pplVar7;
  int64_t *arg1;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  uint32_t local_54;
  int64_t *local_50;
  uint32_t local_44;
  int64_t *local_40;
  char local_38;
  
  lVar2 = g_02800140;
  local_54 = param_3;
  if (g_02800140 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_a8 = lVar2;
  local_a0 = '\x01';
  FUN_01ccaae0(param_1,&local_a8);
  local_50 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  uVar5 = FUN_01d26010();
  if (local_40 == (int64_t *)0x0) {
    plVar6 = (int64_t *)0x0;
    uVar5 = CONCAT71((int7)((uint64_t)uVar5 >> 8),g_026fe4d0);
  }
  else {
    plVar6 = (int64_t *)(**(code **)(*local_40 + 0x10))();
    uVar5 = CONCAT71((int7)((uint64_t)plVar6 >> 8),g_026fe4d0);
  }
  if ((g_026fe4d0 == '\0') && (uVar5 = ___cxa_guard_acquire(), (int)uVar5 != 0)) {
    g_02726438 = FUN_0006d940();
    g_02726420 = "MUMultiTrackView";
    g_02726428 = 0x228;
    g_02726430 = FUN_00082de0;
    g_02726440 = 0;
    ram_0000000002726448 = 0;
    g_02726450 = 0;
    g_027264c8 = 0;
    ram_00000000027264d0 = 0;
    g_027264d8 = 0;
    g_027264da = 1;
    g_02726458 = 0;
    ram_0000000002726460 = 0;
    g_02726468 = 0;
    ram_0000000002726470 = 0;
    g_02726478 = 0;
    ram_0000000002726480 = 0;
    g_02726488 = 0;
    ram_0000000002726490 = 0;
    g_02726498 = 0;
    ram_00000000027264a0 = 0;
    g_027264a8 = 0;
    ram_00000000027264b0 = 0;
    g_027264b8 = 0;
    ram_00000000027264c0 = 0;
    g_027264e3 = 0;
    g_027264db = 0;
    uVar5 = ___cxa_guard_release();
  }
  local_44 = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
  if (plVar6 == (int64_t *)0x0) {
LAB_01bf4b47:
    plVar6 = (int64_t *)0x0;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01bf4b47;
    FUN_00d50b00();
    local_44 = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    (**(code **)(*local_40 + 0x10))();
    FUN_00d50b20();
  }
  pplVar7 = &local_40;
  FUN_01ccad60();
  plVar1 = local_40;
  FUN_00192f30();
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_01bf4bac;
  }
  pplVar7 = (int64_t **)&g_02802688;
LAB_01bf4bac:
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_54 == '\0') {
    local_78 = *arg1;
    local_70 = '\0';
    local_68 = *param_2;
    local_60 = '\0';
    uVar4 = (**(code **)(*plVar6 + 0xa00))(in_ECX,&local_68);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_98 = *arg1;
    local_90 = '\0';
    local_88 = *param_2;
    local_80 = '\0';
    uVar4 = (**(code **)(*plVar6 + 0x9f8))(in_ECX,&local_88);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_44 == '\0') {
    FUN_00d50b20();
  }
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return uVar4;
}



// ============================================================
// 00656960
// ============================================================
// Function: FUN_00656960
// Address: 00656960
// Size: 1229 bytes
// Class: MUMultiTrackView
// === MUMultiTrackView properties ===
//   MUFollowCursorState _followCursorState
//   MUMultiTrackDisplayMode _displayMode


void FUN_00656960(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  void* pVar5;
  int64_t *arg1;
  int64_t lVar6;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d610();
  lVar6 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_48 = lVar6;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016c1150();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d960();
  if (lVar6 != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d900();
    lVar1 = local_40;
    if (((local_38 == '\0') && (local_40 != 0)) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_e8 = local_48;
    local_e0 = '\0';
    local_d8 = *arg1;
    local_d0 = '\0';
    uVar3 = FUN_00e7bdb0();
    uVar4 = FUN_00e7bdb0();
    local_c0 = '\0';
    local_c8 = 0;
    pVar5 = (void*)&local_d8;
    FUN_01516650(0,&local_e8,uVar3,uVar4);
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar5);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_b8 = lVar1;
    local_b0 = '\0';
    local_a8 = local_48;
    local_a0 = '\0';
    local_98 = *arg1;
    local_90 = '\0';
    uVar3 = FUN_00e7bdb0();
    uVar4 = FUN_00e7bdb0();
    local_80 = '\0';
    local_88 = 0;
    FUN_01516720(0,&local_a8,uVar3,uVar4);
    lVar6 = local_48;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  local_78 = g_027ebe30;
  if (g_027ebe30 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  local_68 = *arg1;
  local_60 = '\0';
  local_58 = 0;
  local_50 = '\0';
  FUN_00d40470(&local_58,&local_68,3,3);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00655fa0
// ============================================================
// Function: FUN_00655fa0
// Address: 00655fa0
// Size: 737 bytes
// Class: MUMultiTrackView
// String references:
//   "MUMultiTrackView"
// === MUMultiTrackView properties ===
//   MUFollowCursorState _followCursorState
//   MUMultiTrackDisplayMode _displayMode


void FUN_00655fa0(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t **pplVar4;
  int64_t *this_ptr;
  bool bVar5;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01d838d0();
  FUN_01e561b0();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (int64_t *)0x0) {
    return;
  }
  FUN_01d8b220();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_00656136;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (int64_t *)0x0) goto LAB_00656136;
  local_58 = plVar1;
  (**(code **)(*plVar1 + 0x3f8))();
  local_50 = local_40;
  local_48 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_48 = '\x01';
  (**(code **)(*this_ptr + 0x630))();
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pplVar4 = &local_40;
  FUN_01d8b200();
  plVar1 = local_40;
  FUN_000914a0();
  if (plVar1 == (int64_t *)0x0) {
LAB_006560fc:
    pplVar4 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_006560fc;
  }
  bVar5 = true;
  if (*pplVar4 == (int64_t *)0x0) {
    pplVar4 = &local_68;
    FUN_01d8b200();
    plVar1 = local_68;
    if ((g_026fe4d0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      g_02726438 = FUN_0006d940();
      g_02726420 = "MUMultiTrackView";
      g_02726428 = 0x228;
      g_02726430 = FUN_00082de0;
      g_02726440 = 0;
      ram_0000000002726448 = 0;
      g_02726450 = 0;
      g_027264c8 = 0;
      ram_00000000027264d0 = 0;
      g_027264d8 = 0;
      g_027264da = 1;
      g_02726458 = 0;
      ram_0000000002726460 = 0;
      g_02726468 = 0;
      ram_0000000002726470 = 0;
      g_02726478 = 0;
      ram_0000000002726480 = 0;
      g_02726488 = 0;
      ram_0000000002726490 = 0;
      g_02726498 = 0;
      ram_00000000027264a0 = 0;
      g_027264a8 = 0;
      ram_00000000027264b0 = 0;
      g_027264b8 = 0;
      ram_00000000027264c0 = 0;
      g_027264e3 = 0;
      g_027264db = 0;
      ___cxa_guard_release();
    }
    if (plVar1 == (int64_t *)0x0) {
LAB_0065618f:
      pplVar4 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_0065618f;
    }
    bVar5 = *pplVar4 != (int64_t *)0x0;
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar5) {
    FUN_0063a4a0();
  }
  FUN_00d50b20();
LAB_00656136:
  FUN_00d50b20();
  return;
}



// ============================================================
// 006577f0
// ============================================================
// Function: FUN_006577f0
// Address: 006577f0
// Size: 639 bytes
// Class: MUMultiTrackView
// === MUMultiTrackView properties ===
//   MUFollowCursorState _followCursorState
//   MUMultiTrackDisplayMode _displayMode


void* FUN_006577f0(void)

{
  int64_t *plVar1;
  char cVar2;
  int64_t **pplVar3;
  int64_t *arg1;
  void*this_ptr;
  bool bVar4;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_40;
  char local_38;
  
  FUN_0063f230();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
LAB_00657987:
    if (local_40 != (int64_t *)0x0) {
      FUN_0021a630();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 != (int64_t *)0x0) {
        FUN_0021a630();
        (**(code **)(*local_40 + 0xa00))();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00657a41;
      }
    }
    (**(code **)(*arg1 + 0x5e0))();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_00657a29;
      }
    }
    else if (local_40 != (int64_t *)0x0) {
LAB_00657a29:
      FUN_00757c60();
      FUN_00d50b20();
      goto joined_r0x00657a6b;
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    FUN_01e561b0();
    if (local_40 == (int64_t *)0x0) {
      bVar4 = false;
    }
    else {
      FUN_01e561b0();
      pplVar3 = &local_68;
      FUN_01d8b220();
      plVar1 = local_68;
      FUN_000914a0();
      if (plVar1 == (int64_t *)0x0) {
LAB_006578be:
        pplVar3 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        if (cVar2 == '\0') goto LAB_006578be;
      }
      bVar4 = false;
      if ((*pplVar3 != (int64_t *)0x0) && (local_40 != (int64_t *)0x0)) {
        FUN_0021a630();
        bVar4 = local_78 != 0;
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar4) goto LAB_00657987;
    FUN_0021a630();
    (**(code **)(*local_40 + 0xa00))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
joined_r0x00657a6b:
  if (local_40 == (int64_t *)0x0) {
    return this_ptr;
  }
LAB_00657a41:
  FUN_00d50b20();
  return this_ptr;
}



// ============================================================
// 002fb9c0
// ============================================================
// Function: FUN_002fb9c0
// Address: 002fb9c0
// Size: 3756 bytes
// Class: MUMultiTrackView
// String references:
//   "MUMultiTrackView"
//   "GNDisplayGroupDelegate"
// === MUMultiTrackView properties ===
//   MUFollowCursorState _followCursorState
//   MUMultiTrackDisplayMode _displayMode


void FUN_002fb9c0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  this_ptr[0x27] = &g_0267efd8;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_0265da68;
  this_ptr[2] = &g_0265e4b0;
  this_ptr[0x27] = &g_0265e4f0;
  *(void*)(this_ptr + 0x28) = 0;
  // [STATIC_INIT: property registration]
  if (g_027264db == '\0') {
    FUN_002fcbc0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x144) = 0;
  // [STATIC_INIT: property registration]
  if (g_027264db == '\0') {
    FUN_002fce20();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x145) = 0;
  // [STATIC_INIT: property registration]
  if (g_027264db == '\0') {
    FUN_002fcfb0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x29) = 0;
  // [STATIC_INIT: property registration]
  if (g_027264db == '\0') {
    FUN_002fd140();
    FUN_00e87980();
  }
  FUN_002fd2d0();
  FUN_002fd600();
  FUN_002fd930();
  FUN_002fdc60();
  FUN_002fdf90();
  FUN_002fe2c0();
  FUN_002fe5f0();
  FUN_002fe920();
  FUN_002fec50();
  FUN_002fef80();
  FUN_002ff2b0();
  FUN_002ff5e0();
  FUN_002ff910();
  FUN_002ffc40();
  FUN_002fff70();
  FUN_003002a0();
  FUN_003005d0();
  FUN_00300900();
  FUN_00300c30();
  *(void*)(this_ptr + 0x3d) = 0;
  // [STATIC_INIT: property registration]
  if (g_027264db == '\0') {
    FUN_00300f60();
    FUN_00e87980();
  }
  FUN_003011b0();
  this_ptr[0x3f] = 0;
  // [STATIC_INIT: property registration]
  if (g_027264db == '\0') {
    FUN_003014e0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x40) = 0;
  // [STATIC_INIT: property registration]
  if (g_027264db == '\0') {
    FUN_00301670();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x204) = 0;
  // [STATIC_INIT: property registration]
  if (g_027264db == '\0') {
    FUN_00301800();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x41) = 0;
  // [STATIC_INIT: property registration]
  if (g_027264db == '\0') {
    FUN_00301990();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x20c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027264db == '\0') {
    FUN_00301b20();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x20d) = 0;
  // [STATIC_INIT: property registration]
  if (g_027264db == '\0') {
    FUN_00301cb0();
    FUN_00e87980();
  }
  FUN_00301e40();
  FUN_00302100();
  *(void*)(this_ptr + 0x44) = 0;
  // [STATIC_INIT: property registration]
  if (g_027264db == '\0') {
    FUN_003023c0();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 01bf3920
// ============================================================
// Function: FUN_01bf3920
// Address: 01bf3920
// Size: 561 bytes
// Class: MUMultiTrackView
// String references:
//   "MUMultiTrackView"
// === MUMultiTrackView properties ===
//   MUFollowCursorState _followCursorState
//   MUMultiTrackDisplayMode _displayMode


void FUN_01bf3920(uint32_t param_1)

{
  bool bVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  lVar2 = g_02800140;
  if (g_02800140 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_48 = lVar2;
  local_40 = '\x01';
  FUN_01ccaae0(param_1,&local_48);
  plVar3 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != (int64_t *)0x0) && (FUN_00d50b00(), local_30 != '\0')) &&
       (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_01d26010();
    if (local_38 == (int64_t *)0x0) {
      plVar6 = (int64_t *)0x0;
    }
    else {
      plVar6 = (int64_t *)(**(code **)(*local_38 + 0x10))();
    }
    if ((g_026fe4d0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_02726438 = FUN_0006d940();
      g_02726420 = "MUMultiTrackView";
      g_02726428 = 0x228;
      g_02726430 = FUN_00082de0;
      g_02726440 = 0;
      ram_0000000002726448 = 0;
      g_02726450 = 0;
      g_027264c8 = 0;
      ram_00000000027264d0 = 0;
      g_027264d8 = 0;
      g_027264da = 1;
      g_02726458 = 0;
      ram_0000000002726460 = 0;
      g_02726468 = 0;
      ram_0000000002726470 = 0;
      g_02726478 = 0;
      ram_0000000002726480 = 0;
      g_02726488 = 0;
      ram_0000000002726490 = 0;
      g_02726498 = 0;
      ram_00000000027264a0 = 0;
      g_027264a8 = 0;
      ram_00000000027264b0 = 0;
      g_027264b8 = 0;
      ram_00000000027264c0 = 0;
      g_027264e3 = 0;
      g_027264db = 0;
      ___cxa_guard_release();
    }
    bVar1 = true;
    if (plVar6 == (int64_t *)0x0) {
LAB_01bf3a23:
      plVar6 = (int64_t *)0x0;
    }
    else {
      (**(code **)(*plVar6 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_01bf3a23;
      FUN_00d50b00();
      bVar1 = false;
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      (**(code **)(*local_38 + 0x10))();
      FUN_00d50b20();
    }
    if (!bVar1) {
      cVar4 = (**(code **)(*plVar6 + 0x920))();
      if (cVar4 != '\0') {
        FUN_00d50b20();
        goto LAB_01bf3a76;
      }
      FUN_00d50b20();
    }
  }
  FUN_01df7da0();
  if (plVar3 == (int64_t *)0x0) {
    return;
  }
LAB_01bf3a76:
  FUN_00d50b20();
  return;
}



// ============================================================
// 00657180
// ============================================================
// Function: FUN_00657180
// Address: 00657180
// Size: 831 bytes
// Class: MUMultiTrackView
// === MUMultiTrackView properties ===
//   MUFollowCursorState _followCursorState
//   MUMultiTrackDisplayMode _displayMode


int FUN_00657180(uint64_t param_1)

{
  uint32_t uVar1;
  void *pvVar2;
  void* pVar3;
  uint64_t in_RCX;
  char unaff_SIL;
  int iVar4;
  uint64_t uVar5;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_40;
  char local_38;
  
  FUN_0063f230();
  if ((local_78 == '\0') && (local_80 != 0)) {
    FUN_00d50b00();
  }
  FUN_00261fb0();
  if ((local_78 == '\0') && (local_80 != 0)) {
    FUN_00d50b00();
  }
  if (*(int *)(local_80 + 0xc) == 0) {
    iVar4 = 0;
  }
  else {
    if (*(int *)(local_80 + 0xc) < 1) {
      iVar4 = 0;
    }
    else {
      iVar4 = 0;
      do {
        if (unaff_SIL != '\0') {
          pvVar2 = _pthread_getspecific((void*)in_RCX);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar5 = FUN_0132d610();
          pVar3 = (void*)in_RCX;
          if (local_a0 == 0) {
            FUN_0123fbe0(uVar5,4);
          }
          else {
            pvVar2 = _pthread_getspecific(pVar3);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0132d610();
            pvVar2 = _pthread_getspecific(pVar3);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar5 = FUN_00e7bdb0();
            in_RCX = 0;
            FUN_016c47d0(0,uVar5);
          }
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          if (((local_a0 != 0) && (local_88 != '\0')) && (local_90 != 0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          FUN_0123fef0();
          uVar1 = FUN_0123ff00();
          FUN_016c0b50(param_1,uVar1);
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
          }
          FUN_00656960();
          if (local_40 != 0) {
            FUN_00d50b20();
            FUN_00d50b20();
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(local_80 + 0xc));
    }
    FUN_00115190();
  }
  FUN_00d50b20();
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  return iVar4;
}



// ============================================================
// 002fcbc0
// ============================================================
// Function: FUN_002fcbc0
// Address: 002fcbc0
// Size: 560 bytes
// Class: MUMultiTrackView
// String references:
//   "MUMultiTrackView"
//   "MUFollowCursorState"
//   "_followCursorState"
// === MUMultiTrackView properties ===
//   MUFollowCursorState _followCursorState
//   MUMultiTrackDisplayMode _displayMode


void* FUN_002fcbc0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_026feef8 = "_followCursorState";
      g_026fef00 = &g_02726420;
      g_026fef08 = 0;
      g_026fef10 = 0x6500;
      g_026fef18 = "MUFollowCursorState";
      g_026fef20 = &g_026fef78;
      g_026fef28 = 0;
      ram_00000000026fef30 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_026feef8;
}



// ============================================================
// 00300f60
// ============================================================
// Function: FUN_00300f60
// Address: 00300f60
// Size: 550 bytes
// Class: MUMultiTrackView
// String references:
//   "MUMultiTrackView"
//   "MUMultiTrackDisplayMode"
//   "_displayMode"
// === MUMultiTrackView properties ===
//   MUFollowCursorState _followCursorState
//   MUMultiTrackDisplayMode _displayMode


void* FUN_00300f60(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_026ff5e0 = "_displayMode";
      g_026ff5e8 = &g_02726420;
      g_026ff5f0 = 0;
      g_026ff5f8 = 0x6500;
      g_026ff600 = "MUMultiTrackDisplayMode";
      g_026ff608 = &g_026ff660;
      g_026ff610 = 0;
      ram_00000000026ff618 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_026ff5e0;
}

