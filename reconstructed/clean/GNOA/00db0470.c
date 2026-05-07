// Function: FUN_00db0470
// Address: 00db0470
// Size: 538 bytes
// Class: GNOA

void FUN_00db0470(void*param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int iVar4;
  void*this_ptr;
  bool bVar5;
  int64_t local_98;
  char local_90;
  int local_58 [6];
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*(int64_t *)*param_1 + 0x4d8))();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00db04d3;
    }
  }
  else if (local_40 != (int64_t *)0x0) {
LAB_00db04d3:
    iVar4 = FUN_00daed40();
    lVar1 = g_02782eb0;
    if (iVar4 == -1) {
      if (g_02782eb0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    local_58[1] = 0;
    FUN_00ccd540(local_58,local_58 + 1);
    bVar5 = local_40 != (int64_t *)0x0;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = g_027815a8;
    if (bVar5 || local_58[0] != 4) {
      if (g_027815a8 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d46530();
    plVar3 = local_40;
    if (local_40 == (int64_t *)0x0) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*plVar2 + 0x368))();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 1) = 0;
    if ((!bVar5) && (plVar3 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    *this_ptr = plVar3;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
    return;
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}

