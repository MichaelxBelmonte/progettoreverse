// ===================================================================
// GNInfoController — Complete reconstructed pseudocode
// 10 functions
// ===================================================================


// ============================================================
// 01f46240
// ============================================================
// Function: FUN_01f46240
// Address: 01f46240
// Size: 2025 bytes
// Class: GNInfoController

void* FUN_01f46240(uint64_t param_1,int64_t *param_2)

{
  char cVar1;
  int64_t *plVar2;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  local_90 = param_2;
  FUN_00d30620();
  if (local_40 == (int64_t *)0x0) {
    bVar5 = false;
  }
  else {
    FUN_00d30620();
    FUN_00d305f0();
    bVar5 = local_50 != 0;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = local_40;
  if (bVar5) {
    FUN_00d30620();
    FUN_00d305f0();
    local_80 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_80 = '\x01';
    local_88 = local_50;
    (**(code **)(*arg1 + 0x618))(param_1,&local_88);
    if (local_40 == (int64_t *)0x0) {
      bVar4 = 1;
      plVar3 = (int64_t *)0x0;
      bVar5 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar4 = 0;
      bVar5 = true;
    }
    else {
      local_38 = '\0';
      bVar5 = true;
      bVar4 = 0;
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    cVar1 = (**(code **)(*plVar3 + 0x3a0))();
    if (cVar1 == '\0') goto LAB_01f464de;
    local_c0 = *local_90;
    local_b8 = '\0';
    (**(code **)(*plVar3 + 0x400))(param_1,&local_c0);
    if (local_40 == plVar3) {
      bVar6 = bVar5;
      if ((bool)(bVar4 & local_40 != (int64_t *)0x0)) {
        if (local_38 != '\0') goto LAB_01f46441;
        FUN_00d50b00();
        bVar6 = true;
      }
LAB_01f4648d:
      bVar5 = bVar6;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar6 = true;
        plVar3 = local_40;
        if (bVar5) {
          FUN_00d50b20();
        }
        goto LAB_01f4648d;
      }
      plVar3 = local_40;
      if (bVar5) {
        FUN_00d50b20();
      }
LAB_01f46441:
      local_38 = '\0';
      bVar5 = true;
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    cVar1 = (**(code **)(*plVar3 + 0x398))();
    if (cVar1 == '\0') goto LAB_01f464de;
LAB_01f4695d:
    *(void*)(this_ptr + 1) = 0;
    if (!bVar5) {
      FUN_00d50b00();
    }
    *this_ptr = plVar3;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    bVar5 = false;
    plVar3 = (int64_t *)0x0;
LAB_01f464de:
    FUN_00d30660();
    FUN_00d305f0();
    local_70 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_70 = '\x01';
    local_78 = local_50;
    (**(code **)(*arg1 + 0x618))(param_1,&local_78);
    if (local_40 == plVar3) {
      bVar6 = bVar5;
      if ((!bVar5) && (local_40 != (int64_t *)0x0)) {
        plVar2 = plVar3;
        if (local_38 == '\0') {
          FUN_00d50b00();
          goto LAB_01f465a4;
        }
        goto LAB_01f46573;
      }
joined_r0x01f465b3:
      plVar2 = plVar3;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar2 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar6 = true;
        if ((bVar5) && (plVar3 != (int64_t *)0x0)) {
          FUN_00d50b20();
          plVar3 = local_40;
LAB_01f465a4:
          bVar6 = true;
          goto joined_r0x01f465b3;
        }
      }
      else {
        if ((bVar5) && (plVar3 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01f46573:
        local_38 = '\0';
        bVar6 = true;
      }
    }
    plVar3 = plVar2;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    cVar1 = (**(code **)(*plVar3 + 0x3a0))();
    if (cVar1 != '\0') {
      local_b0 = *local_90;
      local_a8 = '\0';
      (**(code **)(*plVar3 + 0x400))(param_1,&local_b0);
      if (local_40 == plVar3) {
        if ((!bVar6) && (local_40 != (int64_t *)0x0)) {
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_01f466f3;
          }
          goto LAB_01f46720;
        }
joined_r0x01f469d5:
        bVar5 = bVar6;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (bVar6) {
          FUN_00d50b20();
          plVar3 = local_40;
LAB_01f466f3:
          bVar6 = true;
          goto joined_r0x01f469d5;
        }
        plVar3 = local_40;
        bVar5 = true;
      }
      else {
        plVar3 = local_40;
        if (bVar6) {
          FUN_00d50b20();
        }
LAB_01f46720:
        local_38 = '\0';
        bVar5 = true;
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      cVar1 = (**(code **)(*plVar3 + 0x398))();
      bVar6 = bVar5;
      if (cVar1 != '\0') goto LAB_01f4695d;
    }
    (**(code **)(*arg1 + 0x610))();
    if (local_40 == plVar3) {
      bVar5 = bVar6;
      if ((bVar6) || (local_40 == (int64_t *)0x0)) {
joined_r0x01f468c9:
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar5 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
          goto LAB_01f467da;
        }
      }
    }
    else if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar5 = true;
      plVar3 = local_40;
      if (bVar6) {
        FUN_00d50b20();
LAB_01f467da:
        bVar5 = true;
        goto joined_r0x01f468c9;
      }
    }
    else {
      bVar5 = true;
      plVar3 = local_40;
      if (bVar6) {
        FUN_00d50b20();
      }
    }
    cVar1 = (**(code **)(*plVar3 + 0x3a0))();
    if (cVar1 != '\0') {
      local_a0 = *local_90;
      local_98 = '\0';
      (**(code **)(*plVar3 + 0x400))(param_1,&local_a0);
      if (local_40 == plVar3) {
        if ((!bVar5) && (local_40 != (int64_t *)0x0)) {
          if (local_38 != '\0') goto LAB_01f4692b;
          bVar5 = true;
          FUN_00d50b00();
        }
LAB_01f468d7:
        bVar6 = local_38 == '\0';
joined_r0x01f46a0e:
        if ((!bVar6) && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          if (bVar5) {
            FUN_00d50b20();
            bVar5 = true;
            plVar3 = local_40;
            goto LAB_01f468d7;
          }
          bVar5 = true;
          bVar6 = true;
          plVar3 = local_40;
          goto joined_r0x01f46a0e;
        }
        plVar3 = local_40;
        if (bVar5) {
          FUN_00d50b20();
        }
LAB_01f4692b:
        bVar5 = true;
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      cVar1 = (**(code **)(*plVar3 + 0x398))();
      if (cVar1 != '\0') goto LAB_01f4695d;
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    if (bVar5) {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}



// ============================================================
// 01f44ac0
// ============================================================
// Function: FUN_01f44ac0
// Address: 01f44ac0
// Size: 820 bytes
// Class: GNInfoController

uint32_t FUN_01f44ac0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  uint32_t uVar6;
  void*arg1;
  int64_t local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  cVar5 = (**(code **)(*(int64_t *)*arg1 + 0x478))();
  uVar6 = 2;
  if (cVar5 != '\0') {
    (**(code **)(*(int64_t *)*arg1 + 0x468))();
    plVar4 = local_50;
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = g_02725a70;
    if (plVar4 == (int64_t *)0x0) {
      if (g_02725a70 != 0) {
        FUN_00d50b00();
      }
      lVar3 = g_028001b0;
      local_80 = lVar1;
      local_78 = '\x01';
      if (g_028001b0 != 0) {
        FUN_00d50b00();
      }
      local_70 = lVar3;
      local_68 = '\x01';
      FUN_01f6ca30();
      uVar6 = (**(code **)(*local_50 + 0x5e0))();
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*(int64_t *)*arg1 + 0x468))();
      (**(code **)(*local_c0 + 0x388))();
      lVar1 = g_02800148;
      if (g_02800148 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar1;
      FUN_00083ea0(2,&local_d8);
      FUN_000b4da0();
      lVar3 = local_60;
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_58 = '\0';
      }
      local_50 = (int64_t *)&g_0253d630;
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      local_50 = &g_024c5048;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar1 = g_02725a70;
      if (g_02725a70 != 0) {
        FUN_00d50b00();
      }
      lVar2 = g_028001a8;
      local_b0 = lVar1;
      local_a8 = '\x01';
      if (g_028001a8 != 0) {
        FUN_00d50b00();
      }
      local_a0 = lVar2;
      local_98 = '\x01';
      FUN_01f6ca30();
      local_90 = lVar3;
      local_88 = '\0';
      uVar6 = (**(code **)(*local_50 + 0x5d8))();
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return uVar6;
}



// ============================================================
// 01f44020
// ============================================================
// Function: FUN_01f44020
// Address: 01f44020
// Size: 725 bytes
// Class: GNInfoController

void FUN_01f44020(void)

{
  uint uVar1;
  int64_t *plVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t this_ptr;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  *(void*)(this_ptr + 0xd8) = 1;
  FUN_01f2fbe0();
  plVar5 = local_40;
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  for (iVar3 = *(int *)((int64_t)plVar5 + 0xc); 0 < iVar3; iVar3 = iVar3 + -1) {
    FUN_01e5e340();
  }
  for (uVar4 = (uint64_t)*(uint *)(*(int64_t *)(this_ptr + 0x38) + 0xc); 0 < (int)uVar4;
      uVar4 = uVar4 - 1) {
    (**(code **)(**(int64_t **)
                   (*(int64_t *)(*(int64_t *)(this_ptr + 0x38) + 0x10) + -8 + uVar4 * 8) + 0x4f0)
    )();
  }
  FUN_01f2fbe0();
  plVar2 = local_40;
  if (plVar5 == local_40) {
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    if (plVar5 == (int64_t *)0x0) {
      uVar1 = *(uint *)((int64_t)plVar2 + 0xc);
      goto joined_r0x01f441c2;
    }
    FUN_00d50b20();
    plVar5 = plVar2;
  }
  else {
    if (plVar5 == (int64_t *)0x0) {
      uVar1 = *(uint *)((int64_t)local_40 + 0xc);
      goto joined_r0x01f441c2;
    }
    FUN_00d50b20();
    plVar5 = plVar2;
  }
  uVar1 = *(uint *)((int64_t)plVar5 + 0xc);
joined_r0x01f441c2:
  if (0 < (int)uVar1) {
    lVar6 = (uint64_t)uVar1 + 1;
    do {
      FUN_01e5c650();
      plVar5 = local_40;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar5 != (int64_t *)0x0) {
        FUN_01e5c650();
        (**(code **)(*local_40 + 0x5b0))();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      lVar6 = lVar6 + -1;
    } while (1 < lVar6);
  }
  FUN_00d403d0();
  lVar6 = g_02800198;
  if (g_02800198 != 0) {
    FUN_00d50b00();
  }
  local_48 = 0;
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  local_48 = '\x01';
  local_60 = 0;
  local_58 = '\0';
  local_50 = this_ptr;
  FUN_00d40470(&local_60,&local_50,3,3);
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d6f370();
  plVar5 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d71400();
  if (*(int64_t *)(this_ptr + 0x28) != 0) {
    *(void*)(this_ptr + 0x28) = 0;
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 00655410
// ============================================================
// Function: FUN_00655410
// Address: 00655410
// Size: 644 bytes
// Class: GNInfoController
// String references:
//   "GNInfoController"

uint64_t FUN_00655410(uint32_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t **pplVar5;
  int64_t this_ptr;
  int64_t *local_70;
  char local_68;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  int64_t *local_30;
  char local_28;
  
  lVar2 = g_02725a20;
  if (param_2 == 0) {
    return 1;
  }
  if (*(int64_t *)(this_ptr + 0x80) == 0) {
    FUN_01f27fe0();
    (**(code **)(*local_70 + 0x5e0))();
    FUN_01f7e230();
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_68 == '\0') {
      return 1;
    }
    if (local_70 == (int64_t *)0x0) {
      return 1;
    }
    FUN_00d50b20();
    return 1;
  }
  if (g_02725a20 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_50 = 0;
  local_48 = '\0';
  pplVar5 = &local_30;
  FUN_01e51a60(param_1,&local_50);
  plVar1 = local_30;
  if ((g_0270fbd0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026eddd8 = FUN_00015ff0();
    g_026eddc0 = "GNInfoController";
    g_026eddc8 = 0xa8;
    g_026eddd0 = FUN_001d1e30;
    g_026edde0 = 0;
    ram_00000000026edde8 = 0;
    g_026eddf0 = 0;
    ram_00000000026eddf8 = 0;
    g_026ede00 = 0;
    ram_00000000026ede08 = 0;
    g_026ede10 = 0;
    ram_00000000026ede18 = 0;
    g_026ede20 = 0;
    ram_00000000026ede28 = 0;
    g_026ede30 = 0;
    ram_00000000026ede38 = 0;
    g_026ede40 = 0;
    ram_00000000026ede48 = 0;
    g_026ede50 = 0;
    ram_00000000026ede58 = 0;
    g_026ede60 = 0;
    ram_00000000026ede68 = 0;
    g_026ede70 = 0;
    ram_00000000026ede78 = 0;
    g_026ede80 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_006554af;
  }
  pplVar5 = (int64_t **)&g_02802688;
LAB_006554af:
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_01e561b0();
    local_40 = local_30;
    local_38 = 0;
    if (local_28 == '\0') {
      if (local_30 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    local_38 = '\x01';
    FUN_01f7e1a0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return 1;
}



// ============================================================
// 01f45680
// ============================================================
// Function: FUN_01f45680
// Address: 01f45680
// Size: 555 bytes
// Class: GNInfoController
// String references:
//   "GNInfoController"

void FUN_01f45680(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t **pplVar7;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar3 = g_02725a20;
  lVar6 = *(int64_t *)(arg1 + 0x58);
  if (lVar6 != 0) goto LAB_01f457d4;
  if (g_02725a20 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar3;
  local_58 = '\x01';
  local_50 = 0;
  local_48 = '\0';
  local_40 = 0;
  local_38 = '\0';
  pplVar7 = &local_70;
  FUN_01e4fcf0(&local_40,&local_50);
  plVar2 = local_70;
  if ((g_0270fbd0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026eddd8 = FUN_00015ff0();
    g_026eddc0 = "GNInfoController";
    g_026eddc8 = 0xa8;
    g_026eddd0 = FUN_001d1e30;
    g_026edde0 = 0;
    ram_00000000026edde8 = 0;
    g_026eddf0 = 0;
    ram_00000000026eddf8 = 0;
    g_026ede00 = 0;
    ram_00000000026ede08 = 0;
    g_026ede10 = 0;
    ram_00000000026ede18 = 0;
    g_026ede20 = 0;
    ram_00000000026ede28 = 0;
    g_026ede30 = 0;
    ram_00000000026ede38 = 0;
    g_026ede40 = 0;
    ram_00000000026ede48 = 0;
    g_026ede50 = 0;
    ram_00000000026ede58 = 0;
    g_026ede60 = 0;
    ram_00000000026ede68 = 0;
    g_026ede70 = 0;
    ram_00000000026ede78 = 0;
    g_026ede80 = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (int64_t *)0x0) {
LAB_01f45727:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01f45727;
  }
  plVar1 = *(int64_t **)(arg1 + 0x58);
  plVar2 = *pplVar7;
  if (plVar1 != plVar2) {
    if (*(char *)(pplVar7 + 1) == '\0') {
      if (plVar2 == (int64_t *)0x0) {
        *(void*)(arg1 + 0x58) = 0;
      }
      else {
        FUN_00d50b00();
        plVar1 = *(int64_t **)(arg1 + 0x58);
        *(int64_t **)(arg1 + 0x58) = *pplVar7;
      }
    }
    else {
      *(void*)(pplVar7 + 1) = 0;
      *(int64_t **)(arg1 + 0x58) = plVar2;
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  lVar6 = *(int64_t *)(arg1 + 0x58);
LAB_01f457d4:
  *(void*)(this_ptr + 1) = 0;
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar6;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01f45960
// ============================================================
// Function: FUN_01f45960
// Address: 01f45960
// Size: 612 bytes
// Class: GNInfoController

void FUN_01f45960(void)

{
  int64_t lVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  int64_t lVar4;
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
  char local_40;
  int64_t local_38;
  char local_30;
  
  lVar4 = g_028001c0;
  if (this_ptr[0xc] != 0) goto LAB_01f45b8a;
  if (g_028001c0 != 0) {
    FUN_00d50b00();
  }
  local_98 = lVar4;
  local_90 = '\x01';
  FUN_01e328d0();
  local_48 = local_58;
  local_40 = 0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_40 = '\x01';
  (**(code **)(*this_ptr + 0x5f0))(&local_48,&local_98);
  lVar4 = local_38;
  if (local_38 == 0) {
    bVar2 = true;
    lVar4 = 0;
  }
  else {
    if (local_30 == '\0') {
      FUN_00d50b00();
      bVar2 = false;
      if ((local_30 == '\0') || (local_38 == 0)) goto LAB_01f45a35;
      FUN_00d50b20();
    }
    else {
      local_30 = '\0';
    }
    bVar2 = false;
  }
LAB_01f45a35:
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_028001c0;
  if (!bVar2) {
    if (g_028001c0 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar1;
    local_80 = '\x01';
    local_78 = 0;
    local_70 = '\0';
    local_68 = 0;
    local_60 = '\0';
    FUN_01e4fcf0(&local_68,&local_78);
    lVar1 = this_ptr[0xc];
    lVar3 = lVar1;
    if (lVar1 != local_38) {
      if (local_30 == '\0') {
        if (local_38 == 0) {
          lVar3 = 0;
          goto LAB_01f45ae0;
        }
        FUN_00d50b00();
        lVar1 = this_ptr[0xc];
        this_ptr[0xc] = local_38;
        lVar3 = local_38;
      }
      else {
        local_30 = '\0';
        lVar3 = local_38;
LAB_01f45ae0:
        this_ptr[0xc] = lVar3;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar3 = local_38;
      }
    }
    if ((local_30 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  if (!bVar2 && lVar4 != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0xc] == 0) {
    return;
  }
LAB_01f45b8a:
  FUN_01e56750();
  FUN_01e5d9c0();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01f44640
// ============================================================
// Function: FUN_01f44640
// Address: 01f44640
// Size: 640 bytes
// Class: GNInfoController

uint32_t FUN_01f44640(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  uint32_t uVar5;
  void*arg1;
  int64_t local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  cVar4 = (**(code **)(*(int64_t *)*arg1 + 0x478))();
  uVar5 = 2;
  if (cVar4 != '\0') {
    (**(code **)(*(int64_t *)*arg1 + 0x468))();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_60 == (int64_t *)0x0) {
      uVar5 = 1;
    }
    else {
      (**(code **)(*(int64_t *)*arg1 + 0x468))();
      (**(code **)(*local_a0 + 0x388))();
      lVar1 = g_02800148;
      if (g_02800148 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar1;
      FUN_00083ea0(2,&local_b8);
      FUN_000b4da0();
      lVar3 = local_30;
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
          if ((local_28 != '\0') && (local_30 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_28 = '\0';
      }
      local_60 = (int64_t *)&g_0253d630;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_60 = &g_024c5048;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar1 = g_02725a70;
      if (g_02725a70 != 0) {
        FUN_00d50b00();
      }
      lVar2 = g_028001a0;
      local_90 = lVar1;
      local_88 = '\x01';
      if (g_028001a0 != 0) {
        FUN_00d50b00();
      }
      local_80 = lVar2;
      local_78 = '\x01';
      FUN_01f6ca30();
      local_70 = lVar3;
      local_68 = '\0';
      uVar5 = (**(code **)(*local_60 + 0x5d8))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return uVar5;
}



// ============================================================
// 006559b0
// ============================================================
// Function: FUN_006559b0
// Address: 006559b0
// Size: 856 bytes
// Class: GNInfoController

void FUN_006559b0(uint64_t param_1)

{
  bool bVar1;
  int64_t *this_ptr;
  int64_t lVar2;
  int64_t local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x5e0))();
  if (local_38 == '\0') {
    if (local_40 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == 0) {
    return;
  }
  FUN_0063f230();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_00655c86;
    FUN_00d50b00();
  }
  else if (local_40 == 0) goto LAB_00655c86;
  FUN_0021c9b0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00752180();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_00655aa4;
    }
  }
  else {
LAB_00655aa4:
    if ((local_40 == 0) || (local_40 == 0)) {
LAB_00655c5e:
      if (local_40 == 0) goto LAB_00655c6f;
    }
    else {
      FUN_00d3ecf0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00108380();
      if (local_40 == 0) {
        bVar1 = false;
        lVar2 = 0;
      }
      else {
        bVar1 = true;
        lVar2 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
      FUN_00108e20(param_1,0);
      if (lVar2 == 0) goto LAB_00655c5e;
      FUN_00637870();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          goto LAB_00655cbe;
        }
      }
      else if (local_40 != 0) {
LAB_00655cbe:
        FUN_006e32e0();
        FUN_00d50b20();
      }
      if (bVar1) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
LAB_00655c6f:
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00655c86:
  FUN_00d50b20();
  return;
}



// ============================================================
// 01f47190
// ============================================================
// Function: FUN_01f47190
// Address: 01f47190
// Size: 604 bytes
// Class: GNInfoController

void FUN_01f47190(void)

{
  void*puVar1;
  void*puVar2;
  int64_t this_ptr;
  
  if (*(int64_t *)(this_ptr + 0xa8) == 0) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_025736a8;
    puVar2[3] = 0;
    *(void*)(puVar2 + 4) = 0;
    (*g_025736c0)();
    puVar1 = *(void**)(this_ptr + 0xa8);
    if (puVar1 == puVar2) {
      FUN_00d50b20();
    }
    else {
      *(void**)(this_ptr + 0xa8) = puVar2;
      if (puVar1 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
  }
  puVar1 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &g_026ba058;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  FUN_00d500e0();
  FUN_01f6c7d0();
  FUN_01f6c800();
  (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0x368))();
  FUN_00d21140();
  (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0x378))();
  if ((*(int64_t *)(this_ptr + 0xb0) == 0) && (FUN_00da5ad0(), *(char *)(puVar1 + 3) != '\0')) {
    FUN_01e1eb80((int)g_02422df0,0);
    puVar2 = *(void**)(this_ptr + 0xb0);
    if (puVar2 != puVar1) {
      if (puVar1 == (void*)0x0) {
        *(void*)(this_ptr + 0xb0) = 0;
      }
      else {
        FUN_00d50b00();
        puVar2 = *(void**)(this_ptr + 0xb0);
        *(void**)(this_ptr + 0xb0) = puVar1;
      }
      if (puVar2 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01f43950
// ============================================================
// Function: FUN_01f43950
// Address: 01f43950
// Size: 557 bytes
// Class: GNInfoController

void FUN_01f43950(void)

{
  int iVar1;
  void*puVar2;
  int64_t *this_ptr;
  int64_t local_90;
  char local_88;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x478))();
  if (local_38 == '\0') {
    if (local_40 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == 0) {
    return;
  }
  FUN_01d64cb0();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_01f43b66;
    FUN_00d50b00();
  }
  else if (local_40 == 0) goto LAB_01f43b66;
  iVar1 = FUN_01d5b230();
  if (0 < iVar1) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_02572358;
    (*g_02572370)();
    FUN_01f50d20();
    FUN_01f51370();
    FUN_01ede360(0,0,0);
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_00d21140();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5ef60(g_02422dc0,g_023dcce4);
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01f43b66:
  FUN_00d50b20();
  return;
}

