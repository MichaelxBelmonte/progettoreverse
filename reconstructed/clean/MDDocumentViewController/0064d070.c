// Function: FUN_0064d070
// Address: 0064d070
// Size: 500 bytes
// Class: MDDocumentViewController

uint64_t FUN_0064d070(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t *arg1;
  double dVar7;
  uint64_t uVar8;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar1 = g_026f6fa0;
  if (g_026f6fa0 != 0) {
    FUN_00d50b00();
  }
  dVar7 = (double)FUN_00e7d6f0();
  uVar6 = (uint64_t)(dVar7 * g_023907c0);
  dVar7 = dVar7 * g_023907c0 - g_023907c8;
  uVar8 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
      (uVar8 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  bVar3 = (byte)(((int64_t)dVar7 & (int64_t)uVar6 >> 0x3f | uVar6) / 3);
  local_60 = lVar1;
  local_58 = '\0';
  FUN_000175c0(uVar8,&local_60);
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    local_38 = '\0';
    local_40 = plVar2;
    bVar3 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  uVar6 = CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
  if ((plVar2 != (int64_t *)0x0 & bVar3) != 0) {
    FUN_01f27fe0();
    local_50 = *arg1;
    local_48 = '\0';
    iVar5 = (**(code **)(*local_40 + 0x5b8))();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (iVar5 == 0) {
      (**(code **)(*(int64_t *)*arg1 + 0x4f8))();
      cVar4 = (**(code **)(*(int64_t *)*arg1 + 0x478))();
      if (cVar4 == '\0') goto LAB_0064d234;
    }
    else if (iVar5 != 1) goto LAB_0064d234;
    uVar6 = 0;
  }
LAB_0064d234:
  return uVar6 & 0xffffffff;
}

