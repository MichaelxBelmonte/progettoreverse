// Function: FUN_012e7900
// Address: 012e7900
// Size: 856 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x012e7abe) */
/* WARNING: Removing unreachable block (ram,0x012e7ac7) */
/* WARNING: Removing unreachable block (ram,0x012e7bd7) */
/* WARNING: Removing unreachable block (ram,0x012e7be0) */

void FUN_012e7900(void)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong unaff_RDI;
  
  plVar2 = (longlong *)FUN_010f2780();
  (**(code **)(*plVar2 + 0x18))();
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(undefined1 *)(puVar3 + 8) = 0;
  puVar3[7] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  pVar5 = 0x25d2108;
  *puVar3 = &DAT_025d2108;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  puVar3[0xd] = 0;
  (*DAT_025d2120)();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f0a90();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f0ae0();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f0a90();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f0ae0();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f2270();
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(undefined1 *)(puVar3 + 8) = 0;
  puVar3[7] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  pVar5 = 0x25d58b0;
  *puVar3 = &DAT_025d58b0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  (*DAT_025d58c8)();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f0a90();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f0ae0();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f2270();
  if (*(longlong **)(unaff_RDI + 0xb8) != plVar2) {
    FUN_00d64850();
    plVar1 = *(longlong **)(unaff_RDI + 0xb8);
    if (plVar1 != plVar2) {
      FUN_00d50b00();
      *(longlong **)(unaff_RDI + 0xb8) = plVar2;
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}


