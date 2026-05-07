// Function: FUN_019e9aa0
// Address: 019e9aa0
// Size: 2343 bytes
// Class: GNDictionary


/* WARNING: Removing unreachable block (ram,0x019ea2ff) */
/* WARNING: Removing unreachable block (ram,0x019ea308) */
/* WARNING: Removing unreachable block (ram,0x019ea0a8) */
/* WARNING: Removing unreachable block (ram,0x019ea0b1) */
/* WARNING: Removing unreachable block (ram,0x019e9c13) */
/* WARNING: Removing unreachable block (ram,0x019e9c1c) */
/* WARNING: Removing unreachable block (ram,0x019e9c37) */
/* WARNING: Removing unreachable block (ram,0x019e9c40) */
/* WARNING: Removing unreachable block (ram,0x019ea0cb) */
/* WARNING: Removing unreachable block (ram,0x019ea0d4) */
/* WARNING: Removing unreachable block (ram,0x019ea324) */
/* WARNING: Removing unreachable block (ram,0x019ea32d) */
/* WARNING: Removing unreachable block (ram,0x019e9b40) */
/* WARNING: Removing unreachable block (ram,0x019e9b4d) */
/* WARNING: Removing unreachable block (ram,0x019e9bbd) */
/* WARNING: Removing unreachable block (ram,0x019e9bc6) */
/* WARNING: Removing unreachable block (ram,0x019e9b7f) */
/* WARNING: Removing unreachable block (ram,0x019e9b88) */

