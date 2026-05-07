// Function: FUN_01786580
// Address: 01786580
// Size: 819 bytes
// Class: MUBarSignature
// String references:
//   "%I"


/* WARNING: Removing unreachable block (ram,0x01786819) */
/* WARNING: Removing unreachable block (ram,0x01786822) */
/* WARNING: Removing unreachable block (ram,0x017867da) */
/* WARNING: Removing unreachable block (ram,0x017867e3) */
/* WARNING: Removing unreachable block (ram,0x01786662) */
/* WARNING: Removing unreachable block (ram,0x0178666f) */
/* WARNING: Removing unreachable block (ram,0x0178671e) */
/* WARNING: Removing unreachable block (ram,0x01786727) */

void FUN_01786580(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar8;
  ulonglong uVar9;
  longlong local_40;
  char local_38;
  
  lVar3 = DAT_027cee10;
  if (*param_2 != 0) {
    if (DAT_027cee10 != 0) {
      FUN_00d50b00();
    }
    FUN_00d91bc0();
    lVar8 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar8 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0xc) == 0) {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
      }
      else {
        FUN_00d8d560();
        FUN_0123ff10();
        if (*(int *)(lVar8 + 0xc) < 2) {
          iVar5 = FUN_00d8c7a0();
          if ((1 < iVar5) && (*(int *)(unaff_RSI + 0xc) == 0)) {
            iVar5 = FUN_00d8c7a0();
            uVar6 = FUN_0123fcf0();
            uVar9 = (ulonglong)uVar6;
            if (0 < (int)uVar6) {
              do {
                uVar6 = (uint)uVar9;
                FUN_00d8cb40();
                if ((local_38 == '\0') && (local_40 != 0)) {
                  FUN_00d50b00();
                }
                iVar7 = FUN_00d8c7a0();
                if ((iVar7 < iVar5) && (cVar4 = FUN_00d8f400(), cVar4 != '\0')) {
                  FUN_00d8c7a0();
                  FUN_00d8c7a0();
                  FUN_00d97ce0();
                  FUN_00d8d560();
                  if ((local_38 != '\0') && (local_40 != 0)) {
                    FUN_00d50b20();
                  }
                  FUN_0123ff10();
                  bVar2 = true;
                  bVar1 = true;
                }
                else {
                  bVar2 = false;
                  bVar1 = false;
                }
                if (local_40 != 0) {
                  FUN_00d50b20();
                  bVar1 = bVar2;
                }
                uVar9 = uVar9 >> 1;
              } while (!bVar1 && 1 < uVar6);
            }
          }
        }
        else {
          FUN_00d8d560();
        }
        FUN_0123ff30();
        FUN_0123fbe0();
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            *unaff_RDI = local_40;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            goto LAB_017866e9;
          }
          local_40 = 0;
        }
        *unaff_RDI = local_40;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
LAB_017866e9:
      FUN_00d50b20();
      return;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}


