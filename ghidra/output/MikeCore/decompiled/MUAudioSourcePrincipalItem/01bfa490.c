// Function: FUN_01bfa490
// Address: 01bfa490
// Size: 773 bytes
// Class: MUAudioSourcePrincipalItem
// String references:
//   "MUAudioSourcePrincipalItem"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01bfa490(pthread_key_t param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  longlong **pplVar4;
  longlong *unaff_RDI;
  longlong *plVar5;
  longlong *local_48;
  char local_40;
  undefined4 local_34;
  
  local_34 = DAT_02390124;
  if (*unaff_RDI == 0) {
    return DAT_02390124;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e7c0();
  if (local_40 == '\0') {
    if (local_48 == (longlong *)0x0) {
      return local_34;
    }
    FUN_00d50b00();
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == (longlong *)0x0) {
    return local_34;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfcb0();
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01bfa5a5;
    }
  }
  else if (local_48 != (longlong *)0x0) {
LAB_01bfa5a5:
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pplVar4 = &local_48;
    FUN_013dd6a0();
    plVar5 = local_48;
    if ((DAT_027c0170 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      _DAT_02790158 = FUN_007ef2d0();
      _DAT_02790140 = "MUAudioSourcePrincipalItem";
      _DAT_02790148 = 0x138;
      param_1 = 0x10fe5c0;
      _DAT_02790150 = FUN_010fe5c0;
      _DAT_02790160 = 0;
      uRam0000000002790168 = 0;
      _DAT_02790170 = 0;
      uRam0000000002790178 = 0;
      _DAT_02790180 = 0;
      uRam0000000002790188 = 0;
      _DAT_02790190 = 0;
      uRam0000000002790198 = 0;
      _DAT_027901a0 = 0;
      uRam00000000027901a8 = 0;
      _DAT_027901b0 = 0;
      uRam00000000027901b8 = 0;
      _DAT_027901c0 = 0;
      uRam00000000027901c8 = 0;
      _DAT_027901d0 = 0;
      uRam00000000027901d8 = 0;
      _DAT_027901e0 = 0;
      uRam00000000027901e8 = 0;
      _DAT_027901f0 = 0;
      uRam00000000027901f8 = 0;
      _DAT_02790200 = 0;
      ___cxa_guard_release();
    }
    if (plVar5 == (longlong *)0x0) {
      pplVar4 = &DAT_02802688;
      plVar5 = DAT_02802688;
      if (DAT_02802690 == '\0') goto LAB_01bfa653;
LAB_01bfa628:
      *(undefined1 *)(pplVar4 + 1) = 0;
    }
    else {
      (**(code **)(*plVar5 + 0x360))();
      cVar1 = FUN_00e85ea0();
      if (cVar1 == '\0') {
        pplVar4 = &DAT_02802688;
      }
      plVar5 = *pplVar4;
      if (*(char *)(pplVar4 + 1) != '\0') goto LAB_01bfa628;
LAB_01bfa653:
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 == (longlong *)0x0) {
      local_34 = DAT_02390124;
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_34 = FUN_014bc150();
      FUN_00d50b20();
    }
    FUN_00d50b20();
    goto LAB_01bfa6cf;
  }
  local_34 = DAT_02390124;
LAB_01bfa6cf:
  FUN_00d50b20();
  return local_34;
}


