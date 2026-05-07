// Function: FUN_01d069b0
// Address: 01d069b0
// Size: 846 bytes
// Class: GNMultipleValue

uint64_t FUN_01d069b0(uint64_t param_1,char param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t **pplVar6;
  undefined7 uVar8;
  uint64_t uVar7;
  int64_t this_ptr;
  int64_t *plVar9;
  int64_t local_e0 [2];
  uint8_t local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  uint32_t local_84;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_48;
  char local_40;
  uint32_t local_38;
  
  plVar1 = *(int64_t **)(this_ptr + 0x1c8);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_70 = plVar1;
  FUN_001b9d20();
  if (plVar1 == (int64_t *)0x0) {
LAB_01d06a0e:
    pplVar6 = &g_02802688;
    plVar9 = g_02802688;
    if (g_02802690 != '\0') goto LAB_01d06a1e;
LAB_01d06a35:
    cVar4 = '\x01';
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01d06a0e;
    pplVar6 = &local_70;
    plVar9 = local_70;
    if (local_68 == '\0') goto LAB_01d06a35;
LAB_01d06a1e:
    *(void*)(pplVar6 + 1) = 0;
    cVar4 = local_68;
  }
  if ((cVar4 != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar8 = (undefined7)((uint64_t)plVar1 >> 8);
  if (plVar9 == (int64_t *)0x0) {
    uVar7 = CONCAT71(uVar8,1);
    if (param_2 == '\0') goto LAB_01d06cea;
LAB_01d06a85:
    FUN_01cfc6a0(g_02390124);
    plVar1 = local_70;
    if ((local_68 == '\0') &&
       (((local_70 != (int64_t *)0x0 && (FUN_00d50b00(), local_68 != '\0')) &&
        (local_70 != (int64_t *)0x0)))) {
      FUN_00d50b20();
    }
    FUN_01cfc6a0(0);
    plVar3 = local_70;
    if (((local_68 == '\0') && (local_70 != (int64_t *)0x0)) &&
       ((FUN_00d50b00(), local_68 != '\0' && (local_70 != (int64_t *)0x0)))) {
      FUN_00d50b20();
    }
    local_a8 = plVar1;
    local_a0 = '\0';
    FUN_01cfd130();
    local_84 = 0;
    local_98 = plVar3;
    local_90 = '\0';
    FUN_01cfd130();
    local_e0[0] = local_b8;
    FUN_0049c630(local_e0,&local_84,4);
    local_70 = (int64_t *)&g_02647118;
    local_38 = 0x3f800000;
    FUN_01f7b9d0(g_023b5d7c,&local_70);
    lVar2 = local_80;
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    local_d0 = 1;
    FUN_01d03810();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    local_70 = (int64_t *)&g_024f9300;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_70 = &g_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d11e80();
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    uVar7 = CONCAT71((int7)((uint64_t)lVar2 >> 8),1);
    if (plVar9 == (int64_t *)0x0) goto LAB_01d06cea;
  }
  else {
    iVar5 = FUN_01f7c6f0();
    uVar7 = CONCAT71(uVar8,iVar5 != 2);
    if ((iVar5 != 2) && (param_2 != '\0')) goto LAB_01d06a85;
  }
  FUN_00d50b20();
LAB_01d06cea:
  return uVar7 & 0xffffffff;
}

