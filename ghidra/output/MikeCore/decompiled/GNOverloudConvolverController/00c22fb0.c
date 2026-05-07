// Function: FUN_00c22fb0
// Address: 00c22fb0
// Size: 2955 bytes
// Class: GNOverloudConvolverController


void FUN_00c22fb0(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong **pplVar5;
  bool bVar6;
  undefined4 uVar7;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  int local_d0;
  int iStack_cc;
  int local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01e534b0();
  uVar7 = FUN_01d265f0();
  lVar2 = local_e8;
  if (local_e0 == '\0') {
    if (local_e8 == 0) {
      return;
    }
    uVar7 = FUN_00d50b00();
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      uVar7 = FUN_00d50b20();
    }
  }
  else if (local_e8 == 0) {
    return;
  }
  local_e0 = 0;
  local_e8 = 0;
  local_d8 = lVar2;
  local_d0 = -1;
  iStack_cc = 0;
  local_c8 = 0;
  while( true ) {
    if (iStack_cc != 0) {
      if (iStack_cc < 1) {
        iStack_cc = -iStack_cc;
      }
      else {
        local_d0 = local_d0 - iStack_cc;
        uVar7 = FUN_00d23690();
        local_c8 = local_c8 + iStack_cc;
        iStack_cc = 0;
      }
    }
    lVar2 = DAT_027e7c20;
    lVar4 = (longlong)local_d0;
    local_d0 = local_d0 + 1;
    if (*(int *)(local_d8 + 0xc) <= local_d0) break;
    local_e8 = *(undefined8 *)(*(longlong *)(local_d8 + 0x10) + 8 + lVar4 * 8);
    if (DAT_027e7c20 != 0) {
      uVar7 = FUN_00d50b00();
    }
    local_188 = lVar2;
    local_180 = '\x01';
    uVar7 = FUN_01ccab60(uVar7,&local_188);
    plVar1 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (uVar7 = FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        uVar7 = FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_180 != '\0') && (local_188 != 0)) {
      uVar7 = FUN_00d50b20();
    }
    lVar2 = DAT_0276ca18;
    if (plVar1 != (longlong *)0x0) {
      if (DAT_0276ca18 != 0) {
        FUN_00d50b00();
      }
      local_178 = lVar2;
      local_170 = '\x01';
      cVar3 = FUN_00d90870();
      if (cVar3 == '\0') {
        bVar6 = false;
      }
      else {
        FUN_01ccad60();
        plVar1 = local_40;
        FUN_001f8a30();
        pplVar5 = (longlong **)&DAT_02802688;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar5 = &local_40;
          if (cVar3 == '\0') {
            pplVar5 = (longlong **)&DAT_02802688;
          }
        }
        bVar6 = *pplVar5 != (longlong *)0x0;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_170 != '\0') && (local_178 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276ca20;
      if (bVar6) {
        FUN_01ccad60();
        lVar2 = DAT_028a5a18;
        local_b8 = 0;
        if (DAT_028a5a18 != 0) {
          FUN_00d50b00();
        }
        local_c0 = lVar2;
        local_b8 = '\x01';
        FUN_01e058f0();
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (DAT_0276ca20 != 0) {
          FUN_00d50b00();
        }
        local_168 = lVar2;
        local_160 = '\x01';
        cVar3 = FUN_00d90870();
        if (cVar3 == '\0') {
          bVar6 = false;
        }
        else {
          FUN_01ccad60();
          plVar1 = local_40;
          FUN_001f8a30();
          pplVar5 = (longlong **)&DAT_02802688;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x360))();
            cVar3 = FUN_00e85ea0();
            pplVar5 = &local_40;
            if (cVar3 == '\0') {
              pplVar5 = (longlong **)&DAT_02802688;
            }
          }
          bVar6 = *pplVar5 != (longlong *)0x0;
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_160 != '\0') && (local_168 != 0)) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276ca28;
        if (bVar6) {
          FUN_01ccad60();
          lVar2 = DAT_028a5a18;
          local_a8 = 0;
          if (DAT_028a5a18 != 0) {
            FUN_00d50b00();
          }
          local_b0 = lVar2;
          local_a8 = '\x01';
          FUN_01e058f0();
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (DAT_0276ca28 != 0) {
            FUN_00d50b00();
          }
          local_158 = lVar2;
          local_150 = '\x01';
          cVar3 = FUN_00d90870();
          if (cVar3 == '\0') {
            bVar6 = false;
          }
          else {
            FUN_01ccad60();
            plVar1 = local_40;
            FUN_001f8a30();
            pplVar5 = (longlong **)&DAT_02802688;
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 0x360))();
              cVar3 = FUN_00e85ea0();
              pplVar5 = &local_40;
              if (cVar3 == '\0') {
                pplVar5 = (longlong **)&DAT_02802688;
              }
            }
            bVar6 = *pplVar5 != (longlong *)0x0;
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_150 != '\0') && (local_158 != 0)) {
            FUN_00d50b20();
          }
          lVar2 = DAT_0276ca30;
          if (bVar6) {
            FUN_01ccad60();
            lVar2 = DAT_028a5a18;
            local_98 = 0;
            if (DAT_028a5a18 != 0) {
              FUN_00d50b00();
            }
            local_a0 = lVar2;
            local_98 = '\x01';
            FUN_01e058f0();
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (DAT_0276ca30 != 0) {
              FUN_00d50b00();
            }
            local_148 = lVar2;
            local_140 = '\x01';
            cVar3 = FUN_00d90870();
            if (cVar3 == '\0') {
              bVar6 = false;
            }
            else {
              FUN_01ccad60();
              plVar1 = local_40;
              FUN_001f8a30();
              pplVar5 = (longlong **)&DAT_02802688;
              if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0x360))();
                cVar3 = FUN_00e85ea0();
                pplVar5 = &local_40;
                if (cVar3 == '\0') {
                  pplVar5 = (longlong **)&DAT_02802688;
                }
              }
              bVar6 = *pplVar5 != (longlong *)0x0;
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            if ((local_140 != '\0') && (local_148 != 0)) {
              FUN_00d50b20();
            }
            lVar2 = DAT_0276ca48;
            if (bVar6) {
              FUN_01ccad60();
              FUN_01e05950();
              plVar1 = local_40;
              FUN_00037f20();
              pplVar5 = (longlong **)&DAT_02802688;
              if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0x360))();
                cVar3 = FUN_00e85ea0();
                pplVar5 = &local_40;
                if (cVar3 == '\0') {
                  pplVar5 = (longlong **)&DAT_02802688;
                }
              }
              plVar1 = *pplVar5;
              if (*(char *)(pplVar5 + 1) == '\0') {
                if (plVar1 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                *(undefined1 *)(pplVar5 + 1) = 0;
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_88 != '\0') && (local_90 != 0)) {
                FUN_00d50b20();
              }
              lVar2 = DAT_0276ca38;
              if (plVar1 != (longlong *)0x0) {
                if (DAT_0276ca38 != 0) {
                  FUN_00d50b00();
                }
                local_138 = lVar2;
                local_130 = '\x01';
                uVar7 = FUN_00d46dc0(0);
                local_80 = local_40;
                local_78 = 0;
                if (local_38 == '\0') {
                  if (local_40 != (longlong *)0x0) {
                    uVar7 = FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                local_78 = '\x01';
                FUN_00d4bf20(uVar7,&local_80);
                if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_130 != '\0') && (local_138 != 0)) {
                  FUN_00d50b20();
                }
                lVar2 = DAT_0276ca40;
                if (DAT_0276ca40 != 0) {
                  FUN_00d50b00();
                }
                local_128 = lVar2;
                local_120 = '\x01';
                uVar7 = FUN_00d46dc0(DAT_02393944);
                local_70 = local_40;
                local_68 = 0;
                if (local_38 == '\0') {
                  if (local_40 != (longlong *)0x0) {
                    uVar7 = FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                local_68 = '\x01';
                FUN_00d4bf20(uVar7,&local_70);
                if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_120 != '\0') && (local_128 != 0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
            }
            else {
              if (DAT_0276ca48 != 0) {
                FUN_00d50b00();
              }
              local_118 = lVar2;
              local_110 = '\x01';
              cVar3 = FUN_00d90870();
              if (cVar3 == '\0') {
                bVar6 = false;
              }
              else {
                FUN_01ccad60();
                plVar1 = local_40;
                FUN_001f8a30();
                pplVar5 = (longlong **)&DAT_02802688;
                if (plVar1 != (longlong *)0x0) {
                  (**(code **)(*plVar1 + 0x360))();
                  cVar3 = FUN_00e85ea0();
                  pplVar5 = &local_40;
                  if (cVar3 == '\0') {
                    pplVar5 = (longlong **)&DAT_02802688;
                  }
                }
                bVar6 = *pplVar5 != (longlong *)0x0;
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_110 != '\0') && (local_118 != 0)) {
                FUN_00d50b20();
              }
              if (bVar6) {
                FUN_01ccad60();
                FUN_01e05950();
                plVar1 = local_40;
                FUN_00037f20();
                pplVar5 = (longlong **)&DAT_02802688;
                if (plVar1 != (longlong *)0x0) {
                  (**(code **)(*plVar1 + 0x360))();
                  cVar3 = FUN_00e85ea0();
                  pplVar5 = &local_40;
                  if (cVar3 == '\0') {
                    pplVar5 = (longlong **)&DAT_02802688;
                  }
                }
                plVar1 = *pplVar5;
                if (*(char *)(pplVar5 + 1) == '\0') {
                  if (plVar1 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  *(undefined1 *)(pplVar5 + 1) = 0;
                }
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_88 != '\0') && (local_90 != 0)) {
                  FUN_00d50b20();
                }
                lVar2 = DAT_0276ca50;
                if (plVar1 != (longlong *)0x0) {
                  if (DAT_0276ca50 != 0) {
                    FUN_00d50b00();
                  }
                  local_108 = lVar2;
                  local_100 = '\x01';
                  uVar7 = FUN_00d46dc0(0);
                  local_60 = local_40;
                  local_58 = 0;
                  if (local_38 == '\0') {
                    if (local_40 != (longlong *)0x0) {
                      uVar7 = FUN_00d50b00();
                    }
                  }
                  else {
                    local_38 = '\0';
                  }
                  local_58 = '\x01';
                  FUN_00d4bf20(uVar7,&local_60);
                  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_100 != '\0') && (local_108 != 0)) {
                    FUN_00d50b20();
                  }
                  lVar2 = DAT_0276ca58;
                  if (DAT_0276ca58 != 0) {
                    FUN_00d50b00();
                  }
                  local_f8 = lVar2;
                  local_f0 = '\x01';
                  uVar7 = FUN_00d46dc0(DAT_02393944);
                  local_50 = local_40;
                  local_48 = 0;
                  if (local_38 == '\0') {
                    if (local_40 != (longlong *)0x0) {
                      uVar7 = FUN_00d50b00();
                    }
                  }
                  else {
                    local_38 = '\0';
                  }
                  local_48 = '\x01';
                  FUN_00d4bf20(uVar7,&local_50);
                  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_f0 != '\0') && (local_f8 != 0)) {
                    FUN_00d50b20();
                  }
                  FUN_00d50b20();
                }
              }
            }
          }
        }
      }
      uVar7 = FUN_00d50b20();
    }
  }
  FUN_01d300d0();
  FUN_00d50b20();
  return;
}


