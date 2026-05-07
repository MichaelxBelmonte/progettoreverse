// Function: FUN_006d3fd0
// Address: 006d3fd0
// Size: 1205 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x006d435a) */
/* WARNING: Removing unreachable block (ram,0x006d4363) */
/* WARNING: Removing unreachable block (ram,0x006d4418) */
/* WARNING: Removing unreachable block (ram,0x006d4424) */
/* WARNING: Removing unreachable block (ram,0x006d448b) */
/* WARNING: Removing unreachable block (ram,0x006d4498) */
/* WARNING: Removing unreachable block (ram,0x006d4391) */
/* WARNING: Removing unreachable block (ram,0x006d439a) */
/* WARNING: Removing unreachable block (ram,0x006d4177) */
/* WARNING: Removing unreachable block (ram,0x006d41a0) */
/* WARNING: Removing unreachable block (ram,0x006d4179) */
/* WARNING: Removing unreachable block (ram,0x006d41a2) */

ulonglong FUN_006d3fd0(uint param_1,char param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  uint uVar3;
  pthread_key_t pVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 unaff_RDI;
  bool bVar7;
  longlong local_98;
  char local_90;
  longlong local_68;
  char local_60;
  int local_50;
  longlong local_40;
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
      uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),*(int *)(local_68 + 0xc) != 0);
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
      puVar2 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &DAT_02572358;
      (*DAT_02572370)();
      local_50 = -1;
      while (local_50 = local_50 + 1, local_50 < *(int *)(local_68 + 0xc)) {
        pVar4 = (pthread_key_t)*(undefined8 *)(local_68 + 0x10);
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
      pvVar1 = _pthread_getspecific((pthread_key_t)lVar5);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01336350(0,param_1 & 0xff);
      if (puVar2 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (local_68 != 0) {
        FUN_00d50b20();
      }
      uVar6 = CONCAT71((int7)((ulonglong)local_68 >> 8),1);
      if (local_68 != 0) goto LAB_006d444b;
    }
    FUN_00d50b20();
    goto LAB_006d445b;
  }
  uVar6 = 0;
LAB_006d445b:
  return uVar6 & 0xffffffff;
}


