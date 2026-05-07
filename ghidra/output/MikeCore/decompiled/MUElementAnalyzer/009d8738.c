// Function: FUN_009d8738
// Address: 009d8738
// Size: 730 bytes
// Class: MUElementAnalyzer
// String references:
//   "The repeat operator \"*\" cannot start a regular expression."
//   "The repeat operator \"?\" cannot start a regular expression."
//   "The repeat operator \"+\" cannot start a regular expression."
//   "Found a closing repetition operator } with no corresponding {."


ulonglong FUN_009d8738(void)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte *pbVar4;
  char cVar5;
  undefined8 uVar6;
  byte *pbVar7;
  longlong *unaff_RDI;
  byte local_38 [24];
  
  pbVar7 = (byte *)unaff_RDI[0x11];
  uVar3 = 0;
  switch(*(undefined1 *)(*(longlong *)unaff_RDI[1] + 0x20 + (ulonglong)*pbVar7)) {
  case 1:
    uVar3 = FUN_009d9144();
    return uVar3;
  case 2:
    goto switchD_009d877a_caseD_2;
  case 3:
    unaff_RDI[0x11] = (longlong)(pbVar7 + 1);
    goto LAB_009d87c2;
  case 4:
    unaff_RDI[0x11] = (longlong)(pbVar7 + 1);
LAB_009d87c2:
    FUN_009d8a9c(0,0x10);
LAB_009d880d:
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
    goto switchD_009d877a_caseD_2;
  case 5:
    unaff_RDI[0x11] = (longlong)(pbVar7 + 1);
    cVar5 = '\x02' - ((*(uint *)(*unaff_RDI + 0x28) >> 0xc & 1) == 0);
    uVar3 = 0;
    if ((*(uint *)(*unaff_RDI + 0x28) >> 0xd & 1) != 0) {
      cVar5 = '\0';
    }
    lVar2 = FUN_009d8a9c(0,0x18);
    *(char *)(lVar2 + 0x10) = cVar5;
    goto LAB_009d880d;
  case 6:
    if (pbVar7 != (byte *)unaff_RDI[0xf]) {
      unaff_RDI[0x11] = (longlong)(pbVar7 + 1);
LAB_009d884b:
      uVar6 = 0xffffffffffffffff;
LAB_009d8872:
      uVar3 = FUN_009d9e38(0,uVar6);
      return uVar3;
    }
    pbVar4 = local_38;
    FUN_009d5ed0();
    FUN_009d8cfc(pbVar4,0);
    break;
  case 7:
    if (pbVar7 != (byte *)unaff_RDI[0xf]) {
      unaff_RDI[0x11] = (longlong)(pbVar7 + 1);
      goto LAB_009d884b;
    }
    pbVar4 = local_38;
    FUN_009d5ed0();
    FUN_009d8cfc(pbVar4,0);
    break;
  case 8:
    if (pbVar7 != (byte *)unaff_RDI[0xf]) {
      unaff_RDI[0x11] = (longlong)(pbVar7 + 1);
      uVar6 = 1;
      goto LAB_009d8872;
    }
    pbVar4 = local_38;
    FUN_009d5ed0();
    FUN_009d8cfc(pbVar4,0);
    break;
  case 9:
    uVar3 = FUN_009daaae();
    return uVar3;
  default:
    goto switchD_009d877a_caseD_a;
  case 0xb:
switchD_009d877a_caseD_b:
    uVar3 = FUN_009da82e();
    return uVar3;
  case 0xc:
    uVar3 = FUN_009d941a();
    return uVar3;
  case 0xd:
    if ((*(uint *)(*unaff_RDI + 0x28) & 0xa00) != 0x800) goto switchD_009d877a_caseD_a;
    lVar2 = unaff_RDI[0x10] - (longlong)pbVar7;
    uVar3 = 0x800;
    do {
      uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
      if (lVar2 == 0) break;
      pbVar4 = pbVar7 + 1;
      unaff_RDI[0x11] = (longlong)pbVar4;
      bVar1 = *pbVar7;
      lVar2 = lVar2 + -1;
      pbVar7 = pbVar4;
    } while ((0xd < (ulonglong)bVar1) || ((0x3400UL >> ((ulonglong)bVar1 & 0x3f) & 1) == 0));
    goto switchD_009d877a_caseD_2;
  case 0xf:
    unaff_RDI[0x11] = (longlong)(pbVar7 + 1);
    uVar3 = FUN_009da2a6();
    return uVar3;
  case 0x10:
    if ((*(byte *)(*unaff_RDI + 0x29) & 2) == 0) goto switchD_009d877a_caseD_a;
    lVar2 = unaff_RDI[0xf];
    pbVar4 = local_38;
    FUN_009d5ed0();
    FUN_009d8cfc(pbVar4,(longlong)pbVar7 - lVar2);
    break;
  case 0x1a:
    if ((*(byte *)(*unaff_RDI + 0x2a) & 2) != 0) goto switchD_009d877a_caseD_b;
    goto switchD_009d877a_caseD_a;
  }
  if ((local_38[0] & 1) != 0) {
    operator_delete(pbVar4);
  }
  uVar3 = 0;
switchD_009d877a_caseD_2:
  return uVar3 & 0xffffffff;
switchD_009d877a_caseD_a:
  uVar3 = FUN_009d8ca4();
  return uVar3;
}


