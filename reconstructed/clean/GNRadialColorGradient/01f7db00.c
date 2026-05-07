// Function: FUN_01f7db00
// Address: 01f7db00
// Size: 601 bytes
// Class: GNRadialColorGradient

void FUN_01f7db00(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_30;
  char local_28;
  
  FUN_01e534b0();
  FUN_01f27fe0();
  FUN_01f2eb50();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_002edd50();
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  FUN_01d2a8f0();
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x70) != 0) {
    FUN_01e40eb0();
    lVar1 = *(int64_t *)(this_ptr + 0x90);
    lVar2 = lVar1;
    if (lVar1 != local_30) {
      lVar2 = local_30;
      if (local_28 == '\0') {
        if (local_30 == 0) {
          lVar2 = 0;
          goto LAB_01f7dc41;
        }
        FUN_00d50b00();
        lVar1 = *(int64_t *)(this_ptr + 0x90);
        *(int64_t *)(this_ptr + 0x90) = local_30;
      }
      else {
        local_28 = '\0';
LAB_01f7dc41:
        *(int64_t *)(this_ptr + 0x90) = lVar2;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar2 = local_30;
      }
    }
    if ((local_28 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x478))();
  }
  if (*(int64_t *)(this_ptr + 0x80) == 0) {
    return;
  }
  FUN_01e40eb0();
  lVar1 = *(int64_t *)(this_ptr + 0x98);
  lVar2 = lVar1;
  if (lVar1 == local_30) goto LAB_01f7dd23;
  lVar2 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar2 = 0;
      goto LAB_01f7dcdc;
    }
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0x98);
    *(int64_t *)(this_ptr + 0x98) = local_30;
  }
  else {
    local_28 = '\0';
LAB_01f7dcdc:
    *(int64_t *)(this_ptr + 0x98) = lVar2;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar2 = local_30;
  }
LAB_01f7dd23:
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x478))();
  return;
}

