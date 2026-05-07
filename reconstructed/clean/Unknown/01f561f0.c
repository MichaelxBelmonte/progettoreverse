// Function: FUN_01f561f0
// Address: 01f561f0
// Size: 616 bytes
// Class: Unknown

void FUN_01f561f0(uint param_1,int64_t *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int64_t local_60;
  char local_58;
  uint8_t local_4c [4];
  byte local_31;
  
  uVar1 = param_1;
  if ((param_1 & 0x1f) != 0) {
    uVar1 = param_1 + 0x1f;
    if (-1 < (int)param_1) {
      uVar1 = param_1;
    }
    uVar1 = (uVar1 & 0xffffffe0) + 0x20;
  }
  uVar2 = uVar1 + 7;
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  uVar3 = param_1 + 7;
  if (-1 < (int)param_1) {
    uVar3 = param_1;
  }
  if ((0 < param_3) && (7 < (int)uVar1)) {
    iVar4 = 0;
    iVar6 = 0;
    do {
      iVar5 = 0;
      do {
        FUN_00ccd300(local_4c,&local_31);
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (iVar5 < (int)uVar3 >> 3) {
          if ((char)local_31 < '\0') {
            *(void*)
             (*(int64_t *)(*param_2 + 0x10) + 3 +
             (int64_t)
             (int)(((~(iVar6 / (int)param_1) + param_3) * param_1 + iVar6 % (int)param_1) * 4)) = 0;
          }
          if ((local_31 & 0x40) != 0) {
            *(void*)
             (*(int64_t *)(*param_2 + 0x10) + 3 +
             (int64_t)
             (int)(((~((iVar6 + 1) / (int)param_1) + param_3) * param_1 + (iVar6 + 1) % (int)param_1
                   ) * 4)) = 0;
          }
          if ((local_31 & 0x20) != 0) {
            *(void*)
             (*(int64_t *)(*param_2 + 0x10) + 3 +
             (int64_t)
             (int)(((~((iVar6 + 2) / (int)param_1) + param_3) * param_1 + (iVar6 + 2) % (int)param_1
                   ) * 4)) = 0;
          }
          if ((local_31 & 0x10) != 0) {
            *(void*)
             (*(int64_t *)(*param_2 + 0x10) + 3 +
             (int64_t)
             (int)(((~((iVar6 + 3) / (int)param_1) + param_3) * param_1 + (iVar6 + 3) % (int)param_1
                   ) * 4)) = 0;
          }
          if ((local_31 & 8) != 0) {
            *(void*)
             (*(int64_t *)(*param_2 + 0x10) + 3 +
             (int64_t)
             (int)(((~((iVar6 + 4) / (int)param_1) + param_3) * param_1 + (iVar6 + 4) % (int)param_1
                   ) * 4)) = 0;
          }
          if ((local_31 & 4) != 0) {
            *(void*)
             (*(int64_t *)(*param_2 + 0x10) + 3 +
             (int64_t)
             (int)(((~((iVar6 + 5) / (int)param_1) + param_3) * param_1 + (iVar6 + 5) % (int)param_1
                   ) * 4)) = 0;
          }
          if ((local_31 & 2) != 0) {
            *(void*)
             (*(int64_t *)(*param_2 + 0x10) + 3 +
             (int64_t)
             (int)(((~((iVar6 + 6) / (int)param_1) + param_3) * param_1 + (iVar6 + 6) % (int)param_1
                   ) * 4)) = 0;
          }
          if ((local_31 & 1) != 0) {
            *(void*)
             (*(int64_t *)(*param_2 + 0x10) + 3 +
             (int64_t)
             (int)(((~((iVar6 + 7) / (int)param_1) + param_3) * param_1 + (iVar6 + 7) % (int)param_1
                   ) * 4)) = 0;
          }
          iVar6 = iVar6 + 8;
        }
        iVar5 = iVar5 + 1;
      } while ((int)uVar2 >> 3 != iVar5);
      iVar4 = iVar4 + 1;
    } while (iVar4 != param_3);
  }
  return;
}

