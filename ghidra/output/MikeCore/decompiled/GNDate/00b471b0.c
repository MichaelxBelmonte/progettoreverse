// Function: FUN_00b471b0
// Address: 00b471b0
// Size: 2217 bytes
// Class: GNDate


undefined8 FUN_00b471b0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char unaff_SIL;
  longlong unaff_RDI;
  undefined8 uVar4;
  bool bVar5;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
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
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (((*(longlong *)(unaff_RDI + 0x70) < 0x100000000) && (*(int *)(unaff_RDI + 0x8c) == 0)) &&
     ((ulonglong)(*(longlong *)(unaff_RDI + 0x48) + *(longlong *)(unaff_RDI + 0x40)) >> 0x20 == 0))
  {
    if (unaff_SIL == '\0') {
      return 0x6c;
    }
    FUN_00b45250(param_1,0x6d766864);
    FUN_00b45190(param_1,0);
    uVar1 = *(undefined4 *)(unaff_RDI + 0x70);
    uVar2 = *(undefined4 *)(unaff_RDI + 0x88);
    FUN_00ccdf50(param_1,uVar2);
    bVar5 = true;
    if (local_60 == 0) {
      FUN_00ccdf50(param_1,uVar2);
      bVar5 = true;
      if (local_50 == 0) {
        FUN_00ccdf50(param_1,*(undefined4 *)(unaff_RDI + 0x90));
        bVar5 = true;
        if (local_40 == 0) {
          FUN_00ccdf50(param_1,uVar1);
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
    lVar3 = DAT_027653a0;
    uVar4 = 0x6c;
    if (bVar5) {
      if (DAT_027653a0 != 0) {
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
      return 0x7a;
    }
    FUN_00b45250(param_1,0x6d766864);
    FUN_00b45190(param_1,0);
    FUN_00ccdf90(param_1,*(undefined8 *)(unaff_RDI + 0x88));
    bVar5 = true;
    if (local_60 == 0) {
      FUN_00ccdf90(param_1,*(undefined8 *)(unaff_RDI + 0x88));
      bVar5 = true;
      if (local_50 == 0) {
        FUN_00ccdf50(param_1,*(undefined4 *)(unaff_RDI + 0x90));
        bVar5 = true;
        if (local_40 == 0) {
          FUN_00ccdf90(param_1,*(undefined8 *)(unaff_RDI + 0x70));
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
    lVar3 = DAT_027653a0;
    uVar4 = 0x7a;
    if (bVar5) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00ccdf50(param_1,0x10000);
  bVar5 = true;
  if (local_60 == 0) {
    FUN_00ccdf10(param_1,0x100);
    bVar5 = true;
    if (local_50 == 0) {
      FUN_00ccdf10(param_1,0);
      bVar5 = true;
      if (local_40 == 0) {
        FUN_00ccdf50(param_1,0);
        bVar5 = true;
        if (local_70 == 0) {
          FUN_00ccdf50(param_1,0);
          bVar5 = local_80 != 0;
          if ((local_78 != '\0') && (local_80 != 0)) {
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
  lVar3 = DAT_027653a0;
  if (bVar5) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00ccdf50(param_1,0x10000);
  bVar5 = true;
  if (local_60 == 0) {
    FUN_00ccdf50(param_1,0);
    bVar5 = true;
    if (local_50 == 0) {
      FUN_00ccdf50(param_1,0);
      bVar5 = true;
      if (local_40 == 0) {
        FUN_00ccdf50(param_1,0);
        bVar5 = true;
        if (local_70 == 0) {
          FUN_00ccdf50(param_1,0x10000);
          bVar5 = true;
          if (local_80 == 0) {
            FUN_00ccdf50(param_1,0);
            bVar5 = true;
            if (local_160 == 0) {
              FUN_00ccdf50(param_1,0);
              bVar5 = true;
              if (local_150 == 0) {
                FUN_00ccdf50(param_1,0);
                bVar5 = true;
                if (local_140 == 0) {
                  FUN_00ccdf50(param_1,0x40000000);
                  bVar5 = true;
                  if (local_130 == 0) {
                    FUN_00ccdf50(param_1,0);
                    bVar5 = true;
                    if (local_120 == 0) {
                      FUN_00ccdf50(param_1,0);
                      bVar5 = true;
                      if (local_110 == 0) {
                        FUN_00ccdf50(param_1,0);
                        bVar5 = true;
                        if (local_100 == 0) {
                          FUN_00ccdf50(param_1,0);
                          bVar5 = true;
                          if (local_f0 == 0) {
                            FUN_00ccdf50(param_1,0);
                            bVar5 = true;
                            if (local_e0 == 0) {
                              FUN_00ccdf50(param_1,0);
                              bVar5 = true;
                              if (local_d0 == 0) {
                                FUN_00ccdf50(param_1,2);
                                bVar5 = local_170 != 0;
                                if ((local_168 != '\0') && (local_170 != 0)) {
                                  FUN_00d50b20();
                                }
                              }
                              if ((local_c8 != '\0') && (local_d0 != 0)) {
                                FUN_00d50b20();
                              }
                            }
                            if ((local_d8 != '\0') && (local_e0 != 0)) {
                              FUN_00d50b20();
                            }
                          }
                          if ((local_e8 != '\0') && (local_f0 != 0)) {
                            FUN_00d50b20();
                          }
                        }
                        if ((local_f8 != '\0') && (local_100 != 0)) {
                          FUN_00d50b20();
                        }
                      }
                      if ((local_108 != '\0') && (local_110 != 0)) {
                        FUN_00d50b20();
                      }
                    }
                    if ((local_118 != '\0') && (local_120 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_128 != '\0') && (local_130 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_138 != '\0') && (local_140 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_148 != '\0') && (local_150 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_158 != '\0') && (local_160 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
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
  lVar3 = DAT_027653a0;
  if (bVar5) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  return uVar4;
}


