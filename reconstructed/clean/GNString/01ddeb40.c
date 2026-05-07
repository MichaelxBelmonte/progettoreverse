// Function: FUN_01ddeb40
// Address: 01ddeb40
// Size: 1121 bytes
// Class: GNString
// String references:
//   "GNString"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01ddeb40(void)

{
  int64_t lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint64_t uVar5;
  undefined7 extraout_var;
  undefined7 uVar6;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  int64_t *plVar7;
  int64_t *this_ptr;
  int64_t *plVar8;
  int64_t *plVar9;
  uint64_t unaff_R15;
  bool bVar10;
  uint32_t uVar11;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  int64_t *local_58;
  int64_t *local_50;
  char local_48;
  byte local_40;
  undefined7 uStack_3f;
  uint32_t local_34;
  
  local_58 = (int64_t *)0x0;
  if ((int64_t *)this_ptr[0x40] == (int64_t *)0x0) {
    return;
  }
  if (g_028b8e88 != '\0') {
    return;
  }
  g_028b8e88 = 1;
  uVar5 = (**(code **)(*(int64_t *)this_ptr[0x40] + 0x980))();
  plVar7 = local_50;
  if (local_50 == (int64_t *)0x0) {
    uVar11 = (uint32_t)CONCAT71((int7)((uint64_t)unaff_R15 >> 8),1);
    plVar8 = (int64_t *)0x0;
    local_40 = 0;
    uStack_3f = 0;
  }
  else {
    plVar8 = plVar7;
    if (local_48 == '\0') {
      uVar5 = FUN_00d50b00();
      local_58 = plVar7;
      uVar11 = 0;
      uStack_3f = (undefined7)((uint64_t)uVar5 >> 8);
      local_40 = 1;
      if (local_48 != '\0') {
        if (local_50 == (int64_t *)0x0) goto LAB_01ddebe8;
        uVar5 = FUN_00d50b20();
        goto LAB_01ddebdc;
      }
    }
    else {
      local_58 = local_50;
LAB_01ddebdc:
      uStack_3f = (undefined7)((uint64_t)uVar5 >> 8);
    }
    local_40 = 1;
    uVar11 = 0;
  }
LAB_01ddebe8:
  lVar1 = *(int64_t *)
           (*(int64_t *)(this_ptr[0x2c] + 0x10) +
           (int64_t)*(int *)((int64_t)this_ptr + 0x20c) * 8);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  if (plVar8 == (int64_t *)0x0) {
    plVar8 = (int64_t *)0x0;
    local_70 = plVar7;
  }
  else {
    local_34 = uVar11;
    if ((g_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_026d5e58 = FUN_00d4fe50();
      g_026d5e40 = "GNString";
      g_026d5e48 = 0x40;
      g_026d5e50 = FUN_0005d920;
      g_026d5e60 = 0;
      ram_00000000026d5e68 = 0;
      g_026d5e70 = 0;
      ram_00000000026d5e78 = 0;
      g_026d5e80 = 0;
      ram_00000000026d5e88 = 0;
      g_026d5e90 = 0;
      ram_00000000026d5e98 = 0;
      g_026d5ea0 = 0;
      ram_00000000026d5ea8 = 0;
      g_026d5eb0 = 0;
      ram_00000000026d5eb8 = 0;
      g_026d5ec0 = 0;
      ram_00000000026d5ec8 = 0;
      g_026d5ed0 = 0;
      ram_00000000026d5ed8 = 0;
      g_026d5ee0 = 0;
      ram_00000000026d5ee8 = 0;
      g_026d5ef0 = 0;
      ram_00000000026d5ef8 = 0;
      g_026d5f00 = 0;
      ___cxa_guard_release();
    }
    (**(code **)(*plVar8 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar8 = local_58;
    plVar7 = local_58;
    if (cVar3 == '\0') {
      plVar7 = g_02802688;
    }
    local_70 = local_58;
    if (plVar7 != (int64_t *)0x0) {
      uVar11 = FUN_01db9fb0();
      plVar7 = local_50;
      if (local_50 == (int64_t *)0x0) {
        bVar2 = false;
        plVar7 = (int64_t *)0x0;
joined_r0x01ddedb8:
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          uVar11 = FUN_00d50b20();
        }
        if (plVar7 == (int64_t *)0x0) {
          plVar7 = (int64_t *)0x0;
          local_70 = plVar8;
          goto LAB_01ddeca2;
        }
      }
      else {
        if (local_48 == '\0') {
          uVar11 = FUN_00d50b00();
          bVar2 = true;
          goto joined_r0x01ddedb8;
        }
        bVar2 = true;
      }
      local_80 = plVar8;
      local_78 = '\0';
      uVar5 = (**(code **)(*plVar7 + 0x390))(uVar11,&local_80);
      plVar9 = local_50;
      uVar6 = (undefined7)((uint64_t)uVar5 >> 8);
      if (local_50 == plVar8) {
        plVar9 = plVar8;
        if (((byte)local_34 & plVar8 != (int64_t *)0x0) == 1) {
          if (local_48 != '\0') goto LAB_01ddee42;
          FUN_00d50b00();
          local_34 = CONCAT31(local_34._1_3_,1);
          uVar6 = extraout_var_01;
        }
        else {
          local_34 = CONCAT31(local_34._1_3_,local_40);
          uVar6 = uStack_3f;
        }
LAB_01ddeeb2:
        plVar8 = plVar9;
        if ((local_48 == '\0') || (local_50 == (int64_t *)0x0)) {
          local_40 = (byte)local_34;
          uStack_3f = uVar6;
        }
        else {
          uVar5 = FUN_00d50b20();
          local_40 = (byte)local_34;
          uStack_3f = (int7)((uint64_t)uVar5 >> 8);
        }
      }
      else {
        if (local_48 == '\0') {
          if (local_50 != (int64_t *)0x0) {
            uVar5 = FUN_00d50b00();
          }
          local_58 = plVar9;
          uVar6 = (undefined7)((uint64_t)uVar5 >> 8);
          local_34 = CONCAT31(local_34._1_3_,1);
          if ((local_40 & plVar8 != (int64_t *)0x0) == 1) {
            FUN_00d50b20();
            uVar6 = extraout_var_00;
          }
          goto LAB_01ddeeb2;
        }
        local_58 = local_50;
        bVar10 = plVar8 != (int64_t *)0x0;
        plVar8 = plVar9;
        if ((local_40 & bVar10) == 1) {
          FUN_00d50b20();
          uVar6 = extraout_var;
        }
LAB_01ddee42:
        local_48 = '\0';
        local_40 = 1;
        uStack_3f = uVar6;
      }
      local_70 = plVar8;
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01ddeca2;
    }
  }
  bVar2 = false;
  plVar7 = (int64_t *)0x0;
LAB_01ddeca2:
  local_68 = '\0';
  (**(code **)(*this_ptr + 0x978))
            (*(void*)((int64_t)this_ptr + 0x20c),(int)this_ptr[0x41]);
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e057f0();
  FUN_01e40eb0();
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x40] + 0x478))();
  }
  if (this_ptr[0x40] != 0) {
    this_ptr[0x40] = 0;
    FUN_00d50b20();
  }
  FUN_01dcf710();
  (**(code **)(*this_ptr + 0x618))();
  g_028b8e88 = 0;
  FUN_01e42250();
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != 0) && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

