// Function: FUN_016b08f0
// Address: 016b08f0
// Size: 1708 bytes
// Class: MUAraDocumentController
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->getDocumentRoot()->getAudioSources()->getCount() == 0"
//   "documentController->getDocumentRoot()->getAudioModifications()->getCount() == 0"
//   "documentController->getDocumentRoot()->getMusicalContexts()->getCount() == 0"


/* WARNING: Removing unreachable block (ram,0x016b0ebd) */
/* WARNING: Removing unreachable block (ram,0x016b0ec9) */

void FUN_016b08f0(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  char *pcVar5;
  longlong unaff_RDI;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong in_stack_ffffffffffffffc0;
  char local_38 [16];
  char local_28 [8];
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    FUN_00d50b00();
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      FUN_0167ab60();
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01537d40();
      if (*(int *)(local_60 + 0xc) != 0) {
        FUN_0167ab60();
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01537d40();
        FUN_00d23310();
        param_1 = CONCAT71((int7)((ulonglong)param_1 >> 8),local_38[0]);
        pcVar5 = local_28;
        if (local_38[0] != '\0') {
          pcVar5 = local_38;
        }
        local_28[0] = local_38[0];
        *pcVar5 = '\0';
        if ((local_38[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
        if ((local_28[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_0167ab60();
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01537fd0();
      pVar4 = (pthread_key_t)param_1;
      if (*(int *)(local_60 + 0xc) != 0) {
        FUN_0167ab60();
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01537fd0();
        FUN_00d23310();
        pVar4 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_38[0]);
        pcVar5 = local_28;
        if (local_38[0] != '\0') {
          pcVar5 = local_38;
        }
        local_28[0] = local_38[0];
        *pcVar5 = '\0';
        if ((local_38[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
        if ((local_28[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_0167ab60();
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01537ab0();
      if (*(int *)(local_60 + 0xc) != 0) {
        FUN_0167ab60();
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01537ab0();
        FUN_00d23310();
        pcVar5 = local_28;
        if (local_38[0] != '\0') {
          pcVar5 = local_38;
        }
        local_28[0] = local_38[0];
        *pcVar5 = '\0';
        if ((local_38[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
        if ((local_28[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_01689520();
      if (*(int *)(local_60 + 0xc) != 0) {
        FUN_01689520();
        FUN_00d23310();
        pcVar5 = &local_70;
        if (local_38[0] != '\0') {
          pcVar5 = local_38;
        }
        local_70 = local_38[0];
        *pcVar5 = '\0';
        if ((local_38[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
        if ((local_70 != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      lVar1 = DAT_027cb138;
      if (DAT_027cb138 != 0) {
        FUN_00d50b00();
      }
      local_90 = 0;
      local_88 = '\0';
      FUN_00d40470(&local_90,&stack0xffffffffffffff60,1,3);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
        FUN_00d50b20();
      }
      local_38[0] = '\0';
      FUN_00d23f50();
      if ((local_38[0] != '\0') && (unaff_RDI != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50130();
    }
    FUN_00d50b20();
  }
  FUN_00da71b0();
  return;
}


