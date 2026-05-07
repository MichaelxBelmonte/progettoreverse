// Function: FUN_01caaf60
// Address: 01caaf60
// Size: 3053 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01caba2f) */
/* WARNING: Removing unreachable block (ram,0x01caba3f) */
/* WARNING: Removing unreachable block (ram,0x01cab417) */
/* WARNING: Removing unreachable block (ram,0x01cab298) */
/* WARNING: Removing unreachable block (ram,0x01cab2a1) */
/* WARNING: Removing unreachable block (ram,0x01cab552) */
/* WARNING: Removing unreachable block (ram,0x01cab3b3) */
/* WARNING: Removing unreachable block (ram,0x01cab1d9) */
/* WARNING: Removing unreachable block (ram,0x01cab1e2) */
/* WARNING: Removing unreachable block (ram,0x01cab0d4) */
/* WARNING: Removing unreachable block (ram,0x01cab0dd) */
/* WARNING: Removing unreachable block (ram,0x01cab002) */
/* WARNING: Removing unreachable block (ram,0x01cab00b) */
/* WARNING: Removing unreachable block (ram,0x01cab130) */
/* WARNING: Removing unreachable block (ram,0x01cab135) */
/* WARNING: Removing unreachable block (ram,0x01cab447) */
/* WARNING: Removing unreachable block (ram,0x01cab450) */
/* WARNING: Removing unreachable block (ram,0x01cab70a) */
/* WARNING: Removing unreachable block (ram,0x01cab71a) */
/* WARNING: Removing unreachable block (ram,0x01cab8b1) */
/* WARNING: Removing unreachable block (ram,0x01cab885) */
/* WARNING: Removing unreachable block (ram,0x01cab88b) */
/* WARNING: Removing unreachable block (ram,0x01cab890) */
/* WARNING: Removing unreachable block (ram,0x01cab8b4) */
/* WARNING: Removing unreachable block (ram,0x01cab8ca) */
/* WARNING: Removing unreachable block (ram,0x01cab916) */
/* WARNING: Removing unreachable block (ram,0x01cab91f) */
/* WARNING: Removing unreachable block (ram,0x01cab934) */
/* WARNING: Removing unreachable block (ram,0x01cab940) */
/* WARNING: Removing unreachable block (ram,0x01cab735) */
/* WARNING: Removing unreachable block (ram,0x01cab73e) */
/* WARNING: Removing unreachable block (ram,0x01cab5bc) */
/* WARNING: Removing unreachable block (ram,0x01cab5c5) */
/* WARNING: Removing unreachable block (ram,0x01cab97c) */
/* WARNING: Removing unreachable block (ram,0x01cab5fd) */
/* WARNING: Removing unreachable block (ram,0x01cab60d) */
/* WARNING: Removing unreachable block (ram,0x01cab9ee) */
/* WARNING: Removing unreachable block (ram,0x01cab9f7) */

