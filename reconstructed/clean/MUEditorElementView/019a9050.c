// Function: FUN_019a9050
// Address: 019a9050
// Size: 813 bytes
// Class: MUEditorElementView

void* FUN_019a9050(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  void *pvVar6;
  void*puVar7;
  void*puVar8;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_90;
  int64_t local_88;
  int64_t local_80;
  uint64_t local_78;
  uint32_t local_70;
  int64_t local_68;
  char local_60;
  void*local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  iVar4 = *(int *)(arg1[0x3d] + 0xc);
  if (iVar4 == 1) {
    FUN_00d23310();
    local_40 = CONCAT71(local_40._1_7_,(char)local_88);
    plVar5 = &local_88;
    if ((char)local_88 == '\0') {
      plVar5 = &local_40;
    }
    *(void*)plVar5 = 0;
    if (((char)local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    local_48 = 0;
    if (((char)local_40 == '\0') && (local_90 != 0)) {
      FUN_00d50b00();
    }
    local_50 = local_90;
    local_48 = '\x01';
    cVar3 = (**(code **)(*arg1 + 0x9a0))();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      FUN_00d23310();
      plVar5 = &local_88;
      if ((char)local_88 == '\0') {
        plVar5 = &local_40;
      }
      local_40 = CONCAT71(local_40._1_7_,(char)local_88);
      *(void*)plVar5 = 0;
      if (((char)local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      if ((char)local_40 == '\0') {
        return this_ptr;
      }
      if (local_90 == 0) {
        return this_ptr;
      }
      FUN_00d50b20();
      return this_ptr;
    }
    iVar4 = *(int *)(arg1[0x3d] + 0xc);
  }
  if (iVar4 < 2) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    puVar7 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar8 = &g_02572358;
    *puVar7 = &g_02572358;
    local_58 = puVar7;
    (*g_02572370)();
    lVar1 = arg1[0x3d];
    if (lVar1 != 0) {
      local_88._0_1_ = 0;
      local_70 = 0;
      local_78 = 0;
      local_80 = lVar1;
      if (0 < *(int *)(lVar1 + 0xc)) {
        iVar4 = 0;
        do {
          cVar3 = (**(code **)(*arg1 + 0x9a0))();
          if (cVar3 != '\0') {
            pvVar6 = _pthread_getspecific((void*)puVar8);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e5ae0();
            lVar2 = local_68;
            if (local_60 == '\0') {
              if (local_68 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_60 = '\0';
            }
            local_40 = lVar2;
            local_38 = '\0';
            FUN_00d214d0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
          }
          iVar4 = iVar4 + 1;
          local_78 = CONCAT44(local_78._4_4_,iVar4);
        } while (iVar4 < *(int *)(lVar1 + 0xc));
      }
      FUN_000be170();
    }
    *this_ptr = local_58;
    *(void*)(this_ptr + 1) = 1;
  }
  return this_ptr;
}

