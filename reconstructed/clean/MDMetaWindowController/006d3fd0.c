// Function: FUN_006d3fd0
// Address: 006d3fd0
// Size: 1205 bytes
// Class: MDMetaWindowController

uint64_t FUN_006d3fd0(uint param_1,char param_2)

{
  void *pvVar1;
  void*puVar2;
  uint uVar3;
  void* pVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t this_ptr;
  bool bVar7;
  int64_t local_98;
  char local_90;
  int64_t local_68;
  char local_60;
  int local_50;
  int64_t local_40;
  char local_38;
  
  uVar3 = param_1;
  FUN_006d3710();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto LAB_006d4017;
    }
  }
  else if (local_68 != 0) {
LAB_006d4017:
    FUN_006d3ba0();
    if ((local_60 == '\0') && (local_68 != 0)) {
      FUN_00d50b00();
    }
    if ((*(int *)(local_68 + 0xc) == 0) || (param_2 == '\0')) {
      uVar6 = CONCAT71((int7)((uint64_t)this_ptr >> 8),*(int *)(local_68 + 0xc) != 0);
LAB_006d444b:
      FUN_00d50b20();
    }
    else {
      pvVar1 = _pthread_getspecific(uVar3);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      pvVar1 = _pthread_getspecific(uVar3);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      if ((local_60 == '\0') && (local_68 != 0)) {
        FUN_00d50b00();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02572358;
      (*g_02572370)();
      local_50 = -1;
      while (local_50 = local_50 + 1, local_50 < *(int *)(local_68 + 0xc)) {
        pVar4 = (void*)*(void*)(local_68 + 0x10);
        pvVar1 = _pthread_getspecific(pVar4);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        if (local_40 == 0) {
          bVar7 = false;
        }
        else {
          pvVar1 = _pthread_getspecific(pVar4);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e5ae0();
          bVar7 = *(int *)(local_98 + 0xc) != 0;
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (bVar7) {
          pvVar1 = _pthread_getspecific(pVar4);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e5ae0();
          pvVar1 = _pthread_getspecific(pVar4);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01264240();
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          local_38 = '\0';
          FUN_00d21140();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
        }
      }
      lVar5 = local_68;
      FUN_000be170();
      pvVar1 = _pthread_getspecific((void*)lVar5);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01336350(0,param_1 & 0xff);
      if (puVar2 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (local_68 != 0) {
        FUN_00d50b20();
      }
      uVar6 = CONCAT71((int7)((uint64_t)local_68 >> 8),1);
      if (local_68 != 0) goto LAB_006d444b;
    }
    FUN_00d50b20();
    goto LAB_006d445b;
  }
  uVar6 = 0;
LAB_006d445b:
  return uVar6 & 0xffffffff;
}

