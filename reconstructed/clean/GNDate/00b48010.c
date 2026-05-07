// Function: FUN_00b48010
// Address: 00b48010
// Size: 2155 bytes
// Class: GNDate

uint64_t FUN_00b48010(uint64_t param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  int64_t lVar3;
  char unaff_SIL;
  int64_t this_ptr;
  uint64_t uVar4;
  bool bVar5;
  int64_t local_e8;
  char local_e0;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  if (((*(int64_t *)(this_ptr + 0x70) < 0x100000000) && (*(int *)(this_ptr + 0x8c) == 0)) &&
     ((uint64_t)(*(int64_t *)(this_ptr + 0x48) + *(int64_t *)(this_ptr + 0x40)) >> 0x20 == 0))
  {
    if (unaff_SIL == '\0') {
      return 0x5c;
    }
    FUN_00b45250(param_1,0x746b6864);
    FUN_00b45190(param_1,1);
    uVar1 = *(void*)(this_ptr + 0x70);
    uVar2 = *(void*)(this_ptr + 0x88);
    FUN_00ccdf50(param_1,uVar2);
    bVar5 = true;
    if (local_48 == 0) {
      FUN_00ccdf50(param_1,uVar2);
      bVar5 = true;
      if (local_38 == 0) {
        FUN_00ccdf50(param_1,1);
        bVar5 = true;
        if (local_58 == 0) {
          FUN_00ccdf50(param_1,0);
          bVar5 = true;
          if (local_68 == 0) {
            FUN_00ccdf50(param_1,uVar1);
            bVar5 = local_78 != 0;
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = g_027653a0;
    uVar4 = 0x5c;
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
    if (unaff_SIL == '\0') {
      return 0x68;
    }
    FUN_00b45250(param_1,0x746b6864);
    FUN_00b45190(param_1,1);
    FUN_00ccdf90(param_1,*(void*)(this_ptr + 0x88));
    bVar5 = true;
    if (local_48 == 0) {
      FUN_00ccdf90(param_1,*(void*)(this_ptr + 0x88));
      bVar5 = true;
      if (local_38 == 0) {
        FUN_00ccdf50(param_1,1);
        bVar5 = true;
        if (local_58 == 0) {
          FUN_00ccdf50(param_1,0);
          bVar5 = true;
          if (local_68 == 0) {
            FUN_00ccdf90(param_1,*(void*)(this_ptr + 0x70));
            bVar5 = local_78 != 0;
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = g_027653a0;
    uVar4 = 0x68;
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
  FUN_00ccdf50(param_1,0);
  bVar5 = true;
  if (local_48 == 0) {
    FUN_00ccdf50(param_1,0);
    bVar5 = true;
    if (local_38 == 0) {
      FUN_00ccdf10(param_1,0);
      bVar5 = true;
      if (local_58 == 0) {
        FUN_00ccdf10(param_1,0);
        bVar5 = true;
        if (local_68 == 0) {
          FUN_00ccdf10(param_1,0x100);
          bVar5 = true;
          if (local_78 == 0) {
            FUN_00ccdf10(param_1,0);
            bVar5 = local_e8 != 0;
            if ((local_e0 != '\0') && (local_e8 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
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
  FUN_00ccdf50(param_1,0x10000);
  bVar5 = true;
  if (local_48 == 0) {
    FUN_00ccdf50(param_1,0);
    bVar5 = true;
    if (local_38 == 0) {
      FUN_00ccdf50(param_1,0);
      bVar5 = true;
      if (local_58 == 0) {
        FUN_00ccdf50(param_1,0);
        bVar5 = local_68 != 0;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
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
  FUN_00ccdf50(param_1,0x10000);
  bVar5 = true;
  if (local_48 == 0) {
    FUN_00ccdf50(param_1,0);
    bVar5 = true;
    if (local_38 == 0) {
      FUN_00ccdf50(param_1,0);
      bVar5 = true;
      if (local_58 == 0) {
        FUN_00ccdf50(param_1,0);
        bVar5 = local_68 != 0;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
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
  FUN_00ccdf50(param_1,0x40000000);
  bVar5 = true;
  if (local_48 == 0) {
    FUN_00ccdf50(param_1,0);
    bVar5 = true;
    if (local_38 == 0) {
      FUN_00ccdf50(param_1,0);
      bVar5 = local_58 != 0;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
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
  return uVar4;
}

