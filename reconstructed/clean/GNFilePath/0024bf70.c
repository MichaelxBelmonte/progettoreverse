// Function: FUN_0024bf70
// Address: 0024bf70
// Size: 1922 bytes
// Class: GNFilePath

uint64_t FUN_0024bf70(uint64_t param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int64_t *plVar3;
  void *pvVar4;
  void* pVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  char unaff_SIL;
  int64_t this_ptr;
  int64_t *plVar9;
  bool bVar10;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_64;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48 [8];
  int64_t *local_40;
  char local_38;
  
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_40 + 0x450))();
  if (cVar1 == '\0') {
    if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
      local_58 = '\0';
      local_60 = 0;
    }
    else {
      FUN_006f3f00();
    }
    cVar1 = FUN_00751ba0();
    bVar10 = true;
    if (cVar1 != '\0') {
      if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
        bVar10 = false;
      }
      else {
        (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
        bVar10 = local_50 != (int64_t *)0x0;
        if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar10 = (bool)(bVar10 ^ 1);
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    bVar10 = false;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar10) {
LAB_0024c048:
    uVar8 = 0;
    goto LAB_0024c6b2;
  }
  local_64 = unaff_SIL;
  if (*(int64_t *)(this_ptr + 0x98) != 0) {
    FUN_00d50b00();
    iVar2 = FUN_01c446f0();
    FUN_00d50b20();
    if (iVar2 == 0) goto LAB_0024c048;
  }
  plVar7 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar7))();
  plVar9 = local_50;
  local_60 = CONCAT71(local_60._1_7_,local_48[0]);
  plVar6 = &local_60;
  plVar3 = (int64_t *)local_48;
  if (local_48[0] == '\0') {
    plVar3 = plVar6;
  }
  *(char *)plVar3 = '\0';
  if ((local_48[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pVar5 = (void*)plVar6;
  if (plVar9 == (int64_t *)0x0) {
    plVar9 = *(int64_t **)(this_ptr + 0x90);
LAB_0024c0db:
    FUN_00d50b00();
  }
  else if ((char)local_60 == '\0') goto LAB_0024c0db;
  (**(code **)(*plVar9 + 0xe10))();
  local_70 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  iVar2 = *(int *)((int64_t)local_70 + 0xc);
  if ((iVar2 != 0) && (param_2 != '\0')) {
    if (*(int64_t **)(this_ptr + 0x90) != (int64_t *)0x0) {
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      plVar6 = local_50;
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar6 != (int64_t *)0x0) {
        FUN_00d23310();
        plVar7 = local_50;
        plVar6 = &local_60;
        plVar9 = (int64_t *)local_48;
        if (local_48[0] == '\0') {
          plVar9 = plVar6;
        }
        local_60 = CONCAT71(local_60._1_7_,local_48[0]);
        *(char *)plVar9 = '\0';
        if ((local_48[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pVar5 = (void*)plVar6;
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        plVar6 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if (((char)local_60 != '\0') && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar7 = local_70;
        if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
          local_48[0] = '\0';
          local_50 = (int64_t *)0x0;
        }
        else {
          FUN_006f3f00();
        }
        local_f0 = plVar7;
        local_e8 = '\0';
        if (local_64 == '\0') {
          local_38 = '\0';
          local_40 = (int64_t *)0x0;
LAB_0024c432:
          plVar7 = (int64_t *)0x0;
        }
        else {
          pvVar4 = _pthread_getspecific(pVar5);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0132d610();
          plVar7 = local_40;
          local_88 = 0;
          if (local_38 == '\0') {
            if (local_40 == (int64_t *)0x0) goto LAB_0024c432;
            FUN_00d50b00();
          }
          else {
            local_38 = '\0';
          }
        }
        local_88 = '\x01';
        local_90 = plVar7;
        FUN_00789100(1,&local_f0,&local_90);
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar6 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        goto LAB_0024c6a3;
      }
    }
    if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
      local_48[0] = '\0';
      local_50 = (int64_t *)0x0;
LAB_0024c2c8:
      local_58 = '\0';
      local_60 = 0;
    }
    else {
      FUN_006f3f00();
      if (*(int64_t *)(this_ptr + 0x1c0) == 0) goto LAB_0024c2c8;
      FUN_006f3f00();
    }
    FUN_00757c60();
    local_a0 = local_40;
    local_98 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_98 = '\x01';
    local_e0 = local_70;
    local_d8 = '\0';
    if (local_64 == '\0') {
      local_a8 = '\0';
      local_b0 = (int64_t *)0x0;
LAB_0024c375:
      plVar7 = (int64_t *)0x0;
    }
    else {
      if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
        local_b8 = '\0';
        local_c0 = 0;
      }
      else {
        FUN_006f3f00();
      }
      FUN_00757c60();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      plVar7 = local_b0;
      local_78 = 0;
      if (local_a8 == '\0') {
        if (local_b0 == (int64_t *)0x0) goto LAB_0024c375;
        FUN_00d50b00();
      }
      else {
        local_a8 = '\0';
      }
    }
    local_78 = '\x01';
    local_80 = plVar7;
    FUN_0076fba0(1,&local_e0,&local_80);
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_64 != '\0') {
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_0024c6a3:
  uVar8 = CONCAT71((int7)((uint64_t)plVar7 >> 8),iVar2 != 0);
  FUN_00d50b20();
LAB_0024c6b2:
  return uVar8 & 0xffffffff;
}

