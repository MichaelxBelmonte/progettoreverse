// Function: FUN_019ceb00
// Address: 019ceb00
// Size: 1599 bytes
// Class: MUScalePitchSystem


ulonglong FUN_019ceb00(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong **pplVar10;
  char in_DL;
  undefined8 unaff_RBX;
  undefined7 uVar12;
  longlong *plVar11;
  longlong *unaff_RDI;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar18;
  undefined4 uVar19;
  longlong *local_b8;
  code *local_b0;
  undefined *local_a8;
  undefined8 *local_a0;
  char local_98;
  ulonglong local_90;
  longlong *local_88;
  longlong *local_60;
  char local_58;
  undefined8 *local_50;
  undefined4 local_44;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0xaa8))();
  plVar13 = local_40;
  uVar12 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_019ceb5d;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_019ceb5d:
    local_90 = (ulonglong)*(uint *)((longlong)plVar13 + 0xc);
    uVar15 = CONCAT71(uVar12,local_90 == 0);
    if ((local_90 != 0) && (in_DL != '\0')) {
      local_88 = plVar13;
      (**(code **)(*unaff_RDI + 0xe20))();
      plVar11 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_019cebcc;
        }
LAB_019cebd2:
        local_44 = 0;
      }
      else {
        if (local_40 == (longlong *)0x0) goto LAB_019cebd2;
LAB_019cebcc:
        if (*(int *)((longlong)plVar11 + 0xc) != 0) goto LAB_019cebd2;
        uVar8 = FUN_00d50b20();
        local_44 = (undefined4)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
        plVar11 = (longlong *)0x0;
      }
      (**(code **)(*unaff_RDI + 0x4a0))();
      plVar4 = local_40;
      if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      puVar9 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      local_a8 = &DAT_02572358;
      *puVar9 = &DAT_02572358;
      local_b0 = DAT_02572370;
      (*DAT_02572370)();
      local_50 = puVar9;
      if (0 < (int)local_90) {
        uVar15 = 0;
        do {
          plVar2 = *(longlong **)(plVar13[2] + uVar15 * 8);
          uVar19 = param_2;
          if (plVar2 != (longlong *)0x0) {
            FUN_00d50b00();
            uVar19 = param_2;
          }
          local_b8 = plVar2;
          uVar16 = (**(code **)(*plVar2 + 0x4d8))();
          local_38 = '\0';
          param_2 = uVar19;
          local_40 = plVar2;
          cVar5 = FUN_00d23d70();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar5 == '\0') {
            if (plVar11 != (longlong *)0x0) {
              (**(code **)(*plVar2 + 0x928))();
              plVar3 = local_60;
              if (local_58 == '\0') {
                if (local_60 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_58 = '\0';
              }
              local_40 = plVar3;
              local_38 = '\0';
              cVar5 = FUN_00d23d70();
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar3 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar5 == '\0') goto LAB_019cefb0;
            }
            uVar14 = 0;
            do {
              if (uVar15 != uVar14) {
                plVar3 = *(longlong **)(plVar13[2] + uVar14 * 8);
                uVar18 = param_2;
                if (plVar3 != (longlong *)0x0) {
                  FUN_00d50b00();
                  uVar18 = param_2;
                }
                local_60 = plVar3;
                uVar17 = (**(code **)(*plVar3 + 0x4d8))();
                param_2 = uVar19;
                cVar5 = FUN_00d054a0(uVar16,uVar19,uVar17,uVar18);
                if (cVar5 != '\0') {
                  local_38 = '\0';
                  local_40 = plVar3;
                  cVar5 = FUN_00d23d70();
                  uVar18 = extraout_XMM0_Da;
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    uVar18 = FUN_00d50b20();
                  }
                  if (cVar5 == '\0') {
                    iVar6 = FUN_019a4cd0(uVar18,unaff_RDI);
                    if (iVar6 < 0) {
                      local_38 = '\0';
                      local_40 = plVar2;
                      FUN_00d21140();
                      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else if (iVar6 == 0) {
                      local_38 = '\0';
                      local_40 = plVar2;
                      iVar6 = FUN_00d237a0();
                      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      local_38 = '\0';
                      local_40 = plVar3;
                      iVar7 = FUN_00d237a0();
                      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      pplVar10 = &local_b8;
                      if (iVar7 < iVar6) {
                        pplVar10 = &local_60;
                      }
                      local_40 = *pplVar10;
                      local_38 = '\0';
                      FUN_00d21140();
                      plVar13 = local_88;
                      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      local_38 = '\0';
                      local_40 = plVar3;
                      FUN_00d21140();
                      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                  }
                }
                FUN_00d50b20();
              }
              uVar14 = uVar14 + 1;
            } while (local_90 != uVar14);
          }
LAB_019cefb0:
          if (plVar2 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 != local_90);
      }
      uVar1 = *(uint *)((longlong)local_50 + 0xc);
      if ((ulonglong)uVar1 != 0) {
        puVar9 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar9 = local_a8;
        uVar19 = (*local_b0)();
        if (0 < (int)uVar1) {
          uVar15 = 0;
          do {
            plVar13 = *(longlong **)(local_50[2] + uVar15 * 8);
            if (plVar13 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            (**(code **)(*plVar13 + 0x928))();
            plVar13 = local_60;
            if (local_58 == '\0') {
              if (local_60 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            local_40 = plVar13;
            local_38 = '\0';
            FUN_00d21140();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar13 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            uVar19 = FUN_00d50b20();
            uVar15 = uVar15 + 1;
          } while (uVar1 != uVar15);
        }
        local_98 = '\0';
        local_a0 = puVar9;
        (**(code **)(*unaff_RDI + 0xdc8))(uVar19,1);
        if ((local_98 != '\0') && (local_a0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*unaff_RDI + 0xb48))();
        if (puVar9 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((char)local_44 == '\0' && plVar11 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      uVar15 = 0;
    }
    FUN_00d50b20();
    goto LAB_019cf154;
  }
  uVar15 = CONCAT71(uVar12,1);
LAB_019cf154:
  return (uVar15 ^ 1) & 0xffffffff;
}


