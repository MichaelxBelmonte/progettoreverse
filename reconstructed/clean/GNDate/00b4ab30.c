// Function: FUN_00b4ab30
// Address: 00b4ab30
// Size: 931 bytes
// Class: GNDate

uint64_t FUN_00b4ab30(uint64_t param_1)

{
  int iVar1;
  int64_t lVar2;
  int unaff_ESI;
  int64_t this_ptr;
  int iVar3;
  uint64_t uVar4;
  bool bVar5;
  uint64_t local_c0;
  uint8_t local_b8;
  uint64_t local_b0;
  uint8_t local_a8;
  uint64_t local_a0;
  uint8_t local_98;
  uint64_t local_70;
  uint8_t local_68;
  uint64_t local_60;
  uint8_t local_58;
  uint64_t local_50;
  uint8_t local_48;
  uint64_t local_40;
  uint8_t local_38;
  
  iVar1 = *(int *)(*(int64_t *)(this_ptr + 0x58) + 0x18);
  iVar3 = iVar1 + 3;
  if (-1 < iVar1) {
    iVar3 = iVar1;
  }
  iVar3 = (iVar3 >> 2) + (iVar1 / 0x18) * -6;
  uVar4 = 0x28;
  if (iVar3 == 0) {
    uVar4 = 0x1c;
  }
  if (unaff_ESI != 0) {
    FUN_00b45250(param_1,0x73747363);
    FUN_00b45190(param_1,0);
    if (iVar3 == 0) {
      FUN_00ccdf50(param_1,1);
      bVar5 = true;
      if (local_60 == 0) {
        FUN_00ccdf50(param_1,1);
        bVar5 = true;
        if (local_50 == 0) {
          FUN_00ccdf50(param_1,6);
          bVar5 = true;
          if (local_40 == 0) {
            FUN_00ccdf50(param_1,1);
            bVar5 = local_70 != 0;
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = g_027653a0;
      if (bVar5) {
        if (g_027653a0 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_00ccdf50(param_1,2);
      bVar5 = true;
      if (local_60 == 0) {
        FUN_00ccdf50(param_1,1);
        bVar5 = true;
        if (local_50 == 0) {
          FUN_00ccdf50(param_1,6);
          bVar5 = true;
          if (local_40 == 0) {
            FUN_00ccdf50(param_1,1);
            bVar5 = true;
            if (local_70 == 0) {
              FUN_00ccdf50(param_1,iVar1 / 0x18 + 1);
              bVar5 = true;
              if (local_b0 == 0) {
                FUN_00ccdf50(param_1,iVar3);
                bVar5 = true;
                if (local_a0 == 0) {
                  FUN_00ccdf50(param_1,1);
                  bVar5 = local_c0 != 0;
                  if ((local_b8 != '\0') && (local_c0 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_98 != '\0') && (local_a0 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_a8 != '\0') && (local_b0 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = g_027653a0;
      if (bVar5) {
        if (g_027653a0 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  return uVar4;
}

