// Function: FUN_01ba9ae0
// Address: 01ba9ae0
// Size: 697 bytes
// Class: MUElementPitchInspector


undefined8 * FUN_01ba9ae0(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong **pplVar6;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar7;
  bool bVar8;
  longlong local_98;
  char local_90;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  lVar1 = *unaff_RSI;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar7 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar7 * 8);
        local_40 = plVar2;
        FUN_0006e1c0();
        pplVar6 = (longlong **)&DAT_02802688;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar6 = &local_40;
          if (cVar3 == '\0') {
            pplVar6 = (longlong **)&DAT_02802688;
          }
        }
        if (*pplVar6 != (longlong *)0x0) {
          pvVar4 = _pthread_getspecific((pthread_key_t)pplVar6);
          pVar5 = (pthread_key_t)pplVar6;
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          if (local_40 == (longlong *)0x0) {
            bVar8 = false;
          }
          else {
            pvVar4 = _pthread_getspecific(pVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            pvVar4 = _pthread_getspecific(pVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e8920();
            bVar8 = local_98 != 0;
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (bVar8) {
            pvVar4 = _pthread_getspecific(pVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            pvVar4 = _pthread_getspecific(pVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e8920();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_002d7220();
            return unaff_RDI;
          }
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_002d7220();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return unaff_RDI;
}


