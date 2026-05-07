// Function: FUN_00884180
// Address: 00884180
// Size: 518 bytes
// Class: MDMetaWindowController

uint64_t FUN_00884180(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t **pplVar4;
  float fVar5;
  int64_t *local_40;
  char local_38;
  
  if (param_2 == 0) {
    return 1;
  }
  fVar5 = (float)FUN_01caeac0();
  FUN_00882eb0();
  plVar2 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pplVar4 = &local_40;
  FUN_01caeb00();
  plVar1 = local_40;
  FUN_001b37d0();
  if (plVar1 == (int64_t *)0x0) {
LAB_0088421d:
    pplVar4 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0088421d;
  }
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar4 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    cVar3 = (**(code **)(*plVar1 + 0xad8))();
    FUN_00d50b20();
    if (cVar3 != '\0') goto LAB_0088435c;
  }
  if (g_023b7c18 <= (float)(g_02390140 & (uint)fVar5)) {
    if (fVar5 <= g_023b8bc0) {
      if (fVar5 < g_023b8bc4) {
        FUN_01caeb00();
        fVar5 = g_02390d00;
        (**(code **)(*local_40 + 0x928))();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_01caeb00();
      fVar5 = g_02390124;
      (**(code **)(*local_40 + 0x928))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_01caeb00();
    (**(code **)(*local_40 + 0x928))(0);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    fVar5 = 0.0;
  }
LAB_0088435c:
  if (plVar2 != (int64_t *)0x0) {
    FUN_004b8640(fVar5);
    FUN_00d50b20();
  }
  return 1;
}

