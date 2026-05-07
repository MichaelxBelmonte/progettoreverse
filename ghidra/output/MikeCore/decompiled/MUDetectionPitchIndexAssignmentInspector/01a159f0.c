// Function: FUN_01a159f0
// Address: 01a159f0
// Size: 1292 bytes
// Class: MUDetectionPitchIndexAssignmentInspector


/* WARNING: Removing unreachable block (ram,0x01a15ba5) */
/* WARNING: Removing unreachable block (ram,0x01a15bb1) */
/* WARNING: Removing unreachable block (ram,0x01a15e76) */
/* WARNING: Removing unreachable block (ram,0x01a15e82) */
/* WARNING: Removing unreachable block (ram,0x01a15eb7) */
/* WARNING: Removing unreachable block (ram,0x01a15ec4) */

ulonglong FUN_01a159f0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  longlong local_80;
  char local_78;
  float local_6c;
  int local_54;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01a58dc0();
  if (local_40 == (longlong *)0x0) {
    bVar4 = 0;
  }
  else {
    FUN_01a58dc0();
    bVar4 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *local_50))();
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar4 = bVar4 ^ 1;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar4 == 0) {
    uVar11 = FUN_01a58dc0();
    if (local_40 != (longlong *)0x0) {
      iVar6 = FUN_01d3a5a0();
      if (iVar6 == 1) {
        iVar6 = FUN_01d3b630();
        uVar11 = extraout_XMM0_Da_00;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          uVar11 = FUN_00d50b20();
        }
        if (iVar6 == 1) {
          FUN_01a58dc0();
          FUN_01d3abf0();
          FUN_01e466c0();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01a58dc0();
          (**(code **)(*local_50 + 0xe20))();
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_40 != (longlong *)0x0) {
            if (*(int *)((longlong)local_40 + 0xc) == 0) {
              uVar8 = 0;
            }
            else {
              cVar5 = (**(code **)(*unaff_RDI + 0x488))();
              uVar8 = 0;
              if (cVar5 != '\0') {
                local_54 = 0;
LAB_01a15bd0:
                lVar9 = *param_1;
                cVar5 = (char)param_1[1];
                lVar1 = *unaff_RSI;
                if (lVar1 == lVar9) {
                  if (cVar5 != '\0') {
                    if (((char)unaff_RSI[1] == '\0') && (lVar9 != 0)) {
                      cVar5 = '\x01';
                      FUN_00d50b00();
                      goto LAB_01a15c40;
                    }
                    goto LAB_01a15c45;
                  }
                }
                else {
                  lVar3 = unaff_RSI[1];
                  if ((cVar5 != '\0') && (lVar9 != 0)) {
                    FUN_00d50b00();
                  }
                  *unaff_RSI = lVar9;
                  if (((char)lVar3 != '\0') && (lVar1 != 0)) {
                    FUN_00d50b20();
                  }
LAB_01a15c40:
                  *(char *)(unaff_RSI + 1) = cVar5;
LAB_01a15c45:
                  lVar9 = *unaff_RSI;
                }
                if (lVar9 == 0) {
                  FUN_01a58dc0();
                  (**(code **)(*local_50 + 0x658))();
                  plVar2 = (longlong *)*unaff_RSI;
                  if (plVar2 == local_40) {
                    if (((char)unaff_RSI[1] == '\0') && (local_40 != (longlong *)0x0)) {
                      if (local_38 == '\0') {
                        FUN_00d50b00();
                        goto LAB_01a15d0a;
                      }
                      goto LAB_01a15cb7;
                    }
LAB_01a15cc1:
                    if (*unaff_RSI != 0) goto LAB_01a15cca;
LAB_01a15d19:
                    bVar10 = false;
                  }
                  else {
                    lVar1 = unaff_RSI[1];
                    if (local_38 != '\0') {
                      *unaff_RSI = (longlong)local_40;
                      if (((char)lVar1 != '\0') && (plVar2 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
LAB_01a15cb7:
                      *(undefined1 *)(unaff_RSI + 1) = 1;
                      local_38 = '\0';
                      goto LAB_01a15cc1;
                    }
                    if (local_40 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                    *unaff_RSI = (longlong)local_40;
                    if (((char)lVar1 != '\0') && (plVar2 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
LAB_01a15d0a:
                    *(undefined1 *)(unaff_RSI + 1) = 1;
                    if (*unaff_RSI == 0) goto LAB_01a15d19;
LAB_01a15cca:
                    iVar6 = FUN_01d3a5a0();
                    bVar10 = iVar6 != 6;
                  }
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (!bVar10) goto LAB_01a15ed2;
                }
                iVar6 = FUN_01d3a5a0();
                if (iVar6 == 5) {
                  FUN_01a58dc0();
                  FUN_01d3abf0();
                  FUN_01e466c0();
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  FUN_01a58dc0();
                  local_6c = (float)(**(code **)(*local_40 + 3000))();
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  iVar6 = FUN_00e7d780(((extraout_XMM0_Db - extraout_XMM0_Db_00) / local_6c) /
                                       DAT_023908e0);
                  if (iVar6 != local_54) {
                    FUN_01a161a0(extraout_XMM0_Da_01,1);
                    local_54 = iVar6;
                  }
                }
                goto LAB_01a15bd0;
              }
            }
            goto LAB_01a15ef9;
          }
          goto LAB_01a15a83;
        }
      }
      else {
        uVar11 = extraout_XMM0_Da;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          uVar11 = FUN_00d50b20();
        }
      }
    }
    local_80 = *param_2;
    local_78 = '\0';
    uVar7 = FUN_01a58d30(uVar11,&local_80);
    uVar8 = (ulonglong)uVar7;
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
LAB_01a15a83:
    uVar8 = 0;
  }
LAB_01a15e87:
  return uVar8 & 0xffffffff;
LAB_01a15ed2:
  if (*param_1 != 0) {
    *param_1 = 0;
    if ((char)param_1[1] != '\0') {
      FUN_00d50b20();
    }
    *(undefined1 *)(param_1 + 1) = 0;
  }
  uVar8 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
LAB_01a15ef9:
  FUN_00d50b20();
  goto LAB_01a15e87;
}


