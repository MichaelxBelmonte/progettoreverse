// Function: FUN_00d21bf0
// Address: 00d21bf0
// Size: 1931 bytes
// Class: GNNull


/* WARNING: Removing unreachable block (ram,0x00d21c30) */
/* WARNING: Removing unreachable block (ram,0x00d21c3c) */
/* WARNING: Removing unreachable block (ram,0x00d221db) */
/* WARNING: Removing unreachable block (ram,0x00d222e0) */

void FUN_00d21bf0(void)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  longlong local_70;
  char local_68;
  longlong local_48;
  char local_40;
  
  FUN_00d50cd0();
  cVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x380))();
  lVar11 = DAT_0277cf70;
  lVar10 = DAT_0277cf50;
  plVar1 = (longlong *)*unaff_RSI;
  if (cVar3 == '\0') {
    if (DAT_0277cf70 != 0) {
      FUN_00d50b00();
    }
    iVar5 = (**(code **)(*plVar1 + 0x598))();
    if (lVar11 != 0) {
      FUN_00d50b20();
    }
    lVar10 = DAT_0277cf78;
    if (iVar5 == 0) {
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_0277cf78 != 0) {
        FUN_00d50b00();
      }
      iVar5 = (**(code **)(*plVar1 + 0x598))();
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
    }
    if (1 < iVar5) {
      uVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
      *(undefined1 *)(unaff_RDI + 0x1c) = uVar4;
      if (iVar5 != 2) {
        uVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
        *(undefined1 *)(unaff_RDI + 0x1d) = uVar4;
        if (3 < iVar5) {
          uVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
          *(undefined1 *)(unaff_RDI + 0x1e) = uVar4;
        }
      }
    }
    iVar5 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
    iVar6 = FUN_00e83090();
    iVar9 = iVar6 + 7;
    if (-1 < iVar6) {
      iVar9 = iVar6;
    }
    *(int *)(unaff_RDI + 0x18) = iVar9 >> 3;
    uVar7 = FUN_00e83060();
    *(undefined8 *)(unaff_RDI + 0x10) = uVar7;
    if (0 < iVar5) {
      do {
        (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        iVar9 = *(int *)(unaff_RDI + 0xc);
        *(int *)(unaff_RDI + 0xc) = iVar9 + 1;
        FUN_00d23090();
        cVar3 = *(char *)(unaff_RDI + 0x1c);
        *(longlong *)(*(longlong *)(unaff_RDI + 0x10) + (longlong)iVar9 * 8) = local_48;
        if ((cVar3 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else {
    if (DAT_0277cf50 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar1 + 0x590))();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    lVar10 = DAT_0277cf50;
    if (cVar3 != '\0') {
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_0277cf50 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x510))();
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
      if (cVar3 != '\0') {
        if (*(char *)(unaff_RDI + 0x1c) == '\0') {
          uVar8 = *(uint *)(unaff_RDI + 0xc);
          if (0 < (int)uVar8) {
            lVar10 = (ulonglong)uVar8 + 1;
            do {
              uVar8 = uVar8 - 1;
              if (*(longlong *)(*(longlong *)(unaff_RDI + 0x10) + (ulonglong)uVar8 * 8) != 0) {
                FUN_00d50b20();
              }
              lVar10 = lVar10 + -1;
            } while (1 < lVar10);
          }
        }
        *(undefined1 *)(unaff_RDI + 0x1c) = 1;
      }
    }
    lVar10 = DAT_0277cf58;
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_0277cf58 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar1 + 0x590))();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    lVar10 = DAT_0277cf58;
    if (cVar3 != '\0') {
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_0277cf58 != 0) {
        FUN_00d50b00();
      }
      uVar4 = (**(code **)(*plVar1 + 0x510))();
      *(undefined1 *)(unaff_RDI + 0x1d) = uVar4;
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
    }
    lVar10 = DAT_0277cf60;
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_0277cf60 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar1 + 0x590))();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    lVar10 = DAT_0277cf60;
    if (cVar3 != '\0') {
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_0277cf60 != 0) {
        FUN_00d50b00();
      }
      uVar4 = (**(code **)(*plVar1 + 0x510))();
      *(undefined1 *)(unaff_RDI + 0x1e) = uVar4;
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
    }
    cVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
    lVar10 = DAT_0277cf68;
    if (cVar3 == '\0') {
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_0277cf68 != 0) {
        FUN_00d50b00();
      }
      iVar5 = (**(code **)(*plVar1 + 0x520))();
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
      iVar6 = FUN_00e83090();
      iVar9 = iVar6 + 7;
      if (-1 < iVar6) {
        iVar9 = iVar6;
      }
      *(int *)(unaff_RDI + 0x18) = iVar9 >> 3;
      uVar7 = FUN_00e83060();
      *(undefined8 *)(unaff_RDI + 0x10) = uVar7;
      if (0 < iVar5) {
        iVar9 = 0;
        lVar10 = 0;
        bVar2 = false;
        do {
          plVar1 = (longlong *)*unaff_RSI;
          FUN_00d93550();
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          (**(code **)(*plVar1 + 0x578))();
          if (local_48 == lVar10) {
            if ((!bVar2) && (local_48 != 0)) {
              lVar11 = lVar10;
              if (local_40 != '\0') goto LAB_00d221c4;
              FUN_00d50b00();
              goto LAB_00d22230;
            }
            if (local_40 == '\0') goto LAB_00d22258;
LAB_00d2223a:
            if (local_48 != 0) {
              FUN_00d50b20();
            }
          }
          else if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
            lVar11 = local_48;
            if (bVar2) {
              bVar12 = lVar10 == 0;
              lVar10 = local_48;
              bVar2 = true;
              if (bVar12) goto LAB_00d22258;
              FUN_00d50b20();
            }
LAB_00d22230:
            lVar10 = lVar11;
            bVar2 = true;
            if (local_40 != '\0') goto LAB_00d2223a;
          }
          else {
            lVar11 = local_48;
            if ((bVar2) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
LAB_00d221c4:
            local_40 = '\0';
            lVar10 = lVar11;
            bVar2 = true;
          }
LAB_00d22258:
          if (local_70 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if ((lVar10 != 0) || (*(char *)(unaff_RDI + 0x1d) != '\0')) {
            iVar6 = *(int *)(unaff_RDI + 0xc);
            *(int *)(unaff_RDI + 0xc) = iVar6 + 1;
            FUN_00d23090();
            if ((*(char *)(unaff_RDI + 0x1c) == '\0') && (lVar10 != 0)) {
              FUN_00d50b00();
            }
            *(longlong *)(*(longlong *)(unaff_RDI + 0x10) + (longlong)iVar6 * 8) = lVar10;
          }
          iVar9 = iVar9 + 1;
        } while (iVar5 != iVar9);
        if ((bVar2) && (lVar10 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (unaff_RDI != 0) {
        FUN_00d50b00();
      }
      FUN_00e5a7d0();
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


