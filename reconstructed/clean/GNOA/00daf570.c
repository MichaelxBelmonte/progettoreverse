// Function: FUN_00daf570
// Address: 00daf570
// Size: 951 bytes
// Class: GNOA
// String references:
//   "Cannot open stream"

void FUN_00daf570(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar6;
  int64_t local_f0;
  char local_e8;
  int64_t local_90;
  char local_88;
  int64_t local_48;
  char local_40;
  
  FUN_00c8e830();
  lVar3 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if (lVar3 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    FUN_00c92170();
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    *plVar5 = (int64_t)&g_0256d868;
    plVar5[2] = 0;
    *(void*)((int64_t)plVar5 + 0x1c) = 0;
    *(void*)((int64_t)plVar5 + 0x24) = 0;
    *(void*)((int64_t)plVar5 + 0x2c) = 0;
    (*g_0256d880)();
    FUN_00cccfe0();
    FUN_00d50b20();
    iVar4 = FUN_00daed40();
    lVar3 = g_02782eb0;
    if (iVar4 == -1) {
      if (g_02782eb0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    uVar6 = FUN_00daa940();
    lVar3 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != 0) && (uVar6 = FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
        uVar6 = FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    lVar2 = g_027815a8;
    if (lVar3 == 0) {
      if (g_027815a8 != 0) {
        uVar6 = FUN_00d50b00();
      }
      uVar6 = FUN_00cc7b40(uVar6,g_025908a0);
      if (lVar2 != 0) {
        uVar6 = FUN_00d50b20();
      }
    }
    local_90 = lVar3;
    local_88 = '\0';
    (**(code **)(*arg1 + 0x618))(uVar6,&local_90);
    lVar2 = local_48;
    if (local_48 == 0) {
      bVar1 = false;
    }
    else if (local_40 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
      bVar1 = true;
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar5 + 0x368))();
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 1) = 0;
    if ((!bVar1) && (lVar2 != 0)) {
      FUN_00d50b00();
    }
    *this_ptr = lVar2;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
  }
  return;
}

