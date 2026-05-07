// Function: FUN_01704aa0
// Address: 01704aa0
// Size: 696 bytes
// Class: MUBeatSelection


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01704aa0(pthread_key_t param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  void *pvVar5;
  undefined8 *puVar6;
  pthread_key_t pVar7;
  undefined4 uVar8;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  undefined4 local_34;
  
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar4 = FUN_018fe5d0();
  if (cVar4 == '\0') {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar7 = 0;
    FUN_0165cf20(0,0);
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01901340();
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_60 = FUN_0165cf20(0,0);
    local_34 = 4;
    FUN_00e7c260();
    uVar3 = local_60;
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_025fa538;
    uVar2 = _UNK_0239372c;
    uVar1 = _UNK_02393728;
    uVar8 = _UNK_02393724;
    *(undefined4 *)((longlong)puVar6 + 0xc) = _DAT_02393720;
    *(undefined4 *)(puVar6 + 2) = uVar8;
    *(undefined4 *)((longlong)puVar6 + 0x14) = uVar1;
    *(undefined4 *)(puVar6 + 3) = uVar2;
    uVar8 = FUN_00d500e0();
    FUN_016bf110(uVar8,uVar3);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    FUN_016d9380();
    local_70 = 0;
    local_68 = 0;
    FUN_016dcbf0(0,&local_70,param_3,param_4,0);
    FUN_016d63b0();
    FUN_00d50b20();
  }
  return;
}


