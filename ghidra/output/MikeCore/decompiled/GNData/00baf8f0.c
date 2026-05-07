// Function: FUN_00baf8f0
// Address: 00baf8f0
// Size: 1357 bytes
// Class: GNData
// String references:
//   "RIFF"
//   "data"
//   "WAVE"
//   "fmt "


/* WARNING: Removing unreachable block (ram,0x00baf94e) */
/* WARNING: Removing unreachable block (ram,0x00baf957) */

void FUN_00baf8f0(double param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined8 in_RCX;
  longlong unaff_RDI;
  bool bVar5;
  undefined8 uVar6;
  longlong local_148;
  char local_140;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  local_70 = *param_4;
  local_68 = '\0';
  FUN_00bba180(in_RCX,param_2,param_3,&local_70);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  uVar4 = FUN_00ae7ec0();
  *(undefined4 *)(unaff_RDI + 0x68) = uVar4;
  uVar3 = FUN_00ae7f20();
  *(undefined2 *)(unaff_RDI + 0x62) = uVar3;
  *(int *)(unaff_RDI + 0x48) = (int)param_1;
  *(undefined2 *)(unaff_RDI + 100) = 0;
  lVar1 = DAT_02764880;
  uVar3 = 3;
  uVar4 = 0x10;
  switch(*(undefined4 *)(unaff_RDI + 0x34)) {
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x46:
    goto switchD_00baf9a9_caseD_10;
  case 0x13:
    goto switchD_00baf9a9_caseD_13;
  default:
    if (DAT_02764880 != 0) {
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
    *(undefined4 *)(unaff_RDI + 0x34) = 0x13;
    goto switchD_00baf9a9_caseD_13;
  }
  *(undefined4 *)(unaff_RDI + 0x34) = uVar4;
switchD_00baf9a9_caseD_10:
  uVar3 = 1;
switchD_00baf9a9_caseD_13:
  *(undefined2 *)(unaff_RDI + 100) = uVar3;
LAB_00bafa10:
  uVar6 = (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x388))(4,"RIFF");
  bVar5 = true;
  if (local_30 == 0) {
    uVar6 = FUN_00ccdf50(uVar6,0x24);
    bVar5 = true;
    if (local_130 == 0) {
      uVar6 = (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x388))(4,"WAVE");
      bVar5 = true;
      if (local_120 == 0) {
        uVar6 = (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x388))(4,"fmt ");
        bVar5 = true;
        if (local_110 == 0) {
          uVar6 = FUN_00ccdf50(uVar6,0x10);
          bVar5 = true;
          if (local_100 == 0) {
            uVar6 = FUN_00ccdf10(uVar6,(int)*(short *)(unaff_RDI + 100));
            bVar5 = true;
            if (local_f0 == 0) {
              uVar6 = FUN_00ccdf10(uVar6,(int)*(short *)(unaff_RDI + 0x30));
              bVar5 = true;
              if (local_e0 == 0) {
                uVar6 = FUN_00ccdf50(uVar6,*(undefined4 *)(unaff_RDI + 0x48));
                bVar5 = true;
                if (local_d0 == 0) {
                  uVar6 = FUN_00ccdf50(uVar6,*(int *)(unaff_RDI + 0x48) * *(int *)(unaff_RDI + 0x30)
                                             * *(int *)(unaff_RDI + 0x68));
                  bVar5 = true;
                  if (local_c0 == 0) {
                    uVar6 = FUN_00ccdf10(uVar6,(int)(short)((short)*(undefined4 *)(unaff_RDI + 0x68)
                                                           * (short)*(undefined4 *)
                                                                     (unaff_RDI + 0x30)));
                    bVar5 = true;
                    if (local_b0 == 0) {
                      uVar6 = FUN_00ccdf10(uVar6,(int)*(short *)(unaff_RDI + 0x62));
                      bVar5 = true;
                      if (local_a0 == 0) {
                        uVar6 = (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x388))(4,"data");
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
  lVar1 = DAT_027653a0;
  if (bVar5) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_50 = lVar1;
    local_48 = '\x01';
    uVar6 = FUN_00cc78b0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x390))(uVar6,unaff_RDI + 0x40);
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027653a0;
  if (local_30 != 0) {
    if (DAT_027653a0 != 0) {
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
  lVar2 = *(longlong *)(unaff_RDI + 0x70);
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x70) = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


