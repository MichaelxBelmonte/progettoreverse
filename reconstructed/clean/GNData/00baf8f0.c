// Function: FUN_00baf8f0
// Address: 00baf8f0
// Size: 1357 bytes
// Class: GNData
// String references:
//   "RIFF"
//   "data"
//   "WAVE"
//   "fmt "
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_00baf8f0(double param_1,uint64_t param_2,uint32_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  uint16_t uVar3;
  uint32_t uVar4;
  uint64_t in_RCX;
  int64_t this_ptr;
  bool bVar5;
  uint64_t uVar6;
  int64_t local_148;
  char local_140;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  local_70 = *param_4;
  local_68 = '\0';
  FUN_00bba180(in_RCX,param_2,param_3,&local_70);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  uVar4 = FUN_00ae7ec0();
  *(void*)(this_ptr + 0x68) = uVar4;
  uVar3 = FUN_00ae7f20();
  *(void*)(this_ptr + 0x62) = uVar3;
  *(int *)(this_ptr + 0x48) = (int)param_1;
  *(void*)(this_ptr + 100) = 0;
  lVar1 = g_02764880;
  uVar3 = 3;
  uVar4 = 0x10;
  switch(*(void*)(this_ptr + 0x34)) {
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x46:
    goto switchD_00baf9a9_caseD_10;
  case 0x13:
    goto switchD_00baf9a9_caseD_13;
  default:
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    local_60 = lVar1;
    local_58 = '\x01';
    FUN_00cc78b0();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_00bafa10;
  case 0x40:
    break;
  case 0x41:
    uVar4 = 0x11;
    break;
  case 0x42:
    uVar4 = 0x12;
    break;
  case 0x43:
    uVar4 = 0x46;
    break;
  case 0x44:
    *(void*)(this_ptr + 0x34) = 0x13;
    goto switchD_00baf9a9_caseD_13;
  }
  *(void*)(this_ptr + 0x34) = uVar4;
switchD_00baf9a9_caseD_10:
  uVar3 = 1;
switchD_00baf9a9_caseD_13:
  *(void*)(this_ptr + 100) = uVar3;
LAB_00bafa10:
  uVar6 = (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x388))(4,"RIFF");
  bVar5 = true;
  if (local_30 == 0) {
    uVar6 = FUN_00ccdf50(uVar6,0x24);
    bVar5 = true;
    if (local_130 == 0) {
      uVar6 = (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x388))(4,"WAVE");
      bVar5 = true;
      if (local_120 == 0) {
        uVar6 = (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x388))(4,"fmt ");
        bVar5 = true;
        if (local_110 == 0) {
          uVar6 = FUN_00ccdf50(uVar6,0x10);
          bVar5 = true;
          if (local_100 == 0) {
            uVar6 = FUN_00ccdf10(uVar6,(int)*(short *)(this_ptr + 100));
            bVar5 = true;
            if (local_f0 == 0) {
              uVar6 = FUN_00ccdf10(uVar6,(int)*(short *)(this_ptr + 0x30));
              bVar5 = true;
              if (local_e0 == 0) {
                uVar6 = FUN_00ccdf50(uVar6,*(void*)(this_ptr + 0x48));
                bVar5 = true;
                if (local_d0 == 0) {
                  uVar6 = FUN_00ccdf50(uVar6,*(int *)(this_ptr + 0x48) * *(int *)(this_ptr + 0x30)
                                             * *(int *)(this_ptr + 0x68));
                  bVar5 = true;
                  if (local_c0 == 0) {
                    uVar6 = FUN_00ccdf10(uVar6,(int)(short)((short)*(void*)(this_ptr + 0x68)
                                                           * (short)*(void*)
                                                                     (this_ptr + 0x30)));
                    bVar5 = true;
                    if (local_b0 == 0) {
                      uVar6 = FUN_00ccdf10(uVar6,(int)*(short *)(this_ptr + 0x62));
                      bVar5 = true;
                      if (local_a0 == 0) {
                        uVar6 = (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x388))(4,"data");
                        bVar5 = true;
                        if (local_90 == 0) {
                          uVar6 = FUN_00ccdf50(uVar6,0);
                          bVar5 = local_148 != 0;
                          if ((local_140 != '\0') && (local_148 != 0)) {
                            uVar6 = FUN_00d50b20();
                          }
                        }
                        if ((local_88 != '\0') && (local_90 != 0)) {
                          uVar6 = FUN_00d50b20();
                        }
                      }
                      if ((local_98 != '\0') && (local_a0 != 0)) {
                        uVar6 = FUN_00d50b20();
                      }
                    }
                    if ((local_a8 != '\0') && (local_b0 != 0)) {
                      uVar6 = FUN_00d50b20();
                    }
                  }
                  if ((local_b8 != '\0') && (local_c0 != 0)) {
                    uVar6 = FUN_00d50b20();
                  }
                }
                if ((local_c8 != '\0') && (local_d0 != 0)) {
                  uVar6 = FUN_00d50b20();
                }
              }
              if ((local_d8 != '\0') && (local_e0 != 0)) {
                uVar6 = FUN_00d50b20();
              }
            }
            if ((local_e8 != '\0') && (local_f0 != 0)) {
              uVar6 = FUN_00d50b20();
            }
          }
          if ((local_f8 != '\0') && (local_100 != 0)) {
            uVar6 = FUN_00d50b20();
          }
        }
        if ((local_108 != '\0') && (local_110 != 0)) {
          uVar6 = FUN_00d50b20();
        }
      }
      if ((local_118 != '\0') && (local_120 != 0)) {
        uVar6 = FUN_00d50b20();
      }
    }
    if ((local_128 != '\0') && (local_130 != 0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  lVar1 = g_027653a0;
  if (bVar5) {
    if (g_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_50 = lVar1;
    local_48 = '\x01';
    uVar6 = FUN_00cc78b0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x390))(uVar6,this_ptr + 0x40);
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027653a0;
  if (local_30 != 0) {
    if (g_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar1;
    local_38 = '\x01';
    FUN_00cc78b0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = *param_4;
  lVar2 = *(int64_t *)(this_ptr + 0x70);
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x70) = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

