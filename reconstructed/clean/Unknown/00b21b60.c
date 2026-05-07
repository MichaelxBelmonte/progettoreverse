// Function: FUN_00b21b60
// Address: 00b21b60
// Size: 636 bytes
// Class: Unknown

void FUN_00b21b60(void)

{
  double dVar1;
  double dVar2;
  int64_t lVar3;
  int iVar4;
  void*puVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  void*this_ptr;
  uint64_t in_R9;
  double dVar9;
  int64_t local_60;
  char local_58;
  int local_48;
  uint local_34;
  
  iVar4 = _AudioObjectGetPropertyDataSize(0,0,&local_34,in_R9,0x73666d61,0);
  if (iVar4 == 0) {
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &g_02572358;
    (*g_02572370)();
    if (local_34 != 0) {
      lVar6 = FUN_00e83010();
      iVar4 = _AudioObjectGetPropertyData(0,0,&local_34,lVar6);
      if (iVar4 != 0) {
        FUN_00e83070();
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        FUN_00d50b20();
        return;
      }
      if (0x37 < local_34) {
        uVar8 = 0;
        do {
          lVar3 = local_60;
          lVar7 = uVar8 * 0x38;
          if ((*(int *)(lVar6 + 8 + lVar7) == 0x6c70636d) &&
             ((*(byte *)(lVar6 + 0xc + lVar7) & 0xb) != 0)) {
            dVar1 = *(double *)(lVar6 + 0x28 + lVar7);
            dVar2 = *(double *)(lVar6 + 0x30 + lVar7);
            FUN_00b19680();
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00d50b00();
                goto LAB_00b21d12;
              }
            }
            else if (local_60 != 0) {
LAB_00b21d12:
              local_58 = '\0';
              local_60 = 0;
              local_48 = -1;
              while( true ) {
                lVar7 = (int64_t)local_48;
                local_48 = local_48 + 1;
                if (*(int *)(lVar3 + 0xc) <= local_48) break;
                local_60 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + 8 + lVar7 * 8);
                dVar9 = (double)FUN_00d45bc0();
                if ((dVar1 <= dVar9) && (dVar9 <= dVar2)) {
                  FUN_00d235a0();
                }
              }
              FUN_00136b80();
              FUN_00d50b20();
            }
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 != (uint64_t)(local_34 >> 3) / 7);
      }
      FUN_00e83070();
    }
    *this_ptr = puVar5;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  return;
}

