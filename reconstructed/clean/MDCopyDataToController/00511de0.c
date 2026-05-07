// Function: FUN_00511de0
// Address: 00511de0
// Size: 615 bytes
// Class: MDCopyDataToController

void FUN_00511de0(void)

{
  int64_t lVar1;
  int unaff_ESI;
  int64_t this_ptr;
  int64_t local_48;
  char local_40;
  
  (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0xe20))();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      goto LAB_00511e3a;
    }
  }
  else if (local_48 != 0) {
LAB_00511e3a:
    if (*(int *)(local_48 + 0xc) != 0) goto joined_r0x00511eda;
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x9b0))();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
joined_r0x00511eda:
  if (unaff_ESI == 0) {
    if (*(char *)(this_ptr + 0x80) == '\0') {
      lVar1 = *(int64_t *)(this_ptr + 0x78);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_012fd540(*(void*)(this_ptr + 0x94),1,*(void*)(this_ptr + 0x95),
                   *(void*)(this_ptr + 0x96));
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      lVar1 = *(int64_t *)(this_ptr + 0x78);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01300180(*(void*)(this_ptr + 0x94),1,*(void*)(this_ptr + 0x95),
                   *(void*)(this_ptr + 0x96));
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  if (*(int64_t *)(this_ptr + 0x70) != 0) {
    *(void*)(this_ptr + 0x70) = 0;
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return;
}

