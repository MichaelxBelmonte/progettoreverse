// Function: FUN_0124d6c0
// Address: 0124d6c0
// Size: 1274 bytes
// Class: MUAudioFileSource


/* WARNING: Removing unreachable block (ram,0x0124d9e3) */
/* WARNING: Removing unreachable block (ram,0x0124d9ec) */
/* WARNING: Removing unreachable block (ram,0x0124d98e) */
/* WARNING: Removing unreachable block (ram,0x0124d99a) */
/* WARNING: Removing unreachable block (ram,0x0124d8b5) */
/* WARNING: Removing unreachable block (ram,0x0124d8c1) */
/* WARNING: Removing unreachable block (ram,0x0124d7b7) */
/* WARNING: Removing unreachable block (ram,0x0124d7c3) */
/* WARNING: Removing unreachable block (ram,0x0124d92d) */
/* WARNING: Removing unreachable block (ram,0x0124d939) */
/* WARNING: Removing unreachable block (ram,0x0124db4e) */
/* WARNING: Removing unreachable block (ram,0x0124db57) */

void FUN_0124d6c0(pthread_key_t param_1)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  pthread_key_t pVar6;
  longlong *unaff_RDI;
  longlong local_68;
  char local_60;
  
  plVar1 = (longlong *)FUN_00e8fc40();
  FUN_002773c0();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific(param_1);
  pVar6 = (pthread_key_t)plVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    param_1 = pVar6;
  }
  FUN_0132dd40();
  plVar1 = (longlong *)FUN_00e8fc40();
  FUN_007eeec0();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific(param_1);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    param_1 = pVar6;
  }
  FUN_01327c60();
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_010fe5f0();
  (**(code **)(*plVar4 + 0x18))();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bb250();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(*unaff_RDI + 0x378))();
  FUN_014bb2b0();
  pvVar2 = _pthread_getspecific(param_1);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    param_1 = pVar6;
  }
  FUN_01328c70();
  plVar4 = (longlong *)FUN_00115860();
  (**(code **)(*plVar4 + 0x18))();
  pvVar2 = _pthread_getspecific(param_1);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    param_1 = (pthread_key_t)plVar1;
  }
  FUN_013dfbc0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd650();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bc440();
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar6 = 0x25c9ec0;
  *puVar5 = &DAT_025c9ec0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  (*DAT_025c9ed8)();
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f2ef0(0);
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(*unaff_RDI + 0x398))();
  FUN_011f2f60();
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124de20();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  FUN_013c9490();
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_0124c710();
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}


