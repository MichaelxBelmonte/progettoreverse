// Function: FUN_0125dfc0
// Address: 0125dfc0
// Size: 1551 bytes
// Class: MUSampledFunction


/* WARNING: Removing unreachable block (ram,0x0125e1bc) */
/* WARNING: Removing unreachable block (ram,0x0125e1ce) */
/* WARNING: Removing unreachable block (ram,0x0125e255) */
/* WARNING: Removing unreachable block (ram,0x0125e1dc) */
/* WARNING: Removing unreachable block (ram,0x0125e259) */
/* WARNING: Removing unreachable block (ram,0x0125e270) */
/* WARNING: Removing unreachable block (ram,0x0125e28d) */
/* WARNING: Removing unreachable block (ram,0x0125e27d) */
/* WARNING: Removing unreachable block (ram,0x0125e290) */
/* WARNING: Removing unreachable block (ram,0x0125e2a5) */
/* WARNING: Removing unreachable block (ram,0x0125e2ab) */
/* WARNING: Removing unreachable block (ram,0x0125e2ba) */
/* WARNING: Removing unreachable block (ram,0x0125e2d0) */
/* WARNING: Removing unreachable block (ram,0x0125e2d9) */
/* WARNING: Removing unreachable block (ram,0x0125e30b) */
/* WARNING: Removing unreachable block (ram,0x0125e2e9) */
/* WARNING: Removing unreachable block (ram,0x0125e300) */
/* WARNING: Removing unreachable block (ram,0x0125e309) */
/* WARNING: Removing unreachable block (ram,0x0125e30e) */
/* WARNING: Removing unreachable block (ram,0x0125e320) */
/* WARNING: Removing unreachable block (ram,0x0125e33d) */
/* WARNING: Removing unreachable block (ram,0x0125e32d) */
/* WARNING: Removing unreachable block (ram,0x0125e340) */
/* WARNING: Removing unreachable block (ram,0x0125e36c) */
/* WARNING: Removing unreachable block (ram,0x0125e370) */
/* WARNING: Removing unreachable block (ram,0x0125e23e) */
/* WARNING: Removing unreachable block (ram,0x0125e24b) */
/* WARNING: Removing unreachable block (ram,0x0125e010) */
/* WARNING: Removing unreachable block (ram,0x0125e019) */
/* WARNING: Removing unreachable block (ram,0x0125e20c) */
/* WARNING: Removing unreachable block (ram,0x0125e219) */
/* WARNING: Removing unreachable block (ram,0x0125e3f3) */
/* WARNING: Removing unreachable block (ram,0x0125e3fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0125dfc0(longlong *param_1)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  longlong *plVar5;
  longlong unaff_RDI;
  longlong local_60;
  char local_58;
  longlong *local_48;
  char local_40;
  
  FUN_0125e7c0();
  if (local_40 == '\0') {
    if (local_48 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_48 == (longlong *)0x0) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 200) == 0) goto LAB_0125e5b3;
  FUN_00d50b00();
  FUN_00d50b20();
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013df480();
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d820();
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = *(longlong *)(unaff_RDI + 200);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01507e40();
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_0125e401;
    }
  }
  else if (local_48 != (longlong *)0x0) {
LAB_0125e401:
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar1 = FUN_014ed790();
    if (iVar1 != 0) {
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      plVar5 = local_48;
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        param_1 = local_48;
        plVar5 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de3b0();
      (**(code **)(*plVar5 + 0x3a8))();
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014ed790();
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      plVar5 = local_48;
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        param_1 = local_48;
        plVar5 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
      pVar4 = (pthread_key_t)param_1;
      (**(code **)(*plVar5 + 0x3a0))();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de3b0();
    }
    FUN_00d50b20();
  }
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
LAB_0125e5b3:
  FUN_00d50b20();
  return;
}


