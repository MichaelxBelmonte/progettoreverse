// Function: FUN_01ba9ae0
// Address: 01ba9ae0
// Size: 697 bytes
// Class: MUElementPitchInspector
// === MUElementPitchInspector properties ===
//                   _noteNameField
//                   _centOffsetField
//                   _frequencyField
//                   _savedPitchIndexes
//                   _pitchOffsetFormatter
//                   _frequencyFormatter


void* FUN_01ba9ae0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  void *pvVar4;
  void* pVar5;
  int64_t **pplVar6;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar7;
  bool bVar8;
  int64_t local_98;
  char local_90;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar1 = *arg1;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar7 = 0;
      do {
        plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar7 * 8);
        local_40 = plVar2;
        FUN_0006e1c0();
        pplVar6 = (int64_t **)&g_02802688;
        if (plVar2 != (int64_t *)0x0) {
          (**(code **)(*plVar2 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar6 = &local_40;
          if (cVar3 == '\0') {
            pplVar6 = (int64_t **)&g_02802688;
          }
        }
        if (*pplVar6 != (int64_t *)0x0) {
          pvVar4 = _pthread_getspecific((void*)pplVar6);
          pVar5 = (void*)pplVar6;
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          if (local_40 == (int64_t *)0x0) {
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
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
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
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_002d7220();
            return this_ptr;
          }
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_002d7220();
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}

