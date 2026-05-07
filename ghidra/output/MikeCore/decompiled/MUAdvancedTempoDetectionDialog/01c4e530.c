// Function: FUN_01c4e530
// Address: 01c4e530
// Size: 1926 bytes
// Class: MUAdvancedTempoDetectionDialog


void FUN_01c4e530(pthread_key_t param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  char *pcVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar9;
  longlong local_130;
  char local_128;
  undefined1 local_100 [8];
  undefined1 local_f8;
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
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  int local_54;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  longlong *local_40;
  char local_38 [8];
  
  FUN_00d3ecc0();
  plVar1 = local_40;
  local_f0 = DAT_02702300;
  if (DAT_02702300 != 0) {
    FUN_00d50b00();
  }
  local_e8 = '\x01';
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    FUN_00d3ecc0();
    plVar1 = local_40;
    local_e0 = DAT_027ebc50;
    if (DAT_027ebc50 != 0) {
      FUN_00d50b00();
    }
    local_d8 = '\x01';
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      FUN_00d3ecc0();
      plVar1 = local_40;
      local_d0 = DAT_026fce70;
      if (DAT_026fce70 != 0) {
        FUN_00d50b00();
      }
      local_c8 = '\x01';
      cVar4 = (**(code **)(*plVar1 + 0x50))();
      cVar5 = '\x01';
      if (cVar4 == '\0') {
        FUN_00d3ecc0();
        local_c0 = DAT_027ebc60;
        plVar1 = (longlong *)CONCAT71(uStack_4f,local_50);
        if (DAT_027ebc60 != 0) {
          FUN_00d50b00();
        }
        local_b8 = '\x01';
        cVar5 = (**(code **)(*plVar1 + 0x50))();
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar5 == '\0') {
        FUN_00d3ecc0();
        plVar1 = local_40;
        local_b0 = DAT_027f0ae0;
        if (DAT_027f0ae0 != 0) {
          FUN_00d50b00();
        }
        local_a8 = '\x01';
        cVar4 = (**(code **)(*plVar1 + 0x50))();
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar4 == '\0') {
          FUN_00d3ecc0();
          plVar1 = local_40;
          local_a0 = DAT_027e3b30;
          if (DAT_027e3b30 != 0) {
            FUN_00d50b00();
          }
          local_98 = '\x01';
          cVar4 = (**(code **)(*plVar1 + 0x50))();
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar4 == '\0') {
            FUN_00d3ecc0();
            plVar1 = local_40;
            local_90 = DAT_027295a0;
            if (DAT_027295a0 != 0) {
              FUN_00d50b00();
            }
            local_88 = '\x01';
            cVar4 = (**(code **)(*plVar1 + 0x50))();
            if ((local_88 != '\0') && (local_90 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar4 == '\0') {
              FUN_00d3ecc0();
              plVar1 = local_40;
              local_80 = DAT_027ebc70;
              if (DAT_027ebc70 != 0) {
                FUN_00d50b00();
              }
              local_78 = '\x01';
              cVar4 = (**(code **)(*plVar1 + 0x50))();
              if ((local_78 != '\0') && (local_80 != 0)) {
                FUN_00d50b20();
              }
              if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar4 != '\0') {
                cVar4 = FUN_00e34d40();
                if (cVar4 != '\0') {
                  FUN_013fb420();
                  pvVar7 = _pthread_getspecific(param_1);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0132d610();
                  plVar1 = local_40;
                  if (local_38[0] == '\0') {
                    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
                       (local_40 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    local_38[0] = '\0';
                  }
                  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
                    FUN_00d50b20();
                  }
                  if (plVar1 != (longlong *)0x0) {
                    FUN_01c4f180(0,1,param_3,param_4,0);
                    FUN_00d50b20();
                  }
                }
                FUN_01c4f640();
              }
            }
            else if ((unaff_RDI[0x59] != 0) && (unaff_RDI[0x5a] != 0)) {
              plVar1 = *(longlong **)(unaff_RDI[0x5a] + 0x78);
              FUN_00e340b0();
              (**(code **)(*plVar1 + 0x928))();
              (**(code **)(*unaff_RDI + 0x620))();
            }
          }
          else {
            FUN_016bf0c0();
            *(undefined1 *)(unaff_RDI + 0x43) = 0;
          }
        }
        else {
          FUN_00d3ecf0();
          plVar1 = local_40;
          if ((((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
              (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01e40eb0();
          plVar3 = local_40;
          pcVar8 = &local_50;
          if (local_38[0] != '\0') {
            pcVar8 = local_38;
          }
          local_50 = local_38[0];
          *pcVar8 = '\0';
          if ((local_38[0] != '\0') && (plVar3 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar3 != (longlong *)0x0) {
            FUN_01e40eb0();
            plVar3 = local_40;
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((plVar3 == unaff_RDI) && (iVar6 = (**(code **)(*plVar1 + 0xa88))(), -1 < iVar6)) {
              local_54 = iVar6;
              FUN_01c41970();
              lVar2 = unaff_RDI[0x40];
              if (lVar2 != 0) {
                FUN_00d50b00();
              }
              local_60 = CONCAT44(local_60._4_4_,*(undefined4 *)(lVar2 + 0xc));
              FUN_00d50b20();
              if (local_54 < (int)local_60) {
                FUN_01c41970();
                lVar2 = unaff_RDI[0x40];
                if (lVar2 != 0) {
                  FUN_00d50b00();
                }
                local_60 = lVar2;
                uVar9 = FUN_01c82aa0();
                plVar3 = local_40;
                if (local_38[0] == '\0') {
                  if (local_40 != (longlong *)0x0) {
                    uVar9 = FUN_00d50b00();
                  }
                }
                else {
                  local_38[0] = '\0';
                }
                local_f8 = 1;
                FUN_01c45890(uVar9,local_100);
                if ((local_128 != '\0') && (local_130 != 0)) {
                  FUN_00d50b20();
                }
                if (plVar3 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
            }
            if (local_50 != '\0') {
              FUN_00d50b20();
            }
          }
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        (**(code **)(*unaff_RDI + 0x620))();
        *(undefined1 *)(unaff_RDI + 0x3a) = 1;
      }
    }
    else {
      *(undefined1 *)((longlong)unaff_RDI + 0x2e1) = 0;
    }
  }
  else {
    *(undefined1 *)((longlong)unaff_RDI + 0x2e1) = 1;
  }
  local_70 = *unaff_RSI;
  local_68 = '\0';
  FUN_00d530a0();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  return;
}


