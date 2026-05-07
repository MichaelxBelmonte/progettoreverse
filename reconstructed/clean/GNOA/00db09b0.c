// Function: FUN_00db09b0
// Address: 00db09b0
// Size: 584 bytes
// Class: GNOA

void FUN_00db09b0(void*param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  int64_t local_a8;
  char local_a0;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  
  (**(code **)(*(int64_t *)*param_1 + 0x4d8))();
  plVar5 = local_48;
  if (local_40 == '\0') {
    if (local_48 == (int64_t *)0x0) goto LAB_00db0a82;
    FUN_00d50b00();
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == (int64_t *)0x0) {
LAB_00db0a82:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  local_40 = '\0';
  local_48 = (int64_t *)0x0;
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
  FUN_00ccd8f0(iVar4,&local_48);
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_00db0b16;
    FUN_00d50b00();
LAB_00db0b02:
    FUN_00cc76c0();
    bVar2 = false;
    bVar1 = false;
    lVar3 = g_027815a8;
  }
  else {
    if (local_58 != 0) goto LAB_00db0b02;
LAB_00db0b16:
    bVar2 = true;
    bVar1 = true;
    lVar3 = g_027815a8;
  }
  g_027815a8 = lVar3;
  if (local_48 == (int64_t *)0x0) {
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    bVar1 = bVar2;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar5 + 0x368))();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  plVar5 = local_48;
  *(void*)(this_ptr + 1) = 0;
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
      *this_ptr = (int64_t)plVar5;
      *(void*)(this_ptr + 1) = 1;
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00db0bab;
    }
    plVar5 = (int64_t *)0x0;
  }
  *this_ptr = (int64_t)plVar5;
  *(void*)(this_ptr + 1) = 1;
LAB_00db0bab:
  FUN_00d50b20();
  return;
}

