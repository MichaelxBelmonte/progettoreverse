// Function: FUN_016e9760
// Address: 016e9760
// Size: 1057 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x016e9b43) */
/* WARNING: Removing unreachable block (ram,0x016e9b4f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016e9760(undefined4 param_1,longlong *param_2,longlong *param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  undefined8 in_RCX;
  char *pcVar7;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar8;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  ulonglong local_58;
  longlong local_50;
  char local_48 [8];
  longlong *local_40;
  char local_38 [8];
  
  pVar6 = (pthread_key_t)in_RCX;
  local_58 = param_4;
  local_40 = param_2;
  if (param_4 >> 0x20 == 0) {
    if (*(int *)(*param_3 + 0xc) == 0) {
      if (*param_2 != 0) {
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_58 = FUN_019079b0();
      }
    }
    else {
      FUN_00d23340();
      pVar6 = (pthread_key_t)CONCAT71((int7)((ulonglong)in_RCX >> 8),local_48[0]);
      pcVar7 = local_38;
      if (local_48[0] != '\0') {
        pcVar7 = local_48;
      }
      local_38[0] = local_48[0];
      *pcVar7 = '\0';
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_58 = FUN_019079b0();
      pVar6 = (pthread_key_t)*(undefined8 *)(unaff_RDI + 0x68);
      FUN_00e7b820();
      if ((local_38[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025fa538;
  uVar2 = _UNK_0239372c;
  uVar1 = _UNK_02393728;
  uVar8 = _UNK_02393724;
  *(undefined4 *)((longlong)puVar3 + 0xc) = _DAT_02393720;
  *(undefined4 *)(puVar3 + 2) = uVar8;
  *(undefined4 *)((longlong)puVar3 + 0x14) = uVar1;
  *(undefined4 *)(puVar3 + 3) = uVar2;
  FUN_00d500e0();
  uVar4 = FUN_00e7bdb0();
  *(undefined8 *)((longlong)puVar3 + 0x14) = uVar4;
  *(undefined8 *)((longlong)puVar3 + 0xc) = uVar4;
  if (*unaff_RSI == 0) {
    uVar4 = FUN_00e7bdb0();
  }
  else {
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar6 = 0;
    FUN_0165cf20(0,0);
    FUN_00e7c860();
    uVar4 = FUN_00e7cc50();
  }
  *(undefined8 *)((longlong)puVar3 + 0xc) = uVar4;
  if (*local_40 == 0) {
    uVar4 = FUN_00e7bdb0();
  }
  else {
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar6 = 0;
    FUN_0165cf20(0,0);
    FUN_00e7c860();
    uVar4 = FUN_00e7cc50();
  }
  *(undefined8 *)((longlong)puVar3 + 0x14) = uVar4;
  FUN_016d4110();
  pvVar5 = _pthread_getspecific(pVar6);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_80 = *local_40;
  local_78 = '\0';
  local_70 = *param_3;
  local_68 = '\0';
  uVar8 = FUN_019037a0(param_1,&local_80,&local_70);
  if ((local_68 != '\0') && (local_70 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  FUN_016e4c80(uVar8,local_58);
  FUN_00d50b20();
  return;
}


