// Function: FUN_01ed9a40
// Address: 01ed9a40
// Size: 1297 bytes
// Class: GNTextAutoCompleterItem


/* WARNING: Removing unreachable block (ram,0x01ed9d1a) */
/* WARNING: Removing unreachable block (ram,0x01ed9d23) */
/* WARNING: Removing unreachable block (ram,0x01ed9df5) */
/* WARNING: Removing unreachable block (ram,0x01ed9dfe) */

void FUN_01ed9a40(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong local_90;
  longlong local_80;
  longlong local_70;
  longlong local_40;
  char local_38;
  
  iVar4 = FUN_01d3a5a0();
  if ((iVar4 == 2) || (iVar4 = FUN_01d3a5a0(), iVar4 == 8)) {
    uVar5 = FUN_01dd4c80();
    if (((int)uVar5 < 0) ||
       ((*(int *)(unaff_RDI[0x57] + 0xc) <= (int)uVar5 ||
        (lVar7 = *(longlong *)(*(longlong *)(unaff_RDI[0x57] + 0x10) + (ulonglong)uVar5 * 8),
        lVar7 == 0)))) {
      lVar7 = 0;
    }
    else {
      FUN_00d50b00();
    }
    iVar4 = FUN_01d3b590();
    if (iVar4 == 0x200) {
      if (lVar7 == 0) {
        return;
      }
      cVar3 = FUN_01ed4800();
      if ((cVar3 != '\0') && (cVar3 = FUN_01ed4710(), cVar3 == '\0')) {
        FUN_01ed2f70();
        FUN_00d50b20();
        return;
      }
      FUN_00d50b20();
      return;
    }
    iVar4 = FUN_01d3b590();
    if (iVar4 == 0x100) {
      if (lVar7 == 0) {
        return;
      }
      cVar3 = FUN_01ed4800();
      if ((cVar3 != '\0') && (cVar3 = FUN_01ed4710(), cVar3 != '\0')) {
        FUN_01ed3c60();
        FUN_00d50b20();
        return;
      }
      FUN_00d50b20();
      return;
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  iVar4 = FUN_01d3a5a0();
  if ((iVar4 == 1) && (iVar4 = FUN_01d3b630(), iVar4 == 1)) {
    FUN_01d3abf0();
    uVar9 = FUN_01e466c0();
    uVar5 = FUN_01dcea90();
    uVar8 = (ulonglong)uVar5;
    iVar4 = FUN_01dd3800(uVar9);
    if ((uVar5 != 0xffffffff) && (iVar4 == 0)) {
      uVar10 = (**(code **)(*unaff_RDI + 0xa68))();
      cVar3 = FUN_00d05410(uVar9,uVar10,param_2);
      if (cVar3 != '\0') {
        if (*(char *)(*(longlong *)(unaff_RDI[0x58] + 0x10) + 5 + (longlong)(int)uVar5 * 8) == '\0')
        {
          uVar6 = FUN_01d3b590();
          lVar7 = unaff_RDI[0x57];
          bVar1 = (int)uVar5 < *(int *)(lVar7 + 0xc);
          if ((uVar6 & 8) == 0) {
            if (-1 < (int)uVar5 && bVar1) {
              local_70 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + uVar8 * 8);
              if (local_70 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_70 = 0;
            }
            FUN_01ed2f70();
            if (local_70 != 0) {
              FUN_00d50b20();
            }
          }
          else {
            if (-1 < (int)uVar5 && bVar1) {
              local_80 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + uVar8 * 8);
              if (local_80 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_80 = 0;
            }
            FUN_01ed44d0();
            if (local_80 != 0) {
              FUN_00d50b20();
            }
          }
        }
        else {
          if (((int)uVar5 < 0) || (*(int *)(unaff_RDI[0x57] + 0xc) <= (int)uVar5)) {
            local_90 = 0;
          }
          else {
            local_90 = *(longlong *)(*(longlong *)(unaff_RDI[0x57] + 0x10) + uVar8 * 8);
            if (local_90 != 0) {
              FUN_00d50b00();
            }
          }
          FUN_01ed3c60();
          if (local_90 != 0) {
            FUN_00d50b20();
          }
        }
        do {
          while( true ) {
            if (*unaff_RSI == 0) {
              return;
            }
            iVar4 = FUN_01d3a5a0();
            if (iVar4 == 6) {
              return;
            }
            (**(code **)(*unaff_RDI + 0x658))();
            lVar7 = *unaff_RSI;
            if (lVar7 != local_40) break;
            if (((char)unaff_RSI[1] == '\0') && (local_40 != 0)) {
              if (local_38 != '\0') goto LAB_01ed9e90;
              FUN_00d50b00();
              goto LAB_01ed9f2b;
            }
LAB_01ed9f30:
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          lVar2 = unaff_RSI[1];
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *unaff_RSI = local_40;
            if (((char)lVar2 != '\0') && (lVar7 != 0)) {
              FUN_00d50b20();
            }
LAB_01ed9f2b:
            *(undefined1 *)(unaff_RSI + 1) = 1;
            goto LAB_01ed9f30;
          }
          *unaff_RSI = local_40;
          if (((char)lVar2 != '\0') && (lVar7 != 0)) {
            FUN_00d50b20();
          }
LAB_01ed9e90:
          *(undefined1 *)(unaff_RSI + 1) = 1;
        } while( true );
      }
      cVar3 = FUN_01dce4b0();
      if (cVar3 != '\0') {
        (**(code **)(*unaff_RDI + 0xa28))(uVar9);
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == 0) {
          *(undefined1 *)((longlong)unaff_RDI + 0x27a) = 1;
          FUN_01dd9800();
          *(undefined1 *)((longlong)unaff_RDI + 0x27a) = 0;
          return;
        }
      }
    }
  }
  FUN_01dd9800();
  return;
}


