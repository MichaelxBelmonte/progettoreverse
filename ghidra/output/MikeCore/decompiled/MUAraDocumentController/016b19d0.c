// Function: FUN_016b19d0
// Address: 016b19d0
// Size: 740 bytes
// Class: MUAraDocumentController
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"


/* WARNING: Removing unreachable block (ram,0x016b1c03) */
/* WARNING: Removing unreachable block (ram,0x016b1c0c) */
/* WARNING: Removing unreachable block (ram,0x016b1c85) */
/* WARNING: Removing unreachable block (ram,0x016b1c8e) */

longlong * FUN_016b19d0(pthread_key_t param_1)

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  char *pcVar4;
  longlong unaff_RDI;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_50;
  char local_48 [16];
  char local_38 [8];
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if (DAT_02802f60 != (undefined8 *)0x0) {
        plVar2 = (longlong *)0x0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)();
          plVar2 = (longlong *)0x0;
        }
        goto LAB_016b1b79;
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 != '\0') {
        FUN_01689520();
        if (*(int *)(local_90 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_48[0]);
          pcVar4 = local_38;
          if (local_48[0] != '\0') {
            pcVar4 = local_48;
          }
          local_38[0] = local_48[0];
          *pcVar4 = '\0';
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_38[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        plVar2 = (longlong *)FUN_00e8fc40();
        FUN_00274a00();
        (**(code **)(*plVar2 + 0x18))();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0170cec0();
        FUN_016b1510();
        FUN_0167ab60();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01537ae0();
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        goto LAB_016b1b79;
      }
      if (DAT_02802f60 != (undefined8 *)0x0) {
        plVar2 = (longlong *)0x0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)();
        }
        goto LAB_016b1b79;
      }
    }
  }
  plVar2 = (longlong *)0x0;
LAB_016b1b79:
  FUN_00da71b0();
  return plVar2;
}


