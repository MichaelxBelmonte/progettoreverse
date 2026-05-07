// Function: FUN_019ab7b0
// Address: 019ab7b0
// Size: 1196 bytes
// Class: MUEditorElementView

void* FUN_019ab7b0(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  code *pcVar3;
  char cVar4;
  int64_t *plVar5;
  void*puVar6;
  uint64_t uVar7;
  void *pvVar8;
  void* in_ECX;
  code *pcVar9;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar10;
  int64_t local_98;
  int64_t local_90;
  int64_t local_88;
  uint64_t local_80;
  uint32_t local_78;
  uint64_t local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_40;
  char local_38;
  
  if (*(int *)(arg1[0x3e] + 0xc) == 1) {
    FUN_00d23310();
    local_40 = CONCAT71(local_40._1_7_,(char)local_90);
    plVar5 = &local_90;
    if ((char)local_90 == '\0') {
      plVar5 = &local_40;
    }
    *(void*)plVar5 = 0;
    if (((char)local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    local_60 = 0;
    if (((char)local_40 == '\0') && (local_98 != 0)) {
      FUN_00d50b00();
    }
    local_68 = local_98;
    local_60 = '\x01';
    cVar4 = (**(code **)(*arg1 + 0x9a0))();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d23310();
      local_58._0_1_ = (char)local_90;
      plVar5 = &local_90;
      if ((char)local_90 == '\0') {
        plVar5 = &local_58;
      }
      *(void*)plVar5 = 0;
      if (((char)local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      local_40 = CONCAT71(local_40._1_7_,(char)local_58 != '\0');
      plVar5 = &local_58;
      if ((char)local_58 == '\0') {
        plVar5 = &local_40;
      }
      *(void*)plVar5 = 0;
      if (((char)local_58 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      local_90._0_1_ = '\0';
      cVar4 = FUN_00d23d70();
      if (((char)local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        pvVar8 = _pthread_getspecific(in_ECX);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        (**(code **)(*arg1 + 0x9f0))();
        FUN_012e9900(param_1,param_2);
      }
      else {
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
      }
      if ((char)local_40 == '\0') {
        return this_ptr;
      }
      if (local_98 == 0) {
        return this_ptr;
      }
      FUN_00d50b20();
      return this_ptr;
    }
  }
  else if (*(int *)(arg1[0x3e] + 0xc) == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  (**(code **)(*arg1 + 0x9f0))();
  pcVar3 = g_02572370;
  lVar1 = arg1[0x3e];
  if (lVar1 == 0) {
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    local_90._0_1_ = 0;
    local_78 = 0;
    local_80 = 0;
    local_88 = lVar1;
    if (*(int *)(lVar1 + 0xc) < 1) {
      local_70 = 0;
      puVar6 = (void*)0x0;
    }
    else {
      lVar10 = 0;
      puVar6 = (void*)0x0;
      local_70 = 0;
      pcVar9 = g_02572370;
      do {
        local_40 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar10 * 8);
        local_38 = '\0';
        cVar4 = FUN_00d23d70();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (cVar4 == '\0') {
          if (puVar6 == (void*)0x0) {
            puVar6 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar6 = &g_02572358;
            uVar7 = (*pcVar3)();
            local_70 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
          }
          cVar4 = (**(code **)(*arg1 + 0x9a0))();
          if (cVar4 != '\0') {
            pvVar8 = _pthread_getspecific((void*)pcVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar7 = FUN_012e9900(param_1,param_2);
            lVar2 = CONCAT71(local_58._1_7_,(char)local_58);
            if (local_50 == '\0') {
              if (lVar2 != 0) {
                uVar7 = FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            local_38 = '\0';
            local_40 = lVar2;
            FUN_00d214d0(uVar7,*(void*)((int64_t)puVar6 + 0xc));
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (CONCAT71(local_58._1_7_,(char)local_58) != 0)) {
              FUN_00d50b20();
            }
          }
        }
        lVar10 = lVar10 + 1;
        local_80 = CONCAT44(local_80._4_4_,(int)lVar10);
      } while ((int)lVar10 < *(int *)(lVar1 + 0xc));
    }
    FUN_000be170();
    *(void*)(this_ptr + 1) = 0;
    if ((char)local_70 != '\0') goto LAB_019abbcd;
    if (puVar6 != (void*)0x0) {
      FUN_00d50b00();
      goto LAB_019abbcd;
    }
  }
  puVar6 = (void*)0x0;
LAB_019abbcd:
  *this_ptr = puVar6;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

