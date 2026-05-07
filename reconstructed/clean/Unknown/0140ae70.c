// Function: FUN_0140ae70
// Address: 0140ae70
// Size: 3408 bytes
// Class: Unknown

void FUN_0140ae70(int *param_1,int64_t *param_2)

{
  int64_t *plVar1;
  bool bVar2;
  code *pcVar3;
  int64_t *plVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int64_t lVar10;
  void*puVar11;
  int64_t *arg1;
  void*this_ptr;
  uint uVar12;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  uint64_t local_80;
  int local_78;
  int64_t *local_68;
  int64_t *local_58;
  char local_50;
  int local_40;
  
  plVar4 = local_58;
  if (*arg1 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  if (param_1 != (int *)0x0) {
    *param_1 = 0;
  }
  iVar7 = FUN_00d8c7a0();
  FUN_00d95590();
  local_d8 = local_98;
  local_d0 = 0;
  if (local_90 == '\0') {
    if (local_98 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_90 = '\0';
  }
  local_d0 = '\x01';
  FUN_00d97d10(2,&local_d8);
  plVar1 = (int64_t *)*arg1;
  if (plVar1 == local_58) {
    if (((char)arg1[1] != '\0') || (local_58 == (int64_t *)0x0)) goto LAB_0140afcb;
    if (local_50 == '\0') {
      FUN_00d50b00();
      goto LAB_0140afc2;
    }
LAB_0140af86:
    *(void*)(arg1 + 1) = 1;
    local_50 = '\0';
  }
  else {
    lVar10 = arg1[1];
    if (local_50 != '\0') {
      *arg1 = (int64_t)local_58;
      if (((char)lVar10 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0140af86;
    }
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    *arg1 = (int64_t)local_58;
    if (((char)lVar10 != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_0140afc2:
    *(void*)(arg1 + 1) = 1;
LAB_0140afcb:
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  iVar8 = FUN_00d8c7a0();
  if ((iVar8 != iVar7) && (param_1 != (int *)0x0)) {
    iVar8 = FUN_00d8c7a0();
    *param_1 = *param_1 + (iVar7 - iVar8);
  }
  iVar7 = FUN_00d8c7a0();
  FUN_0140a740();
  plVar1 = (int64_t *)*arg1;
  if (plVar1 == local_58) {
    if (((char)arg1[1] == '\0') && (local_58 != (int64_t *)0x0)) {
      if (local_50 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_0140b10d;
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar10 = arg1[1];
    if (local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)local_58;
      if (((char)lVar10 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      *arg1 = (int64_t)local_58;
      if (((char)lVar10 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_0140b10d:
    local_68 = arg1 + 1;
    *(void*)local_68 = 1;
  }
  iVar8 = FUN_00d8c7a0();
  if ((iVar8 != iVar7) && (param_1 != (int *)0x0)) {
    iVar8 = FUN_00d8c7a0();
    *param_1 = *param_1 + (iVar7 - iVar8);
  }
  FUN_00ddb860();
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00d95590();
  local_c0 = 0;
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_c0 = '\x01';
  local_c8 = local_58;
  bVar5 = (**(code **)(*local_58 + 0x3e0))();
  if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar5 & param_1 != (int *)0x0) != 0) {
    iVar7 = FUN_00d8c7a0();
    *param_1 = *param_1 + iVar7;
  }
  local_a0 = '\0';
  local_a8 = (int64_t *)0x0;
  cVar6 = (**(code **)(*local_58 + 0x3d8))();
  if (cVar6 == '\0') {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    goto LAB_0140bb6b;
  }
  FUN_00d8a110();
  cVar6 = local_a0;
  plVar1 = local_a8;
  if (local_a8 == local_58) {
    if ((local_a0 != '\0') || (local_58 == (int64_t *)0x0)) goto LAB_0140b382;
    if (local_50 == '\0') {
      FUN_00d50b00();
      goto LAB_0140b37b;
    }
LAB_0140b342:
    local_a0 = '\x01';
  }
  else {
    if (local_50 != '\0') {
      local_a8 = local_58;
      if ((local_a0 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0140b342;
    }
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_a8 = local_58;
    if ((cVar6 != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_0140b37b:
    local_a0 = '\x01';
LAB_0140b382:
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00ddb860();
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_e0 = '\0';
  local_e8 = 0;
  FUN_01407c20();
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_0140b498;
    }
LAB_0140b57a:
    FUN_0177eb20();
    if (local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_0140b747;
      }
    }
    else if (local_58 != (int64_t *)0x0) {
LAB_0140b747:
      pcVar3 = g_025795c0;
      if (0 < *(int *)((int64_t)local_58 + 0xc)) {
        uVar12 = 0;
        do {
          if (*param_2 != *(int64_t *)(local_58[2] + (uint64_t)uVar12 * 8)) {
            FUN_01407c20();
            lVar10 = local_98;
            if (local_90 == '\0') {
              if (local_98 != 0) {
                FUN_00d50b00();
                goto LAB_0140b820;
              }
            }
            else if (local_98 != 0) {
LAB_0140b820:
              local_90 = '\0';
              local_98 = 0;
              local_88 = lVar10;
              local_80 = 0xffffffff;
              local_78 = 0;
              while( true ) {
                lVar10 = (int64_t)(int)local_80;
                iVar8 = (int)local_80 + 1;
                local_80 = CONCAT44(local_80._4_4_,iVar8);
                iVar7 = *(int *)(local_88 + 0xc);
                if (iVar7 <= iVar8) break;
                local_98 = *(int64_t *)(*(int64_t *)(local_88 + 0x10) + 8 + lVar10 * 8);
                cVar6 = (**(code **)(*plVar4 + 1000))(0,&local_e8);
                if (cVar6 != '\0') {
                  if (param_1 != (int *)0x0) {
                    iVar9 = FUN_00d8c7a0();
                    *param_1 = *param_1 + iVar9;
                  }
                  puVar11 = (void*)FUN_00e8fc40();
                  FUN_00d4ff40();
                  *puVar11 = &g_025795a8;
                  (*pcVar3)();
                  FUN_01407c20();
                  lVar10 = *(int64_t *)
                            (*(int64_t *)(local_b8 + 0x10) +
                            ((int64_t)local_78 + (int64_t)(int)local_80) * 8);
                  if (lVar10 != 0) {
                    FUN_00d50b00();
                  }
                  FUN_00d8dbf0();
                  if (lVar10 != 0) {
                    FUN_00d50b20();
                  }
                  if (local_b0 != '\0') {
                    FUN_00d50b20();
                  }
                  lVar10 = g_027c0b20;
                  local_b0 = '\0';
                  local_b8 = 0;
                  if (g_027c0b20 != 0) {
                    FUN_00d50b00();
                  }
                  cVar6 = (**(code **)(*plVar4 + 0x3e0))();
                  if (lVar10 != 0) {
                    FUN_00d50b20();
                  }
                  if ((cVar6 != '\0') && (FUN_00d8dbf0(), param_1 != (int *)0x0)) {
                    iVar9 = FUN_00d8c7a0();
                    *param_1 = *param_1 + iVar9;
                  }
                  *this_ptr = puVar11;
                  *(void*)(this_ptr + 1) = 1;
                  if ((local_b0 != '\0') && (local_b8 != 0)) {
                    FUN_00d50b20();
                  }
                  break;
                }
                if (local_80._4_4_ != 0) {
                  if (local_80._4_4_ < 1) {
                    iVar7 = -local_80._4_4_;
                  }
                  else {
                    local_80 = CONCAT44(local_80._4_4_,(int)local_80 - local_80._4_4_);
                    FUN_00d23690();
                    local_78 = local_78 + local_80._4_4_;
                    iVar7 = 0;
                  }
                  local_80 = CONCAT44(iVar7,(int)local_80);
                }
              }
              FUN_00018280();
              FUN_00d50b20();
              if (iVar8 < iVar7) {
                FUN_01781450();
                bVar2 = true;
                goto LAB_0140bb34;
              }
            }
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < *(int *)((int64_t)local_58 + 0xc));
      }
      FUN_01781450();
      bVar2 = false;
LAB_0140bb34:
      FUN_00d50b20();
      if (bVar2) goto LAB_0140bb51;
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    if (local_58 == (int64_t *)0x0) goto LAB_0140b57a;
LAB_0140b498:
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_40 = -1;
    do {
      lVar10 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)((int64_t)plVar4 + 0xc) <= local_40) {
        FUN_00018280();
        FUN_00d50b20();
        goto LAB_0140b57a;
      }
      local_58 = *(int64_t **)(plVar4[2] + 8 + lVar10 * 8);
      cVar6 = (**(code **)(*plVar4 + 1000))(0,&local_e8);
    } while (cVar6 == '\0');
    if (param_1 != (int *)0x0) {
      iVar7 = FUN_00d8c7a0();
      *param_1 = *param_1 + iVar7;
    }
    puVar11 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar11 = &g_025795a8;
    (*g_025795c0)();
    FUN_00d8dbf0();
    lVar10 = g_027c0b20;
    local_90 = '\0';
    local_98 = 0;
    if (g_027c0b20 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar4 + 0x3e0))();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    if ((cVar6 != '\0') && (FUN_00d8dbf0(), param_1 != (int *)0x0)) {
      iVar7 = FUN_00d8c7a0();
      *param_1 = *param_1 + iVar7;
    }
    *this_ptr = puVar11;
    *(void*)(this_ptr + 1) = 1;
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    FUN_00018280();
    FUN_00d50b20();
  }
LAB_0140bb51:
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
LAB_0140bb6b:
  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

