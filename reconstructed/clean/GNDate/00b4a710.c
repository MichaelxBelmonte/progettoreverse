// Function: FUN_00b4a710
// Address: 00b4a710
// Size: 687 bytes
// Class: GNDate

char FUN_00b4a710(uint64_t param_1)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  int iVar4;
  int unaff_ESI;
  int64_t this_ptr;
  bool bVar5;
  uint64_t local_90;
  uint8_t local_88;
  uint64_t local_80;
  uint8_t local_78;
  uint64_t local_50;
  uint8_t local_48;
  uint64_t local_40;
  uint8_t local_38;
  uint64_t local_30;
  uint8_t local_28;
  
  iVar1 = *(int *)(this_ptr + 0x50);
  if (unaff_ESI != 0) {
    FUN_00b45250(param_1,0x73747473);
    FUN_00b45190(param_1,0);
    if (*(int *)(this_ptr + 0x50) == 0) {
      FUN_00ccdf50(param_1,1);
      bVar5 = true;
      if (local_40 == 0) {
        iVar2 = *(int *)(*(int64_t *)(this_ptr + 0x58) + 0x18);
        iVar4 = iVar2 + 3;
        if (-1 < iVar2) {
          iVar4 = iVar2;
        }
        FUN_00ccdf50(param_1,iVar4 >> 2);
        bVar5 = true;
        if (local_30 == 0) {
          FUN_00ccdf50(param_1,0x1000);
          bVar5 = local_50 != 0;
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_28 != '\0') && (local_30 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_027653a0;
      if (bVar5) {
        if (g_027653a0 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_00ccdf50(param_1,2);
      bVar5 = true;
      if (local_40 == 0) {
        iVar2 = *(int *)(*(int64_t *)(this_ptr + 0x58) + 0x18);
        iVar4 = iVar2 + 3;
        if (-1 < iVar2) {
          iVar4 = iVar2;
        }
        FUN_00ccdf50(param_1,(iVar4 >> 2) + -1);
        bVar5 = true;
        if (local_30 == 0) {
          FUN_00ccdf50(param_1,0x1000);
          bVar5 = true;
          if (local_50 == 0) {
            FUN_00ccdf50(param_1,1);
            bVar5 = true;
            if (local_80 == 0) {
              FUN_00ccdf50(param_1,*(void*)(this_ptr + 0x50));
              bVar5 = local_90 != 0;
              if ((local_88 != '\0') && (local_90 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_28 != '\0') && (local_30 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_027653a0;
      if (bVar5) {
        if (g_027653a0 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  return (iVar1 != 0) * '\b' + '\x18';
}

