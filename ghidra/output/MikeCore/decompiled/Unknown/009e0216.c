// Function: FUN_009e0216
// Address: 009e0216
// Size: 970 bytes
// Class: Unknown
// String references:
//   "Found a closing repetition operator } with no corresponding {."
//   "The \\c and \\C escape sequences are not supported by POSIX basic regular expressions: try the Perl...


ulonglong FUN_009e0216(undefined8 param_1)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 **ppuVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *unaff_RDI;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ushort local_48;
  ulonglong local_44;
  undefined1 local_3c;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  lVar4 = unaff_RDI[0x11];
  pbVar1 = (byte *)(lVar4 + 1);
  unaff_RDI[0x11] = (longlong)pbVar1;
  if (pbVar1 == (byte *)unaff_RDI[0x10]) {
    FUN_009d86be(param_1,(longlong)pbVar1 - unaff_RDI[0xf]);
    return 0;
  }
  uVar3 = 0;
  switch(*(undefined1 *)(*(longlong *)unaff_RDI[1] + 0x20 + (ulonglong)*pbVar1)) {
  case 1:
    uVar3 = FUN_009d9144();
    return uVar3;
  case 2:
    goto switchD_009e026e_caseD_2;
  default:
    if ((*(byte *)(*unaff_RDI + 0x29) & 0x10) != 0) {
      uVar5 = (int)(char)*pbVar1 - 0x43;
      bVar2 = 1;
      switch(uVar5 * 0x40000000 | uVar5 >> 2) {
      case 0:
      case 8:
        lVar4 = unaff_RDI[0xf];
        ppuVar6 = &local_78;
        FUN_009d5ed0();
        FUN_009d8cfc(ppuVar6,(longlong)pbVar1 - lVar4);
        goto LAB_009e04f1;
      case 0xc:
      case 4:
        uVar3 = FUN_009e06d0();
        return uVar3;
      case 0xd:
        bVar2 = 0;
      case 5:
        local_78 = &local_70;
        local_68 = 0;
        local_70 = 0;
        local_60 = 0;
        local_58 = 0;
        local_50 = 0;
        puVar8 = &local_30;
        local_30 = 0;
        local_28 = 0;
        local_48 = (ushort)bVar2;
        local_44 = (ulonglong)*(uint *)(unaff_RDI + 10);
        local_3c = 0;
        local_38 = puVar8;
        lVar4 = FUN_009de670(puVar8,0);
        if (lVar4 == 0) {
          FUN_009d86be();
        }
        else {
          unaff_RDI[0x11] = unaff_RDI[0x11] + 1;
        }
        FUN_009df1d6();
        if (local_60 != 0) {
          local_58 = local_60;
          operator_delete(puVar8);
        }
        FUN_009df1d6();
        return (ulonglong)(lVar4 != 0);
      }
    }
    goto switchD_009e04c5_caseD_1;
  case 7:
    lVar7 = *unaff_RDI;
    if ((*(byte *)(lVar7 + 0x29) & 4) != 0) {
      unaff_RDI[0x11] = lVar4 + 2;
      uVar9 = 0xffffffffffffffff;
LAB_009e033d:
      uVar3 = FUN_009d9e38(lVar7,uVar9);
      return uVar3;
    }
    goto switchD_009e04c5_caseD_1;
  case 8:
    lVar7 = *unaff_RDI;
    if ((*(byte *)(lVar7 + 0x29) & 4) != 0) {
      unaff_RDI[0x11] = lVar4 + 2;
      uVar9 = 1;
      goto LAB_009e033d;
    }
    goto switchD_009e04c5_caseD_1;
  case 0xb:
    if ((*(byte *)(*unaff_RDI + 0x29) & 8) != 0) {
      uVar3 = FUN_009da82e();
      return uVar3;
    }
    goto switchD_009e04c5_caseD_1;
  case 0xf:
    if ((*(byte *)(*unaff_RDI + 0x29) & 2) == 0) {
      unaff_RDI[0x11] = lVar4 + 2;
      uVar3 = FUN_009da2a6();
      return uVar3;
    }
    goto switchD_009e04c5_caseD_1;
  case 0x10:
    if ((*(byte *)(*unaff_RDI + 0x29) & 2) == 0) {
      lVar4 = unaff_RDI[0xf];
      ppuVar6 = &local_78;
      FUN_009d5ed0();
      FUN_009d8cfc(ppuVar6,(longlong)pbVar1 - lVar4);
LAB_009e04f1:
      if (((ulonglong)local_78 & 1) != 0) {
        operator_delete(ppuVar6);
      }
      return 0;
    }
switchD_009e04c5_caseD_1:
    uVar3 = FUN_009d8ca4();
    return uVar3;
  case 0x11:
    uVar3 = FUN_009dd9d0();
    return uVar3;
  case 0x12:
    lVar7 = *unaff_RDI;
    if ((*(byte *)(lVar7 + 0x29) & 0x10) == 0) goto switchD_009e04c5_caseD_1;
    unaff_RDI[0x11] = lVar4 + 2;
    break;
  case 0x13:
    lVar7 = *unaff_RDI;
    if ((*(byte *)(lVar7 + 0x29) & 0x10) == 0) goto switchD_009e04c5_caseD_1;
    unaff_RDI[0x11] = lVar4 + 2;
    break;
  case 0x14:
    lVar7 = *unaff_RDI;
    if ((*(byte *)(lVar7 + 0x29) & 0x10) == 0) goto switchD_009e04c5_caseD_1;
    unaff_RDI[0x11] = lVar4 + 2;
    break;
  case 0x15:
    lVar7 = *unaff_RDI;
    if ((*(byte *)(lVar7 + 0x29) & 0x10) == 0) goto switchD_009e04c5_caseD_1;
    unaff_RDI[0x11] = lVar4 + 2;
    break;
  case 0x18:
    lVar7 = *unaff_RDI;
    if ((*(byte *)(lVar7 + 0x29) & 0x10) == 0) goto switchD_009e04c5_caseD_1;
    unaff_RDI[0x11] = lVar4 + 2;
    break;
  case 0x19:
    lVar7 = *unaff_RDI;
    if ((*(byte *)(lVar7 + 0x29) & 0x10) == 0) goto switchD_009e04c5_caseD_1;
    unaff_RDI[0x11] = lVar4 + 2;
  }
  FUN_009d8a9c(lVar7,0x10);
  uVar3 = 1;
switchD_009e026e_caseD_2:
  return uVar3;
}


