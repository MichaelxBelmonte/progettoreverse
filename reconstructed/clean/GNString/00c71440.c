// Function: FUN_00c71440
// Address: 00c71440
// Size: 507 bytes
// Class: GNString
// String references:
//   "GNString"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint32_t FUN_00c71440(void)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  uint32_t uVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *this_ptr;
  
  plVar6 = (int64_t *)*this_ptr;
  FUN_00053ac0();
  if (plVar6 == (int64_t *)0x0) {
LAB_00c71480:
    plVar6 = &g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar6 = this_ptr;
    if (cVar3 == '\0') goto LAB_00c71480;
  }
  lVar1 = plVar6[1];
  if (((char)lVar1 != '\0') && (*plVar6 != 0)) {
    FUN_00d50b00();
LAB_00c714a7:
    uVar4 = FUN_00d460c0();
    if ((char)lVar1 != '\0') {
      FUN_00d50b20();
    }
    return uVar4;
  }
  if (*plVar6 != 0) goto LAB_00c714a7;
  plVar6 = (int64_t *)*this_ptr;
  if ((g_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026d5e58 = FUN_00d4fe50();
    g_026d5e40 = "GNString";
    g_026d5e48 = 0x40;
    g_026d5e50 = FUN_0005d920;
    g_026d5e60 = 0;
    ram_00000000026d5e68 = 0;
    g_026d5e70 = 0;
    ram_00000000026d5e78 = 0;
    g_026d5e80 = 0;
    ram_00000000026d5e88 = 0;
    g_026d5e90 = 0;
    ram_00000000026d5e98 = 0;
    g_026d5ea0 = 0;
    ram_00000000026d5ea8 = 0;
    g_026d5eb0 = 0;
    ram_00000000026d5eb8 = 0;
    g_026d5ec0 = 0;
    ram_00000000026d5ec8 = 0;
    g_026d5ed0 = 0;
    ram_00000000026d5ed8 = 0;
    g_026d5ee0 = 0;
    ram_00000000026d5ee8 = 0;
    g_026d5ef0 = 0;
    ram_00000000026d5ef8 = 0;
    g_026d5f00 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_00c7150b;
  }
  this_ptr = &g_02802688;
LAB_00c7150b:
  lVar2 = g_027720b0;
  lVar1 = this_ptr[1];
  if (((char)lVar1 == '\0') || (*this_ptr == 0)) {
    if (*this_ptr == 0) {
      if (g_027720b0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar2 == 0) {
        return 0;
      }
      FUN_00d50b20();
      return 0;
    }
  }
  else {
    FUN_00d50b00();
  }
  uVar4 = FUN_00d8d560();
  if ((char)lVar1 == '\0') {
    return uVar4;
  }
  FUN_00d50b20();
  return uVar4;
}

