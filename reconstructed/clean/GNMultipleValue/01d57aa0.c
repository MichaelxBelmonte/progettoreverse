// Function: FUN_01d57aa0
// Address: 01d57aa0
// Size: 835 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"
//   "GNImage"

void FUN_01d57aa0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  
  plVar6 = (int64_t *)*arg1;
  if ((g_0277a3a0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026d3c38 = FUN_00d4fe50();
    g_026d3c20 = "GNMultipleValue";
    g_026d3c28 = 0x18;
    g_026d3c30 = FUN_00050c70;
    g_026d3c40 = 0;
    ram_00000000026d3c48 = 0;
    g_026d3c50 = 0;
    ram_00000000026d3c58 = 0;
    g_026d3c60 = 0;
    ram_00000000026d3c68 = 0;
    g_026d3c70 = 0;
    ram_00000000026d3c78 = 0;
    g_026d3c80 = 0;
    ram_00000000026d3c88 = 0;
    g_026d3c90 = 0;
    ram_00000000026d3c98 = 0;
    g_026d3ca0 = 0;
    ram_00000000026d3ca8 = 0;
    g_026d3cb0 = 0;
    ram_00000000026d3cb8 = 0;
    g_026d3cc0 = 0;
    ram_00000000026d3cc8 = 0;
    g_026d3cd0 = 0;
    ram_00000000026d3cd8 = 0;
    g_026d3ce0 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_01d57af0:
    plVar6 = &g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = arg1;
    if (cVar4 == '\0') goto LAB_01d57af0;
  }
  lVar2 = plVar6[1];
  if (((char)lVar2 == '\0') || (*plVar6 == 0)) {
    if (*plVar6 != 0) goto LAB_01d57b1c;
  }
  else {
    FUN_00d50b00();
LAB_01d57b1c:
    FUN_00e987e0();
    lVar1 = *arg1;
    if (lVar1 == local_50) {
      if (((char)arg1[1] != '\0') || (local_50 == 0)) goto LAB_01d57bba;
      if (local_48 == '\0') {
        FUN_00d50b00();
        goto LAB_01d57bb3;
      }
LAB_01d57b7d:
      local_40 = arg1 + 1;
      *(void*)local_40 = 1;
    }
    else {
      lVar3 = arg1[1];
      if (local_48 != '\0') {
        *arg1 = local_50;
        if (((char)lVar3 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01d57b7d;
      }
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      *arg1 = local_50;
      if (((char)lVar3 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_01d57bb3:
      local_40 = arg1 + 1;
      *(void*)local_40 = 1;
LAB_01d57bba:
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((char)lVar2 != '\0') {
      FUN_00d50b20();
    }
  }
  plVar6 = (int64_t *)*arg1;
  if ((g_026ed470 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_027f7318 = FUN_00d4fe50();
    g_027f7300 = "GNImage";
    g_027f7308 = 0x68;
    g_027f7310 = FUN_001cdcc0;
    g_027f7320 = 0;
    ram_00000000027f7328 = 0;
    g_027f7330 = 0;
    ram_00000000027f7338 = 0;
    g_027f7340 = 0;
    ram_00000000027f7348 = 0;
    g_027f7350 = 0;
    ram_00000000027f7358 = 0;
    g_027f7360 = 0;
    ram_00000000027f7368 = 0;
    g_027f7370 = 0;
    ram_00000000027f7378 = 0;
    g_027f7380 = 0;
    ram_00000000027f7388 = 0;
    g_027f7390 = 0;
    ram_00000000027f7398 = 0;
    g_027f73a0 = 0;
    ram_00000000027f73a8 = 0;
    g_027f73b0 = 0;
    ram_00000000027f73b8 = 0;
    g_027f73c0 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_01d57c15:
    plVar6 = &g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = arg1;
    if (cVar4 == '\0') goto LAB_01d57c15;
  }
  if (*plVar6 == 0) {
    if (this_ptr[0x39] == 0) {
      return;
    }
    this_ptr[0x39] = 0;
  }
  else {
    lVar2 = *arg1;
    lVar1 = this_ptr[0x39];
    if (lVar2 == lVar1) {
      return;
    }
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    this_ptr[0x39] = lVar2;
    if (lVar1 == 0) goto LAB_01d57c74;
  }
  FUN_00d50b20();
LAB_01d57c74:
  (**(code **)(*this_ptr + 0x620))();
  return;
}

