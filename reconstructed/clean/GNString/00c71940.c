// Function: FUN_00c71940
// Address: 00c71940
// Size: 707 bytes
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


int64_t * FUN_00c71940(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int64_t lVar5;
  char cVar6;
  int iVar7;
  int64_t *plVar8;
  int64_t *this_ptr;
  int64_t *local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_48;
  char local_40;
  
  plVar8 = (int64_t *)*this_ptr;
  FUN_00053ac0();
  if (plVar8 == (int64_t *)0x0) {
LAB_00c71980:
    plVar8 = &g_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar6 = FUN_00e85ea0();
    plVar8 = this_ptr;
    if (cVar6 == '\0') goto LAB_00c71980;
  }
  lVar5 = plVar8[1];
  if (((char)lVar5 != '\0') && (*plVar8 != 0)) {
    FUN_00d50b00();
LAB_00c719a7:
    plVar8 = (int64_t *)FUN_00d45790();
    if ((char)lVar5 != '\0') {
      FUN_00d50b20();
    }
    return plVar8;
  }
  if (*plVar8 != 0) goto LAB_00c719a7;
  plVar8 = (int64_t *)*this_ptr;
  if ((g_026fd0c0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
  if (plVar8 == (int64_t *)0x0) {
LAB_00c71a05:
    this_ptr = &g_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_00c71a05;
  }
  lVar5 = this_ptr[1];
  if (((char)lVar5 == '\0') || (*this_ptr == 0)) {
    if (*this_ptr != 0) goto LAB_00c71a32;
    bVar1 = true;
  }
  else {
    FUN_00d50b00();
LAB_00c71a32:
    FUN_00d498d0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_00ddb860();
    cVar6 = (**(code **)(*local_78 + 0x3f8))();
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    bVar1 = false;
    bVar2 = false;
    if (cVar6 != '\0') {
      bVar4 = false;
      bVar3 = false;
      goto joined_r0x00c71b02;
    }
  }
  bVar4 = true;
  bVar3 = true;
  local_80 = plVar8;
  bVar2 = bVar1;
joined_r0x00c71b02:
  if (((char)lVar5 != '\0') && (bVar3 = bVar4, !bVar2)) {
    FUN_00d50b20();
  }
  lVar5 = g_027720b0;
  if (!bVar3) {
    return local_80;
  }
  if (g_027720b0 != 0) {
    FUN_00d50b00();
  }
  FUN_00cc78b0();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  return (int64_t *)0x0;
}

