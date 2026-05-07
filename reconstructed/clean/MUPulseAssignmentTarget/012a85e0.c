// Function: FUN_012a85e0
// Address: 012a85e0
// Size: 533 bytes
// Class: MUPulseAssignmentTarget

void FUN_012a85e0(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  int64_t this_ptr;
  int64_t local_88;
  char local_80;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_012a8950();
  FUN_012a6b90();
  if (*(int64_t *)(this_ptr + 0xe8) != 0) {
    FUN_012ddc30();
    lVar2 = *(int64_t *)(this_ptr + 0xe8);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_012c5850();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0xe8) != 0) {
      *(void*)(this_ptr + 0xe8) = 0;
      FUN_00d50b20();
    }
  }
  iVar1 = *(int *)(*(int64_t *)(this_ptr + 0xf0) + 0xc);
  while (iVar1 != 0) {
    FUN_012ddc30();
    FUN_00d23340();
    local_38[0] = local_40[0];
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = local_38;
    }
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    FUN_012c5850();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23740();
    iVar1 = *(int *)(*(int64_t *)(this_ptr + 0xf0) + 0xc);
  }
  FUN_012ddc30();
  FUN_00d50b00();
  FUN_012c5710();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x25e) = 0;
  *(void*)(this_ptr + 0x260) = 0;
  *(void*)(this_ptr + 0x262) = 0;
  return;
}

