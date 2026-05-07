// Function: FUN_00d9c300
// Address: 00d9c300
// Size: 546 bytes
// Class: Unknown

float FUN_00d9c300(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  float fVar6;
  int64_t local_40;
  
  iVar3 = *(int *)(*this_ptr + 0x20);
  if (iVar3 == -1) {
    if (*(int64_t *)(*this_ptr + 0x10) == 0) {
      iVar3 = 0;
      lVar5 = *arg1;
      iVar4 = *(int *)(lVar5 + 0x20);
      goto joined_r0x00d9c3eb;
    }
    iVar3 = FUN_00e7dde0();
    lVar5 = *arg1;
    iVar4 = *(int *)(lVar5 + 0x20);
    if (iVar4 == -1) goto LAB_00d9c3f1;
LAB_00d9c338:
    if (iVar4 <= iVar3) goto LAB_00d9c40f;
LAB_00d9c341:
    iVar3 = iVar4;
    local_40 = *arg1;
    bVar2 = false;
    if ((local_40 != 0) && ((char)arg1[1] != '\0')) {
      bVar2 = true;
      FUN_00d50b00();
    }
    lVar5 = *this_ptr;
    bVar1 = true;
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else if ((char)this_ptr[1] != '\0') {
      FUN_00d50b00();
      bVar1 = false;
    }
    if (iVar3 == 0) goto LAB_00d9c4d8;
LAB_00d9c47f:
    iVar4 = FUN_00d9bcd0();
    fVar6 = (float)(iVar3 - iVar4) / (float)iVar3;
    if (bVar1 || lVar5 == 0) goto LAB_00d9c4f8;
  }
  else {
    lVar5 = *arg1;
    iVar4 = *(int *)(lVar5 + 0x20);
joined_r0x00d9c3eb:
    if (iVar4 != -1) goto LAB_00d9c338;
LAB_00d9c3f1:
    if (*(int64_t *)(lVar5 + 0x10) != 0) {
      iVar4 = FUN_00e7dde0();
      if (iVar4 <= iVar3) goto LAB_00d9c40f;
      goto LAB_00d9c341;
    }
    iVar4 = 0;
    if (iVar3 < 0) goto LAB_00d9c341;
LAB_00d9c40f:
    local_40 = *this_ptr;
    bVar2 = false;
    if ((local_40 != 0) && ((char)this_ptr[1] != '\0')) {
      bVar2 = true;
      FUN_00d50b00();
    }
    lVar5 = *arg1;
    if (lVar5 == 0) {
      lVar5 = 0;
joined_r0x00d9c4d6:
      bVar1 = true;
    }
    else {
      if ((char)arg1[1] == '\0') goto joined_r0x00d9c4d6;
      FUN_00d50b00();
      bVar1 = false;
    }
    if (iVar3 != 0) goto LAB_00d9c47f;
LAB_00d9c4d8:
    fVar6 = g_02390124;
    if (bVar1 || lVar5 == 0) goto LAB_00d9c4f8;
  }
  FUN_00d50b20();
LAB_00d9c4f8:
  if ((bVar2) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return fVar6;
}

