// Function: FUN_00de38d0
// Address: 00de38d0
// Size: 912 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00de3bfb) */
/* WARNING: Removing unreachable block (ram,0x00de3c04) */
/* WARNING: Removing unreachable block (ram,0x00de3b0e) */
/* WARNING: Removing unreachable block (ram,0x00de3b17) */
/* WARNING: Removing unreachable block (ram,0x00de3971) */
/* WARNING: Removing unreachable block (ram,0x00de397d) */

void FUN_00de38d0(void)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_a0;
  longlong local_58;
  char local_50;
  longlong *local_38;
  char local_30;
  
  FUN_00de4120();
  uVar5 = FUN_00d8cbc0();
  iVar1 = *(int *)(unaff_RSI + 0x18);
  *(int *)(unaff_RSI + 0x18) = iVar1 + 1;
  uVar4 = (ushort)uVar5;
  switch(uVar5 - 0x22 & 0xffff) {
  case 0:
  case 5:
    FUN_00de4610(iVar1,uVar5 & 0xffff);
    if ((local_30 == '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    FUN_00de52e0();
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
    goto switchD_00de3923_caseD_1;
  case 6:
    FUN_00de4910();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_30 == '\0') {
      if (local_38 == (longlong *)0x0) {
        local_38 = (longlong *)0x0;
      }
      else {
        FUN_00d50b00();
      }
    }
    *unaff_RDI = local_38;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    break;
  case 0x1a:
    FUN_00de5030();
    break;
  default:
    if (uVar4 == 0x7b) {
      FUN_00de4f70();
      return;
    }
switchD_00de3923_caseD_1:
    if ((((ushort)((uVar4 & 0xffdf) - 0x41) < 0x1a) || ((ushort)(uVar4 - 0x30) < 10)) ||
       (((ushort)(uVar5 - 0x24) < 0x3c &&
        ((0x800000000400e01U >> ((ulonglong)(uVar5 - 0x24 & 0xffff) & 0x3f) & 1) != 0)))) {
      *(int *)(unaff_RSI + 0x18) = iVar1;
      FUN_00de4720();
      if (local_30 == '\0') {
        if (local_38 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_00de3a63;
        }
      }
      else if (local_38 != (longlong *)0x0) {
LAB_00de3a63:
        lVar2 = DAT_027841e8;
        if (DAT_027841e8 != 0) {
          FUN_00d50b00();
        }
        cVar3 = FUN_00d90dc0();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          puVar6 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar6 = &DAT_02575d80;
          (*DAT_02575d98)();
          cVar3 = FUN_00d8ca50();
          if (cVar3 == '\0') {
            FUN_00d498d0();
            if (local_50 == '\0') {
              if (local_58 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            FUN_00ddb860();
            cVar3 = (**(code **)(*local_38 + 0x3f8))();
            if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_58 != 0) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            if ((cVar3 == '\0') || ((int)local_a0 == local_a0)) {
              FUN_00d46080();
            }
            else {
              FUN_00d46090();
            }
          }
          else {
            FUN_00d8d7b0();
            FUN_00d460a0();
          }
          *unaff_RDI = puVar6;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          FUN_00d50b20();
          return;
        }
        FUN_00de52e0();
        FUN_00d50b20();
        return;
      }
    }
    else {
      *(int *)(unaff_RSI + 0x18) = iVar1;
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  return;
}


