// Function: FUN_00dc25a0
// Address: 00dc25a0
// Size: 1347 bytes
// Class: GNValue

void FUN_00dc25a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  short sVar4;
  char *pcVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int iVar8;
  int64_t *arg1;
  void*this_ptr;
  int64_t *local_d0;
  uint8_t local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_60;
  char local_58 [8];
  int64_t *local_50;
  int local_48;
  int iStack_44;
  int local_40;
  char local_38 [8];
  
  plVar2 = local_60;
  local_c0 = *arg1;
  if (local_c0 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  local_b8 = '\0';
  FUN_00d6c240();
  if (local_58[0] == '\0') {
    if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
       (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58[0] = '\0';
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  FUN_00dc5330();
  if ((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00ca1380();
  local_38[0] = local_58[0];
  pcVar5 = local_58;
  if (local_58[0] == '\0') {
    pcVar5 = local_38;
  }
  *pcVar5 = '\0';
  if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_38[0] == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_00dc270b;
    }
  }
  else if (local_60 != (int64_t *)0x0) {
LAB_00dc270b:
    local_58[0] = '\0';
    local_60 = (int64_t *)0x0;
    local_50 = plVar2;
    local_48 = -1;
    iStack_44 = 0;
    local_40 = 0;
    while( true ) {
      lVar1 = g_02783b38;
      lVar6 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)((int64_t)local_50 + 0xc) <= local_48) break;
      local_60 = *(int64_t **)(local_50[2] + 8 + lVar6 * 8);
      if (g_02783b38 != 0) {
        FUN_00d50b00();
      }
      local_b0 = lVar1;
      local_a8 = '\x01';
      cVar3 = (**(code **)(*local_60 + 0x50))();
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if (cVar3 != '\0') {
        iVar8 = local_40 + local_48;
        FUN_00018280();
        goto joined_r0x00dc27fb;
      }
      if (iStack_44 != 0) {
        if (iStack_44 < 1) {
          iStack_44 = -iStack_44;
        }
        else {
          local_48 = local_48 - iStack_44;
          FUN_00d23690();
          local_40 = local_40 + iStack_44;
          iStack_44 = 0;
        }
      }
    }
    iVar8 = -1;
    FUN_00018280();
joined_r0x00dc27fb:
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (iVar8 != -1) {
      FUN_00c9fe20();
      pcVar5 = local_58;
      if (local_58[0] == '\0') {
        pcVar5 = local_38;
      }
      local_38[0] = local_58[0];
      *pcVar5 = '\0';
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar1 = *(int64_t *)(local_60[2] + (int64_t)iVar8 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      iVar8 = FUN_00d8c7a0();
      lVar6 = g_02783b68;
      if (iVar8 < 7) {
LAB_00dc29a0:
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
      }
      else {
        if (g_02783b68 != 0) {
          FUN_00d50b00();
        }
        local_a0 = lVar6;
        local_98 = '\x01';
        cVar3 = FUN_00d90870();
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((cVar3 == '\0') || (sVar4 = FUN_00d8cbc0(), sVar4 != 0x3a)) goto LAB_00dc29a0;
        FUN_00d8f140();
        if ((((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) &&
            (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar7 = (int64_t *)FUN_00e8fc40();
        FUN_00022d50();
        (**(code **)(*plVar7 + 0x18))();
        FUN_00d6be50();
        if (local_58[0] == '\0') {
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b00();
            if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_00dc2a0c;
          }
        }
        else if (local_60 != (int64_t *)0x0) {
LAB_00dc2a0c:
          local_58[0] = '\0';
          iStack_44 = 0;
          local_40 = 0;
          local_50 = local_60;
          for (lVar6 = 0; local_48 = (int)lVar6, local_48 < *(int *)((int64_t)local_60 + 0xc);
              lVar6 = lVar6 + 1) {
            local_c8 = 0;
            local_d0 = plVar7;
            FUN_00dc6010(local_60,&local_d0,param_3,param_4,0,
                         *(void*)(local_60[2] + lVar6 * 8),0);
          }
          FUN_00bea5a0();
          FUN_00d50b20();
        }
        *this_ptr = plVar7;
        *(void*)(this_ptr + 1) = 1;
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      goto LAB_00dc29c0;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_00dc29c0:
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

