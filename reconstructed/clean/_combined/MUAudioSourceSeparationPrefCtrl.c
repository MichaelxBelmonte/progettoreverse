// ===================================================================
// MUAudioSourceSeparationPrefCtrl — Complete reconstructed pseudocode
// 4 functions
// ===================================================================


// ============================================================
// 01a94560
// ============================================================
// Function: FUN_01a94560
// Address: 01a94560
// Size: 1487 bytes
// Class: MUAudioSourceSeparationPrefCtrl

void FUN_01a94560(void)

{
  int64_t *plVar1;
  char cVar2;
  uint64_t uVar3;
  uint32_t uVar4;
  int64_t lVar5;
  int64_t this_ptr;
  int64_t *plVar6;
  undefined7 uVar10;
  uint64_t uVar7;
  int64_t **pplVar8;
  int64_t *plVar9;
  bool bVar11;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  uint32_t local_5c;
  int64_t *local_58;
  uint64_t local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_00d6f370();
  plVar6 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar5 = g_027bf420;
  local_58 = plVar6;
  if (g_027bf420 != 0) {
    FUN_00d50b00();
  }
  local_110 = lVar5;
  local_108 = '\x01';
  local_100 = 0;
  local_f8 = '\0';
  uVar3 = FUN_00d710b0(&local_100,&local_110);
  plVar6 = local_40;
  if (local_40 == (int64_t *)0x0) {
    lVar5 = CONCAT71((int7)((uint64_t)lVar5 >> 8),1);
    plVar6 = (int64_t *)0x0;
    local_50 = 0;
  }
  else {
    if (local_38 == '\0') {
      uVar3 = FUN_00d50b00();
      lVar5 = 0;
      local_50 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
      if ((local_38 == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01a9464b;
      uVar3 = FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    local_50 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
    lVar5 = 0;
  }
LAB_01a9464b:
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  local_48 = plVar6;
  if ((char)lVar5 != '\0') {
    FUN_00b7b410();
    (**(code **)(*local_70 + 0x368))();
    plVar1 = local_40;
    uVar10 = (undefined7)((uint64_t)plVar6 >> 8);
    if (local_40 == plVar6) {
      if (local_40 == (int64_t *)0x0) {
        uVar7 = local_50 & 0xffffffff;
      }
      else {
        if (local_38 != '\0') goto LAB_01a946dd;
        uVar7 = CONCAT71(uVar10,1);
        FUN_00d50b00();
      }
LAB_01a94740:
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        uVar7 = CONCAT71(uVar10,1);
        if (((byte)local_50 & local_48 != (int64_t *)0x0) == 1) {
          local_48 = plVar1;
          FUN_00d50b20();
        }
        else {
          local_48 = plVar1;
        }
        goto LAB_01a94740;
      }
      bVar11 = plVar6 != (int64_t *)0x0;
      plVar6 = plVar1;
      if (((byte)local_50 & bVar11) == 1) {
        local_48 = local_40;
        FUN_00d50b20();
      }
LAB_01a946dd:
      local_38 = '\0';
      uVar7 = CONCAT71(uVar10,1);
      local_48 = plVar6;
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar5 = g_027bf420;
    local_f0 = local_48;
    local_e8 = '\0';
    if (g_027bf420 != 0) {
      FUN_00d50b00();
    }
    local_e0 = lVar5;
    local_d8 = '\x01';
    (**(code **)(*local_58 + 0x80))();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d71400();
    local_50 = uVar7 & 0xffffffff;
  }
  local_c8 = '\0';
  local_d0 = local_48;
  FUN_00cddf30();
  (**(code **)(*local_70 + 0x470))();
  plVar6 = local_40;
  if (local_40 == (int64_t *)0x0) {
    uVar4 = (uint32_t)CONCAT71((int7)((uint64_t)lVar5 >> 8),1);
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      uVar4 = 0;
      if ((local_38 == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01a9486b;
      FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    uVar4 = 0;
  }
LAB_01a9486b:
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_c0 = plVar6;
  local_b8 = '\0';
  local_5c = uVar4;
  (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x968))();
  if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_b0 = plVar6;
  local_a8 = '\0';
  (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x6a8))();
  if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar5 = g_027bf450;
  if (g_027bf450 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar5;
  local_98 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  pplVar8 = &local_40;
  FUN_00d704d0(&local_90,&local_a0);
  plVar1 = local_40;
  FUN_00053ac0();
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_01a94998;
  }
  pplVar8 = (int64_t **)&g_02802688;
LAB_01a94998:
  plVar9 = local_58;
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    plVar1 = *(int64_t **)(this_ptr + 0x78);
    FUN_013941f0();
    (**(code **)(*plVar1 + 0x918))();
    FUN_00d6f370();
    FUN_013941f0();
    local_80 = g_027bf450;
    if (g_027bf450 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    FUN_00d707b0();
    plVar9 = local_58;
    cVar2 = (char)local_5c;
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    FUN_00d71400();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar1 = *(int64_t **)(this_ptr + 0x78);
    FUN_00d45870();
    (**(code **)(*plVar1 + 0x918))();
    FUN_00d50b20();
    cVar2 = (char)local_5c;
  }
  if (cVar2 == '\0' && plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01a92930
// ============================================================
// Function: FUN_01a92930
// Address: 01a92930
// Size: 1249 bytes
// Class: MUAudioSourceSeparationPrefCtrl
// String references:
//   "%I:%02I"

void* FUN_01a92930(uint32_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  code *pcVar2;
  int iVar3;
  void*puVar4;
  void*puVar5;
  uint *puVar6;
  int64_t *arg1;
  void*this_ptr;
  double dVar7;
  uint64_t uVar8;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  int64_t local_88;
  char local_80;
  double local_78;
  int64_t *local_70;
  uint local_68;
  int local_64;
  int local_60;
  double local_58;
  uint64_t uStack_50;
  char local_40;
  undefined7 uStack_3f;
  char local_38;
  
  local_78 = (double)CONCAT44(local_78._4_4_,param_2);
  local_58 = (double)CONCAT44(local_58._4_4_,param_1);
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  dVar7 = (double)(**(code **)(*(int64_t *)arg1[2] + 0x388))();
  local_58 = dVar7 - (double)arg1[7];
  dVar7 = (double)(**(code **)(*(int64_t *)arg1[2] + 0x388))();
  local_78 = dVar7 - (double)arg1[7];
  dVar7 = (double)FUN_01a93060();
  local_58 = (double)(**(code **)(*arg1 + 0x370))(local_58 - dVar7);
  local_80 = 0;
  local_88 = arg1[8];
  uStack_50 = extraout_XMM0_Qb;
  if (local_88 != 0) {
    FUN_00d50b00();
  }
  local_78 = local_78 + dVar7;
  local_80 = '\x01';
  (**(code **)(*arg1 + 0x3a8))(local_58,&local_88);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (0 < *(int *)((int64_t)puVar4 + 0xc)) {
    FUN_00d23340();
    plVar1 = local_70;
    puVar6 = (uint *)&local_40;
    if ((char)local_68 != '\0') {
      puVar6 = &local_68;
    }
    local_40 = (char)local_68;
    *(void*)puVar6 = 0;
    if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_58 = (double)(**(code **)(*plVar1 + 0x370))();
    if (local_40 != '\0') {
      FUN_00d50b20();
    }
    if (local_78 <= local_58) goto LAB_01a92e00;
    local_58 = (double)(**(code **)(*arg1 + 0x380))();
    uStack_50 = extraout_XMM0_Qb_00;
  }
  pcVar2 = g_025795c0;
  dVar7 = local_58;
  while (dVar7 < local_78) {
    local_58 = dVar7;
    uVar8 = (**(code **)(*(int64_t *)arg1[2] + 0x390))((double)arg1[7] + dVar7);
    auVar9._0_8_ = uVar8 & g_023945e0;
    auVar9._8_8_ = extraout_XMM0_Qb_02 & _UNK_023945e8;
    auVar11._4_12_ = SUB1612(auVar9 | g_023945f0,4);
    auVar11._0_4_ = SUB164(auVar9 | g_023945f0,0) + (float)uVar8;
    auVar9 = roundss(ZEXT816(0),auVar11,0xb);
    auVar10._8_8_ = uStack_50 & _UNK_023945b8 | _UNK_023945c8;
    auVar10._0_8_ = (double)((uint64_t)local_58 & g_023945b0 | g_023945c0) + local_58;
    auVar11 = roundsd(ZEXT816(0),auVar10,0xb);
    if (g_02391030 <= (double)((uint64_t)(auVar11._0_8_ - local_58) & g_023908f0)) {
      FUN_01a8b960(auVar9._0_8_,local_58);
      plVar1 = (int64_t *)CONCAT71(uStack_3f,local_40);
      if (local_38 == '\0') {
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_68 = local_68 & 0xffffff00;
      local_70 = plVar1;
      FUN_00d21140();
      if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (CONCAT71(uStack_3f,local_40) != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      iVar3 = FUN_00e7d850((uint64_t)local_58 & g_023908f0);
      puVar5 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &g_025795a8;
      (*pcVar2)();
      if (local_58 < 0.0) {
        FUN_00d8db40();
      }
      local_64 = iVar3 / 0x3c;
      local_60 = iVar3 % 0x3c;
      local_68 = 2;
      local_70 = (int64_t *)&g_024c3df0;
      FUN_00d94d80(&g_024c3df0,&local_70);
      FUN_01a8b9f0();
      plVar1 = (int64_t *)CONCAT71(uStack_3f,local_40);
      if (local_38 == '\0') {
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_68 = local_68 & 0xffffff00;
      local_70 = plVar1;
      FUN_00d21140();
      if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (CONCAT71(uStack_3f,local_40) != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    dVar7 = (double)(**(code **)(*arg1 + 0x380))(local_58);
    uStack_50 = extraout_XMM0_Qb_01;
  }
  puVar5 = (void*)arg1[8];
  if (puVar5 != puVar4) {
    if (puVar4 != (void*)0x0) {
      FUN_00d50b00();
    }
    arg1[8] = (int64_t)puVar4;
    if (puVar5 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
LAB_01a92e00:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 01a93060
// ============================================================
// Function: FUN_01a93060
// Address: 01a93060
// Size: 1276 bytes
// Class: MUAudioSourceSeparationPrefCtrl

int64_t FUN_01a93060(void)

{
  int64_t *plVar1;
  double *pdVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *this_ptr;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  int64_t lVar9;
  int64_t local_68;
  char local_60;
  
  if ((char)this_ptr[4] == '\0') {
    lVar9 = FUN_00e7c860();
    return lVar9;
  }
  if (((double)this_ptr[6] != 0.0) || (NAN((double)this_ptr[6]))) goto LAB_01a93548;
  (**(code **)(*this_ptr + 0x388))();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  dVar8 = (double)(**(code **)(*(int64_t *)this_ptr[2] + 0x378))();
  lVar9 = g_027e2ad0;
  plVar1 = this_ptr + 2;
  if (g_0241c420 <= dVar8) {
    dVar8 = (double)(**(code **)(*(int64_t *)*plVar1 + 0x378))();
    lVar9 = g_027e2ae0;
    lVar3 = g_027e2ad8;
    if (g_0241c428 <= dVar8) {
      if (g_027e2ae0 == 0) goto LAB_01a93168;
      FUN_00d50b00();
    }
    else if (g_027e2ad8 == 0) {
LAB_01a93168:
      lVar9 = 0;
    }
    else {
      FUN_00d50b00();
      lVar9 = lVar3;
    }
  }
  else {
    if (g_027e2ad0 == 0) goto LAB_01a93168;
    FUN_00d50b00();
  }
  fVar5 = (float)FUN_01d43d10();
  fVar6 = (float)(**(code **)(*(int64_t *)this_ptr[2] + 0x390))
                           (SUB84((double)this_ptr[7] + g_0238fee8,0));
  pdVar2 = (double *)(this_ptr + 7);
  fVar7 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + 0.0,0));
  fVar5 = fVar5 * g_02394244;
  if (fVar6 - fVar7 <= fVar5) {
    fVar6 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + g_023b2c70,0));
    fVar7 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + 0.0,0));
    lVar3 = 1;
    if (fVar5 < fVar6 - fVar7) {
LAB_01a93517:
      lVar4 = lVar3;
    }
    else {
      fVar6 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + g_02411100,0));
      fVar7 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + 0.0,0));
      lVar3 = 2;
      if (fVar5 < fVar6 - fVar7) goto LAB_01a93517;
      fVar6 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + g_0241eeb8,0));
      fVar7 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + 0.0,0));
      lVar3 = 3;
      if (fVar5 < fVar6 - fVar7) goto LAB_01a93517;
      fVar6 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + g_02394de0,0));
      fVar7 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + 0.0,0));
      lVar3 = 4;
      if (fVar5 < fVar6 - fVar7) goto LAB_01a93517;
      fVar6 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + g_023b4df8,0));
      fVar7 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + 0.0,0));
      lVar3 = 5;
      if (fVar5 < fVar6 - fVar7) goto LAB_01a93517;
      fVar6 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + g_02395720,0));
      fVar7 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + 0.0,0));
      lVar3 = 6;
      if (fVar5 < fVar6 - fVar7) goto LAB_01a93517;
      fVar6 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + g_0241c430,0));
      fVar7 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + 0.0,0));
      lVar3 = 7;
      if (fVar5 < fVar6 - fVar7) goto LAB_01a93517;
      fVar6 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + g_024119d0,0));
      fVar7 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + 0.0,0));
      lVar3 = 8;
      if (fVar5 < fVar6 - fVar7) goto LAB_01a93517;
      fVar6 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + g_0241c438,0));
      fVar7 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + 0.0,0));
      lVar3 = 9;
      lVar4 = 10;
      if (fVar5 < fVar6 - fVar7) goto LAB_01a93517;
    }
    dVar8 = (double)*(int *)(&g_0241c440 + lVar4 * 4);
