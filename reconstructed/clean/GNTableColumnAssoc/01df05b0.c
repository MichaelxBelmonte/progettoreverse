// Function: FUN_01df05b0
// Address: 01df05b0
// Size: 601 bytes
// Class: GNTableColumnAssoc

uint64_t FUN_01df05b0(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  char cVar2;
  uint uVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *local_90;
  char local_88;
  int64_t *local_40;
  char local_38;
  
  FUN_01cae990();
  lVar1 = g_027f2e68;
  if (g_027f2e68 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*local_40 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    uVar3 = FUN_01d827c0();
    uVar5 = (uint64_t)uVar3;
  }
  else {
    uVar5 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
    if (param_2 != '\0') {
      FUN_01ccad60();
      if (local_40 == (int64_t *)0x0) {
        plVar6 = (int64_t *)0x0;
        if (local_38 != '\0') {
          plVar6 = (int64_t *)0x0;
        }
      }
      else {
        plVar6 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
      FUN_01db9a60();
      if (local_40 == (int64_t *)0x0) {
        plVar7 = (int64_t *)0x0;
      }
      else {
        plVar7 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
      if ((int)plVar7[0x27] != -1) {
        FUN_01caeb00();
        (**(code **)(*local_90 + 0x980))();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        lVar1 = plVar7[0x27];
        uVar4 = FUN_01dcc980();
        (**(code **)(*plVar7 + 0x978))(uVar4,(int)lVar1);
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (plVar6 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  return uVar5 & 0xffffffff;
}

