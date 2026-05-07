// Function: FUN_01d04130
// Address: 01d04130
// Size: 757 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"
//   "GNColor"

void FUN_01d04130(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *arg1;
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
LAB_01d04180:
    plVar6 = &g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = arg1;
    if (cVar4 == '\0') goto LAB_01d04180;
  }
  lVar2 = plVar6[1];
  if (((char)lVar2 == '\0') || (*plVar6 == 0)) {
    if (*plVar6 == 0) goto LAB_01d0426c;
  }
  else {
    FUN_00d50b00();
  }
  FUN_00e987e0();
  lVar1 = *arg1;
  if (lVar1 == local_50) {
    if (((char)arg1[1] == '\0') && (local_50 != 0)) {
      if (local_48 != '\0') goto LAB_01d0420d;
      FUN_00d50b00();
      goto LAB_01d04243;
    }
LAB_01d0424a:
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar3 = arg1[1];
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      *arg1 = local_50;
      if (((char)lVar3 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_01d04243:
      local_40 = arg1 + 1;
      *(void*)local_40 = 1;
      goto LAB_01d0424a;
    }
    *arg1 = local_50;
    if (((char)lVar3 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_01d0420d:
    local_40 = arg1 + 1;
    *(void*)local_40 = 1;
  }
  if ((char)lVar2 != '\0') {
    FUN_00d50b20();
  }
LAB_01d0426c:
  plVar6 = (int64_t *)*arg1;
  if ((g_026e9ce0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026fd0e8 = FUN_00d4fe50();
    g_026fd0d0 = "GNColor";
    g_026fd0d8 = 0x30;
    g_026fd0e0 = FUN_001b8c30;
    g_026fd0f0 = 0;
    ram_00000000026fd0f8 = 0;
    g_026fd100 = 0;
    ram_00000000026fd108 = 0;
    g_026fd110 = 0;
    ram_00000000026fd118 = 0;
    g_026fd120 = 0;
    ram_00000000026fd128 = 0;
    g_026fd130 = 0;
    ram_00000000026fd138 = 0;
    g_026fd140 = 0;
    ram_00000000026fd148 = 0;
    g_026fd150 = 0;
    ram_00000000026fd158 = 0;
    g_026fd160 = 0;
    ram_00000000026fd168 = 0;
    g_026fd170 = 0;
    ram_00000000026fd178 = 0;
    g_026fd180 = 0;
    ram_00000000026fd188 = 0;
    g_026fd190 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    FUN_00e85ea0();
  }
  FUN_01d03810();
  return;
}