undefined8 * FUN_019e9aa0(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar8;
  longlong local_40;
  char local_38;
  
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar6 + 0x18))();
  iVar4 = (**(code **)(*unaff_RSI + 0xd08))();
  bVar1 = true;
  lVar7 = local_40;
  if (iVar4 == 0) {
    FUN_00d46530();
    if (local_40 == 0) {
LAB_019e9bcd:
      bVar2 = false;
      lVar7 = 0;
    }
    else {
      bVar2 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
LAB_019e9bd3:
    lVar8 = DAT_026dc290;
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      if (DAT_026dc290 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar8;
      local_38 = '\0';
      FUN_00ca0840();
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      bVar1 = false;
    }
  }
  else {
    if (iVar4 == 1) {
      FUN_00d46530();
      if (local_40 == 0) goto LAB_019e9bcd;
      bVar2 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_019e9bd3;
    }
    if (iVar4 == 2) {
      FUN_00d46530();
      if (local_40 == 0) goto LAB_019e9bcd;
      bVar2 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_019e9bd3;
    }
    lVar7 = 0;
    bVar2 = false;
  }
  uVar5 = (**(code **)(&UNK_00001588 + *unaff_RSI))();
  lVar8 = lVar7;
  switch(uVar5) {
  case 0:
    FUN_00d46530();
    if (local_40 == lVar7) {
      if ((!bVar2) && (lVar7 != 0)) {
        bVar1 = true;
        if (local_38 != '\0') break;
        bVar2 = true;
        FUN_00d50b00();
      }
LAB_019e9fed:
      lVar8 = lVar7;
      bVar1 = bVar2;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      lVar8 = local_40;
      bVar1 = true;
      if ((bVar2) && (lVar7 != 0)) {
        FUN_00d50b20();
        lVar7 = local_40;
        bVar2 = true;
        goto LAB_019e9fed;
      }
    }
    else if ((bVar2) && (lVar7 != 0)) {
      FUN_00d50b20();
      lVar8 = local_40;
      bVar1 = true;
    }
    else {
LAB_019e9e03:
      lVar8 = local_40;
      bVar1 = true;
    }
    break;
  case 1:
    FUN_00d46530();
    if (local_40 == lVar7) {
      if ((!bVar2) && (lVar7 != 0)) {
        bVar1 = true;
        if (local_38 != '\0') break;
        bVar2 = true;
        FUN_00d50b00();
      }
LAB_019ea006:
      lVar8 = lVar7;
      bVar1 = bVar2;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      lVar8 = local_40;
      bVar1 = true;
      if ((bVar2) && (lVar7 != 0)) {
        FUN_00d50b20();
        lVar7 = local_40;
        bVar2 = true;
        goto LAB_019ea006;
      }
    }
    else {
      if ((!bVar2) || (lVar7 == 0)) goto LAB_019e9e03;
      FUN_00d50b20();
      lVar8 = local_40;
      bVar1 = true;
    }
    break;
  case 2:
    FUN_00d46530();
    if (local_40 == lVar7) {
      if ((!bVar2) && (lVar7 != 0)) {
        bVar1 = true;
        if (local_38 != '\0') break;
        bVar2 = true;
        FUN_00d50b00();
      }
LAB_019ea01f:
      lVar8 = lVar7;
      bVar1 = bVar2;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      lVar8 = local_40;
      bVar1 = true;
      if ((bVar2) && (lVar7 != 0)) {
        FUN_00d50b20();
        lVar7 = local_40;
        bVar2 = true;
        goto LAB_019ea01f;
      }
    }
    else {
      if ((!bVar2) || (lVar7 == 0)) goto LAB_019e9e03;
      FUN_00d50b20();
      lVar8 = local_40;
      bVar1 = true;
    }
    break;
  case 3:
    FUN_00d46530();
    if (local_40 == lVar7) {
      if ((!bVar2) && (lVar7 != 0)) {
        bVar1 = true;
        if (local_38 != '\0') break;
        bVar2 = true;
        FUN_00d50b00();
      }
LAB_019ea038:
      lVar8 = lVar7;
      bVar1 = bVar2;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      lVar8 = local_40;
      bVar1 = true;
      if ((bVar2) && (lVar7 != 0)) {
        FUN_00d50b20();
        lVar7 = local_40;
        bVar2 = true;
        goto LAB_019ea038;
      }
    }
    else {
      if ((!bVar2) || (lVar7 == 0)) goto LAB_019e9e03;
      FUN_00d50b20();
      lVar8 = local_40;
      bVar1 = true;
    }
    break;
  case 4:
    FUN_00d46530();
    if (local_40 == lVar7) {
      if ((!bVar2) && (local_40 != 0)) {
        bVar1 = true;
        if (local_38 != '\0') break;
        bVar2 = true;
        FUN_00d50b00();
      }
LAB_019ea051:
      lVar8 = lVar7;
      bVar1 = bVar2;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      lVar8 = local_40;
      bVar1 = true;
      if ((bVar2) && (lVar7 != 0)) {
        FUN_00d50b20();
        lVar7 = local_40;
        bVar2 = true;
        goto LAB_019ea051;
      }
    }
    else {
      if ((!bVar2) || (lVar7 == 0)) goto LAB_019e9e03;
      FUN_00d50b20();
      lVar8 = local_40;
      bVar1 = true;
    }
    break;
  default:
    if (bVar1) goto LAB_019ea0df;
    if (bVar2) {
      FUN_00d50b20();
    }
    bVar1 = true;
    lVar8 = 0;
    bVar2 = false;
    goto LAB_019ea0e2;
  }
  bVar2 = bVar1;
  lVar7 = DAT_027e1488;
  if (lVar8 == 0) {
LAB_019ea0df:
    bVar1 = true;
    lVar8 = 0;
  }
  else {
    if (DAT_027e1488 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar7;
    local_38 = '\0';
    FUN_00ca0840();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    bVar1 = false;
  }
LAB_019ea0e2:
  iVar4 = (**(code **)(&UNK_000015a0 + *unaff_RSI))();
  lVar7 = lVar8;
  bVar3 = bVar2;
  if (iVar4 == 1) {
    FUN_00d46530();
    if (local_40 == lVar8) {
      if ((!bVar2) && (local_40 != 0)) {
        if (local_38 != '\0') {
LAB_019ea20a:
          bVar3 = true;
          goto LAB_019ea2b5;
        }
        FUN_00d50b00();
        bVar3 = true;
      }
    }
    else {
      if (local_38 != '\0') {
        bVar3 = true;
        lVar7 = local_40;
        if ((bVar2) && (lVar8 != 0)) {
          FUN_00d50b20();
          bVar3 = true;
        }
        goto LAB_019ea2b5;
      }
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      lVar7 = local_40;
      bVar3 = true;
      if ((bVar2) && (lVar8 != 0)) {
        FUN_00d50b20();
        bVar3 = true;
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (iVar4 != 0) {
      if (!bVar1 && bVar2) {
        FUN_00d50b20();
      }
      goto LAB_019ea34c;
    }
    FUN_00d46530();
    if (local_40 == lVar8) {
      if ((!bVar2) && (lVar8 != 0)) {
        if (local_38 != '\0') goto LAB_019ea20a;
        FUN_00d50b00();
        bVar3 = true;
      }
    }
    else {
      if (local_38 != '\0') {
        bVar3 = true;
        lVar7 = local_40;
        if ((bVar2) && (lVar8 != 0)) {
          FUN_00d50b20();
          bVar3 = true;
        }
        goto LAB_019ea2b5;
      }
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      lVar7 = local_40;
      bVar3 = true;
      if ((bVar2) && (lVar8 != 0)) {
        FUN_00d50b20();
        bVar3 = true;
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_019ea2b5:
  lVar8 = DAT_027e1490;
  if (lVar7 != 0) {
    if (DAT_027e1490 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    *unaff_RDI = plVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (!bVar3) {
      return unaff_RDI;
    }
    FUN_00d50b20();
    return unaff_RDI;
  }
LAB_019ea34c:
  *unaff_RDI = plVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


