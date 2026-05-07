// Function: FUN_01f54830
// Address: 01f54830
// Size: 806 bytes
// Class: Unknown
// String references:
//   "format:ico type:%d reserved:%d"
//   "reading image %d faied"

void FUN_01f54830(void)

{
  int64_t lVar1;
  void*puVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t this_ptr;
  uint32_t uVar5;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  uint8_t local_54 [4];
  void*local_50;
  uint local_48;
  short local_44;
  int64_t *local_40;
  short local_34;
  short local_32;
  
  FUN_01ea3610();
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar3 = (int64_t)&g_0256d868;
  plVar3[2] = 0;
  *(void*)((int64_t)plVar3 + 0x1c) = 0;
  *(void*)((int64_t)plVar3 + 0x24) = 0;
  *(void*)((int64_t)plVar3 + 0x2c) = 0;
  local_40 = plVar3;
  (*g_0256d880)();
  lVar1 = *(int64_t *)(this_ptr + 0x10);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00cccfe0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00ccce80();
  FUN_00ccd330(local_54,&local_34);
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_54,&local_32);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_54,(short *)(this_ptr + 0x20));
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  uVar5 = (**(code **)(*local_40 + 0x368))();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = g_027fe2e8;
  if ((local_32 != 1) || (local_34 != 0)) {
    if (g_027fe2e8 != 0) {
      FUN_00d50b00();
    }
    local_48 = 2;
    local_50 = &g_026bb968;
    local_44 = local_32;
    uVar5 = FUN_00cc7b40(&g_026bb968,&local_50);
    if (lVar1 != 0) {
      uVar5 = FUN_00d50b20();
    }
  }
  if (0 < *(short *)(this_ptr + 0x20)) {
    iVar4 = 0;
    do {
      uVar5 = FUN_01f54d20(uVar5,iVar4);
      puVar2 = local_50;
      lVar1 = g_027fe2e8;
      if ((char)local_48 == '\0') {
        if (local_50 == (void*)0x0) goto LAB_01f54af0;
        FUN_00d50b00();
LAB_01f54abd:
        local_48 = local_48 & 0xffffff00;
        local_50 = puVar2;
        FUN_00d21140();
        if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
          FUN_00d50b20();
        }
        uVar5 = FUN_00d50b20();
      }
      else {
        if (local_50 != (void*)0x0) goto LAB_01f54abd;
LAB_01f54af0:
        if (g_027fe2e8 != 0) {
          uVar5 = FUN_00d50b00();
        }
        local_48 = 1;
        local_50 = &g_026bb9a0;
        local_44 = (short)iVar4;
        uVar5 = FUN_00cc7b40(uVar5,&local_50);
        if (lVar1 != 0) {
          uVar5 = FUN_00d50b20();
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(short *)(this_ptr + 0x20));
    if (local_40 == (int64_t *)0x0) {
      return;
    }
  }
  FUN_00d50b20();
  return;
}

