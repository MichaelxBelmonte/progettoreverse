// Function: FUN_019e9aa0
// Address: 019e9aa0
// Size: 2343 bytes
// Class: GNDictionary

void* FUN_019e9aa0(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint32_t uVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar8;
  int64_t local_40;
  char local_38;
  
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar6 + 0x18))();
  iVar4 = (**(code **)(*arg1 + 0xd08))();
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
    lVar8 = g_026dc290;
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      if (g_026dc290 != 0) {
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
  uVar5 = (**(code **)(&UNK_00001588 + *arg1))();
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
  lVar7 = g_027e1488;
  if (lVar8 == 0) {
LAB_019ea0df:
    bVar1 = true;
    lVar8 = 0;
  }
  else {
    if (g_027e1488 != 0) {
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
  iVar4 = (**(code **)(&UNK_000015a0 + *arg1))();
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
  lVar8 = g_027e1490;
  if (lVar7 != 0) {
    if (g_027e1490 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    *this_ptr = plVar6;
    *(void*)(this_ptr + 1) = 1;
    if (!bVar3) {
      return this_ptr;
    }
    FUN_00d50b20();
    return this_ptr;
  }
LAB_019ea34c:
  *this_ptr = plVar6;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