LAB_01a93529:
    this_ptr[6] = (int64_t)dVar8;
  }
  else {
    dVar8 = (double)FUN_00e7c860();
    this_ptr[6] = (int64_t)dVar8;
    fVar5 = (float)(**(code **)(*(int64_t *)this_ptr[2] + 0x390))
                             (SUB84(dVar8 + (double)this_ptr[7],0));
    fVar6 = (float)(**(code **)(*(int64_t *)*plVar1 + 0x390))(SUB84(*pdVar2 + 0.0,0));
    dVar8 = g_0238fee8;
    if (fVar5 - fVar6 < g_023908d8) goto LAB_01a93529;
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
LAB_01a93548:
  return this_ptr[6];
}



// ============================================================
// 01a93e70
// ============================================================
// Function: FUN_01a93e70
// Address: 01a93e70
// Size: 685 bytes
// Class: MUAudioSourceSeparationPrefCtrl
// String references:
//   "MUAudioSourceSeparationPrefCtrl"
//   "handleCacheSizeChanged"
//   "handleSetSeparationFolder"

void FUN_01a93e70(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028b3068 = "handleCacheSizeChanged";
      g_028b3070 = &g_0272fd90;
      g_028b3078 = 0;
      g_028b3080 = &g_027e2b10;
      g_028b3088 = FUN_01a95d70;
      g_028b3090 = FUN_01a94fd0;
      g_028b3098 = 0;
      ram_00000000028b30a0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b30b0 = "handleSetSeparationFolder";
      g_028b30b8 = &g_0272fd90;
      g_028b30c0 = 0;
      g_028b30c8 = &g_027e2b10;
      g_028b30d0 = FUN_01a95d70;
      g_028b30d8 = FUN_01a95160;
      g_028b30e0 = 0;
      ram_00000000028b30e8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}

