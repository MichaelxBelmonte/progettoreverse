// Function: FUN_00abc51d
// Address: 00abc51d
// Size: 1750 bytes
// Class: OsSignatureMac


void FUN_00abc51d(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar11;
  longlong lVar12;
  undefined *puVar13;
  undefined8 local_80 [2];
  undefined *local_70;
  longlong local_68;
  undefined8 *local_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 *local_48;
  undefined **local_40;
  int local_34;
  
  local_48 = local_80;
  local_40 = &local_70;
  puVar13 = &DAT_0252aea8;
LAB_00abc57d:
  local_58 = unaff_RSI - 0x28;
  uVar6 = unaff_RDI;
LAB_00abc5c1:
  while( true ) {
    unaff_RDI = uVar6;
    uVar6 = unaff_RSI - unaff_RDI;
    if ((ulonglong)(((longlong)uVar6 >> 3) * -0x3333333333333333) < 6) {
                    /* WARNING: Could not recover jumptable at 0x00abcbd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_00abcd5c +
                *(int *)(&DAT_00abcd5c + ((longlong)uVar6 >> 3) * 0x3333333333333334)))();
      return;
    }
    if ((longlong)uVar6 < 0x118) {
      FUN_00abd84d(uVar6,param_2);
      return;
    }
    uVar9 = unaff_RDI + (uVar6 / 0x50) * 0x28;
    if ((longlong)uVar6 < 0x9c19) {
      iVar5 = FUN_00abcd74(param_2,local_58);
    }
    else {
      iVar5 = FUN_00abd489((uVar6 / 0x14 & 0xfffffffffffffff8) * 5 + uVar9,uVar9,local_58,param_2,
                           puVar13);
    }
    cVar3 = (*(code *)*param_2)();
    uVar6 = local_58;
    uVar10 = unaff_RSI - 0x50;
    if (cVar3 != '\0') break;
    while (uVar6 = uVar10, uVar10 = local_58, unaff_RDI != uVar6) {
      cVar3 = (*(code *)*param_2)();
      puVar2 = local_48;
      uVar10 = uVar6 - 0x28;
      if (cVar3 != '\0') goto LAB_00abc864;
    }
    uVar6 = unaff_RDI + 0x28;
    cVar3 = (*(code *)*param_2)();
    if (cVar3 == '\0') {
      if (uVar6 == uVar10) {
        return;
      }
      uVar6 = unaff_RDI + 0x50;
      while (cVar3 = (*(code *)*param_2)(), puVar2 = local_48, cVar3 == '\0') {
        uVar6 = uVar6 + 0x28;
        if (unaff_RSI == uVar6) {
          return;
        }
      }
      uVar1 = *(undefined8 *)(uVar6 - 0x20);
      local_48[1] = *(undefined8 *)(uVar6 - 0x18);
      *puVar2 = uVar1;
      local_70 = &DAT_0252af70;
      local_68 = *(longlong *)(uVar6 - 8);
      if (local_68 != 0) {
        _CFRetain();
      }
      uVar1 = *(undefined8 *)(unaff_RSI - 0x20);
      *(undefined8 *)(uVar6 - 0x18) = *(undefined8 *)(unaff_RSI - 0x18);
      *(undefined8 *)(uVar6 - 0x20) = uVar1;
      FUN_00abdcf0();
      uVar1 = *local_48;
      *(undefined8 *)(unaff_RSI - 0x18) = local_48[1];
      *(undefined8 *)(unaff_RSI - 0x20) = uVar1;
      FUN_00abdcf0();
      FUN_00abb66e();
      uVar10 = local_58;
    }
    if (uVar6 == uVar10) {
      return;
    }
    while( true ) {
      lVar7 = uVar6 - 0x10;
      do {
        lVar12 = lVar7;
        cVar3 = (*(code *)*param_2)();
        lVar7 = lVar12 + 0x28;
      } while (cVar3 == '\0');
      local_50 = lVar12 + 0x38;
      do {
        uVar9 = uVar10;
        uVar10 = uVar9 - 0x28;
        cVar3 = (*(code *)*param_2)();
        puVar2 = local_48;
      } while (cVar3 != '\0');
      uVar6 = lVar12 + 0x10U;
      if (uVar10 <= lVar12 + 0x10U) break;
      uVar1 = *(undefined8 *)(lVar12 + 0x18);
      local_48[1] = *(undefined8 *)(lVar12 + 0x20);
      *puVar2 = uVar1;
      local_70 = &DAT_0252af70;
      local_68 = *(longlong *)(lVar12 + 0x30);
      if (local_68 != 0) {
        _CFRetain();
      }
      uVar1 = *(undefined8 *)(uVar9 - 0x20);
      *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)(uVar9 - 0x18);
      *(undefined8 *)(lVar12 + 0x18) = uVar1;
      FUN_00abdcf0();
      uVar1 = *local_48;
      *(undefined8 *)(uVar9 - 0x18) = local_48[1];
      *(undefined8 *)(uVar9 - 0x20) = uVar1;
      FUN_00abdcf0();
      FUN_00abb66e();
      uVar6 = local_50;
    }
  }
  goto LAB_00abc908;
LAB_00abc864:
  uVar1 = *(undefined8 *)(unaff_RDI + 8);
  local_34 = iVar5;
  local_48[1] = *(undefined8 *)(unaff_RDI + 0x10);
  *puVar2 = uVar1;
  local_70 = &DAT_0252af70;
  local_68 = *(longlong *)(unaff_RDI + 0x20);
  if (local_68 != 0) {
    _CFRetain();
  }
  uVar1 = *(undefined8 *)(uVar6 + 8);
  *(undefined8 *)(unaff_RDI + 0x10) = *(undefined8 *)(uVar6 + 0x10);
  *(undefined8 *)(unaff_RDI + 8) = uVar1;
  FUN_00abdcf0();
  uVar1 = *local_48;
  *(undefined8 *)(uVar6 + 0x10) = local_48[1];
  *(undefined8 *)(uVar6 + 8) = uVar1;
  FUN_00abdcf0();
  FUN_00abb66e();
  iVar5 = local_34 + 1;
LAB_00abc908:
  uVar10 = unaff_RDI + 0x28;
  uVar8 = uVar10;
  if (uVar10 < uVar6) {
    while( true ) {
      local_34 = iVar5;
      uVar10 = uVar8 - 0x28;
      do {
        uVar8 = uVar10;
        uVar10 = uVar8 + 0x28;
        cVar3 = (*(code *)*param_2)();
      } while (cVar3 != '\0');
      local_50 = uVar8 + 0x50;
      do {
        uVar11 = uVar6;
        uVar6 = uVar11 - 0x28;
        cVar3 = (*(code *)*param_2)();
        puVar2 = local_48;
      } while (cVar3 == '\0');
      iVar5 = local_34;
      if (uVar6 < uVar10) break;
      uVar1 = *(undefined8 *)(uVar8 + 0x30);
      local_48[1] = *(undefined8 *)(uVar8 + 0x38);
      *puVar2 = uVar1;
      local_70 = &DAT_0252af70;
      local_68 = *(longlong *)(uVar8 + 0x48);
      local_60 = (undefined8 *)(uVar8 + 0x30);
      if (local_68 != 0) {
        _CFRetain();
      }
      uVar1 = *(undefined8 *)(uVar11 - 0x20);
      local_60[1] = *(undefined8 *)(uVar11 - 0x18);
      *local_60 = uVar1;
      local_60 = (undefined8 *)(uVar11 - 0x10);
      FUN_00abdcf0();
      uVar1 = *local_48;
      *(undefined8 *)(uVar11 - 0x18) = local_48[1];
      *(undefined8 *)(uVar11 - 0x20) = uVar1;
      FUN_00abdcf0();
      FUN_00abb66e();
      uVar8 = local_50;
      iVar5 = local_34 + 1;
      if (uVar9 == uVar10) {
        uVar9 = uVar6;
      }
    }
  }
  if ((uVar10 != uVar9) && (cVar3 = (*(code *)*param_2)(), puVar2 = local_48, cVar3 != '\0')) {
    uVar1 = *(undefined8 *)(uVar10 + 8);
    local_34 = iVar5;
    local_48[1] = *(undefined8 *)(uVar10 + 0x10);
    *puVar2 = uVar1;
    local_70 = &DAT_0252af70;
    local_68 = *(longlong *)(uVar10 + 0x20);
    if (local_68 != 0) {
      _CFRetain();
    }
    uVar1 = *(undefined8 *)(uVar9 + 8);
    *(undefined8 *)(uVar10 + 0x10) = *(undefined8 *)(uVar9 + 0x10);
    *(undefined8 *)(uVar10 + 8) = uVar1;
    local_50 = uVar10;
    FUN_00abdcf0();
    uVar1 = *local_48;
    *(undefined8 *)(uVar9 + 0x10) = local_48[1];
    *(undefined8 *)(uVar9 + 8) = uVar1;
    FUN_00abdcf0();
    FUN_00abb66e();
    iVar5 = local_34 + 1;
    uVar10 = local_50;
  }
  uVar9 = uVar10;
  if (iVar5 == 0) {
    uVar4 = FUN_00abd9c8();
    local_60 = (undefined8 *)CONCAT71(local_60._1_7_,uVar4);
    local_50 = uVar10;
    cVar3 = FUN_00abd9c8();
    if (cVar3 != '\0') goto LAB_00abcbac;
    uVar9 = local_50;
    uVar6 = uVar10 + 0x28;
    if ((char)local_60 != '\0') goto LAB_00abc5c1;
  }
  lVar7 = ((longlong)(unaff_RSI - uVar9) >> 3) * -0x3333333333333333;
  if (lVar7 <= ((longlong)(uVar9 - unaff_RDI) >> 3) * -0x3333333333333333) {
    FUN_00abc51d(lVar7,param_2);
    unaff_RSI = uVar9;
    goto LAB_00abc57d;
  }
  FUN_00abc51d(lVar7,param_2);
  uVar6 = uVar9 + 0x28;
  goto LAB_00abc5c1;
LAB_00abcbac:
  unaff_RSI = local_50;
  if ((char)local_60 != '\0') {
    return;
  }
  goto LAB_00abc57d;
}


