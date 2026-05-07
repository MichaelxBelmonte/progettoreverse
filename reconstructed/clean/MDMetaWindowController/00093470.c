// Function: FUN_00093470
// Address: 00093470
// Size: 613 bytes
// Class: MDMetaWindowController

void FUN_00093470(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  void*this_ptr;
  bool bVar3;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  plVar2 = g_02803768;
  if ((g_02803768 == (int64_t *)0x0) || (g_02803771 == '\0')) {
    FUN_00e8cb50();
    if (g_02803768 == (int64_t *)0x0) {
      plVar2 = (int64_t *)FUN_00e8fc40();
      FUN_00097310();
      (**(code **)(*plVar2 + 0x18))();
      bVar3 = g_02803768 == (int64_t *)0x0;
      g_02803768 = plVar2;
      if (bVar3) {
LAB_000934ff:
        if (g_02803770 == '\0') {
          g_02803770 = '\x01';
          FUN_00e8cb90();
        }
      }
      else {
        FUN_00d50b20();
        if (g_02803768 != (int64_t *)0x0) goto LAB_000934ff;
      }
      FUN_00d403d0();
      local_50 = g_02803768;
      local_48 = 0;
      if (g_02803768 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      lVar1 = g_026d8aa0;
      local_48 = '\x01';
      if (g_026d8aa0 != 0) {
        FUN_00d50b00();
      }
      local_90 = lVar1;
      local_88 = '\x01';
      local_80 = 0;
      local_78 = '\0';
      FUN_00d41430(&local_80,&local_90);
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      local_40 = g_02803768;
      local_38 = 0;
      if (g_02803768 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      lVar1 = g_026d8aa8;
      local_38 = '\x01';
      if (g_026d8aa8 != 0) {
        FUN_00d50b00();
      }
      local_70 = lVar1;
      local_68 = '\x01';
      local_60 = 0;
      local_58 = '\0';
      FUN_00d41430(&local_60,&local_70);
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      g_02803771 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_02803771 = '\x01';
      FUN_00e8cb70();
    }
    plVar2 = g_02803768;
    *(void*)(this_ptr + 1) = 0;
    if (plVar2 == (int64_t *)0x0) {
      plVar2 = (int64_t *)0x0;
      goto LAB_000936bb;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_000936bb:
  *this_ptr = plVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}

