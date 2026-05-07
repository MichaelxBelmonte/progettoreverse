// Function: FUN_0140a320
// Address: 0140a320
// Size: 742 bytes
// Class: Unknown

int64_t * FUN_0140a320(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  int iVar4;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_58;
  char local_50;
  int local_40;
  
  lVar2 = local_58;
  FUN_01780120();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_0140a386;
    }
  }
  else if (local_58 != 0) {
LAB_0140a386:
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar3 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_40) break;
      lVar1 = *(int64_t *)(lVar2 + 0x10);
      local_58 = *(int64_t *)(lVar1 + 8 + lVar3 * 8);
      local_88 = *arg1;
      local_80 = '\0';
      FUN_01408160(lVar1,&local_88);
      if ((local_90 == '\0') && (local_98 != 0)) {
        FUN_00d50b00();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (local_98 != 0) {
        *this_ptr = local_98;
        *(void*)(this_ptr + 1) = 1;
        FUN_00018280();
        FUN_00d50b20();
        return this_ptr;
      }
    }
    FUN_00018280();
    FUN_00d50b20();
  }
  FUN_01780120();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_0140a5ce;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_0140a5ce;
  iVar4 = 0;
  while (iVar4 < *(int *)(local_58 + 0xc)) {
    local_78 = *arg1;
    local_70 = '\0';
    FUN_01408cd0();
    if ((local_90 == '\0') && (local_98 != 0)) {
      FUN_00d50b00();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    iVar4 = iVar4 + 1;
    if (local_98 != 0) {
      *this_ptr = local_98;
      *(void*)(this_ptr + 1) = 1;
      FUN_00018280();
      FUN_00d50b20();
      return this_ptr;
    }
  }
  FUN_00018280();
  FUN_00d50b20();
LAB_0140a5ce:
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}

