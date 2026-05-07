// Function: FUN_01e9eb30
// Address: 01e9eb30
// Size: 809 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"
//   "GNFont"

void FUN_01e9eb30(void)

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
LAB_01e9eb80:
    plVar6 = &g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = arg1;
    if (cVar4 == '\0') goto LAB_01e9eb80;
  }
  lVar2 = plVar6[1];
  if (((char)lVar2 == '\0') || (*plVar6 == 0)) {
    if (*plVar6 == 0) goto LAB_01e9ec6c;
  }
  else {
    FUN_00d50b00();
  }
  FUN_00e987e0();
  lVar1 = *arg1;
  if (lVar1 == local_50) {
    if (((char)arg1[1] != '\0') || (local_50 == 0)) goto LAB_01e9ec4a;
    if (local_48 == '\0') {
      FUN_00d50b00();
      goto LAB_01e9ec43;
    }
LAB_01e9ec0d:
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
      goto LAB_01e9ec0d;
    }
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    *arg1 = local_50;
    if (((char)lVar3 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_01e9ec43:
    local_40 = arg1 + 1;
    *(void*)local_40 = 1;
LAB_01e9ec4a:
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((char)lVar2 != '\0') {
    FUN_00d50b20();
  }
LAB_01e9ec6c:
  plVar6 = (int64_t *)*arg1;
  if ((g_026ecc58 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026ecba8 = FUN_00d4fe50();
    g_026ecb90 = "GNFont";
    g_026ecb98 = 0x48;
    g_026ecba0 = FUN_001c9760;
    g_026ecbb0 = 0;
    ram_00000000026ecbb8 = 0;
    g_026ecbc0 = 0;
    g_026ecc38 = 0;
    ram_00000000026ecc40 = 0;
    g_026ecc48 = 0;
    g_026ecc4a = 1;
    g_026ecbc8 = 0;
    ram_00000000026ecbd0 = 0;
    g_026ecbd8 = 0;
    ram_00000000026ecbe0 = 0;
    g_026ecbe8 = 0;
    ram_00000000026ecbf0 = 0;
    g_026ecbf8 = 0;
    ram_00000000026ecc00 = 0;
    g_026ecc08 = 0;
    ram_00000000026ecc10 = 0;
    g_026ecc18 = 0;
    ram_00000000026ecc20 = 0;
    g_026ecc28 = 0;
    ram_00000000026ecc30 = 0;
    g_026ecc53 = 0;
    g_026ecc4b = 0;
    ___cxa_guard_release();
  }
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    FUN_00e85ea0();
  }
  (**(code **)(*this_ptr + 0xab8))();
  return;
}

