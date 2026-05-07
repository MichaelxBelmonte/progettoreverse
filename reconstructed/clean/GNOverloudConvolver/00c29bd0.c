// Function: FUN_00c29bd0
// Address: 00c29bd0
// Size: 1663 bytes
// Class: GNOverloudConvolver

uint64_t FUN_00c29bd0(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  uint32_t uVar5;
  int64_t *plVar6;
  int64_t *this_ptr;
  uint8_t local_108 [8];
  uint8_t local_100;
  int64_t local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int local_b4;
  int64_t local_58;
  char local_50;
  
  if (param_2 != 0) {
    plVar6 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar6 + 0x18))();
    FUN_01caea40();
    FUN_00d46530();
    lVar1 = g_0276cab0;
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
      lVar1 = g_0276cab0;
    }
    g_0276cab0 = lVar1;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    FUN_00d46300();
    if (local_58 != 0) {
      FUN_00d50b00();
    }
    plVar2 = g_0276cab8;
    if (g_0276cab8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    local_f8 = g_0276cac0;
    if (g_0276cac0 != 0) {
      FUN_00d50b00();
    }
    local_f0 = '\x01';
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_e0 = '\0';
    local_e8 = plVar6;
    FUN_00d40470(&local_e8,&stack0xffffffffffffff60,3,0);
    if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    plVar6 = g_0276cab8;
    if (g_0276cab8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_d8 = plVar6;
    local_d0 = '\x01';
    FUN_000175c0();
    cVar3 = FUN_00d45ad0();
    if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      FUN_01f4e930();
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar2 + 0x388))();
      FUN_00b7ace0();
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar2 + 0x368))();
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      iVar4 = FUN_01f4eb70();
      if (iVar4 == 0) {
        (**(code **)(*plVar2 + 0x380))();
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_c0 = '\0';
        local_c8 = plVar2;
        FUN_00b810f0();
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*this_ptr + 0x5d0))();
        iVar4 = FUN_01caea40();
        lVar1 = *(int64_t *)(*(int64_t *)(plVar2[0x19] + 0x10) + (int64_t)iVar4 * 8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        iVar4 = *(int *)(lVar1 + 0x28);
        FUN_00d50b20();
        local_b4 = iVar4;
        (**(code **)(*this_ptr + 0x5d0))();
        uVar5 = FUN_01caea40();
        (**(code **)(*this_ptr + 0x608))();
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        local_100 = 1;
        FUN_00c1f910(local_108,uVar5,local_b4 != 0);
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        FUN_01caea40();
        FUN_00c29780();
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b20();
          FUN_00d50b20();
        }
      }
      (**(code **)(*this_ptr + 0x600))();
      FUN_01d114f0();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return 1;
}

