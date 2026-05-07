// Function: FUN_013f4430
// Address: 013f4430
// Size: 667 bytes
// Class: MUDataPointFunction


void FUN_013f4430(pthread_key_t param_1)

{
  int iVar1;
  void *pvVar2;
  char *pcVar3;
  longlong unaff_RDI;
  double dVar4;
  double dVar5;
  double extraout_XMM0_Qa;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(int *)(*(longlong *)(unaff_RDI + 0x48) + 0xc) == 0) {
LAB_013f464c:
    FUN_013f2b30();
  }
  else {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar4 = (double)FUN_013faed0();
    FUN_00d23310();
    local_38[0] = local_40[0];
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = local_38;
    }
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar5 = (double)FUN_013faed0();
    if ((local_38[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (dVar4 <= dVar5) {
      iVar1 = 0;
    }
    else {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar4 = (double)FUN_013faed0();
      FUN_00d23340();
      pcVar3 = local_40;
      if (local_40[0] == '\0') {
        pcVar3 = local_38;
      }
      local_38[0] = local_40[0];
      *pcVar3 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar5 = (double)FUN_013faed0();
      if ((local_38[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (dVar5 < dVar4) goto LAB_013f464c;
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013faed0();
      iVar1 = FUN_013f3690();
      if (iVar1 == -1) {
        return;
      }
      iVar1 = iVar1 + 1;
      dVar5 = extraout_XMM0_Qa;
    }
    FUN_013f2cf0(dVar5,iVar1);
  }
  return;
}


