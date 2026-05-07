// Function: FUN_01d7c790
// Address: 01d7c790
// Size: 871 bytes
// Class: GNMultipleValue

void FUN_01d7c790(void)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  char cVar4;
  int64_t *this_ptr;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  FUN_00d3ecc0();
  lVar1 = g_027f1660;
  if (g_027f1660 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*local_38 + 0x50))();
  cVar4 = '\x01';
  if (cVar3 == '\0') {
    FUN_00d3ecc0();
    lVar2 = g_027f0e40;
    if (g_027f0e40 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*local_48 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    FUN_00d3ecc0();
    lVar1 = g_027f0e30;
    if (g_027f0e30 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*local_38 + 0x50))();
    cVar4 = '\x01';
    if (cVar3 == '\0') {
      FUN_00d3ecc0();
      lVar2 = g_027f0e38;
      if (g_027f0e38 != 0) {
        FUN_00d50b00();
      }
      cVar4 = (**(code **)(*local_48 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((cVar4 == '\0') || (this_ptr[0x48] == 0)) goto LAB_01d7ca60;
    FUN_00d3ecf0();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38 == this_ptr) goto LAB_01d7ca60;
    FUN_00d3ecf0();
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    cVar3 = FUN_01d7c190();
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') goto LAB_01d7ca60;
  }
  else {
    if (this_ptr[0x48] == 0) goto LAB_01d7ca60;
    FUN_00d3ecf0();
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    cVar3 = FUN_01d7c190();
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') goto LAB_01d7ca60;
  }
  FUN_01d7c320();
LAB_01d7ca60:
  FUN_00d530a0();
  return;
}

