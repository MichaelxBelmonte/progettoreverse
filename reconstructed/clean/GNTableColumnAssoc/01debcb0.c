// Function: FUN_01debcb0
// Address: 01debcb0
// Size: 724 bytes
// Class: GNTableColumnAssoc

uint64_t FUN_01debcb0(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  uint64_t uVar5;
  int64_t *arg1;
  int64_t *plVar7;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  int64_t *plVar6;
  
  lVar2 = g_02800140;
  if (g_02800140 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  plVar7 = local_40;
  if (local_40 == (int64_t *)0x0) {
    bVar1 = true;
    plVar7 = (int64_t *)0x0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = false;
      if ((local_38 == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01debd3e;
      FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    bVar1 = false;
  }
LAB_01debd3e:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((bVar1) || ((**(code **)(*plVar7 + 0x3f8))(), plVar3 = local_40, local_40 == (int64_t *)0x0))
  {
    uVar5 = 0;
    goto LAB_01debf63;
  }
  if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d26010();
  plVar6 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    (**(code **)(*local_40 + 0x10))();
    FUN_00d50b20();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_01debe96:
    local_70 = plVar3;
    local_68 = '\0';
    FUN_01d28610();
    plVar6 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    local_50 = plVar6;
    FUN_01ca97a0();
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_60 = plVar3;
    local_58 = '\0';
    FUN_01ca86b0();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01d26010();
    local_90 = *param_2;
    local_88 = '\0';
    local_80 = *arg1;
    local_78 = '\0';
    cVar4 = (**(code **)(*local_40 + 200))(&local_80,&local_90);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b20();
    }
    if (cVar4 == '\0') goto LAB_01debe96;
  }
  uVar5 = CONCAT71((int7)((uint64_t)plVar6 >> 8),1);
  FUN_00d50b20();
LAB_01debf63:
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return uVar5 & 0xffffffff;
}