undefined8 * FUN_01caaf60(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *unaff_RDI;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  longlong local_100;
  char local_f8;
  undefined8 *local_78;
  longlong local_48;
  char local_40;
  byte local_38;
  
  FUN_01ca8220();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  cVar6 = FUN_01caa660();
  lVar14 = DAT_027eda10;
  if (cVar6 == '\0') {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    local_78 = (undefined8 *)0x0;
    bVar15 = false;
    goto LAB_01cabb2f;
  }
  if (*param_1 == 0) {
    local_38 = 0;
  }
  else {
    if (DAT_027eda10 != 0) {
      FUN_00d50b00();
    }
    local_38 = FUN_00d23d70();
    local_38 = local_38 ^ 1;
    if (lVar14 != 0) {
      FUN_00d50b20();
    }
  }
  local_78 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *local_78 = &DAT_02572358;
  (*DAT_02572370)();
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_0004b090();
  (**(code **)(*plVar7 + 0x18))();
  lVar14 = DAT_027eda28;
  if (DAT_027eda28 != 0) {
    FUN_00d50b00();
  }
  cVar6 = FUN_00d23d70();
  lVar13 = DAT_027eda28;
  if (cVar6 == '\0') {
    bVar15 = false;
    lVar13 = local_100;
  }
  else {
    lVar10 = *param_2;
    if (DAT_027eda28 != 0) {
      FUN_00d50b00();
    }
    local_f8 = '\0';
    FUN_01ca7f90();
    if (lVar14 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_00d50b00();
      if ((*(uint *)(lVar14 + 0x18) & 0xfffffff8) == 8) {
        lVar9 = **(longlong **)(lVar14 + 0x10);
      }
      else {
        lVar9 = 0;
      }
      FUN_00d50b20();
    }
    bVar15 = lVar9 == lVar10;
    if (lVar13 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar14 != 0) {
    FUN_00d50b20();
  }
  lVar14 = DAT_027eda18;
  if (bVar15) {
    if (DAT_027eda18 != 0) {
      FUN_00d50b00();
    }
    cVar6 = FUN_00d23d70();
    if (lVar14 != 0) {
      FUN_00d50b20();
    }
    lVar10 = DAT_027eda18;
    if (cVar6 == '\0') goto LAB_01cab266;
    if (DAT_027eda18 != 0) {
      FUN_00d50b00();
    }
    FUN_01ca7f90();
    if ((local_f8 == '\0') && (lVar13 != 0)) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar7 + 0x5f8))();
    if (lVar14 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_00d50b00();
      lVar9 = lVar14;
    }
    bVar2 = lVar14 != 0;
    if (lVar13 != 0) {
      FUN_00d50b20();
    }
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    if (*(int *)(lVar9 + 0xc) < 1) {
      bVar4 = false;
      lVar13 = 0;
    }
    else if (local_38 == 0) {
      lVar10 = 0;
      lVar14 = 0;
      bVar15 = false;
      do {
        lVar11 = FUN_00dd6dc0();
        if (lVar11 == lVar14) {
          lVar13 = lVar14;
          bVar4 = bVar15;
          if ((!bVar15) && (lVar11 != 0)) {
            bVar4 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar11 != 0) {
            FUN_00d50b00();
          }
          bVar4 = true;
          lVar13 = lVar11;
          if ((bVar15) && (lVar14 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d21140();
        lVar10 = lVar10 + 1;
        lVar14 = lVar13;
        bVar15 = bVar4;
      } while (lVar10 < *(int *)(lVar9 + 0xc));
    }
    else {
      lVar11 = 0;
      bVar4 = false;
      lVar10 = 0;
      do {
        lVar8 = FUN_00dd6dc0();
        if (lVar8 == lVar10) {
          lVar13 = lVar10;
          bVar15 = bVar4;
          if ((!bVar4) && (lVar8 != 0)) {
            FUN_00d50b00();
            bVar15 = true;
          }
        }
        else {
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          bVar15 = true;
          lVar13 = lVar8;
          if ((bVar4) && (lVar10 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar4 = bVar15;
        FUN_00c7e7b0();
        if (lVar14 != 0) {
          FUN_00d50b00();
        }
        cVar6 = FUN_00d50f90();
        if (lVar14 != 0) {
          FUN_00d50b20();
        }
        if (cVar6 == '\0') {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          *unaff_RDI = 0;
          bVar15 = true;
          bVar5 = false;
          plVar12 = (longlong *)0x0;
          bVar3 = false;
          lVar10 = 0;
          if (!bVar4) goto LAB_01cabae0;
          goto LAB_01cabad3;
        }
        FUN_00d21140();
        lVar11 = lVar11 + 1;
        lVar10 = lVar13;
      } while (lVar11 < *(int *)(lVar9 + 0xc));
    }
    *unaff_RDI = local_78;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    bVar5 = false;
    plVar12 = (longlong *)0x0;
    bVar3 = false;
    lVar10 = 0;
    bVar15 = false;
    if (bVar4) {
LAB_01cabad3:
      if (lVar13 != 0) {
        FUN_00d50b20();
      }
    }
LAB_01cabae0:
    if (bVar5) {
LAB_01cabae6:
      if (plVar12 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
LAB_01cabaf3:
    if ((bVar2) && (lVar9 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar3) && (lVar10 != 0)) {
      FUN_00d50b20();
    }
    if (plVar7 == (longlong *)0x0) goto LAB_01cabb2f;
  }
  else {
LAB_01cab266:
    lVar14 = DAT_027eda20;
    if (DAT_027eda20 != 0) {
      FUN_00d50b00();
    }
    cVar6 = FUN_00d23d70();
    if (cVar6 == '\0') {
      if (lVar14 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      lVar10 = *param_2;
      if (lVar14 != 0) {
        FUN_00d50b20();
      }
      lVar9 = DAT_027eda20;
      if (lVar10 != 0) {
        if (DAT_027eda20 != 0) {
          FUN_00d50b00();
        }
        FUN_01ca7f90();
        if ((local_f8 == '\0') && (lVar13 != 0)) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar7 + 0x5f8))();
        if (lVar14 == 0) {
          lVar10 = 0;
        }
        else {
          FUN_00d50b00();
          lVar10 = lVar14;
        }
        bVar3 = lVar14 != 0;
        if (lVar13 != 0) {
          FUN_00d50b20();
        }
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        if (*(int *)(lVar10 + 0xc) < 1) {
          bVar4 = false;
          lVar13 = 0;
          bVar5 = false;
          plVar12 = (longlong *)0x0;
        }
        else {
          lVar11 = 0;
          plVar12 = (longlong *)0x0;
          bVar5 = false;
          bVar4 = false;
          lVar9 = 0;
          do {
            plVar1 = *(longlong **)(*(longlong *)(lVar10 + 0x10) + lVar11 * 8);
            if (plVar12 == plVar1) {
              if ((!bVar5) && (plVar12 != (longlong *)0x0)) {
                bVar5 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (plVar1 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              if ((bVar5) && (plVar12 != (longlong *)0x0)) {
                FUN_00d50b20();
                bVar5 = true;
                plVar12 = plVar1;
              }
              else {
                bVar5 = true;
                plVar12 = plVar1;
              }
            }
            cVar6 = (**(code **)(*plVar12 + 0x380))();
            lVar13 = lVar9;
            if (cVar6 != '\0') {
LAB_01caba84:
              *(undefined1 *)(unaff_RDI + 1) = 0;
              *unaff_RDI = 0;
              bVar15 = true;
              bVar2 = false;
              lVar9 = 0;
              if (bVar4) goto LAB_01cabad3;
              goto LAB_01cabae0;
            }
            (**(code **)(*(longlong *)*param_2 + 0x420))();
            if (lVar14 == lVar9) {
              bVar15 = bVar4;
              if ((!bVar4) && (lVar14 != 0)) {
                FUN_00d50b00();
                bVar15 = true;
              }
            }
            else {
              if (lVar14 != 0) {
                FUN_00d50b00();
              }
              bVar15 = true;
              lVar13 = lVar14;
              if ((bVar4) && (lVar9 != 0)) {
                FUN_00d50b20();
              }
            }
            bVar4 = bVar15;
            if (lVar13 == 0) {
              *(undefined1 *)(unaff_RDI + 1) = 0;
              *unaff_RDI = 0;
              bVar15 = true;
              lVar9 = 0;
              bVar2 = false;
              if (bVar5) goto LAB_01cabae6;
              goto LAB_01cabaf3;
            }
            if (local_38 != 0) {
              FUN_00c7e7b0();
              if (lVar14 != 0) {
                FUN_00d50b00();
              }
              cVar6 = FUN_00d50f90();
              if (lVar14 != 0) {
                FUN_00d50b20();
              }
              if (cVar6 == '\0') goto LAB_01caba84;
            }
            FUN_00d21140();
            lVar11 = lVar11 + 1;
            lVar9 = lVar13;
          } while (lVar11 < *(int *)(lVar10 + 0xc));
        }
        *unaff_RDI = local_78;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        bVar2 = false;
        lVar9 = 0;
        bVar15 = false;
        if (bVar4) goto LAB_01cabad3;
        goto LAB_01cabae0;
      }
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    bVar15 = true;
  }
  FUN_00d50b20();
LAB_01cabb2f:
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((bVar15) && (local_78 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


