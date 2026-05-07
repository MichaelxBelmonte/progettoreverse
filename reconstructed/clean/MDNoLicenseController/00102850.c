// Function: FUN_00102850
// Address: 00102850
// Size: 1071 bytes
// Class: MDNoLicenseController

void FUN_00102850(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t this_ptr;
  uint64_t uVar4;
  double dVar5;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  FUN_01e534b0();
  FUN_01f27fe0();
  FUN_0027edc0();
  FUN_00e00960();
  lVar2 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int64_t **)(this_ptr + 0x70) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x640))();
    uVar4 = (**(code **)(*local_78 + 0x370))();
    FUN_01d44a40(uVar4,1);
    local_68 = local_38;
    local_60 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_60 = '\x01';
    FUN_01e12b60();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    dVar5 = (double)FUN_00c93980();
    lVar1 = g_026e1098;
    if (dVar5 < 0.0) {
      if (g_026e1098 != 0) {
        FUN_00d50b00();
      }
      lVar3 = g_026e10a0;
      if (g_026e10a0 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar3;
      local_d0 = '\x01';
      local_c8 = 0;
      local_c0 = '\0';
      FUN_00d31230(&local_c8,&local_d8);
      local_58 = local_38;
      local_50 = 0;
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      local_50 = '\x01';
      FUN_01e125e0();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  if (*(int64_t *)(this_ptr + 0x78) == 0) {
    if (lVar2 == 0) {
      return;
    }
  }
  else {
    dVar5 = (double)FUN_00c93980();
    lVar2 = g_026e1098;
    if (dVar5 < 0.0) {
      if (g_026e1098 != 0) {
        FUN_00d50b00();
      }
      lVar1 = g_026e10a8;
      local_b8 = lVar2;
      local_b0 = '\x01';
      if (g_026e10a8 != 0) {
        FUN_00d50b00();
      }
      local_a8 = lVar1;
      local_a0 = '\x01';
      local_98 = 0;
      local_90 = '\0';
      FUN_00d31230(&local_98,&local_a8);
      local_48 = local_38;
      local_40 = 0;
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      local_40 = '\x01';
      FUN_01e125e0();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b20();
  return;
}

