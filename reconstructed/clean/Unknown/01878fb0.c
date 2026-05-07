// Function: FUN_01878fb0
// Address: 01878fb0
// Size: 549 bytes
// Class: Unknown

void FUN_01878fb0(uint32_t param_1,uint64_t param_2,void*param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  float fVar6;
  uint64_t local_80;
  uint8_t local_78;
  int64_t local_40;
  char local_38;
  
  if (*arg1 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  iVar2 = FUN_01715480();
  FUN_018da560();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_80 = *param_3;
  local_78 = 0;
  FUN_0185df90(1,param_1,&local_80);
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_01716260();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  iVar3 = *(int *)(local_40 + 0x18);
  if (iVar3 < 4) {
    *this_ptr = local_40;
    *(void*)(this_ptr + 1) = 1;
    if (local_40 == 0) goto LAB_01879165;
  }
  else {
    lVar5 = 0;
    fVar6 = g_02394274;
    do {
      iVar4 = *(int *)(*(int64_t *)(local_40 + 0x10) + lVar5 * 4);
      pfVar1 = (float *)(*(int64_t *)(local_40 + 0x10) + (int64_t)iVar4 * 4);
      if (*pfVar1 <= fVar6 && fVar6 != *pfVar1) {
        FUN_017163c0((uint64_t)((int64_t)(iVar4 + (0xc - iVar2)) * 0x2aaaaaab) >> 0x3f);
        iVar3 = *(int *)(local_40 + 0x18);
        fVar6 = g_02394274;
      }
      lVar5 = lVar5 + 1;
      iVar4 = iVar3 + 3;
      if (-1 < iVar3) {
        iVar4 = iVar3;
      }
    } while (lVar5 < iVar4 >> 2);
    *this_ptr = local_40;
    *(void*)(this_ptr + 1) = 1;
  }
  FUN_00d50b20();
LAB_01879165:
  FUN_00d50b20();
  return;
}

