// Function: FUN_01df7770
// Address: 01df7770
// Size: 914 bytes
// Class: GNColor

void FUN_01df7770(void)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  uint64_t uVar7;
  undefined7 uVar9;
  uint64_t uVar8;
  int64_t *plVar10;
  uint uVar11;
  int64_t *plVar12;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  uint64_t local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01ccad60();
  plVar4 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01ed2da0();
  plVar12 = local_40;
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    (**(code **)(*local_40 + 0x10))();
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b20();
    }
  }
  iVar6 = FUN_01dca080();
  uVar8 = 0;
  plVar10 = (int64_t *)0x0;
  if ((iVar6 == 1) && (plVar12 != (int64_t *)0x0)) {
    uVar7 = 0;
    do {
      iVar6 = FUN_01dcea80();
      if (iVar6 <= (int)uVar7) {
        local_98 = plVar4;
        local_90 = '\0';
        local_88 = 0;
        local_80 = '\0';
        local_48 = plVar12;
        (**(code **)(*plVar12 + 0x18))(&local_88,&local_98);
        plVar10 = local_40;
        if (local_40 == (int64_t *)0x0) {
          plVar10 = (int64_t *)0x0;
          uVar8 = 0;
        }
        else {
          uVar9 = (undefined7)(uVar7 >> 8);
          if (local_38 == '\0') {
            FUN_00d50b00();
            uVar8 = CONCAT71(uVar9,1);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
            uVar8 = CONCAT71(uVar9,1);
          }
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar10 == (int64_t *)0x0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(uint *)((int64_t)plVar10 + 0xc);
        }
        local_50 = uVar8;
        FUN_01ed4a00();
        uVar1 = *(uint *)((int64_t)local_40 + 0xc);
        if (local_38 != '\0') {
          FUN_00d50b20();
        }
        uVar8 = local_50;
        plVar12 = local_48;
        if (uVar11 != uVar1) goto LAB_01df7ac0;
        if ((int)uVar11 < 1) goto LAB_01df7aaa;
        uVar7 = 0;
        local_58 = plVar10;
        goto LAB_01df7975;
      }
      cVar5 = FUN_01ed47c0();
      if (cVar5 != '\0') break;
      cVar5 = FUN_01ed46d0();
      uVar7 = (uint64_t)((int)uVar7 + 1);
    } while (cVar5 == '\0');
    uVar8 = 0;
    plVar10 = (int64_t *)0x0;
  }
LAB_01df7ac0:
  cVar5 = (char)uVar8;
  (**(code **)(*plVar4 + 0x920))();
  goto LAB_01df7acd;
  while( true ) {
    local_78 = plVar4;
    local_70 = '\0';
    FUN_01ed4a00();
    lVar2 = *(int64_t *)(*(int64_t *)(local_a8 + 0x10) + uVar7 * 8);
    local_60 = 0;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    local_68 = lVar2;
    (**(code **)(*local_48 + 0x18))(&local_68,&local_78);
    plVar12 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((plVar12 != (int64_t *)0x0) &&
       (iVar6 = *(int *)((int64_t)plVar12 + 0xc), FUN_00d50b20(), uVar8 = local_50,
       plVar10 = local_58, plVar12 = local_48, iVar6 != 0)) goto LAB_01df7ac0;
    uVar7 = uVar7 + 1;
    plVar10 = local_58;
    if (uVar11 == uVar7) break;
LAB_01df7975:
    lVar2 = *(int64_t *)(local_58[2] + uVar7 * 8);
    FUN_01ed4a00();
    lVar3 = *(int64_t *)(local_40[2] + uVar7 * 8);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar8 = local_50;
    plVar10 = local_58;
    plVar12 = local_48;
    if (lVar2 != lVar3) goto LAB_01df7ac0;
  }
LAB_01df7aaa:
  cVar5 = (char)local_50;
  plVar12 = local_48;
LAB_01df7acd:
  if (plVar12 != (int64_t *)0x0) {
    (**(code **)(*plVar12 + 0x10))();
    FUN_00d50b20();
  }
  if ((cVar5 != '\0') && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

