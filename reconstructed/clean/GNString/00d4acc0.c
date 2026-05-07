// Function: FUN_00d4acc0
// Address: 00d4acc0
// Size: 547 bytes
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


void FUN_00d4acc0(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t **pplVar5;
  uint32_t uVar6;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar4 = *(int64_t *)(arg1 + 0x40);
  if (lVar4 == 0) {
    uVar6 = FUN_00d30620();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        uVar6 = FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          uVar6 = FUN_00d50b20();
        }
        goto LAB_00d4ad47;
      }
    }
    else if (local_40 != (int64_t *)0x0) {
LAB_00d4ad47:
      lVar4 = g_0277dce8;
      if (g_0277dce8 != 0) {
        uVar6 = FUN_00d50b00();
      }
      local_50 = lVar4;
      local_48 = '\x01';
      pplVar5 = &local_40;
      FUN_00d31060(uVar6,&local_50);
      plVar1 = local_40;
      if ((g_026fd0c0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
      if (plVar1 == (int64_t *)0x0) {
LAB_00d4adad:
        pplVar5 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        if (cVar2 == '\0') goto LAB_00d4adad;
      }
      plVar1 = *pplVar5;
      if (*(char *)(pplVar5 + 1) == '\0') {
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar5 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        *this_ptr = (int64_t)plVar1;
        *(void*)(this_ptr + 1) = 1;
        FUN_00d50b20();
        return;
      }
      FUN_00d50b20();
    }
    lVar4 = g_02774da0;
    *(void*)(this_ptr + 1) = 0;
    if (lVar4 == 0) {
      lVar4 = 0;
      goto LAB_00d4acea;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_00d4acea:
  *this_ptr = lVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}

