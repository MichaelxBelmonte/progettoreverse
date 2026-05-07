// Function: FUN_01f7c3a0
// Address: 01f7c3a0
// Size: 607 bytes
// Class: GNRadialColorGradient
// String references:
//   "GNRadialColorGradient"

void FUN_01f7c3a0(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t *arg1;
  void*this_ptr;
  uint32_t uVar7;
  int64_t local_50;
  char local_48;
  
  if ((g_026f0bb8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_026f0b08 = FUN_001b9d20();
    g_026f0af0 = "GNRadialColorGradient";
    g_026f0af8 = 0x48;
    g_026f0b00 = FUN_001e8f20;
    g_026f0b10 = 0;
    ram_00000000026f0b18 = 0;
    g_026f0b20 = 0;
    ram_00000000026f0b28 = 0;
    g_026f0b30 = 0;
    ram_00000000026f0b38 = 0;
    g_026f0b40 = 0;
    ram_00000000026f0b48 = 0;
    g_026f0b50 = 0;
    ram_00000000026f0b58 = 0;
    g_026f0b60 = 0;
    ram_00000000026f0b68 = 0;
    g_026f0b70 = 0;
    ram_00000000026f0b78 = 0;
    g_026f0b80 = 0;
    ram_00000000026f0b88 = 0;
    g_026f0b90 = 0;
    ram_00000000026f0b98 = 0;
    g_026f0ba0 = 0;
    ram_00000000026f0ba8 = 0;
    g_026f0bb0 = 0;
    ___cxa_guard_release();
  }
  if (arg1 != (int64_t *)0x0) {
    (**(code **)(*arg1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') {
      plVar4 = (int64_t *)&stack0xffffffffffffffc0;
      goto LAB_01f7c3fc;
    }
  }
  plVar4 = &g_02802688;
LAB_01f7c3fc:
  lVar5 = *plVar4;
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_001b9f00();
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  else {
    *plVar4 = (int64_t)&g_026c0290;
    (*g_026c02a8)();
  }
  if (arg1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_01f7bcc0();
  if (arg1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  lVar5 = plVar4[6];
  if (0 < *(int *)(lVar5 + 0xc)) {
    uVar6 = 0;
    do {
      plVar1 = *(int64_t **)(*(int64_t *)(lVar5 + 0x10) + uVar6 * 8);
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      uVar7 = (**(code **)(*plVar1 + 0x368))();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          uVar7 = FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d233f0(uVar7,uVar6 & 0xffffffff);
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      uVar6 = uVar6 + 1;
      lVar5 = plVar4[6];
    } while ((int64_t)uVar6 < (int64_t)*(int *)(lVar5 + 0xc));
  }
  *this_ptr = plVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}

