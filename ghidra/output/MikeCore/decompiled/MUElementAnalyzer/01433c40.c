// Function: FUN_01433c40
// Address: 01433c40
// Size: 576 bytes
// Class: MUElementAnalyzer


/* WARNING: Removing unreachable block (ram,0x01433dfc) */
/* WARNING: Removing unreachable block (ram,0x01433e05) */
/* WARNING: Removing unreachable block (ram,0x01433e53) */
/* WARNING: Removing unreachable block (ram,0x01433e5c) */
/* WARNING: Removing unreachable block (ram,0x01433ce1) */
/* WARNING: Removing unreachable block (ram,0x01433cea) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01433c40(double param_1,undefined8 param_2,size_t param_3)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 *puVar3;
  pthread_key_t pVar4;
  void *in_RCX;
  longlong *plVar5;
  longlong *unaff_RDI;
  longlong local_60;
  char local_58;
  
  plVar5 = (longlong *)*unaff_RDI;
  pvVar1 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar1 != (void *)0x0) {
    plVar5 = (longlong *)*unaff_RDI;
    lVar2 = FUN_00e8b990();
    if (lVar2 != 0) {
      plVar5 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
    }
  }
  lVar2 = (**(code **)(*plVar5 + 0x388))();
  FUN_00c8e690(SUB84(((double)lVar2 / param_1) * _DAT_0241eeb8,0));
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(local_60 + 0x18)) {
    _memset_pattern16(in_RCX,(void *)((ulonglong)((*(uint *)(local_60 + 0x18) >> 2) - 1) * 4 + 4),
                      param_3);
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(undefined1 *)(puVar3 + 7) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = 0;
  *(undefined2 *)(puVar3 + 8) = 0;
  pVar4 = 0x25dc9e8;
  *puVar3 = &DAT_025dc9e8;
  puVar3[9] = 0;
  puVar3[10] = 0;
  (*DAT_025dca00)();
  pvVar1 = _pthread_getspecific(pVar4);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb950(SUB84(_DAT_0241eeb8,0));
  pvVar1 = _pthread_getspecific(pVar4);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb890();
  pvVar1 = _pthread_getspecific(pVar4);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bc1d0();
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}


