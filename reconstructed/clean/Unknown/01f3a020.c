// Function: FUN_01f3a020
// Address: 01f3a020
// Size: 876 bytes
// Class: Unknown

void FUN_01f3a020(void)

{
  int64_t lVar1;
  byte bVar2;
  int64_t lVar3;
  int64_t this_ptr;
  int64_t *local_58;
  char local_50;
  int64_t local_40;
  char local_38;
  
  FUN_01da4890();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_01caf660();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_01cae990();
  if (local_40 == 0) {
    bVar2 = 0;
  }
  else {
    FUN_01cae990();
    lVar1 = g_026de878;
    if (g_026de878 != 0) {
      FUN_00d50b00();
    }
    bVar2 = (**(code **)(*local_58 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar2 = bVar2 ^ 1;
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (bVar2 == 0) goto LAB_01f3a355;
  FUN_01cae990();
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_01cafe60();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 == 0) {
    if (*(int64_t *)(this_ptr + 0xb8) != 0) {
      *(void*)(this_ptr + 0xb8) = 0;
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0xc0) != 0) {
      *(void*)(this_ptr + 0xc0) = 0;
      FUN_00d50b20();
    }
    goto LAB_01f3a355;
  }
  FUN_01caf470();
  lVar1 = *(int64_t *)(this_ptr + 0xb8);
  lVar3 = lVar1;
  if (lVar1 != local_40) {
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar3 = 0;
        goto LAB_01f3a1ff;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0xb8);
      *(int64_t *)(this_ptr + 0xb8) = local_40;
    }
    else {
      local_38 = '\0';
LAB_01f3a1ff:
      *(int64_t *)(this_ptr + 0xb8) = lVar3;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar3 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  FUN_01caf440();
  lVar1 = *(int64_t *)(this_ptr + 0xc0);
  lVar3 = lVar1;
  if (lVar1 != local_40) {
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar3 = 0;
        goto LAB_01f3a2f6;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0xc0);
      *(int64_t *)(this_ptr + 0xc0) = local_40;
    }
    else {
      local_38 = '\0';
LAB_01f3a2f6:
      *(int64_t *)(this_ptr + 0xc0) = lVar3;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar3 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01f3a355:
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}

