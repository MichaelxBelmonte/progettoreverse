// Function: FUN_01c163e0
// Address: 01c163e0
// Size: 1420 bytes
// Class: MUDetectionPitchCenterAssignmentInspector


/* WARNING: Removing unreachable block (ram,0x01c16683) */
/* WARNING: Removing unreachable block (ram,0x01c1668f) */
/* WARNING: Removing unreachable block (ram,0x01c165d4) */
/* WARNING: Removing unreachable block (ram,0x01c165dd) */
/* WARNING: Removing unreachable block (ram,0x01c1692c) */
/* WARNING: Removing unreachable block (ram,0x01c16939) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01c163e0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined7 uVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined7 uVar11;
  longlong lVar10;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar14;
  undefined8 uVar15;
  float extraout_XMM0_Db;
  float fStack_b4;
  longlong local_78;
  char local_70;
  float local_64;
  longlong *local_60;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  local_60 = param_1;
  FUN_01a58dc0();
  if (local_40 == (longlong *)0x0) {
    bVar5 = 0;
  }
  else {
    FUN_01a58dc0();
    bVar5 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *local_50))();
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar5 = bVar5 ^ 1;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar5 == 0) {
    uVar13 = FUN_01a58dc0();
    if (local_40 != (longlong *)0x0) {
      iVar7 = FUN_01d3a5a0();
      if (iVar7 == 1) {
        iVar7 = FUN_01d3b630();
        uVar13 = extraout_XMM0_Da_00;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
        if (iVar7 == 1) {
          FUN_01a58dc0();
          FUN_01d3abf0();
          uVar15 = FUN_01e466c0();
          fStack_b4 = (float)((ulonglong)uVar15 >> 0x20);
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          uVar11 = (undefined7)((ulonglong)local_40 >> 8);
          if ((*param_2 != 0) && (iVar7 = FUN_01d3b620(), iVar7 == 2)) {
            FUN_01a58dc0();
            local_60 = (longlong *)(**(code **)(*local_40 + 0x930))((int)uVar15);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01c16c70((int)local_60);
            uVar9 = CONCAT71(uVar11,1);
            goto LAB_01c165e2;
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
            if ((*(int *)((longlong)local_40 + 0xc) != 0) &&
               (cVar6 = (**(code **)(*unaff_RDI + 0x488))(), cVar6 != '\0')) {
LAB_01c166a0:
              lVar10 = *local_60;
              cVar6 = (char)local_60[1];
              lVar1 = *unaff_RSI;
              if (lVar1 == lVar10) {
                if (cVar6 != '\0') {
                  if (((char)unaff_RSI[1] == '\0') && (lVar10 != 0)) {
                    cVar6 = '\x01';
                    FUN_00d50b00();
                    goto LAB_01c16710;
                  }
                  goto LAB_01c16714;
                }
              }
              else {
                lVar4 = unaff_RSI[1];
                if ((cVar6 != '\0') && (lVar10 != 0)) {
                  FUN_00d50b00();
                }
                *unaff_RSI = lVar10;
                if (((char)lVar4 != '\0') && (lVar1 != 0)) {
                  FUN_00d50b20();
                }
LAB_01c16710:
                *(char *)(unaff_RSI + 1) = cVar6;
LAB_01c16714:
                lVar10 = *unaff_RSI;
              }
              if (lVar10 == 0) {
                FUN_01a58dc0();
                (**(code **)(*local_50 + 0x658))();
                plVar2 = (longlong *)*unaff_RSI;
                if (plVar2 == local_40) {
                  if (((char)unaff_RSI[1] == '\0') && (local_40 != (longlong *)0x0)) {
                    if (local_38 == '\0') {
                      FUN_00d50b00();
                      goto LAB_01c167d1;
                    }
                    goto LAB_01c16781;
                  }
LAB_01c1678a:
                  if (*unaff_RSI != 0) goto LAB_01c16792;
LAB_01c167de:
                  bVar12 = false;
                  uVar3 = 0;
                }
                else {
                  lVar1 = unaff_RSI[1];
                  if (local_38 != '\0') {
                    *unaff_RSI = (longlong)local_40;
                    if (((char)lVar1 != '\0') && (plVar2 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
LAB_01c16781:
                    *(undefined1 *)(unaff_RSI + 1) = 1;
                    local_38 = '\0';
                    goto LAB_01c1678a;
                  }
                  if (local_40 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                  *unaff_RSI = (longlong)local_40;
                  if (((char)lVar1 != '\0') && (plVar2 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
LAB_01c167d1:
                  *(undefined1 *)(unaff_RSI + 1) = 1;
                  if (*unaff_RSI == 0) goto LAB_01c167de;
LAB_01c16792:
                  iVar7 = FUN_01d3a5a0();
                  bVar12 = iVar7 != 6;
                  uVar3 = uVar11;
                }
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                plVar2 = local_60;
                if (!bVar12) goto LAB_01c16943;
              }
              iVar7 = FUN_01d3a5a0();
              if (iVar7 == 5) {
                FUN_01a58dc0();
                FUN_01d3abf0();
                FUN_01e466c0();
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_01a58dc0();
                local_64 = (float)(**(code **)(*local_40 + 3000))();
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                uVar9 = FUN_01d3b590();
                fVar14 = (fStack_b4 - extraout_XMM0_Db) / local_64;
                if ((uVar9 & 8) != 0) {
                  fVar14 = fVar14 * DAT_02391090;
                }
                fStack_b4 = extraout_XMM0_Db;
                if (DAT_02394274 < (float)((uint)fVar14 & _DAT_02390140)) {
                  FUN_01c17760();
                }
              }
              goto LAB_01c166a0;
            }
            uVar9 = 0;
            goto LAB_01c16969;
          }
          goto LAB_01c16470;
        }
      }
      else {
        uVar13 = extraout_XMM0_Da;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
      }
    }
    local_78 = *param_2;
    local_70 = '\0';
    uVar8 = FUN_01a58d30(uVar13,&local_78);
    uVar9 = (ulonglong)uVar8;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
LAB_01c16470:
    uVar9 = 0;
  }
LAB_01c165e2:
  return uVar9 & 0xffffffff;
LAB_01c16943:
  uVar9 = CONCAT71(uVar3,1);
  if (*local_60 != 0) {
    *local_60 = 0;
    if ((char)local_60[1] != '\0') {
      FUN_00d50b20();
    }
    *(undefined1 *)(plVar2 + 1) = 0;
  }
LAB_01c16969:
  FUN_00d50b20();
  goto LAB_01c165e2;
}


