// Function: FUN_002257b0
// Address: 002257b0
// Size: 1569 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00225d59) */
/* WARNING: Removing unreachable block (ram,0x00225cba) */
/* WARNING: Removing unreachable block (ram,0x00225be1) */
/* WARNING: Removing unreachable block (ram,0x00225bef) */
/* WARNING: Removing unreachable block (ram,0x00225c0c) */
/* WARNING: Removing unreachable block (ram,0x00225bfc) */
/* WARNING: Removing unreachable block (ram,0x00225c0f) */
/* WARNING: Removing unreachable block (ram,0x00225c2a) */
/* WARNING: Removing unreachable block (ram,0x00225c3b) */
/* WARNING: Removing unreachable block (ram,0x00225c49) */
/* WARNING: Removing unreachable block (ram,0x00225c5b) */
/* WARNING: Removing unreachable block (ram,0x00225b74) */
/* WARNING: Removing unreachable block (ram,0x00225b33) */
/* WARNING: Removing unreachable block (ram,0x002259d5) */
/* WARNING: Removing unreachable block (ram,0x002259db) */
/* WARNING: Removing unreachable block (ram,0x002258b8) */
/* WARNING: Removing unreachable block (ram,0x002258be) */
/* WARNING: Removing unreachable block (ram,0x00225844) */
/* WARNING: Removing unreachable block (ram,0x0022584a) */
/* WARNING: Removing unreachable block (ram,0x00225837) */
/* WARNING: Removing unreachable block (ram,0x002258ab) */
/* WARNING: Removing unreachable block (ram,0x002259c8) */
/* WARNING: Removing unreachable block (ram,0x00225b26) */
/* WARNING: Removing unreachable block (ram,0x00225b50) */
/* WARNING: Removing unreachable block (ram,0x00225b5d) */
/* WARNING: Removing unreachable block (ram,0x00225b6b) */
/* WARNING: Removing unreachable block (ram,0x00225b79) */
/* WARNING: Removing unreachable block (ram,0x00225b87) */
/* WARNING: Removing unreachable block (ram,0x00225bb5) */
/* WARNING: Removing unreachable block (ram,0x00225b94) */
/* WARNING: Removing unreachable block (ram,0x00225bb8) */
/* WARNING: Removing unreachable block (ram,0x00225bcb) */
/* WARNING: Removing unreachable block (ram,0x00225bd0) */
/* WARNING: Removing unreachable block (ram,0x00225bd8) */
/* WARNING: Removing unreachable block (ram,0x00225c6b) */
/* WARNING: Removing unreachable block (ram,0x00225c64) */
/* WARNING: Removing unreachable block (ram,0x00225c6e) */
/* WARNING: Removing unreachable block (ram,0x00225c82) */
/* WARNING: Removing unreachable block (ram,0x00225c9f) */
/* WARNING: Removing unreachable block (ram,0x00225c8f) */
/* WARNING: Removing unreachable block (ram,0x00225ca2) */
/* WARNING: Removing unreachable block (ram,0x00225cb5) */
/* WARNING: Removing unreachable block (ram,0x00225cc2) */
/* WARNING: Removing unreachable block (ram,0x00225d60) */
/* WARNING: Removing unreachable block (ram,0x00225ccb) */
/* WARNING: Removing unreachable block (ram,0x00225cdf) */
/* WARNING: Removing unreachable block (ram,0x00225cfc) */
/* WARNING: Removing unreachable block (ram,0x00225cec) */
/* WARNING: Removing unreachable block (ram,0x00225cff) */
/* WARNING: Removing unreachable block (ram,0x00225d20) */
/* WARNING: Removing unreachable block (ram,0x00225d31) */
/* WARNING: Removing unreachable block (ram,0x00225d3f) */
/* WARNING: Removing unreachable block (ram,0x00225d50) */
/* WARNING: Removing unreachable block (ram,0x00225d62) */
/* WARNING: Removing unreachable block (ram,0x00225d67) */
/* WARNING: Removing unreachable block (ram,0x00225d73) */
/* WARNING: Removing unreachable block (ram,0x00225d81) */
/* WARNING: Removing unreachable block (ram,0x00225d85) */
/* WARNING: Removing unreachable block (ram,0x00225d91) */
/* WARNING: Removing unreachable block (ram,0x00225d9f) */
/* WARNING: Removing unreachable block (ram,0x00225dba) */

void FUN_002257b0(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char *pcVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong unaff_RDI;
  longlong lVar6;
  bool bVar7;
  char local_80;
  undefined7 uStack_7f;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    return;
  }
  (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
  local_80 = local_40[0];
  pcVar3 = &local_80;
  if (local_40[0] != '\0') {
    pcVar3 = local_40;
  }
  *pcVar3 = '\0';
  plVar1 = *(longlong **)(unaff_RDI + 0x90);
  FUN_00d50b00();
  (**(code **)(*plVar1 + 0xa00))();
  if (local_70 == 0) {
    bVar7 = false;
  }
  else {
    plVar1 = *(longlong **)(unaff_RDI + 0x90);
    (**(code **)(&UNK_00001550 + *plVar1))();
    local_38[0] = local_40[0];
    pcVar3 = local_38;
    if (local_40[0] != '\0') {
      pcVar3 = local_40;
    }
    *pcVar3 = '\0';
    plVar2 = *(longlong **)(unaff_RDI + 0x90);
    FUN_00d50b00();
    (**(code **)(*plVar2 + 0xa00))();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cade0();
    bVar7 = CONCAT71(uStack_7f,local_80) != 0;
    if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (!bVar7) {
    return;
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  pcVar3 = local_40;
  if (local_40[0] == '\0') {
    pcVar3 = local_38;
  }
  local_38[0] = local_40[0];
  *pcVar3 = '\0';
  pVar5 = (pthread_key_t)local_38;
  plVar2 = *(longlong **)(unaff_RDI + 0x90);
  FUN_00d50b00();
  (**(code **)(*plVar2 + 0xa00))();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cade0();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  lVar6 = local_70;
  if (local_70 == 0) {
    bVar7 = true;
    lVar6 = 0;
  }
  else {
    if (local_68 == '\0') {
      FUN_00d50b00();
      bVar7 = false;
      if ((local_68 == '\0') || (local_70 == 0)) goto LAB_00225ab8;
      FUN_00d50b20();
    }
    else {
      local_68 = '\0';
    }
    bVar7 = false;
  }
LAB_00225ab8:
  if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    if (*(longlong *)(unaff_RDI + 0xd8) != 0) {
      FUN_01e561b0();
    }
    if (!bVar7) {
      FUN_00d50b20();
    }
  }
  return;
}


